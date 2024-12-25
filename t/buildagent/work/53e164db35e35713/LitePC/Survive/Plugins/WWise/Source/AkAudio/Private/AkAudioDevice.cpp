// Copyright (c) 2006-2012 Audiokinetic Inc. / All Rights Reserved

/*=============================================================================
	AkAudioDevice.cpp: Audiokinetic Audio interface object.

	Unreal is RHS with Y and Z swapped (or technically LHS with flipped axis)

=============================================================================*/

/*------------------------------------------------------------------------------------
	Audio includes.
------------------------------------------------------------------------------------*/

#define AK_ENABLE_ROOMS
#define AK_ENABLE_PORTALS

#include "AkAudioDevice.h"
#include "AkUEFeatures.h"
#include "AkAudioModule.h"
#include "AkAudioClasses.h"
#include "EditorSupportDelegates.h"
#include "ISettingsModule.h"
#include "IPluginManager.h"
#include "Runtime/Launch/Resources/Version.h"
#include "GameFramework/PlayerController.h"
#include "AkComponentCallbackManager.h"
#include "FilePackageIO/AkFilePackageLowLevelIO.h"
#include "AkUnrealIOHookDeferred.h"
#include "AkLateReverbComponent.h"

#include "Misc/ScopeLock.h"
#include "UObject/Object.h"
#include "UObject/UObjectIterator.h"
#include "UObject/UObjectGlobals.h"
#include "GameFramework/WorldSettings.h"
#include "Engine/GameEngine.h"
#include "Camera/PlayerCameraManager.h"
#include "Misc/App.h"
#include "EngineUtils.h"
#include "Model.h"
#include "Components/BrushComponent.h"
#include "HAL/FileManager.h"

#if PLATFORM_ANDROID
#include "Android/AndroidApplication.h"
#endif

// Register plugins that are static linked in this DLL.
#include <AK/Plugin/AkVorbisDecoderFactory.h>
#include <AK/Plugin/AkSilenceSourceFactory.h>
#include <AK/Plugin/AkSineSourceFactory.h>
#include <AK/Plugin/AkToneSourceFactory.h>
#include <AK/Plugin/AkPeakLimiterFXFactory.h>
#include <AK/Plugin/AkMatrixReverbFXFactory.h>
#include <AK/Plugin/AkParametricEQFXFactory.h>
#include <AK/Plugin/AkDelayFXFactory.h>
#include <AK/Plugin/AkExpanderFXFactory.h>
#include <AK/Plugin/AkFlangerFXFactory.h>
#include <AK/Plugin/AkCompressorFXFactory.h>
#include <AK/Plugin/AkGainFXFactory.h>
#include <AK/Plugin/AkHarmonizerFXFactory.h>
#include <AK/Plugin/AkTimeStretchFXFactory.h>
#include <AK/Plugin/AkPitchShifterFXFactory.h>
#include <AK/Plugin/AkStereoDelayFXFactory.h>
#include <AK/Plugin/AkMeterFXFactory.h>
#include <AK/Plugin/AkGuitarDistortionFXFactory.h>
#include <AK/Plugin/AkTremoloFXFactory.h>
#include <AK/Plugin/AkRoomVerbFXFactory.h>
#include <AK/Plugin/AkAudioInputSourceFactory.h>
#include <AK/Plugin/AkSynthOneFactory.h>
#include <AK/Plugin/AkReflectFXFactory.h>
#include <AK/Plugin/AkConvolutionReverbFXFactory.h>
#include <AK/Plugin/AkRecorderFXFactory.h>
#include <AK/Plugin/AuroHeadphoneFXFactory.h>

#if PLATFORM_MAC || PLATFORM_IOS
#include <AK/Plugin/AkAACFactory.h>
#endif

#if PLATFORM_PS4
#include <AK/Plugin/AkATRAC9Factory.h>
#endif

#if PLATFORM_SWITCH
#include <AK/Plugin/AkOpusFactory.h>
#endif

#include <AK/SpatialAudio/Common/AkSpatialAudio.h>
#include <AK/Plugin/AkReflectGameData.h>


// Add additional plug-ins here.
	
// OCULUS_START
#include "Runtime/HeadMountedDisplay/Public/IHeadMountedDisplayModule.h"
// OCULUS_END


#if PLATFORM_XBOXONE
	#include <apu.h>
#endif

DEFINE_LOG_CATEGORY(LogAkAudio);	

/*------------------------------------------------------------------------------------
	Statics and Globals
------------------------------------------------------------------------------------*/

bool FAkAudioDevice::m_bSoundEngineInitialized = false;
bool FAkAudioDevice::m_EngineExiting = false;


/*------------------------------------------------------------------------------------
	Defines
------------------------------------------------------------------------------------*/

#define INITBANKNAME (TEXT("Init"))
#define GAME_OBJECT_MAX_STRING_SIZE 512
#define AK_READ_SIZE DVD_MIN_READ_SIZE

/*------------------------------------------------------------------------------------
	Memory hooks
------------------------------------------------------------------------------------*/

namespace AK
{
	void * AllocHook( size_t in_size )
	{
		return FMemory::Malloc( in_size );
	}
	void FreeHook( void * in_ptr )
	{
		FMemory::Free( in_ptr );
	}

#ifdef _WIN32 // only on PC and XBox360
	void * VirtualAllocHook(
		void * in_pMemAddress,
		size_t in_size,
		unsigned long in_dwAllocationType,
		unsigned long in_dwProtect
		)
	{
		return VirtualAlloc( in_pMemAddress, in_size, in_dwAllocationType, in_dwProtect );
	}
	void VirtualFreeHook( 
		void * in_pMemAddress,
		size_t in_size,
		unsigned long in_dwFreeType
		)
	{
		VirtualFree( in_pMemAddress, in_size, in_dwFreeType );
	}
#endif // only on PC and XBox360

#if PLATFORM_SWITCH
	void * AlignedAllocHook(size_t in_size, size_t in_alignment)
	{
		return aligned_alloc(in_alignment, in_size);
	}

	void AlignedFreeHook(void * in_ptr)
	{
		free(in_ptr);
	}
#endif


#if PLATFORM_XBOXONE
	void * APUAllocHook( 
		size_t in_size,				///< Number of bytes to allocate.
		unsigned int in_alignment	///< Alignment in bytes (must be power of two, greater than or equal to four).
		)
	{
		void * pReturn = nullptr;
		ApuAlloc( &pReturn, NULL, (UINT32) in_size, in_alignment );
		return pReturn;
	}

	void APUFreeHook( 
		void * in_pMemAddress	///< Virtual address as returned by APUAllocHook.
		)
	{
		ApuFree( in_pMemAddress );
	}
#endif
}

/*------------------------------------------------------------------------------------
	Helpers
------------------------------------------------------------------------------------*/

static void AkRegisterGameObjectInternal(AkGameObjectID in_gameObjId, const FString& Name)
{
#ifdef AK_OPTIMIZED
	AK::SoundEngine::RegisterGameObj(in_gameObjId);
#else
	if (Name.Len() > 0)
	{
		AK::SoundEngine::RegisterGameObj(in_gameObjId, TCHAR_TO_ANSI(*Name));
	}
	else
	{
		AK::SoundEngine::RegisterGameObj(in_gameObjId);
	}
#endif

}

/*------------------------------------------------------------------------------------
	Implementation
------------------------------------------------------------------------------------*/

/**
 * Initializes the audio device and creates sources.
 *
 * @return true if initialization was successful, false otherwise
 */
bool FAkAudioDevice::Init( void )
{
#if UE_SERVER
	return false;
#endif
	AkBankManager = NULL;
	if(!EnsureInitialized()) // ensure audiolib is initialized
	{
		UE_LOG(LogInit, Log, TEXT("Audiokinetic Audio Device initialization failed."));
		return false;
	}

	// Initialize SoundFrame
#ifdef AK_SOUNDFRAME
	m_pSoundFrame = NULL;
	if( AK::SoundFrame::Create( this, &m_pSoundFrame ) )
	{
		m_pSoundFrame->Connect();
	}
#endif

	// OCULUS_START - vhamm - suspend audio when not in focus
	m_isSuspended = false;
	// OCULUS_END

	FWorldDelegates::OnPostWorldCreation.AddLambda(
		[&](UWorld* World)
		{
			World->AddOnActorSpawnedHandler(FOnActorSpawned::FDelegate::CreateRaw(this, &FAkAudioDevice::OnActorSpawned));
		}
	);

	UE_LOG(LogInit, Log, TEXT("Audiokinetic Audio Device initialized."));

	return 1;
}

/**
 * Update the audio device and calculates the cached inverse transform later
 * on used for spatialization.
 */
bool FAkAudioDevice::Update( float DeltaTime )
{
	if ( m_bSoundEngineInitialized )
	{
		// OCULUS_START - vhamm - suspend audio when not in focus
		if (FApp::UseVRFocus())
		{
			if (FApp::HasVRFocus())
			{
				if (m_isSuspended)
				{
					AK::SoundEngine::WakeupFromSuspend();
					m_isSuspended = false;
				}
			}
			else
			{
				if (!m_isSuspended)
				{
					AK::SoundEngine::Suspend(true);
					m_isSuspended = true;
				}
			}
		}
		// OCULUS_END

		AK::SoundEngine::RenderAudio();
	}


	return true;
}

/**
 * Tears down audio device by stopping all sounds, removing all buffers, 
 * destroying all sources, ... Called by both Destroy and ShutdownAfterError
 * to perform the actual tear down.
 */
