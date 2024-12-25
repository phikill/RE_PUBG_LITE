//////////////////////////////////////////////////////////////////////
//
// AkUnrealIOHookDeferred.h
//
// Implementation of the IO Hook redirecting 
// the Read requests into Unreal I/O system.
//
// Copyright (c) 2006 Audiokinetic Inc. / All Rights Reserved
//
//////////////////////////////////////////////////////////////////////

#pragma once

#include "AkInclude.h"
#include "Async/AsyncFileHandle.h"


struct AkFileCustomParam
{
	bool IsInPackage = false;

	virtual ~AkFileCustomParam() {}
	virtual AKRESULT DoWork(AkAsyncIOTransferInfo& io_transferInfo) = 0;
	virtual void Cancel(AkAsyncIOTransferInfo & io_transferInfo, bool& io_bCancelAllTransfersForThisFile) {}

	static AkFileCustomParam* GetFileCustomParam(const AkFileDesc& fileDesc);
	static void SetupFileDesc(AkFileDesc& fileDesc, AkFileCustomParam* FileCustomParam);
};


class AkFileCustomParamPolicy
{
public:
	// Returns true if file described by in_fileDesc is in a package.
	static inline bool IsInPackage(const AkFileDesc& in_fileDesc)
	{
		auto FileCustomParam = AkFileCustomParam::GetFileCustomParam(in_fileDesc);
		return FileCustomParam && FileCustomParam->IsInPackage;
	}

	static inline AkUInt32 GetBlockSize(AkFileDesc& in_fileDesc)
	{
		return 1;
	}

	template<class T_PACKAGE, class T_ENTRY>
	static void SetInPackageFileDesc(AkFileDesc& out_fileDesc, T_PACKAGE* in_pPackage, const T_ENTRY* in_pEntry)
	{
		auto FileDesc = in_pPackage->GetFileDesc();
		if (!FileDesc)
			return;

		auto FileCustomParam = AkFileCustomParam::GetFileCustomParam(*FileDesc);
		if (!FileCustomParam)
			return;

		FileCustomParam->IsInPackage = true;
		AkFileCustomParam::SetupFileDesc(out_fileDesc, FileCustomParam);
	}
};


