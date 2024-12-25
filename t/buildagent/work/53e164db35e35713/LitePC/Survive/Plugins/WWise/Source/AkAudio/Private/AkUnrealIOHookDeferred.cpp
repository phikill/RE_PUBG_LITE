//////////////////////////////////////////////////////////////////////
//
// AkUnrealIOHookDeferred.cpp
//
// Default deferred low level IO hook (AK::StreamMgr::IAkIOHookDeferred) 
// and file system (AK::StreamMgr::IAkFileLocationResolver) implementation 
// on Windows.
// 
// AK::StreamMgr::IAkFileLocationResolver: 
// Resolves file location using simple path concatenation logic 
// (implemented in ../Common/CAkFileLocationBase). It can be used as a 
// standalone Low-Level IO system, or as part of a multi device system. 
// In the latter case, you should manage multiple devices by implementing 
// AK::StreamMgr::IAkFileLocationResolver elsewhere (you may take a look 
// at class CAkDefaultLowLevelIODispatcher).
//
// AK::StreamMgr::IAkIOHookDeferred: 
// Uses platform API for I/O. Calls to ::ReadFile() and ::WriteFile() 
// do not block because files are opened with the FILE_FLAG_OVERLAPPED flag. 
// Transfer completion is handled by internal FileIOCompletionRoutine function,
// which then calls the AkAIOCallback.
// The AK::StreamMgr::IAkIOHookDeferred interface is meant to be used with
// AK_SCHEDULER_DEFERRED_LINED_UP streaming devices. 
//
// Init() creates a streaming device (by calling AK::StreamMgr::CreateDevice()).
// AkDeviceSettings::uSchedulerTypeFlags is set inside to AK_SCHEDULER_DEFERRED_LINED_UP.
// If there was no AK::StreamMgr::IAkFileLocationResolver previously registered 
// to the Stream Manager, this object registers itself as the File Location Resolver.
//
// Copyright (c) 2006 Audiokinetic Inc. / All Rights Reserved
//
//////////////////////////////////////////////////////////////////////

#include "AkAudioDevice.h"

// @todo:ak verify consistency of Wwise SDK alignment settings with unreal build settings on all platforms
//			Currently, Wwise SDK builds with the default alignment (8-bytes as per MSDN) with the VC toolchain.
//			Unreal builds with 4-byte alignment on the VC toolchain on both Win32 and Win64. 
//			This could (and currently does, on Win64) cause data corruption if the headers are not included with forced alignment directives as below.

#include "AkUnrealIOHookDeferred.h"
#include "HAL/FileManager.h"

#include "Misc/Paths.h"

#if AK_FIOSYSTEM_AVAILABLE
#include "Misc/ScopeLock.h"
#include "HAL/IOBase.h"
#endif

#include "HAL/PlatformFilemanager.h"

// Device info.
#define DEFERRED_DEVICE_NAME		("UnrealIODevice")	// Default deferred device name.


AkFileCustomParam* AkFileCustomParam::GetFileCustomParam(const AkFileDesc& fileDesc)
{
	if (fileDesc.uCustomParamSize == sizeof (AkFileCustomParam))
		return reinterpret_cast<AkFileCustomParam*>(fileDesc.pCustomParam);

	return nullptr;
}

void AkFileCustomParam::SetupFileDesc(AkFileDesc& fileDesc, AkFileCustomParam* FileCustomParam)
{
	fileDesc.pCustomParam = FileCustomParam;
	fileDesc.uCustomParamSize = FileCustomParam ? (sizeof (AkFileCustomParam)) : -1;
}


#if AK_FIOSYSTEM_AVAILABLE
struct AkDeferredReadInfo
{
	enum EAkIOState
	{
		// There are no pending requests/ all requests have been fulfilled.
		ReadyForRequests = -1,

		// Initial request has completed and finalization needs to be kicked off.
		ReadyForCallback = 0,

		// We're currently loading in data.
		InProgressLoading = 1,
	};

	AkDeferredReadInfo(const EAkIOState& state = ReadyForRequests)
		: State(state)
		, RequestIndex(0)
	{}

	AkAsyncIOTransferInfo AkTransferInfo;
	FThreadSafeCounter State;
	uint64 RequestIndex;

	void SetState(const EAkIOState& state) { State.Set(state); }
	bool IsInState(const EAkIOState& state) const { return State.GetValue() == state; }
};