void FAkAudioDevice::Teardown()
{
	if (m_bSoundEngineInitialized == true)
	{
		// Unload all loaded banks before teardown
		if( AkBankManager )
		{
			const TSet<UAkAudioBank*>* LoadedBanks = AkBankManager->GetLoadedBankList();
			TSet<UAkAudioBank*> LoadedBanksCopy(*LoadedBanks);
			for(TSet<UAkAudioBank*>::TConstIterator LoadIter(LoadedBanksCopy); LoadIter; ++LoadIter)
			{
				if( (*LoadIter) != NULL && (*LoadIter)->IsValidLowLevel() )
				{
					(*LoadIter)->Unload();
				}
			}
			delete AkBankManager;
			AkBankManager = nullptr;
		}

		UnloadAllFilePackages();

		AK::Monitor::SetLocalOutput(0, NULL);

#ifndef AK_OPTIMIZED
#if !PLATFORM_LINUX
		//
		// Terminate Communication Services
		//
		AK::Comm::Term();
#endif
#endif // AK_OPTIMIZED

		AK::SoundEngine::UnregisterGameObj( DUMMY_GAMEOBJ );

		//
		// Terminate the music engine
		//
		AK::MusicEngine::Term();

		//
		//
		//
		AK::SpatialAudio::Term();

		//
		// Unregister game objects. Since we're about to terminate the sound engine
		// anyway, we don't really have to unregister those game objects here. But
		// in general it is good practice to unregister game objects as soon as they
		// become obsolete, to free up resources.
		//
		if ( AK::SoundEngine::IsInitialized() )
		{
			//
			// Terminate the sound engine
			//
			AK::SoundEngine::Term();
		}

		if (CallbackManager)
		{
			delete CallbackManager;
			CallbackManager = nullptr;
		}

		if (LowLevelIOHook)
		{
			LowLevelIOHook->Term();
			delete LowLevelIOHook;
			LowLevelIOHook = nullptr;
		}

		// Terminate the streaming manager
		if ( AK::IAkStreamMgr::Get() )
		{
			AK::IAkStreamMgr::Get()->Destroy();
		}

		// Terminate the Memory Manager
		AK::MemoryMgr::Term();

		m_bSoundEngineInitialized = false;
	}

	// Terminate SoundFrame
#ifdef AK_SOUNDFRAME
	if ( m_pSoundFrame )
	{
		m_pSoundFrame->Release();
		m_pSoundFrame = NULL;
	}
#endif

	FWorldDelegates::LevelRemovedFromWorld.RemoveAll( this );

	UE_LOG(LogInit, Log, TEXT("Audiokinetic Audio Device terminated."));
}

/**
 * Stops all game sounds (and possibly UI) sounds
 *
 * @param bShouldStopUISounds If true, this function will stop UI sounds as well
 */
void FAkAudioDevice::StopAllSounds( bool bShouldStopUISounds )
{
	AK::SoundEngine::StopAll( DUMMY_GAMEOBJ );
	AK::SoundEngine::StopAll();
}


/**
 * Stop all audio associated with a scene
 *
 * @param SceneToFlush		Interface of the scene to flush
 */
void FAkAudioDevice::Flush(UWorld* WorldToFlush)
{
	AK::SoundEngine::StopAll( DUMMY_GAMEOBJ );
	AK::SoundEngine::StopAll();
}

/**
 * Clears all loaded soundbanks
 *
 * @return Result from ak sound engine 
 */
AKRESULT FAkAudioDevice::ClearBanks()
{
	if ( m_bSoundEngineInitialized )
	{
		AKRESULT eResult = AK::SoundEngine::ClearBanks();
		if( eResult == AK_Success && AkBankManager != NULL )
			{
				FScopeLock Lock(&AkBankManager->m_BankManagerCriticalSection);
				AkBankManager->ClearLoadedBanks();
		}

		return eResult;
	}
	else
	{
		return AK_Success;
	}
}

/**
 * Load a soundbank
 *
 * @param in_Bank		The bank to load
 * @param in_memPoolId		Memory pool ID (media is stored in the sound engine's default pool if AK_DEFAULT_POOL_ID is passed)
 * @param out_bankID		Returned bank ID
 * @return Result from ak sound engine 
 */
AKRESULT FAkAudioDevice::LoadBank(
	class UAkAudioBank *     in_Bank,
	AkMemPoolId         in_memPoolId,
	AkBankID &          out_bankID
	)
{
	AKRESULT eResult = LoadBank(in_Bank->GetName(), in_memPoolId, out_bankID);
	if( eResult == AK_Success && AkBankManager != NULL)
	{
		FScopeLock Lock(&AkBankManager->m_BankManagerCriticalSection);
		AkBankManager->AddLoadedBank(in_Bank);
	}
	return eResult;
}

/**
 * Load a soundbank by name
 *
 * @param in_BankName		The name of the bank to load
 * @param in_memPoolId		Memory pool ID (media is stored in the sound engine's default pool if AK_DEFAULT_POOL_ID is passed)
 * @param out_bankID		Returned bank ID
 * @return Result from ak sound engine 
 */
AKRESULT FAkAudioDevice::LoadBank(
	const FString&      in_BankName,
	AkMemPoolId         in_memPoolId,
	AkBankID &          out_bankID
	)
{
	AKRESULT eResult = AK_Fail;
	if( EnsureInitialized() ) // ensure audiolib is initialized
	{
		auto szString = TCHAR_TO_AK(*in_BankName);
		eResult = AK::SoundEngine::LoadBank( szString, in_memPoolId, out_bankID );
	}
	return eResult;
}

static void AkAudioDeviceBankLoadCallback(	
	AkUInt32		in_bankID,
	const void *	in_pInMemoryBankPtr,
	AKRESULT		in_eLoadResult,
	AkMemPoolId		in_memPoolId,
	void *			in_pCookie
)
{
	AkBankCallbackFunc cbFunc = NULL;
	void* pUserCookie = NULL;
	if( in_pCookie )
	{
		FAkBankManager::AkBankCallbackInfo* BankCbInfo = (FAkBankManager::AkBankCallbackInfo*)in_pCookie;
		FAkBankManager * BankManager = BankCbInfo->pBankManager;
		cbFunc = BankCbInfo->CallbackFunc;
		pUserCookie = BankCbInfo->pUserCookie;
		if( BankManager != NULL && in_eLoadResult == AK_Success)
		{
			FScopeLock Lock(&BankManager->m_BankManagerCriticalSection);
			// Load worked; put the bank in the list.
			BankManager->AddLoadedBank(BankCbInfo->pBank);
		}

		delete BankCbInfo;
	}

	if( cbFunc != NULL )
	{
		// Call the user's callback function
		cbFunc(in_bankID, in_pInMemoryBankPtr, in_eLoadResult, in_memPoolId, pUserCookie);
	}
}

/**
 * Load a soundbank asynchronously
 *
 * @param in_Bank		The bank to load
 * @param in_pfnBankCallback Callback function
 * @param in_pCookie		Callback cookie (reserved to user, passed to the callback function)
 * @param in_memPoolId		Memory pool ID (media is stored in the sound engine's default pool if AK_DEFAULT_POOL_ID is passed)
 * @param out_bankID		Returned bank ID
 * @return Result from ak sound engine 
 */
AKRESULT FAkAudioDevice::LoadBank(
	class UAkAudioBank *     in_Bank,
	AkBankCallbackFunc  in_pfnBankCallback,
	void *              in_pCookie,
    AkMemPoolId         in_memPoolId,
	AkBankID &          out_bankID
    )
{
	if( EnsureInitialized() ) // ensure audiolib is initialized
	{
		FString name = in_Bank->GetName();
		auto szString = TCHAR_TO_AK(*name);

		if( AkBankManager != NULL )
		{
			FAkBankManager::AkBankCallbackInfo* cbInfo = new FAkBankManager::AkBankCallbackInfo(in_pfnBankCallback, in_Bank, in_pCookie, AkBankManager);

			// Need to hijack the callback, so we can add the bank to the loaded banks list when successful.
			if (cbInfo)
			{
				return AK::SoundEngine::LoadBank(szString, AkAudioDeviceBankLoadCallback, cbInfo, in_memPoolId, out_bankID);
			}
		}
		else
		{
			return AK::SoundEngine::LoadBank( szString, in_pfnBankCallback, in_pCookie, in_memPoolId, out_bankID );
		}
	}
	return AK_Fail;
}

/**
 * Unload a soundbank
 *
 * @param in_Bank		The bank to unload
 * @param out_pMemPoolId	Returned memory pool ID used with LoadBank() (can pass NULL)
 * @return Result from ak sound engine 
 */
AKRESULT FAkAudioDevice::UnloadBank(
	class UAkAudioBank *     in_Bank,
    AkMemPoolId *       out_pMemPoolId		    ///< Returned memory pool ID used with LoadBank() (can pass NULL)
    )
{
	AKRESULT eResult = UnloadBank(in_Bank->GetName(), out_pMemPoolId);
	if( eResult == AK_Success && AkBankManager != NULL)
	{
		FScopeLock Lock(&AkBankManager->m_BankManagerCriticalSection);
		AkBankManager->RemoveLoadedBank(in_Bank);
	}
	return eResult;
}

/**
 * Unload a soundbank by its name
 *
 * @param in_BankName		The name of the bank to unload
 * @param out_pMemPoolId	Returned memory pool ID used with LoadBank() (can pass NULL)
 * @return Result from ak sound engine 
 */
AKRESULT FAkAudioDevice::UnloadBank(
	const FString&      in_BankName,
    AkMemPoolId *       out_pMemPoolId		    ///< Returned memory pool ID used with LoadBank() (can pass NULL)
    )
{
	AKRESULT eResult = AK_Fail;
	if ( m_bSoundEngineInitialized )
	{
		auto szString = TCHAR_TO_AK(*in_BankName);
		eResult = AK::SoundEngine::UnloadBank( szString, out_pMemPoolId );
	}
	return eResult;
}

static void AkAudioDeviceBankUnloadCallback(	
	AkUInt32		in_bankID,
	const void *	in_pInMemoryBankPtr,
	AKRESULT		in_eLoadResult,
	AkMemPoolId		in_memPoolId,
	void *			in_pCookie
)
{
	AkBankCallbackFunc cbFunc = NULL;
	void* pUserCookie = NULL;
	if(in_pCookie)
	{
		FAkBankManager::AkBankCallbackInfo* BankCbInfo = (FAkBankManager::AkBankCallbackInfo*)in_pCookie;
		FAkBankManager * BankManager = BankCbInfo->pBankManager;
		cbFunc = BankCbInfo->CallbackFunc;
		pUserCookie = BankCbInfo->pUserCookie;
		if( BankManager && in_eLoadResult == AK_Success )
		{
			FScopeLock Lock(&BankManager->m_BankManagerCriticalSection);
			// Load worked; put the bank in the list.
			BankManager->RemoveLoadedBank(BankCbInfo->pBank);
		}

		delete BankCbInfo;
	}

	if( cbFunc != NULL )
	{
		// Call the user's callback function
		cbFunc(in_bankID, in_pInMemoryBankPtr, in_eLoadResult, in_memPoolId, pUserCookie);
	}
	
}