//-----------------------------------------------------------------------------
// Name: class CAkUnrealIOHookDeferred.
// Desc: Implements IAkIOHookDeferred low-level I/O hook, and 
//		 IAkFileLocationResolver. Can be used as a standalone Low-Level I/O
//		 system, or as part of a system with multiple devices.
//		 File location is resolved using simple path concatenation logic
//		 (implemented in CAkFileLocationBase).
//-----------------------------------------------------------------------------
class CAkUnrealIOHookDeferred :	public AK::StreamMgr::IAkFileLocationResolver
								,public AK::StreamMgr::IAkIOHookDeferred
{
public:

	/** 
	 * Initialization. Init() registers this object as the one and 
	 * only File Location Resolver if none were registered before. Then 
	 * it creates a streaming device with scheduler type AK_SCHEDULER_DEFERRED_LINED_UP.
	 *
	 * @param in_deviceSettings		Device settings.
	 * @return	true if initialization was successful, false otherwise
	 */
	bool Init(const AkDeviceSettings& in_deviceSettings);

	/**
	 * Terminate.
	 */
	void Term();

	// Base path is prepended to all file names.
	// Audio source path is appended to base path whenever uCompanyID is AK and uCodecID specifies an audio source.
	// Bank path is appended to base path whenever uCompanyID is AK and uCodecID specifies a sound bank.
	// Language specific dir name is appended to path whenever "bIsLanguageSpecific" is true.
	bool SetBasePath(const FString&   in_pszBasePath);

	//
	// IAkFileLocationAware interface.
	//-----------------------------------------------------------------------------

    /**
	 * Returns a file descriptor for a given file name (string).
	 *
	 * @param in_pszFileName	File name.
	 * @param in_eOpenMode		Open mode.
	 * @param in_pFlags			Special flags. Can pass NULL.
	 * @param io_bSyncOpen		If true, the file must be opened synchronously. Otherwise it is left at the File Location Resolver's discretion. Return false if Open needs to be deferred.
	 * @param out_fileDesc		Returned file descriptor.
	 * @return	AK_Success if operation was successful, error code otherwise
	 */
    virtual AKRESULT Open( 
        const AkOSChar*			in_pszFileName,		
		AkOpenMode				in_eOpenMode,		
        AkFileSystemFlags *		in_pFlags,			
		bool &					io_bSyncOpen,		
        AkFileDesc &			out_fileDesc        
        );

    /**
	 * Returns a file descriptor for a given file ID.
	 *
	 * @param in_fileID			File ID.
	 * @param in_eOpenMode		Open mode.
	 * @param in_pFlags			Special flags. Can pass NULL.
	 * @param io_bSyncOpen		If true, the file must be opened synchronously. Otherwise it is left at the File Location Resolver's discretion. Return false if Open needs to be deferred.
	 * @param out_fileDesc		Returned file descriptor.
	 * @return	AK_Success if operation was successful, error code otherwise
	 */
    virtual AKRESULT Open( 
        AkFileID				in_fileID,          // File ID.
        AkOpenMode				in_eOpenMode,       // Open mode.
        AkFileSystemFlags *		in_pFlags,			// Special flags. Can pass NULL.
		bool &					io_bSyncOpen,		// If true, the file must be opened synchronously. Otherwise it is left at the File Location Resolver's discretion. Return false if Open needs to be deferred.
        AkFileDesc &			out_fileDesc        // Returned file descriptor.
        );


	//
	// IAkIOHookDeferred interface.
	//-----------------------------------------------------------------------------

    /**
	 * Reads data from a file (asynchronous).
	 *
	 * @param in_fileDesc		File descriptor.
	 * @param in_heuristics		Heuristics for this data transfer.
	 * @param io_transferInfo	Asynchronous data transfer info.
	 * @return	AK_Success if operation was successful, error code otherwise
	 */
    virtual AKRESULT Read(
		AkFileDesc &			in_fileDesc,
		const AkIoHeuristics &	in_heuristics,
		AkAsyncIOTransferInfo & io_transferInfo
		);

    // Writes data to a file (asynchronous).
    virtual AKRESULT Write(
		AkFileDesc &			in_fileDesc,        // File descriptor.
		const AkIoHeuristics &	in_heuristics,		// Heuristics for this data transfer.
		AkAsyncIOTransferInfo & io_transferInfo		// Platform-specific asynchronous IO operation info.
		);

    /**
	 * Notifies that a transfer request is cancelled. It will be flushed by the streaming device when completed.
	 *
	 * @param in_fileDesc							File descriptor.
	 * @param io_transferInfo						Transfer info to cancel.
	 * @param io_bCancelAllTransfersForThisFile		Flag indicating whether all transfers should be cancelled for this file (see notes in function description).
	 */
    virtual void Cancel(
		AkFileDesc &			in_fileDesc,
		AkAsyncIOTransferInfo & io_transferInfo,
		bool & io_bCancelAllTransfersForThisFile
		);

	/**
	 * Cleans up a file.
	 *
	 * @param in_fileDesc		File descriptor.
	 * @return	AK_Success if operation was successful, error code otherwise
	 */
	virtual AKRESULT Close(
        AkFileDesc &			in_fileDesc
        );

    // Returns the block size for the file or its storage device. 
    virtual AkUInt32 GetBlockSize(
        AkFileDesc &  			in_fileDesc			// File descriptor.
        );

	// Returns a description for the streaming device above this low-level hook.
    virtual void GetDeviceDesc(
        AkDeviceDesc &  		out_deviceDesc      // Description of associated low-level I/O device.
        );
	
	// Returns custom profiling data: 1 if file opens are asynchronous, 0 otherwise.
	virtual AkUInt32 GetDeviceData();


	// String overload.
	// Returns AK_Success if input flags are supported and the resulting path is not too long.
	// Returns AK_Fail otherwise.
	AKRESULT GetFullFilePath(
		const FString&		in_szFileName,		// File name.
		AkFileSystemFlags * in_pFlags,			// Special flags. Can be NULL.
		AkOpenMode			in_eOpenMode,		// File open mode (read, write, ...).
		FString*			out_szFullFilePath	// Full file path.
		);

	// ID overload.
	// Returns AK_Success if input flags are supported and the resulting path is not too long.
	// Returns AK_Fail otherwise.
	AKRESULT GetFullFilePath(
		AkFileID			in_fileID,			// File ID.
		AkFileSystemFlags * in_pFlags,			// Special flags. Can be NULL.
		AkOpenMode			in_eOpenMode,		// File open mode (read, write, ...).
		FString*			out_szFullFilePath	// Full file path.
		);


protected:

	// Base path, where the SoundBanks are located.
	FString m_szBasePath;

private:
	/** 
	 * Reset the file descriptor
	 *
	 * @param out_fileDesc The file descriptor
	 */
	void CleanFileDescriptor( AkFileDesc& out_fileDesc );

	/**
	 * Perform the open, whether we have a file ID or a file Name
	 *
	 * @param in_fileDescriptor		file ID or file Name
	 * @param in_eOpenMode			Open mode.
	 * @param in_pFlags				Special flags. Can pass NULL.
	 * @param io_bSyncOpen			If true, the file must be opened synchronously. Otherwise it is left at the File Location Resolver's discretion. Return false if Open needs to be deferred.
	 * @param out_fileDesc			Returned file descriptor.
	 * @return AK_Success if operation was successful, error code otherwise
	 */
	template<typename T>
	AKRESULT PerformOpen( 
		T				in_fileDescriptor,  // Can be file ID or file Name
		AkOpenMode      in_eOpenMode,       // Open mode.
		AkFileSystemFlags * in_pFlags,      // Special flags. Can pass NULL.
		bool &			io_bSyncOpen,		// If true, the file must be opened synchronously. Otherwise it is left at the File Location Resolver's discretion. Return false if Open needs to be deferred.
		AkFileDesc &    out_fileDesc        // Returned file descriptor.
		);

	bool m_bAsyncOpen = false;	// If true, opens files asynchronously when it can.

protected:
	AkDeviceID			m_deviceID = AK_INVALID_DEVICE_ID;
};