static bool AkIOSystemReadFileCustomParam_CallbackRegistered = false;
static FCriticalSection AkIOSystemReadFileCustomParam_CriticalSection;
static TArray<AkDeferredReadInfo*> AkIOSystemReadFileCustomParam_PendingTransfers;

struct AkIOSystemReadFileCustomParam : AkFileCustomParam
{
private:
	FString FilePath;

	static void GlobalCallback(AK::IAkGlobalPluginContext* in_pContext, AkGlobalCallbackLocation in_eLocation, void* in_pCookie)
	{
		FScopeLock ScopeLock(&AkIOSystemReadFileCustomParam_CriticalSection);
		for (auto& PendingTransfer : AkIOSystemReadFileCustomParam_PendingTransfers)
		{
			if (PendingTransfer->IsInState(AkDeferredReadInfo::ReadyForCallback))
			{
				if (PendingTransfer->AkTransferInfo.pCallback)
					PendingTransfer->AkTransferInfo.pCallback(&PendingTransfer->AkTransferInfo, AK_Success);

				PendingTransfer->SetState(AkDeferredReadInfo::ReadyForRequests);
			}
		}
	}

	static AkDeferredReadInfo* GetFreeDeferredReadInfo()
	{
		FScopeLock ScopeLock(&AkIOSystemReadFileCustomParam_CriticalSection);
		for (auto& PendingTransfer : AkIOSystemReadFileCustomParam_PendingTransfers)
		{
			if (PendingTransfer->IsInState(AkDeferredReadInfo::ReadyForRequests))
			{
				PendingTransfer->SetState(AkDeferredReadInfo::InProgressLoading);
				return PendingTransfer;
			}
		}

		auto PendingTransfer = new AkDeferredReadInfo(AkDeferredReadInfo::InProgressLoading);
		if (PendingTransfer)
			AkIOSystemReadFileCustomParam_PendingTransfers.Add(PendingTransfer);
		return PendingTransfer;
	}

	static AkDeferredReadInfo* FindDeferredReadInfo(const AkAsyncIOTransferInfo& io_transferInfo)
	{
		FScopeLock ScopeLock(&AkIOSystemReadFileCustomParam_CriticalSection);
		for (auto& PendingTransfer : AkIOSystemReadFileCustomParam_PendingTransfers)
			if (PendingTransfer->AkTransferInfo.pBuffer == io_transferInfo.pBuffer)
				return PendingTransfer;

		return nullptr;
	}

public:
	AkIOSystemReadFileCustomParam(const FString& path) : FilePath(path) {}

	static void RegisterGlobalCallback()
	{
		if (!AkIOSystemReadFileCustomParam_CallbackRegistered && FAkAudioDevice::Get())
		{
			AkIOSystemReadFileCustomParam_CallbackRegistered = AK::SoundEngine::RegisterGlobalCallback(GlobalCallback, AkGlobalCallbackLocation_BeginRender, nullptr) == AK_Success;
			AKASSERT(AkIOSystemReadFileCustomParam_CallbackRegistered && "Failed registering to global callback");
		}
	}

	static void UnregisterGlobalCallback()
	{
		if (AkIOSystemReadFileCustomParam_CallbackRegistered && FAkAudioDevice::Get())
		{
			AK::SoundEngine::UnregisterGlobalCallback(GlobalCallback, AkGlobalCallbackLocation_BeginRender);
			AkIOSystemReadFileCustomParam_CallbackRegistered = false;
		}
	}

	virtual ~AkIOSystemReadFileCustomParam()
	{
		FIOSystem::Get().HintDoneWithFile(FilePath);
	}

	virtual AKRESULT DoWork(AkAsyncIOTransferInfo& info) override
	{
		RegisterGlobalCallback();

		auto PendingTransfer = GetFreeDeferredReadInfo();
		AKASSERT(PendingTransfer && "Failed to allocate an AkDeferredReadInfo structure");
		if (!PendingTransfer)
			return AK_Fail;

		PendingTransfer->AkTransferInfo = info;
		PendingTransfer->RequestIndex = FIOSystem::Get().LoadData(*FilePath, info.uFilePosition, info.uRequestedSize, info.pBuffer, &PendingTransfer->State, AIOP_High);

		return (PendingTransfer->RequestIndex == 0) ? AK_Fail : AK_Success;
	}