/**
 * Unload a soundbank asynchronously
 *
 * @param in_Bank		The bank to unload
 * @param in_pfnBankCallback Callback function
 * @param in_pCookie		Callback cookie (reserved to user, passed to the callback function)
 * @return Result from ak sound engine 
 */
AKRESULT FAkAudioDevice::UnloadBank(
	class UAkAudioBank *     in_Bank,
	AkBankCallbackFunc  in_pfnBankCallback,
	void *              in_pCookie
    )
{
	if ( m_bSoundEngineInitialized )
	{
		FString name = in_Bank->GetName();
		auto szString = TCHAR_TO_AK(*name);
		if( AkBankManager != NULL )
		{
			FAkBankManager::AkBankCallbackInfo* cbInfo = new FAkBankManager::AkBankCallbackInfo(in_pfnBankCallback, in_Bank, in_pCookie, AkBankManager);

			if (cbInfo)
			{
				return AK::SoundEngine::UnloadBank(szString, NULL, AkAudioDeviceBankUnloadCallback, cbInfo);
			}
		}
		else
		{
			return AK::SoundEngine::UnloadBank(szString, NULL, in_pfnBankCallback, in_pCookie);
		}
	}
	return AK_Fail;
}

/**
 * Load the audiokinetic 'init' bank
 *
 * @return Result from ak sound engine 
 */
AKRESULT FAkAudioDevice::LoadInitBank(void)
{
	AkBankID BankID;
	auto szString = TCHAR_TO_AK(INITBANKNAME);
	return AK::SoundEngine::LoadBank( szString, AK_DEFAULT_POOL_ID, BankID );
}

bool FAkAudioDevice::LoadAllFilePackages()
{
	TArray<FString> FoundPackages;
	FString BaseBankPath = FAkAudioDevice::Get()->GetBasePath();
	bool eResult = true;
	IFileManager::Get().FindFilesRecursive(FoundPackages, *BaseBankPath, TEXT("*.pck"), true, false);
	for (FString Package : FoundPackages)
	{
		AkUInt32 PackageID;
		FString PackageName = FPaths::GetCleanFilename(Package);

		AKRESULT eTempResult = LowLevelIOHook->LoadFilePackage(TCHAR_TO_AK_OS(*PackageName), PackageID);
		if (eTempResult != AK_Success)
		{
			UE_LOG(LogAkAudio, Error, TEXT("Failed to load file package %s"), *PackageName);
			eResult = false;
		}
	}

	return eResult;
}

bool FAkAudioDevice::UnloadAllFilePackages()
{
	return LowLevelIOHook->UnloadAllFilePackages() == AK_Success;
}

/**
 * Unload the audiokinetic 'init' bank
 *
 * @return Result from ak sound engine 
 */
AKRESULT FAkAudioDevice::UnloadInitBank(void)
{
	auto szString = TCHAR_TO_AK(INITBANKNAME);
	return AK::SoundEngine::UnloadBank( szString, NULL );
}

/**
 * Load all banks currently being referenced
 */
void FAkAudioDevice::LoadAllReferencedBanks()
{
	LoadAllFilePackages();
	LoadInitBank();

	// Load any banks that are in memory that haven't been loaded yet
	for( TObjectIterator<UAkAudioBank> It; It; ++It )
	{
		if ( (*It)->AutoLoad )
			(*It)->Load();
	}
}

/**
 * Reload all banks currently being referenced
 */
void FAkAudioDevice::ReloadAllReferencedBanks()
{
	if ( m_bSoundEngineInitialized )
	{
		StopAllSounds();
		AK::SoundEngine::RenderAudio();
		FPlatformProcess::Sleep(0.1f);
		ClearBanks();
		UnloadAllFilePackages();
		LoadAllReferencedBanks();
	}
}

AkUniqueID FAkAudioDevice::GetIDFromString(const FString& in_string)
{
	if (in_string.IsEmpty())
	{
		return AK_INVALID_UNIQUE_ID;
	}
	else
	{
		return AK::SoundEngine::GetIDFromString(TCHAR_TO_ANSI(*in_string));
	}
}

/**
 * Post an event to ak soundengine
 *
 * @param in_pEvent			Event to post
 * @param in_pComponent		AkComponent on which to play the event
 * @param in_uFlags			Bitmask: see \ref AkCallbackType
 * @param in_pfnCallback	Callback function
 * @param in_pCookie		Callback cookie that will be sent to the callback function along with additional information.
 * @param in_bStopWhenOwnerDestroyed If true, then the sound should be stopped if the owning actor is destroyed
 * @return ID assigned by ak soundengine
 */
AkPlayingID FAkAudioDevice::PostEvent(
	UAkAudioEvent * in_pEvent, 
	AActor * in_pActor,
	AkUInt32 in_uFlags /*= 0*/,
	AkCallbackFunc in_pfnCallback /*= NULL*/,
	void * in_pCookie /*= NULL*/,
	bool in_bStopWhenOwnerDestroyed /*= false*/
    )
{
	if (!in_pEvent)
		return AK_INVALID_PLAYING_ID;

	return PostEvent(in_pEvent->GetName(), in_pActor, in_uFlags, in_pfnCallback, in_pCookie, in_bStopWhenOwnerDestroyed);
}

/**
 * Post an event to ak soundengine by name
 *
 * @param in_EventName		Name of the event to post
 * @param in_pComponent		AkComponent on which to play the event
 * @param in_uFlags			Bitmask: see \ref AkCallbackType
 * @param in_pfnCallback	Callback function
 * @param in_pCookie		Callback cookie that will be sent to the callback function along with additional information.
 * @param in_bStopWhenOwnerDestroyed If true, then the sound should be stopped if the owning actor is destroyed
 * @return ID assigned by ak soundengine
 */
AkPlayingID FAkAudioDevice::PostEvent(
	const FString& in_EventName, 
	AActor * in_pActor,
	AkUInt32 in_uFlags /*= 0*/,
	AkCallbackFunc in_pfnCallback /*= NULL*/,
	void * in_pCookie /*= NULL*/,
	bool in_bStopWhenOwnerDestroyed /*= false*/
    )
{
	if (m_bSoundEngineInitialized)
	{
		if (!in_pActor)
		{
			auto szEvent = TCHAR_TO_AK(*in_EventName);
			// PostEvent must be bound to a game object. Passing DUMMY_GAMEOBJ as default game object.
			return AK::SoundEngine::PostEvent(szEvent, DUMMY_GAMEOBJ, in_uFlags, in_pfnCallback, in_pCookie);
		}
		else if (!in_pActor->IsActorBeingDestroyed() && !in_pActor->IsPendingKill())
		{
			UAkComponent* pComponent = GetAkComponent(in_pActor->GetRootComponent(), FName(), NULL, EAttachLocation::KeepRelativeOffset);
			if (pComponent)
			{
				pComponent->StopWhenOwnerDestroyed = in_bStopWhenOwnerDestroyed;
				return PostEvent(in_EventName, pComponent, in_uFlags, in_pfnCallback, in_pCookie);
			}
		}
	}

	return AK_INVALID_PLAYING_ID;
}

/**
 * Post an event to ak soundengine by name
 *
 * @param in_EventName		Name of the event to post
 * @param in_pComponent		AkComponent on which to play the event
 * @param in_uFlags			Bitmask: see \ref AkCallbackType
 * @param in_pfnCallback	Callback function
 * @param in_pCookie		Callback cookie that will be sent to the callback function along with additional information.
 * @return ID assigned by ak soundengine
 */
AkPlayingID FAkAudioDevice::PostEvent(
	const FString& in_EventName,
	UAkComponent* in_pComponent,
	AkUInt32 in_uFlags /*= 0*/,
	AkCallbackFunc in_pfnCallback /*= NULL*/,
	void * in_pCookie /*= NULL*/
	)
{
	AkPlayingID playingID = AK_INVALID_PLAYING_ID;

	if (m_bSoundEngineInitialized && in_pComponent && CallbackManager)
	{
		if (in_pComponent->VerifyEventName(in_EventName) && in_pComponent->AllowAudioPlayback())
		{
			if (in_pComponent->OcclusionRefreshInterval > 0.0f)
			{
				in_pComponent->CalculateObstructionOcclusionValues(false);
			}

			auto gameObjID = in_pComponent->GetAkGameObjectID();
			auto pPackage = CallbackManager->CreateCallbackPackage(in_pfnCallback, in_pCookie, in_uFlags, gameObjID);
			if (pPackage)
			{
				auto szEventName = TCHAR_TO_AK(*in_EventName);
				playingID = AK::SoundEngine::PostEvent(szEventName, gameObjID, in_uFlags | AK_EndOfEvent, &FAkComponentCallbackManager::AkComponentCallback, pPackage);
				if (playingID == AK_INVALID_PLAYING_ID)
				{
					CallbackManager->RemoveCallbackPackage(pPackage, gameObjID);
				}
			}
		}
	}

	return playingID;
}

/** Find UAkLateReverbComponents at a given location. */
TArray<class UAkLateReverbComponent*> FAkAudioDevice::FindLateReverbComponentsAtLocation(const FVector& Loc, const UWorld* in_World, int32 depth)
{
	return FindPrioritizedComponentsAtLocation(Loc, in_World, HighestPriorityLateReverbComponentMap, depth);
}

/** Add a UAkLateReverbComponent to the linked list. */
void FAkAudioDevice::AddLateReverbComponentToPrioritizedList(class UAkLateReverbComponent* in_ComponentToAdd)
{
	AddPrioritizedComponentInList(in_ComponentToAdd, HighestPriorityLateReverbComponentMap);
}

/** Remove a UAkLateReverbComponent from the linked list. */
void FAkAudioDevice::RemoveLateReverbComponentFromPrioritizedList(class UAkLateReverbComponent* in_ComponentToRemove)
{
	RemovePrioritizedComponentFromList(in_ComponentToRemove, HighestPriorityLateReverbComponentMap);
}

bool FAkAudioDevice::WorldHasActiveRooms(UWorld* in_World)
{
	UAkRoomComponent** TopComponent = HighestPriorityRoomComponentMap.Find(in_World);

	return TopComponent && *TopComponent;
}

/** Find UAkRoomComponents at a given location. */
TArray<class UAkRoomComponent*> FAkAudioDevice::FindRoomComponentsAtLocation(const FVector& Loc, const UWorld* in_World, int32 depth)
{
	return FindPrioritizedComponentsAtLocation(Loc, in_World, HighestPriorityRoomComponentMap, depth);
}

