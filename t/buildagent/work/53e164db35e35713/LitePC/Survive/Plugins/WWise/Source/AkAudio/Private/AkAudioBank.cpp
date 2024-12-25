// Copyright (c) 2006-2012 Audiokinetic Inc. / All Rights Reserved

/*=============================================================================
	AkBank.cpp:
=============================================================================*/

#include "AkAudioDevice.h"
#include "AkAudioBank.h"

/**
 * Constructor
 *
 * @param PCIP		Initialization properties
 */
UAkAudioBank::UAkAudioBank(const class FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	AutoLoad = true;
}

/**
 * Called after load process is complete.
 */
void UAkAudioBank::PostLoad()
{
	Super::PostLoad();
	if ( AutoLoad )
	{
		Load();
	}
}

/**
 * Clean up.
 */
void UAkAudioBank::BeginDestroy()
{
	if( AutoLoad )
	{
		Unload();
	}
	Super::BeginDestroy();
}

/**
 * Loads an AkBank.
 *
 * @return Returns true if the laod was successful, otherwise false
 */
bool UAkAudioBank::Load()
{
	if( !IsRunningCommandlet() )
	{
		FAkAudioDevice * AudioDevice = FAkAudioDevice::Get();
		if( AudioDevice )
		{
			AkBankID BankID;
			AKRESULT eResult = AudioDevice->LoadBank( this, AK_DEFAULT_POOL_ID, BankID );
			return (eResult == AK_Success) ? true : false;
		}
	}

	return false;
}

/**
 * Loads an AkBank asynchronously.
 *
 * @param in_pfnBankCallback		Function to call on completion
 * @param in_pCookie				Cookie to pass in callback
 * @return Returns true if the laod was successful, otherwise false
 */
bool UAkAudioBank::LoadAsync(void* in_pfnBankCallback, void* in_pCookie)
{
	if( !IsRunningCommandlet() )
	{
		FAkAudioDevice * AudioDevice = FAkAudioDevice::Get();
		if( AudioDevice )
		{
			AkBankID BankID;
			AKRESULT eResult = AudioDevice->LoadBank( this, (AkBankCallbackFunc)in_pfnBankCallback, in_pCookie, AK_DEFAULT_POOL_ID, BankID );
			return (eResult == AK_Success) ? true : false;
		}
	}

	return false;
}

/**
 * Unloads an AkBank.
 */
void UAkAudioBank::Unload()
{
	if( !IsRunningCommandlet() )
	{
		FAkAudioDevice * AudioDevice = FAkAudioDevice::Get();
		if( AudioDevice )
		{
			AudioDevice->UnloadBank( this );
		}
	}
}
		
/**
 * Unloads an AkBank asynchronously.
 *
 * @param in_pfnBankCallback		Function to call on completion
 * @param in_pCookie				Cookie to pass in callback
 */
void UAkAudioBank::UnloadAsync(void* in_pfnBankCallback, void* in_pCookie)
{
	if( !IsRunningCommandlet() )
	{
		AKRESULT eResult = AK_Fail;
		FAkAudioDevice * AudioDevice = FAkAudioDevice::Get();
		if( AudioDevice )
		{
			eResult = AudioDevice->UnloadBank( this, (AkBankCallbackFunc)in_pfnBankCallback, in_pCookie );
			if (eResult != AK_Success)
			{
				UE_LOG(LogAkAudio, Warning, TEXT("Failed to unload SoundBank %s"), *GetName());
			}
		}
	}
}