	virtual void Cancel(AkAsyncIOTransferInfo& io_transferInfo, bool& io_bCancelAllTransfersForThisFile) override
	{
		auto PendingTransfer = FindDeferredReadInfo(io_transferInfo);
		if (PendingTransfer)
		{
			// Cancel the request. This decrements the thread-safe counter, so our global callback
			// will call the callback function automatically. The transfer will thus be handled correctly.
			FIOSystem::Get().CancelRequests(&PendingTransfer->RequestIndex, 1);

			// We only canceled one request, and not all of them.
			io_bCancelAllTransfersForThisFile = false;
		}
	}
};
#endif // AK_FIOSYSTEM_AVAILABLE


struct AkReadFileCustomParam : AkFileCustomParam
{
private:
	IAsyncReadFileHandle* IORequestHandle;
	TArray<class IAsyncReadRequest*> ReadRequests;

public:
	AkReadFileCustomParam(IAsyncReadFileHandle* handle) : IORequestHandle(handle) {}

	virtual ~AkReadFileCustomParam()
	{
		for (auto& IORequest : ReadRequests)
		{
			if (IORequest)
			{
				IORequest->WaitCompletion();
				delete IORequest;
			}
		}

		delete IORequestHandle;
	}

	virtual AKRESULT DoWork(AkAsyncIOTransferInfo& io_transferInfo) override
	{
		auto AkTransferInfo = io_transferInfo;

		for (auto& IORequest : ReadRequests)
		{
			if (IORequest && IORequest->PollCompletion())
			{
				IORequest->WaitCompletion();
				delete IORequest;
				IORequest = nullptr;
			}
		}

		ReadRequests.Remove(nullptr);

		FAsyncFileCallBack AsyncFileCallBack = [AkTransferInfo](bool bWasCancelled, IAsyncReadRequest* Req) mutable
		{
			if (AkTransferInfo.pCallback)
				AkTransferInfo.pCallback(&AkTransferInfo, AK_Success);
		};

		auto PendingReadRequest = IORequestHandle->ReadRequest(AkTransferInfo.uFilePosition, AkTransferInfo.uRequestedSize, AIOP_High, &AsyncFileCallBack, (uint8*)AkTransferInfo.pBuffer);
		if (PendingReadRequest)
			ReadRequests.Add(PendingReadRequest);

		return AK_Success;
	}
};


struct AkWriteFileCustomParam : AkFileCustomParam
{
private:
	IFileHandle* FileHandle;

public:
	AkWriteFileCustomParam(IFileHandle* handle) : FileHandle(handle) {}

	virtual ~AkWriteFileCustomParam()
	{
		if (FileHandle)
			delete FileHandle;
	}

	virtual AKRESULT DoWork(AkAsyncIOTransferInfo& io_transferInfo) override
	{
		FileHandle->Seek(io_transferInfo.uFilePosition);

		if (FileHandle->Write((uint8*)io_transferInfo.pBuffer, io_transferInfo.uBufferSize))
		{
			if (io_transferInfo.pCallback)
				io_transferInfo.pCallback(&io_transferInfo, AK_Success);

			return AK_Success;
		}

		return AK_Fail;
	}
};


AkFileCustomParam* CreateReadFileCustomParam(const FString& FilePath)
{
#if AK_FIOSYSTEM_AVAILABLE
	if (!GNewAsyncIO)
		return new AkIOSystemReadFileCustomParam(FilePath);
#endif // AK_FIOSYSTEM_AVAILABLE

	auto IORequestHandle = FPlatformFileManager::Get().GetPlatformFile().OpenAsyncRead(*FilePath);
	return IORequestHandle ? new AkReadFileCustomParam(IORequestHandle) : nullptr;
}

AkFileCustomParam* CreateWriteFileCustomParam(const FString& FilePath)
{
	auto FileHandle = FPlatformFileManager::Get().GetPlatformFile().OpenWrite(*FilePath);
	return FileHandle ? new AkWriteFileCustomParam(FileHandle) : nullptr;
}


// Initialization/termination. Init() registers this object as the one and 
// only File Location Resolver if none were registered before. Then 
// it creates a streaming device with scheduler type AK_SCHEDULER_DEFERRED_LINED_UP.
bool CAkUnrealIOHookDeferred::Init(const AkDeviceSettings& in_deviceSettings)
{
	if (in_deviceSettings.uSchedulerTypeFlags != AK_SCHEDULER_DEFERRED_LINED_UP)
	{
		AKASSERT(!"CAkDefaultIOHookDeferred I/O hook only works with AK_SCHEDULER_DEFERRED_LINED_UP devices");
		return false;
	}

	// If the Stream Manager's File Location Resolver was not set yet, set this object as the 
	// File Location Resolver (this I/O hook is also able to resolve file location).
	if (!AK::StreamMgr::GetFileLocationResolver())
		AK::StreamMgr::SetFileLocationResolver(this);

	// Create a device in the Stream Manager, specifying this as the hook.
	m_deviceID = AK::StreamMgr::CreateDevice(in_deviceSettings, this);
	return m_deviceID != AK_INVALID_DEVICE_ID;
}