/** Add a UAkRoomComponent to the linked list. */
void FAkAudioDevice::AddRoomComponentToPrioritizedList(class UAkRoomComponent* in_ComponentToAdd)
{
	AddPrioritizedComponentInList(in_ComponentToAdd, HighestPriorityRoomComponentMap);
}

/** Remove a UAkRoomComponent from the linked list. */
void FAkAudioDevice::RemoveRoomComponentFromPrioritizedList(class UAkRoomComponent* in_ComponentToRemove)
{
	RemovePrioritizedComponentFromList(in_ComponentToRemove, HighestPriorityRoomComponentMap);
}

/** Return true if any UAkRoomComponents have been added to the prioritized list of rooms **/
bool FAkAudioDevice::UsingSpatialAudioRooms(const UWorld* in_World)
{
	return HighestPriorityRoomComponentMap.Find(in_World) != NULL;
}


/** Find Components that are prioritized (either UAkLateReverbComponent or UAkRoomComponent) at a given location
 *
 * @param							Loc	Location at which to find Reverb Volumes
 * @param FoundComponents		Array containing all found components at this location
 */
template<class COMPONENT_TYPE>
TArray<COMPONENT_TYPE*> FAkAudioDevice::FindPrioritizedComponentsAtLocation(const FVector& Loc, const UWorld* in_World, TMap<UWorld*, COMPONENT_TYPE*>& HighestPriorityComponentMap, int32 depth)
{
	TArray<COMPONENT_TYPE*> FoundComponents;

	COMPONENT_TYPE** TopComponent = HighestPriorityComponentMap.Find(in_World);
	if (TopComponent)
	{
		COMPONENT_TYPE* CurrentComponent = *TopComponent;
		while (CurrentComponent)
		{
			if (CurrentComponent->HasEffectOnLocation(Loc) && CurrentComponent->bEnable)
			{
				FoundComponents.Add(CurrentComponent);
				if (depth != FIND_COMPONENTS_DEPTH_INFINITE && FoundComponents.Num() == depth)
					break;
			}

			CurrentComponent = CurrentComponent->NextLowerPriorityComponent;
		}
	}

	return FoundComponents;
}

/** Add a Component that is prioritized (either UAkLateReverbComponent or UAkRoomComponent) in the active linked list. */
template<class COMPONENT_TYPE>
void FAkAudioDevice::AddPrioritizedComponentInList(COMPONENT_TYPE* in_ComponentToAdd, TMap<UWorld*, COMPONENT_TYPE*>& HighestPriorityComponentMap)
{
	UWorld* CurrentWorld = in_ComponentToAdd->GetWorld();
	COMPONENT_TYPE*& HighestPriorityComponent = HighestPriorityComponentMap.FindOrAdd(CurrentWorld);

	if(HighestPriorityComponent == NULL )
	{
		// First volume in the list. Set head.
		HighestPriorityComponent = in_ComponentToAdd;
		in_ComponentToAdd->NextLowerPriorityComponent = NULL;
	}
	else
	{
		COMPONENT_TYPE* CurrentComponent = HighestPriorityComponent;
		COMPONENT_TYPE* PreviousComponent = NULL;

		while(CurrentComponent && CurrentComponent != in_ComponentToAdd) // Don't add twice to the list!
		{
			if(in_ComponentToAdd->Priority > CurrentComponent->Priority )
			{
				// Found our spot in the list!
				if (PreviousComponent)
				{
					PreviousComponent->NextLowerPriorityComponent = in_ComponentToAdd;
				}
				else
				{
					// No previous, so we are at the top.
					HighestPriorityComponent = in_ComponentToAdd;
				}

				in_ComponentToAdd->NextLowerPriorityComponent = CurrentComponent;
				return;
			}

			// List traversal.
			PreviousComponent = CurrentComponent;
			CurrentComponent = CurrentComponent->NextLowerPriorityComponent;
		}

		// We're at the end!
		if(!CurrentComponent)
		{
			// Just to make sure...
			if(PreviousComponent)
			{
				PreviousComponent->NextLowerPriorityComponent = in_ComponentToAdd;
				in_ComponentToAdd->NextLowerPriorityComponent = NULL;
			}
		}
	}
}

/** Remove a Component that is prioritized (either UAkLateReverbComponent or UAkRoomComponent) from the linked list. */
template<class COMPONENT_TYPE>
void FAkAudioDevice::RemovePrioritizedComponentFromList(COMPONENT_TYPE* in_ComponentToRemove, TMap<UWorld*, COMPONENT_TYPE*>& HighestPriorityComponentMap)
{
	UWorld* CurrentWorld = in_ComponentToRemove->GetWorld();
	COMPONENT_TYPE** HighestPriorityComponent = HighestPriorityComponentMap.Find(CurrentWorld);

	if(HighestPriorityComponent)
	{
		COMPONENT_TYPE* CurrentComponent = *HighestPriorityComponent;
		COMPONENT_TYPE* PreviousComponent = NULL;
		while(CurrentComponent)
		{
			if(CurrentComponent == in_ComponentToRemove)
			{
				// Found our volume, remove it from the list
				if(PreviousComponent)
				{
					PreviousComponent->NextLowerPriorityComponent = CurrentComponent->NextLowerPriorityComponent;
				}
				else
				{
					// The one to remove was the highest, reset the head.
					*HighestPriorityComponent = CurrentComponent->NextLowerPriorityComponent;
				}

				break;
			}

			PreviousComponent = CurrentComponent;
			CurrentComponent = CurrentComponent->NextLowerPriorityComponent;
		}

		// Don't leave dangling pointers.
		in_ComponentToRemove->NextLowerPriorityComponent = NULL;

		if( *HighestPriorityComponent == NULL )
		{
			HighestPriorityComponentMap.Remove(CurrentWorld);
		}
	}
}

void FAkAudioDevice::UpdateAllSpatialAudioRooms(UWorld* InWorld)
{
	UAkRoomComponent** ppRoom = HighestPriorityRoomComponentMap.Find(InWorld);
#ifdef AK_ENABLE_PORTALS
	if (ppRoom)
	{
		for (UAkRoomComponent* pRoom = *ppRoom; pRoom != nullptr; pRoom = pRoom->NextLowerPriorityComponent)
		{
			pRoom->AddSpatialAudioRoom();
		}
	}
#endif
}

void FAkAudioDevice::AddSpatialAudioPortal(const AAkAcousticPortal* in_Portal)
{
	if(IsRunningCommandlet())
		return;

#ifdef AK_ENABLE_PORTALS
	AkPortalID portalID = AkPortalID(in_Portal);

	FString nameStr = in_Portal->GetFName().ToString();

	FVector location = in_Portal->GetActorLocation();

	FRotator rotation = in_Portal->K2_GetActorRotation();
	FVector front = rotation.RotateVector(FVector(0.f, 1.f, 0.f));
	FVector up = rotation.RotateVector(FVector(0.f, 0.f, 1.f));

	AkPortalParams params;
	FVectorToAKVector(front, params.Front);
	FVectorToAKVector(up, params.Up);
	FVectorToAKVector(location, params.Center);

	params.bEnabled = in_Portal->GetCurrentState() == AkAcousticPortalState::Open;
	params.fGain = in_Portal->Gain;
	params.strName = *nameStr;

	AK::SpatialAudio::AddPortal(portalID, params);

	UpdateAllSpatialAudioRooms(in_Portal->GetWorld());
#endif
}

void FAkAudioDevice::RemoveSpatialAudioPortal(const AAkAcousticPortal* in_Portal)
{
	if (IsRunningCommandlet())
		return;

#ifdef AK_ENABLE_PORTALS
	AkPortalID portalID = AkPortalID(in_Portal);
	AK::SpatialAudio::RemovePortal(portalID);

	UpdateAllSpatialAudioRooms(in_Portal->GetWorld());
#endif
}


/** Get a sorted list of AkAuxSendValue at a location
 *
 * @param					Loc	Location at which to find Reverb Volumes
 * @param AkReverbVolumes	Array of AkAuxSendValue at this location
 */
void FAkAudioDevice::GetAuxSendValuesAtLocation(FVector Loc, TArray<AkAuxSendValue>& AkAuxSendValues, const UWorld* in_World)
{
	// Check if there are AkReverbVolumes at this location
	TArray<UAkLateReverbComponent*> FoundComponents = FindPrioritizedComponentsAtLocation(Loc, in_World, HighestPriorityLateReverbComponentMap);

	// Sort the found Volumes
	if (FoundComponents.Num() > 1)
	{
		FoundComponents.Sort([](const UAkLateReverbComponent& A, const UAkLateReverbComponent& B)
		{
			return A.Priority > B.Priority;
		});
	}

	// Apply the found Aux Sends
	AkAuxSendValue	TmpSendValue;
	// Build a list to set as AuxBusses
	for (uint8 Idx = 0; Idx < FoundComponents.Num() && Idx < MaxAuxBus; Idx++)
	{
		TmpSendValue.listenerID = AK_INVALID_GAME_OBJECT;
		TmpSendValue.auxBusID = FoundComponents[Idx]->GetAuxBusId();
		TmpSendValue.fControlValue = FoundComponents[Idx]->SendLevel;
		AkAuxSendValues.Add(TmpSendValue);
	}
}

/**
 * Post an event and location to ak soundengine
 *
 * @param in_pEvent			Name of the event to post
 * @param in_Location		Location at which to play the event
 * @return ID assigned by ak soundengine
 */
AkPlayingID FAkAudioDevice::PostEventAtLocation(
	UAkAudioEvent * in_pEvent,
	FVector in_Location,
	FRotator in_Orientation,
	UWorld* in_World)
{
	AkPlayingID playingID = AK_INVALID_PLAYING_ID;

	if ( in_pEvent )
	{
		playingID = PostEventAtLocation(in_pEvent->GetName(), in_Location, in_Orientation, in_World);
	}

	return playingID;
}

/**
 * Post an event by name at location to ak soundengine
 *
 * @param in_pEvent			Name of the event to post
 * @param in_Location		Location at which to play the event
 * @return ID assigned by ak soundengine
 */