void CAkUnrealIOHookDeferred::Term()
{
#if AK_FIOSYSTEM_AVAILABLE
	AkIOSystemReadFileCustomParam::UnregisterGlobalCallback();
#endif // AK_FIOSYSTEM_AVAILABLE

	if (AK::StreamMgr::GetFileLocationResolver() == this)
		AK::StreamMgr::SetFileLocationResolver(NULL);

	AK::StreamMgr::DestroyDevice(m_deviceID);
}

//
// IAkFileLocationAware implementation.
//-----------------------------------------------------------------------------

template<typename T>
AKRESULT CAkUnrealIOHookDeferred::PerformOpen( 
    T		        in_fileDescriptor,  // File ID or file Name.
    AkOpenMode      in_eOpenMode,       // Open mode.
    AkFileSystemFlags * in_pFlags,      // Special flags. Can pass NULL.
	bool &			io_bSyncOpen,		// If true, the file must be opened synchronously. Otherwise it is left at the File Location Resolver's discretion. Return false if Open needs to be deferred.
    AkFileDesc &    out_fileDesc        // Returned file descriptor.
    )
{
	CleanFileDescriptor(out_fileDesc);

	if (AK_OpenModeReadWrite == in_eOpenMode)
		return AK_NotImplemented;

	FString FilePath;
	if (GetFullFilePath(in_fileDescriptor, in_pFlags, in_eOpenMode, &FilePath) != AK_Success || FilePath.IsEmpty())
		return AK_Fail;

	AkFileCustomParam* FileCustomParam = nullptr;

	if (AK_OpenModeRead == in_eOpenMode)
	{
		out_fileDesc.iFileSize = IFileManager::Get().FileSize(*FilePath);
		if (out_fileDesc.iFileSize > 0)
			FileCustomParam = CreateReadFileCustomParam(FilePath);
	}
	else if (AK_OpenModeWrite == in_eOpenMode || AK_OpenModeWriteOvrwr == in_eOpenMode)
	{
		FileCustomParam = CreateWriteFileCustomParam(FilePath);
		if (FileCustomParam)
			io_bSyncOpen = true;
	}

	if (FileCustomParam)
	{
		AkFileCustomParam::SetupFileDesc(out_fileDesc, FileCustomParam);
		return AK_Success;
	}

	return AK_Fail;
}

// Returns a file descriptor for a given file name (string).
AKRESULT CAkUnrealIOHookDeferred::Open( 
    const AkOSChar* in_pszFileName,     // File name.
    AkOpenMode      in_eOpenMode,       // Open mode.
    AkFileSystemFlags * in_pFlags,      // Special flags. Can pass NULL.
	bool &			io_bSyncOpen,		// If true, the file must be opened synchronously. Otherwise it is left at the File Location Resolver's discretion. Return false if Open needs to be deferred.
    AkFileDesc &    out_fileDesc        // Returned file descriptor.
    )
{
	FString FileName(in_pszFileName);
	return PerformOpen(FileName, in_eOpenMode, in_pFlags, io_bSyncOpen, out_fileDesc);
}

// Returns a file descriptor for a given file ID.
AKRESULT CAkUnrealIOHookDeferred::Open( 
    AkFileID        in_fileID,          // File ID.
    AkOpenMode      in_eOpenMode,       // Open mode.
    AkFileSystemFlags * in_pFlags,      // Special flags. Can pass NULL.
	bool &			io_bSyncOpen,		// If true, the file must be opened synchronously. Otherwise it is left at the File Location Resolver's discretion. Return false if Open needs to be deferred.
    AkFileDesc &    out_fileDesc        // Returned file descriptor.
    )
{
	return PerformOpen(in_fileID, in_eOpenMode, in_pFlags, io_bSyncOpen, out_fileDesc);
}


//
// IAkIOHookDeferred implementation.
//-----------------------------------------------------------------------------

// Reads data from a file (asynchronous overload).
AKRESULT CAkUnrealIOHookDeferred::Read(
	AkFileDesc &			in_fileDesc,        // File descriptor.
	const AkIoHeuristics & /*in_heuristics*/,	// Heuristics for this data transfer (not used in this implementation).
	AkAsyncIOTransferInfo & io_transferInfo		// Asynchronous data transfer info.
	)
{
	auto FileCustomParam = AkFileCustomParam::GetFileCustomParam(in_fileDesc);
	return FileCustomParam ? FileCustomParam->DoWork(io_transferInfo) : AK_Fail;
}

AKRESULT CAkUnrealIOHookDeferred::Write(
	AkFileDesc &			in_fileDesc,        // File descriptor.
	const AkIoHeuristics & /*in_heuristics*/,	// Heuristics for this data transfer (not used in this implementation).
	AkAsyncIOTransferInfo & io_transferInfo		// Platform-specific asynchronous IO operation info.
	)
{
	auto FileCustomParam = AkFileCustomParam::GetFileCustomParam(in_fileDesc);
	return FileCustomParam ? FileCustomParam->DoWork(io_transferInfo) : AK_Fail;
}


// Cancel transfer(s).
void CAkUnrealIOHookDeferred::Cancel(
	AkFileDesc &			in_fileDesc,		// File descriptor.
	AkAsyncIOTransferInfo & io_transferInfo,// Transfer info to cancel (this implementation only handles "cancel all").
	bool & io_bCancelAllTransfersForThisFile	// Flag indicating whether all transfers should be cancelled for this file (see notes in function description).
	)
{
	auto FileCustomParam = AkFileCustomParam::GetFileCustomParam(in_fileDesc);
	if (FileCustomParam)
		FileCustomParam->Cancel(io_transferInfo, io_bCancelAllTransfersForThisFile);
}

// Close a file.
AKRESULT CAkUnrealIOHookDeferred::Close(
    AkFileDesc& in_fileDesc      // File descriptor.
    )
{
	auto FileCustomParam = AkFileCustomParam::GetFileCustomParam(in_fileDesc);
	if (FileCustomParam)
		delete FileCustomParam;

	AkFileCustomParam::SetupFileDesc(in_fileDesc, nullptr);
	return AK_Success;
}

void CAkUnrealIOHookDeferred::CleanFileDescriptor( AkFileDesc& out_fileDesc )
{
	out_fileDesc.uSector			= 0;
	out_fileDesc.deviceID			= m_deviceID;
	AkFileCustomParam::SetupFileDesc(out_fileDesc, nullptr);
	out_fileDesc.iFileSize			= 0;
}


// Returns the block size for the file or its storage device. 
AkUInt32 CAkUnrealIOHookDeferred::GetBlockSize(
    AkFileDesc &  in_fileDesc     // File descriptor.
    )
{
    return AkFileCustomParamPolicy::GetBlockSize(in_fileDesc);
}

// Returns a description for the streaming device above this low-level hook.
void CAkUnrealIOHookDeferred::GetDeviceDesc(
    AkDeviceDesc & 
#ifndef AK_OPTIMIZED
	out_deviceDesc      // Description of associated low-level I/O device.
#endif
    )
{
#ifndef AK_OPTIMIZED
	// Deferred scheduler.
	out_deviceDesc.deviceID       = m_deviceID;
	out_deviceDesc.bCanRead       = true;
	out_deviceDesc.bCanWrite      = true;
	AK_CHAR_TO_UTF16( out_deviceDesc.szDeviceName, DEFERRED_DEVICE_NAME, AK_MONITOR_DEVICENAME_MAXLENGTH );
	out_deviceDesc.uStringSize   = (AkUInt32)AKPLATFORM::AkUtf16StrLen( out_deviceDesc.szDeviceName ) + 1;
#endif
}

// Returns custom profiling data: 1 if file opens are asynchronous, 0 otherwise.
AkUInt32 CAkUnrealIOHookDeferred::GetDeviceData()
{
	return 0;
}