AkPlayingID FAkAudioDevice::PostEventAtLocation(
	const FString& in_EventName,
	FVector in_Location,
	FRotator in_Orientation,
	UWorld* in_World)
{
	AkPlayingID playingID = AK_INVALID_PLAYING_ID;

	if ( m_bSoundEngineInitialized )
	{
		const AkGameObjectID objId = (AkGameObjectID)&in_EventName;
		AkRegisterGameObjectInternal(objId, in_EventName);

		{
			AkEmitterSettings settings;
			settings.useImageSources = false;
			settings.reflectAuxBusID = AK_INVALID_UNIQUE_ID;
			settings.name = *in_EventName;
			AK::SpatialAudio::RegisterEmitter(objId, settings);
		}

		TArray<AkAuxSendValue> AkReverbVolumes;
		GetAuxSendValuesAtLocation(in_Location, AkReverbVolumes, in_World);
		SetAuxSends(objId, AkReverbVolumes);


		AkRoomID RoomID;
		TArray<UAkRoomComponent*> AkRooms = FindPrioritizedComponentsAtLocation(in_Location, in_World, HighestPriorityRoomComponentMap, 1);
		if (AkRooms.Num() > 0)
			RoomID = AkRooms[0]->GetRoomID();

		SetInSpatialAudioRoom(objId, RoomID);

		AkSoundPosition soundpos;
		FQuat tempQuat(in_Orientation);
		FVectorsToAKTransform(in_Location, tempQuat.GetForwardVector(), tempQuat.GetUpVector(), soundpos);

		AK::SpatialAudio::SetEmitterPosition(objId, soundpos, NULL, 0);

		auto szEventName = TCHAR_TO_AK(*in_EventName);
		playingID = AK::SoundEngine::PostEvent(szEventName, objId);

		AK::SoundEngine::UnregisterGameObj( objId );
	}
	return playingID;
}

UAkComponent* FAkAudioDevice::SpawnAkComponentAtLocation( class UAkAudioEvent* in_pAkEvent, class UAkAuxBus* EarlyReflectionsBus, FVector Location, FRotator Orientation, bool AutoPost, const FString& EventName, const FString& EarlyReflectionsBusName, bool AutoDestroy, UWorld* in_World)
{
	UAkComponent * AkComponent = NULL;
	if (in_World)
	{
		AkComponent = NewObject<UAkComponent>(in_World->GetWorldSettings());
	}
	else
	{
		AkComponent = NewObject<UAkComponent>();
	}

	if( AkComponent )
	{
		AkComponent->AkAudioEvent = in_pAkEvent;
		AkComponent->EventName = EventName;
		AkComponent->SetWorldLocationAndRotation(Location, Orientation.Quaternion());
		if(in_World)
		{
			AkComponent->RegisterComponentWithWorld(in_World);
		}

		AkComponent->SetAutoDestroy(AutoDestroy);

		AkComponent->UseEarlyReflections(EarlyReflectionsBus, true, true, true, true, true, true, true, EarlyReflectionsBusName);

		if(AutoPost)
		{
			if (AkComponent->PostAssociatedAkEvent() == AK_INVALID_PLAYING_ID && AutoDestroy)
			{
				AkComponent->ConditionalBeginDestroy();
				AkComponent = NULL;
			}
		}
	}

	return AkComponent;
}

/**
 * Post a trigger to ak soundengine
 *
 * @param in_pszTrigger		Name of the trigger
 * @param in_pAkComponent	AkComponent on which to post the trigger
 * @return Result from ak sound engine
 */
AKRESULT FAkAudioDevice::PostTrigger( 
	const TCHAR * in_pszTrigger,
	AActor * in_pActor
	)
{
	AkGameObjectID GameObjID = AK_INVALID_GAME_OBJECT;
	AKRESULT eResult = GetGameObjectID( in_pActor, GameObjID );
	if ( m_bSoundEngineInitialized && eResult == AK_Success)
	{
		auto szTrigger = TCHAR_TO_AK(in_pszTrigger);
		eResult = AK::SoundEngine::PostTrigger( szTrigger, GameObjID );
	}
	return eResult;
} 

/**
 * Set a RTPC in ak soundengine
 *
 * @param in_pszRtpcName	Name of the RTPC
 * @param in_value			Value to set
 * @param in_pActor			Actor on which to set the RTPC
 * @return Result from ak sound engine
 */
AKRESULT FAkAudioDevice::SetRTPCValue( 
	const TCHAR * in_pszRtpcName,
	AkRtpcValue in_value,
	int32 in_interpolationTimeMs = 0,
	AActor * in_pActor = NULL
	)
{
	AKRESULT eResult = AK_Success;
	if ( m_bSoundEngineInitialized )
	{
		AkGameObjectID GameObjID = AK_INVALID_GAME_OBJECT; // RTPC at global scope is supported
		if ( in_pActor )
		{
			eResult = GetGameObjectID( in_pActor, GameObjID );
			if ( eResult != AK_Success )
				return eResult;
		}

		auto szRtpcName = TCHAR_TO_AK(in_pszRtpcName);
		eResult = AK::SoundEngine::SetRTPCValue( szRtpcName, in_value, GameObjID, in_interpolationTimeMs );
	}
	return eResult;
}

/**
 * Set a state in ak soundengine
 *
 * @param in_pszStateGroup	Name of the state group
 * @param in_pszState		Name of the state
 * @return Result from ak sound engine
 */
AKRESULT FAkAudioDevice::SetState( 
	const TCHAR * in_pszStateGroup,
	const TCHAR * in_pszState
    )
{
	AKRESULT eResult = AK_Success;
	if ( m_bSoundEngineInitialized )
	{
		auto szStateGroup = TCHAR_TO_AK(in_pszStateGroup);
		auto szState = TCHAR_TO_AK(in_pszState);
		eResult = AK::SoundEngine::SetState( szStateGroup, szState );
	}
	return eResult;
}

/**
 * Set a switch in ak soundengine
 *
 * @param in_pszSwitchGroup	Name of the switch group
 * @param in_pszSwitchState	Name of the switch
 * @param in_pComponent		AkComponent on which to set the switch
 * @return Result from ak sound engine
 */
AKRESULT FAkAudioDevice::SetSwitch( 
	const TCHAR * in_pszSwitchGroup,
	const TCHAR * in_pszSwitchState,
	AActor * in_pActor
	)
{
	AkGameObjectID GameObjID = DUMMY_GAMEOBJ;
	// Switches must be bound to a game object. passing DUMMY_GAMEOBJ as default game object.
	AKRESULT eResult = GetGameObjectID( in_pActor, GameObjID );
	if ( m_bSoundEngineInitialized && eResult == AK_Success)
	{
		auto szSwitchGroup = TCHAR_TO_AK(in_pszSwitchGroup);
		auto szSwitchState = TCHAR_TO_AK(in_pszSwitchState);
		eResult = AK::SoundEngine::SetSwitch( szSwitchGroup, szSwitchState, GameObjID );
	}
	return eResult;
}
	
/**
 * Activate an occlusion
 *
 * @param in_bActivate		If true, the occlusion should be activated
 * @param in_pComponent		AkComponent on which to activate the occlusion
 * @return Result from ak sound engine
 */
AKRESULT FAkAudioDevice::SetOcclusionObstruction(
	const UAkComponent * const in_pEmitter,
	const UAkComponent * const in_pListener,
	const float in_Obstruction,
	const float in_Occlusion
	)
{
	AKRESULT eResult = AK_Success;

	if (m_bSoundEngineInitialized)
	{
		const AkGameObjectID emitterId = in_pEmitter ? in_pEmitter->GetAkGameObjectID() : DUMMY_GAMEOBJ;
		const AkGameObjectID listenerId = in_pListener ? in_pListener->GetAkGameObjectID() : DUMMY_GAMEOBJ;
		eResult = AK::SoundEngine::SetObjectObstructionAndOcclusion(emitterId, listenerId, in_Obstruction, in_Occlusion);
	}

	return eResult;
}

/**
 * Set auxiliary sends
 *
 * @param in_GameObjId		Wwise Game Object ID
 * @param in_AuxSendValues	Array of AkAuxSendValue, containins all Aux Sends to set on the game objectt
 * @return Result from ak sound engine
 */
AKRESULT FAkAudioDevice::SetAuxSends(
	const AkGameObjectID in_GameObjId,
	TArray<AkAuxSendValue>& in_AuxSendValues
	)
{
	AKRESULT eResult = AK_Success;
	if ( m_bSoundEngineInitialized )
	{
		eResult = AK::SpatialAudio::SetEmitterAuxSendValues(in_GameObjId, in_AuxSendValues.GetData(), in_AuxSendValues.Num());
	}

	return eResult;
}


/**
* Set spatial audio room
*
* @param in_GameObjId		Wwise Game Object ID
* @param in_RoomID	ID of the room that the game object is inside.
* @return Result from ak sound engine
*/
AKRESULT FAkAudioDevice::SetInSpatialAudioRoom(
	const AkGameObjectID in_GameObjId,
	AkRoomID in_RoomID
)
{
	AKRESULT eResult = AK_Success;
#ifdef AK_ENABLE_ROOMS
	if (m_bSoundEngineInitialized)
	{
		eResult = AK::SpatialAudio::SetGameObjectInRoom(in_GameObjId, in_RoomID);
	}
#endif
	return eResult;
}

AKRESULT FAkAudioDevice::SetBusConfig(
	const FString&	in_BusName,
	AkChannelConfig	in_Config
	)
{
	AKRESULT eResult = AK_Fail;
	if (in_BusName.IsEmpty())
	{
		return eResult;
	}

	if (m_bSoundEngineInitialized)
	{
		AkUniqueID BusId = GetIDFromString(in_BusName);
		eResult = AK::SoundEngine::SetBusConfig(BusId, in_Config);
	}

	return eResult;
}

AKRESULT FAkAudioDevice::SetPanningRule(
	AkPanningRule		in_ePanningRule
	)
{
	AKRESULT eResult = AK_Fail;
	if (m_bSoundEngineInitialized)
	{
		eResult = AK::SoundEngine::SetPanningRule(in_ePanningRule);
	}

	return eResult;
}

AKRESULT FAkAudioDevice::SetGameObjectOutputBusVolume(
	const UAkComponent* in_pEmitter,
	const UAkComponent* in_pListener,
	float in_fControlValue	
	)
{
	AKRESULT eResult = AK_Success;

	if (m_bSoundEngineInitialized)
	{
		const AkGameObjectID emitterId = in_pEmitter ? in_pEmitter->GetAkGameObjectID() : DUMMY_GAMEOBJ;
		const AkGameObjectID listenerId = in_pListener ? in_pListener->GetAkGameObjectID() : DUMMY_GAMEOBJ;
		eResult = AK::SoundEngine::SetGameObjectOutputBusVolume(emitterId, listenerId, in_fControlValue);
	}

	return eResult;
}