// Writes data to a file (asynchronous overload).
AKRESULT CAkUnrealIOHookDeferred::GetFullFilePath(
	const FString&		in_szFileName,		// File name.
	AkFileSystemFlags * in_pFlags,			// Special flags. Can be NULL.
	AkOpenMode			in_eOpenMode,		// File open mode (read, write, ...).
	FString*			out_szFullFilePath // Full file path.
	)
{
	if (in_szFileName.IsEmpty())
	{
		AKASSERT(!"Invalid file name");
		return AK_InvalidParameter;
	}

	// Prepend string path (basic file system logic).
	int32 uiPathSize = in_szFileName.Len();
	if (uiPathSize >= AK_MAX_PATH)
	{
		AKASSERT(!"Input string too large");
		return AK_InvalidParameter;
	}

	*out_szFullFilePath = m_szBasePath;

	if (in_pFlags && in_eOpenMode == AK_OpenModeRead)
	{
		// Add language directory name if needed.
		if (in_pFlags->bIsLanguageSpecific)
		{
			size_t uLanguageStrLen = AKPLATFORM::OsStrLen(AK::StreamMgr::GetCurrentLanguage());
			if (uLanguageStrLen > 0)
			{
				uiPathSize += (uLanguageStrLen + 1);
				if (uiPathSize >= AK_MAX_PATH)
				{
					AKASSERT(!"Path is too large");
					return AK_Fail;
				}
				FString CurrentLanguage(AK::StreamMgr::GetCurrentLanguage());
				*out_szFullFilePath = FPaths::Combine(**out_szFullFilePath, *CurrentLanguage);
				out_szFullFilePath->Append(FGenericPlatformMisc::GetDefaultPathSeparator());
			}
		}
	}

	// Append file title.
	uiPathSize += out_szFullFilePath->Len();
	if (uiPathSize >= AK_MAX_PATH)
	{
		AKASSERT(!"File name string too large");
		return AK_Fail;
	}

	out_szFullFilePath->Append(in_szFileName);
	return AK_Success;
}

#define MAX_NUMBER_STRING_SIZE      (10)    // 4G
#define MAX_EXTENSION_SIZE          (4)     // .xxx
#define MAX_FILETITLE_SIZE          (MAX_NUMBER_STRING_SIZE+MAX_EXTENSION_SIZE+1)   // null-terminated
AKRESULT CAkUnrealIOHookDeferred::GetFullFilePath(
	AkFileID			in_fileID,		// File name.
	AkFileSystemFlags * in_pFlags,			// Special flags. Can be NULL.
	AkOpenMode			in_eOpenMode,		// File open mode (read, write, ...).
	FString*			out_szFullFilePath // Full file path.
	)
{
	if (!in_pFlags ||
		!(in_pFlags->uCompanyID == AKCOMPANYID_AUDIOKINETIC || in_pFlags->uCompanyID == AKCOMPANYID_AUDIOKINETIC_EXTERNAL))
	{
		AKASSERT(!"Unhandled file type");
		return AK_InvalidParameter;
	}

	// Compute file name with file system paths.
	size_t uiPathSize = m_szBasePath.Len();

	// Copy base path. 
	*out_szFullFilePath = m_szBasePath;

	// Add language directory name if needed.
	if (in_pFlags->bIsLanguageSpecific)
	{
		auto currentLanguage = AK::StreamMgr::GetCurrentLanguage();
		size_t uLanguageStrLen = AKPLATFORM::OsStrLen(currentLanguage);
		if (uLanguageStrLen > 0)
		{
			uiPathSize += (uLanguageStrLen + 1);
			if (uiPathSize >= AK_MAX_PATH)
			{
				AKASSERT(!"Path is too large");
				return AK_InvalidParameter;
			}
			out_szFullFilePath->Append(currentLanguage);
			out_szFullFilePath->Append(FGenericPlatformMisc::GetDefaultPathSeparator());
		}
	}

	// Append file title.
	if ((uiPathSize + MAX_FILETITLE_SIZE) <= AK_MAX_PATH)
	{
		out_szFullFilePath->Append(FString::FromInt(in_fileID));
		if (in_pFlags->uCodecID == AKCODECID_BANK)
			out_szFullFilePath->Append(TEXT(".bnk"));
		else
			out_szFullFilePath->Append(TEXT(".wem"));
	}
	else
	{
		AKASSERT(!"String buffer too small");
		return AK_InvalidParameter;
	}

	return AK_Success;
}


bool CAkUnrealIOHookDeferred::SetBasePath(const FString& in_szBasePath)
{
	if (in_szBasePath.Len() + AKPLATFORM::OsStrLen(AK::StreamMgr::GetCurrentLanguage()) + 1 >= AK_MAX_PATH)
		return false;

	m_szBasePath = in_szBasePath;

	auto separator = FGenericPlatformMisc::GetDefaultPathSeparator();
	if (!m_szBasePath.EndsWith(separator))
		m_szBasePath.Append(separator);

	return FPaths::DirectoryExists(m_szBasePath);
}