/**
 * Obtain a pointer to the singleton instance of FAkAudioDevice
 *
 * @return Pointer to the singleton instance of FAkAudioDevice
 */
FAkAudioDevice * FAkAudioDevice::Get()
{
	static FName AkAudioName = TEXT("AkAudio");
	if (m_EngineExiting && !FModuleManager::Get().IsModuleLoaded(AkAudioName))
	{
		return nullptr;
	}

	if (FAkAudioModule::AkAudioModuleIntance == nullptr)
	{
		FModuleManager::LoadModulePtr<FAkAudioModule>(AkAudioName);
	}

	return FAkAudioModule::AkAudioModuleIntance ? FAkAudioModule::AkAudioModuleIntance->GetAkAudioDevice() : nullptr;
}

/**
 * Stop all audio associated with a game object
 *
 * @param in_GameObjID		ID of the game object
 */
void FAkAudioDevice::StopGameObject( UAkComponent * in_pComponent )
{
	AkGameObjectID gameObjId = DUMMY_GAMEOBJ;
	if ( in_pComponent )
	{
		gameObjId = in_pComponent->GetAkGameObjectID();
	}
	if ( m_bSoundEngineInitialized )
	{
		AK::SoundEngine::StopAll( gameObjId );
	}
}

/**
 * Stop all audio associated with a playing ID
 *
 * @param in_playingID		Playing ID to stop
 */
void FAkAudioDevice::StopPlayingID( AkPlayingID in_playingID )
{
	if ( m_bSoundEngineInitialized )
	{
		AK::SoundEngine::StopPlayingID( in_playingID );
	}
}


/**
 * Register an ak audio component with ak sound engine
 *
 * @param in_pComponent		Pointer to the component to register
 */
void FAkAudioDevice::RegisterComponent( UAkComponent * in_pComponent )
{
	if (m_bSoundEngineInitialized && in_pComponent)
	{
		if (in_pComponent->UseDefaultListeners())
			m_defaultEmitters.Add(in_pComponent);

		FString WwiseGameObjectName = TEXT("");
		in_pComponent->GetAkGameObjectName(WwiseGameObjectName);

		const AkGameObjectID gameObjId = in_pComponent->GetAkGameObjectID();
		AkRegisterGameObjectInternal(gameObjId, WwiseGameObjectName);

		RegisterSpatialAudioEmitter(in_pComponent);

		if (CallbackManager != nullptr)
			CallbackManager->RegisterGameObject(gameObjId);
	}
}

/**
 * Unregister an ak audio component with ak sound engine
 *
 * @param in_pComponent		Pointer to the component to unregister
 */
void FAkAudioDevice::UnregisterComponent( UAkComponent * in_pComponent )
{
	if (m_bSoundEngineInitialized && in_pComponent)
	{
		const AkGameObjectID gameObjId = in_pComponent->GetAkGameObjectID();
		AK::SoundEngine::UnregisterGameObj(gameObjId);

		if (CallbackManager != nullptr)
		{
			CallbackManager->UnregisterGameObject(gameObjId);
		}

		UnregisterSpatialAudioEmitter(in_pComponent);
	}

	if (m_defaultListeners.Contains(in_pComponent))
	{
		for (auto& Emitter : m_defaultEmitters)
		{
			Emitter->OnListenerUnregistered(in_pComponent);
		}

		m_defaultListeners.Remove(in_pComponent);
		UpdateDefaultActiveListeners();
	}

	if (in_pComponent->UseDefaultListeners())
	{
		m_defaultEmitters.Remove(in_pComponent);
	}

	check(!m_defaultListeners.Contains(in_pComponent) && !m_defaultEmitters.Contains(in_pComponent));
}

/**
* Register an ak audio component with ak spatial audio
*
* @param in_pComponent		Pointer to the component to register
*/
void FAkAudioDevice::RegisterSpatialAudioEmitter(UAkComponent * in_pComponent)
{ 
	AkEmitterSettings settings;
	
	settings.reflectionsOrder = in_pComponent->EarlyReflectionOrder;
	settings.reflectionsAuxBusGain = in_pComponent->EarlyReflectionBusSendGain;
	settings.useImageSources = in_pComponent->EnableSpotReflectors;
	settings.reflectionMaxPathLength = in_pComponent->EarlyReflectionMaxPathLength;
	settings.reflectorFilterMask = (AkUInt32) in_pComponent->ReflectionFilter;

	if (in_pComponent->EarlyReflectionAuxBus)
		settings.reflectAuxBusID = in_pComponent->EarlyReflectionAuxBus->GetAuxBusId();
	else
	{
		if(!in_pComponent->EarlyReflectionAuxBusName.IsEmpty())
			settings.reflectAuxBusID = AK::SoundEngine::GetIDFromString(TCHAR_TO_ANSI(*in_pComponent->EarlyReflectionAuxBusName));
		else
			settings.reflectAuxBusID = AK_INVALID_UNIQUE_ID;
	}

	FString name = in_pComponent->GetFName().ToString();
	settings.name = *name;

	AK::SpatialAudio::RegisterEmitter(in_pComponent->GetAkGameObjectID(), settings);
}

AKRESULT FAkAudioDevice::AddGeometrySet(AkGeometrySetID AcousticZoneID, AkTriangle* Triangles, AkUInt32 NumTriangles)
{
	AKRESULT eResult = AK_Fail;
	if (m_bSoundEngineInitialized)
	{
		eResult = AK::SpatialAudio::AddGeometrySet(AcousticZoneID, Triangles, NumTriangles);
	}

	return eResult;
}

AKRESULT FAkAudioDevice::RemoveGeometrySet(AkGeometrySetID AcousticZoneID)
{
	AKRESULT eResult = AK_Fail;
	if (m_bSoundEngineInitialized)
	{
		eResult = AK::SpatialAudio::RemoveGeometrySet(AcousticZoneID);
	}

	return eResult;
}

/**
* Unregister an ak audio component with ak spatial audio
*
* @param in_pComponent		Pointer to the component to unregister
*/
void FAkAudioDevice::UnregisterSpatialAudioEmitter(UAkComponent * in_pComponent)
{
	AK::SpatialAudio::UnregisterEmitter(in_pComponent->GetAkGameObjectID());
}

void FAkAudioDevice::UpdateDefaultActiveListeners()
{
	if (m_bSoundEngineInitialized)
	{
		if (m_defaultListeners.Num() > 0)
		{
			AkGameObjectID* pListenerIds = (AkGameObjectID*)alloca(m_defaultListeners.Num() * sizeof(AkGameObjectID));
			int index = 0;
			for (auto it = m_defaultListeners.CreateConstIterator(); it; ++it)
				pListenerIds[index++] = (*it)->GetAkGameObjectID();

			AK::SoundEngine::SetDefaultListeners(pListenerIds, m_defaultListeners.Num());
		}
		else
		{
			AK::SoundEngine::SetDefaultListeners(nullptr, 0);
		}
	}
}

AKRESULT FAkAudioDevice::SetEmitterPosition(UAkComponent* in_pListener, const AkTransform& in_SoundPosition, AkTransform* in_VirtualPositions, uint32 in_NumVirtualPositions)
{
	if (m_bSoundEngineInitialized)
	{
		return AK::SpatialAudio::SetEmitterPosition(in_pListener->GetAkGameObjectID(), in_SoundPosition, in_VirtualPositions, in_NumVirtualPositions);
	}

	return AK_Fail;
}

AKRESULT FAkAudioDevice::AddRoom(UAkRoomComponent* in_pRoom, const AkRoomParams& in_RoomParams)
{
	if (m_bSoundEngineInitialized)
	{
		return AK::SpatialAudio::AddRoom(in_pRoom->GetRoomID(), in_RoomParams);
	}

	return AK_Fail;
}


AKRESULT FAkAudioDevice::RemoveRoom(UAkRoomComponent* in_pRoom)
{
	if (m_bSoundEngineInitialized)
	{
		return AK::SpatialAudio::RemoveRoom(in_pRoom->GetRoomID());
	}

	return AK_Fail;
}

AKRESULT FAkAudioDevice::AddImageSource(AkReflectImageSource& in_ImageSourceInfo, AkUniqueID in_AuxBusID, AkRoomID in_RoomID, const FString& in_Name)
{
	if (m_bSoundEngineInitialized)
	{
		AK::SpatialAudio::String name = *in_Name;
		in_ImageSourceInfo.uNumChar = strlen(TCHAR_TO_ANSI(*in_Name));

		return AK::SpatialAudio::AddImageSource(in_ImageSourceInfo, in_AuxBusID, in_RoomID, AK_INVALID_GAME_OBJECT, name);
	}

	return AK_Fail;
}

AKRESULT FAkAudioDevice::RemoveImageSource(AAkSpotReflector* in_pSpotReflector, AkUniqueID in_AuxBusID)
{
	if (m_bSoundEngineInitialized)
	{
		return AK::SpatialAudio::RemoveImageSource((AkImageSourceID)(uint64)in_pSpotReflector, in_AuxBusID);
	}

	return AK_Fail;
}

void FAkAudioDevice::SetListeners(UAkComponent* in_pEmitter, const TArray<UAkComponent*>& in_listenerSet)
{
	check(!in_pEmitter->UseDefaultListeners());

	m_defaultEmitters.Remove(in_pEmitter); //This emitter is no longer using the default listener set.

	if (in_listenerSet.Num() > 0)
	{
		AkGameObjectID* pListenerIds = (AkGameObjectID*)alloca(in_listenerSet.Num() * sizeof(AkGameObjectID));
		int index = 0;
		for (auto it = in_listenerSet.CreateConstIterator(); it; ++it)
			pListenerIds[index++] = (*it)->GetAkGameObjectID();

		AK::SoundEngine::SetListeners(in_pEmitter->GetAkGameObjectID(), pListenerIds, in_listenerSet.Num());
	}
	else
	{
		AK::SoundEngine::SetListeners(in_pEmitter->GetAkGameObjectID(), nullptr, 0);
	}
}


UAkComponent* FAkAudioDevice::GetAkComponent( class USceneComponent* AttachToComponent, FName AttachPointName, const FVector * Location, EAttachLocation::Type LocationType )
{
	if (!AttachToComponent)
	{
		return NULL;
	}

	UAkComponent* AkComponent = NULL;
	FAttachmentTransformRules AttachRules = FAttachmentTransformRules::KeepRelativeTransform;

	if( GEngine && AK::SoundEngine::IsInitialized())
	{
		AActor * Actor = AttachToComponent->GetOwner();
		if( Actor ) 
		{
			if( Actor->IsPendingKill() )
			{
				// Avoid creating component if we're trying to play a sound on an already destroyed actor.
				return NULL;
			}

			TArray<UAkComponent*> AkComponents;
			Actor->GetComponents(AkComponents);
			for ( int32 CompIdx = 0; CompIdx < AkComponents.Num(); CompIdx++ )
			{
				UAkComponent* pCompI = AkComponents[CompIdx];
				if ( pCompI && pCompI->IsRegistered() )
				{
					if ( AttachToComponent == pCompI )
					{
						return pCompI;
					}

					if ( AttachToComponent != pCompI->GetAttachParent() 
						|| AttachPointName != pCompI->GetAttachSocketName() )
					{
						continue;
					}

					// If a location is requested, try to match location.
					if ( Location )
					{
						if (LocationType == EAttachLocation::KeepWorldPosition)
						{
							AttachRules = FAttachmentTransformRules::KeepWorldTransform;
							if ( !FVector::PointsAreSame(*Location, pCompI->GetComponentLocation()) )
								continue;
						}
						else
						{
							AttachRules = FAttachmentTransformRules::KeepRelativeTransform;
							if ( !FVector::PointsAreSame(*Location, pCompI->RelativeLocation) )
								continue;
						}
					}

					// AkComponent found which exactly matches the attachment: reuse it.
					return pCompI;
				}
			}
		}
		else
		{
			// Try to find if there is an AkComponent attached to AttachToComponent (will be the case if AttachToComponent has no owner)
			const TArray<USceneComponent*> AttachChildren = AttachToComponent->GetAttachChildren();
			for(int32 CompIdx = 0; CompIdx < AttachChildren.Num(); CompIdx++)
			{
				UAkComponent* pCompI = Cast<UAkComponent>(AttachChildren[CompIdx]);
				if ( pCompI && pCompI->IsRegistered() )
				{
					// There is an associated AkComponent to AttachToComponent, no need to add another one.
					return pCompI;
				}
			}
		}

		if ( AkComponent == NULL )
		{
			if( Actor )
			{
				AkComponent = NewObject<UAkComponent>(Actor);
			}
			else
			{
				AkComponent = NewObject<UAkComponent>();
			}
		}

		check( AkComponent );

		if (Location)
		{
			if (LocationType == EAttachLocation::KeepWorldPosition)
			{
				AttachRules = FAttachmentTransformRules::KeepWorldTransform;
				AkComponent->SetWorldLocation(*Location);
			}
			else
			{
				AttachRules = FAttachmentTransformRules::KeepRelativeTransform;
				AkComponent->SetRelativeLocation(*Location);
			}
		}

		AkComponent->RegisterComponentWithWorld(AttachToComponent->GetWorld());
		AkComponent->AttachToComponent(AttachToComponent, AttachRules, AttachPointName);
	}

	return( AkComponent );
}


/**
 * Cancel the callback cookie for a dispatched event 
 *
 * @param in_cookie			The cookie to cancel
 */
void FAkAudioDevice::CancelEventCallbackCookie( void* in_cookie )
{
	if ( m_bSoundEngineInitialized )
	{
		AK::SoundEngine::CancelEventCallbackCookie( in_cookie );
	}
}

AKRESULT FAkAudioDevice::SetAttenuationScalingFactor(AActor* Actor, float ScalingFactor)
{
	AKRESULT eResult = AK_Fail;
	if ( m_bSoundEngineInitialized )
	{
		AkGameObjectID GameObjID = DUMMY_GAMEOBJ;
		eResult = GetGameObjectID( Actor, GameObjID );
		if( eResult == AK_Success )
		{
			eResult = AK::SoundEngine::SetScalingFactor(GameObjID, ScalingFactor);
		}
	}

	return eResult;
}

AKRESULT FAkAudioDevice::SetAttenuationScalingFactor(UAkComponent* AkComponent, float ScalingFactor)
{
	AKRESULT eResult = AK_Fail;
	if ( m_bSoundEngineInitialized && AkComponent)
	{
		eResult = AK::SoundEngine::SetScalingFactor(AkComponent->GetAkGameObjectID(), ScalingFactor);
	}
	return eResult;
}


#ifdef AK_SOUNDFRAME

/**
 * Called when sound frame connects 
 *
 * @param in_bConnect		True if Wwise is connected, False if it is not
 */
void FAkAudioDevice::OnConnect( 
		bool in_bConnect		///< True if Wwise is connected, False if it is not
		)
{
	if ( in_bConnect == true )
	{
		UE_LOG(	LogAkAudio,
			Log,
			TEXT("SoundFrame successfully connected."));
	}
	else
	{
		UE_LOG(	LogAkAudio,
			Log,
			TEXT("SoundFrame failed to connect."));
	}
}
	
/**
 * Event notification. This method is called when an event is added, removed, changed, or pushed.
 *
 * @param in_eNotif			Notification type
 * @param in_eventID		Unique ID of the event
 */	
void FAkAudioDevice::OnEventNotif( 
	Notif in_eNotif,
	AkUniqueID in_eventID
	)	
{
#if WITH_EDITORONLY_DATA
	if ( in_eNotif == IClient::Notif_Changed && !IsRunningGame() )
	{
		FEditorSupportDelegates::RedrawAllViewports.Broadcast();
	}
#endif
}

/**
 * Sound object notification. This method is called when a sound object is added, removed, or changed.
 *
 * @param in_eNotif			Notification type
 * @param in_soundObjectID	Unique ID of the sound object
 */
void FAkAudioDevice::OnSoundObjectNotif( 
	Notif in_eNotif,
	AkUniqueID in_soundObjectID
	)
{
#if WITH_EDITORONLY_DATA
	if ( in_eNotif == IClient::Notif_Changed && !IsRunningGame() )
	{
		FEditorSupportDelegates::RedrawAllViewports.Broadcast();
	}
#endif
}

#endif

#if PLATFORM_WINDOWS || PLATFORM_MAC
static void UELocalOutputFunc(
	AK::Monitor::ErrorCode in_eErrorCode,
	const AkOSChar* in_pszError,
	AK::Monitor::ErrorLevel in_eErrorLevel,
	AkPlayingID in_playingID,
	AkGameObjectID in_gameObjID )
{
    wchar_t* szWideError;
#if PLATFORM_MAC
    CONVERT_OSCHAR_TO_WIDE(in_pszError, szWideError);
#else
    szWideError = (wchar_t*)in_pszError;
#endif
    
	if( !IsRunningCommandlet() )
	{
		if ( in_eErrorLevel == AK::Monitor::ErrorLevel_Message )
		{
			UE_LOG( LogAkAudio, Log, TEXT("%s"), szWideError );
		}
		else
		{
			UE_LOG( LogAkAudio, Error, TEXT("%s"), szWideError );
		}
	}
}
#endif

bool FAkAudioDevice::EnsureInitialized()
{
	// We don't want sound in those cases.
	if (FParse::Param(FCommandLine::Get(), TEXT("nosound")) || FApp::IsBenchmarking() || IsRunningDedicatedServer() || IsRunningCommandlet())
	{
		return false;
	}

	if ( m_bSoundEngineInitialized )
	{
		return true;
	}

#if PLATFORM_XBOXONE
#ifndef AK_OPTIMIZED
	try
	{
		// Make sure networkmanifest.xml is loaded by instantiating a Microsoft.Xbox.Networking object.
		auto secureDeviceAssociationTemplate = Windows::Xbox::Networking::SecureDeviceAssociationTemplate::GetTemplateByName( "WwiseDiscovery" );
	}
	catch(...)
	{
		UE_LOG(LogAkAudio, Log, TEXT("Could not find Wwise network ports in AppxManifest. Network communication will not be available."));
	}
#endif
#endif

	UE_LOG(	LogAkAudio,
			Log,
			TEXT("Wwise(R) SDK Version %d.%d.%d Build %d. Copyright (c) 2006-%d Audiokinetic Inc."),
			AK_WWISESDK_VERSION_MAJOR, 
			AK_WWISESDK_VERSION_MINOR, 
			AK_WWISESDK_VERSION_SUBMINOR, 
			AK_WWISESDK_VERSION_BUILD,
			AK_WWISESDK_VERSION_MAJOR );

	AkMemSettings memSettings;
	memSettings.uMaxNumPools = 256;

	if ( AK::MemoryMgr::Init( &memSettings ) != AK_Success )
	{
        return false;
	}

	AkStreamMgrSettings stmSettings;
	AK::StreamMgr::GetDefaultSettings( stmSettings );
	AK::IAkStreamMgr * pStreamMgr = AK::StreamMgr::Create( stmSettings );
	if ( ! pStreamMgr )
	{
        return false;
	}

	AkDeviceSettings deviceSettings;
	AK::StreamMgr::GetDefaultDeviceSettings( deviceSettings );

	deviceSettings.uGranularity = AK_UNREAL_IO_GRANULARITY;
	deviceSettings.uSchedulerTypeFlags = AK_SCHEDULER_DEFERRED_LINED_UP;
	deviceSettings.uMaxConcurrentIO = AK_UNREAL_MAX_CONCURRENT_IO;

#if PLATFORM_MAC
	deviceSettings.threadProperties.uStackSize = 4 * 1024 * 1024; // From FRunnableThreadMac
#elif PLATFORM_APPLE
	deviceSettings.threadProperties.uStackSize = 256 * 1024; // From FRunnableThreadApple
#endif

	LowLevelIOHook = new CAkFilePackageLowLevelIO<CAkUnrealIOHookDeferred, CAkDiskPackage, AkFileCustomParamPolicy>();
	if (!LowLevelIOHook->Init( deviceSettings ))
	{
		delete LowLevelIOHook;
		LowLevelIOHook = nullptr;
        return false;
	}

	AkInitSettings initSettings;
	AkPlatformInitSettings platformInitSettings;
	AK::SoundEngine::GetDefaultInitSettings( initSettings );
	AK::SoundEngine::GetDefaultPlatformInitSettings( platformInitSettings );

#if !(PLATFORM_ANDROID || PLATFORM_IOS)
	// Keep default size on mobile platforms.
	platformInitSettings.uLEngineDefaultPoolSize = 128 * 1024 * 1024;
#endif

#if PLATFORM_ANDROID
	extern JavaVM* GJavaVM;
	platformInitSettings.pJavaVM = GJavaVM;
	platformInitSettings.jNativeActivity = FAndroidApplication::GetGameActivityThis();
#endif
#if defined AK_WIN
	// OCULUS_START vhamm audio redirect with build of wwise >= 2015.1.5
	if (IHeadMountedDisplayModule::IsAvailable())
	{
		FString AudioOutputDevice;
		IHeadMountedDisplayModule& Hmd = IHeadMountedDisplayModule::Get();
		AudioOutputDevice = Hmd.GetAudioOutputDevice();
		if(!AudioOutputDevice.IsEmpty())
		{
			platformInitSettings.idAudioDevice = AK::GetDeviceIDFromName((wchar_t*) *AudioOutputDevice);
		}
	}
	// OCULUS_END

#endif

	if ( AK::SoundEngine::Init( &initSettings, &platformInitSettings ) != AK_Success )
	{
        return false;
	}

	AkMusicSettings musicInit;
	AK::MusicEngine::GetDefaultInitSettings( musicInit );

	if ( AK::MusicEngine::Init( &musicInit ) != AK_Success )
	{
        return false;
	}

	AkSpatialAudioInitSettings spatialAudioInit;
	if ( AK::SpatialAudio::Init(spatialAudioInit) != AK_Success)
	{
		return false;
	}

#if PLATFORM_WINDOWS || PLATFORM_MAC
	// Enable AK error redirection to UE log.
	AK::Monitor::SetLocalOutput( AK::Monitor::ErrorLevel_All, UELocalOutputFunc );
#endif

#ifndef AK_OPTIMIZED
#if !PLATFORM_LINUX
    //
    // Initialize communications, not in release build, and only for a game (and not the project selection screen, for example)
    //
#if UE_4_18_OR_LATER
	const bool HasProjectName = FApp::HasProjectName();
#else
	const bool HasProjectName = FApp::HasGameName();
#endif // UE_4_18_OR_LATER

	if(HasProjectName)
	{
#if UE_4_18_OR_LATER
		FString GameName = FApp::GetProjectName();
#else
		FString GameName = FApp::GetGameName();
#endif // UE_4_18_OR_LATER

#if WITH_EDITORONLY_DATA
		if(!IsRunningGame())
			GameName += TEXT(" (Editor)");
#endif
		AkCommSettings commSettings;
		AK::Comm::GetDefaultInitSettings( commSettings );
#if PLATFORM_SWITCH
		commSettings.bInitSystemLib = false;
#endif
		FCStringAnsi::Strcpy(commSettings.szAppNetworkName, AK_COMM_SETTINGS_MAX_STRING_SIZE, TCHAR_TO_ANSI(*GameName));
		if ( AK::Comm::Init( commSettings ) != AK_Success )
		{
			UE_LOG(LogInit, Warning, TEXT("Could not initialize communication. GameName is %s"), *GameName);
			//return false;
		}
	}
#endif
#endif // AK_OPTIMIZED

	//
	// Setup banks path
	//
	SetBankDirectory();

	// Init dummy game object
	AK::SoundEngine::RegisterGameObj(DUMMY_GAMEOBJ, "Unreal Global");
#if WITH_EDITOR
	if(!IsRunningGame())
	{
		AkGameObjectID tempID = DUMMY_GAMEOBJ;
		AK::SoundEngine::SetListeners(DUMMY_GAMEOBJ, &tempID, 1);
	}
#endif

	m_bSoundEngineInitialized = true;
	
	AkBankManager = new FAkBankManager;

	LoadAllReferencedBanks();

	// Go get the max number of Aux busses
	const UAkSettings* AkSettings = GetDefault<UAkSettings>();
	MaxAuxBus = AK_MAX_AUX_PER_OBJ;
	if( AkSettings )
	{
		MaxAuxBus = AkSettings->MaxSimultaneousReverbVolumes;
	}

	CallbackManager = new FAkComponentCallbackManager();
	if (CallbackManager == nullptr)
	{
		return false;
	}

	return true;
}

void FAkAudioDevice::AddDefaultListener(UAkComponent* in_pListener)
{
	bool bAlreadyInSet;
	m_defaultListeners.Add(in_pListener, &bAlreadyInSet);
	if (!bAlreadyInSet)
	{
		for (auto& Emitter : m_defaultEmitters)
			Emitter->OnDefaultListenerAdded(in_pListener);
		
		UpdateDefaultActiveListeners();
	}
}

void FAkAudioDevice::OnActorSpawned(AActor* SpawnedActor)
{
	APlayerCameraManager* AsPlayerCameraManager = Cast<APlayerCameraManager>(SpawnedActor);
	if (AsPlayerCameraManager && AsPlayerCameraManager->GetWorld()->AllowAudioPlayback())
	{
		APlayerController* CameraOwner = Cast<APlayerController>(AsPlayerCameraManager->GetOwner());
		if (CameraOwner && CameraOwner->IsLocalPlayerController())
		{
			UAkComponent* pAkComponent = NewObject<UAkComponent>(SpawnedActor);
			if (pAkComponent != nullptr)
			{
				pAkComponent->RegisterComponentWithWorld(SpawnedActor->GetWorld());
				pAkComponent->AttachToComponent(SpawnedActor->GetRootComponent(), FAttachmentTransformRules::KeepWorldTransform, FName());
				AddDefaultListener(pAkComponent);
			}
		}
	}
}

FString FAkAudioDevice::GetBasePath()
{
#if UE_4_18_OR_LATER
	const auto ContentPath = FPaths::ProjectContentDir();
#else
	const auto ContentPath = FPaths::GameContentDir();
#endif // UE_4_18_OR_LATER

	FString BasePath = FPaths::Combine(*ContentPath, TEXT("WwiseAudio"));

#if defined AK_WIN
	BasePath = FPaths::Combine(*BasePath, TEXT("Windows/"));
#elif defined AK_LINUX
	BasePath = FPaths::Combine(*BasePath, TEXT("Linux/"));
#elif defined AK_MAC_OS_X
	BasePath = FPaths::Combine(*BasePath, TEXT("Mac/"));
#elif defined AK_PS4
	BasePath = FPaths::Combine(*BasePath, TEXT("PS4/"));
#elif defined AK_XBOXONE
	BasePath = FPaths::Combine(*BasePath, TEXT("XboxOne/"));
#elif defined AK_ANDROID
	BasePath = FPaths::Combine(*BasePath, TEXT("Android/"));
#elif defined AK_IOS
	BasePath = FPaths::Combine(*BasePath, TEXT("iOS/"));
#elif defined AK_NX
	BasePath = FPaths::Combine(*BasePath, TEXT("Switch/"));
#else
#error "AkAudio integration is unsupported for this platform"
#endif

	return BasePath;
}

void FAkAudioDevice::SetBankDirectory()
{
	const FString BasePath = GetBasePath();

	UE_LOG(LogInit, Log, TEXT("Audiokinetic Audio Device setting bank directory to %s."), *BasePath);

	if (LowLevelIOHook)
	{
		LowLevelIOHook->SetBasePath(BasePath);
	}

	AK::StreamMgr::SetCurrentLanguage( AKTEXT("English(US)") );
}

/**
 * Allocates memory from permanent pool. This memory will NEVER be freed.
 *
 * @param	Size	Size of allocation.
 *
 * @return pointer to a chunk of memory with size Size
 */
void* FAkAudioDevice::AllocatePermanentMemory( int32 Size, bool& AllocatedInPool )
{
	return 0;
}

AKRESULT FAkAudioDevice::GetGameObjectID( AActor * in_pActor, AkGameObjectID& io_GameObject )
{
	if ( IsValid(in_pActor) )
	{
		UAkComponent * pComponent = GetAkComponent( in_pActor->GetRootComponent(), FName(), NULL, EAttachLocation::KeepRelativeOffset );
		if ( pComponent )
		{
			io_GameObject = pComponent->GetAkGameObjectID();
			return AK_Success;
		}
		else
			return AK_Fail;
	}

	// we do not modify io_GameObject, letting it to the specified default value.
	return AK_Success;
}

AKRESULT FAkAudioDevice::GetGameObjectID( AActor * in_pActor, AkGameObjectID& io_GameObject, bool in_bStopWhenOwnerDestroyed )
{
	if ( IsValid(in_pActor) )
	{
		UAkComponent * pComponent = GetAkComponent( in_pActor->GetRootComponent(), FName(), NULL, EAttachLocation::KeepRelativeOffset );
		if ( pComponent )
		{
			pComponent->StopWhenOwnerDestroyed = in_bStopWhenOwnerDestroyed;
			io_GameObject = pComponent->GetAkGameObjectID();
			return AK_Success;
		}
		else
			return AK_Fail;
	}

	// we do not modify io_GameObject, letting it to the specified default value.
	return AK_Success;
}

void FAkAudioDevice::StartOutputCapture(const FString& Filename)
{
	if ( m_bSoundEngineInitialized )
	{
		auto szFilename = TCHAR_TO_AK_OS(*Filename);
		AK::SoundEngine::StartOutputCapture(szFilename);
	}
}

void FAkAudioDevice::StopOutputCapture()
{
	if ( m_bSoundEngineInitialized )
	{
		AK::SoundEngine::StopOutputCapture();
	}
}

void FAkAudioDevice::StartProfilerCapture(const FString& Filename)
{
	if ( m_bSoundEngineInitialized )
	{
		auto szFilename = TCHAR_TO_AK_OS(*Filename);
		AK::SoundEngine::StartProfilerCapture(szFilename);
	}
}

void FAkAudioDevice::AddOutputCaptureMarker(const FString& MarkerText)
{
	if ( m_bSoundEngineInitialized )
	{
		ANSICHAR* szText = TCHAR_TO_ANSI(*MarkerText);
		AK::SoundEngine::AddOutputCaptureMarker(szText);
	}
}

void FAkAudioDevice::StopProfilerCapture()
{
	if ( m_bSoundEngineInitialized )
	{
		AK::SoundEngine::StopProfilerCapture();
	}
}

// end
