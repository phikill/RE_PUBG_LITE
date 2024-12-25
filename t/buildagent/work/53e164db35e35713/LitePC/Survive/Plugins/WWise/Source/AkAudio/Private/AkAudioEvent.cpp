// Copyright (c) 2006-2012 Audiokinetic Inc. / All Rights Reserved

/*=============================================================================
	AkEvent.cpp:
=============================================================================*/

#include "AkAudioDevice.h"
#include "AkAudioEvent.h"
#include "AkAudioBank.h"

/**
 * Constructor
 *
 * @param PCIP		Initialization properties
 */
UAkAudioEvent::UAkAudioEvent(const class FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// Properties
	RequiredBank = NULL;
}

/**
 * Load the required bank.
 *
 * @return true if the bank was loaded, otherwise false
 */
bool UAkAudioEvent::LoadBank()
{
	// todo:mjb@ak - Can't find an equivalent for GIsCooking
	if( !IsRunningCommandlet() && RequiredBank )
	{
		return RequiredBank->Load();
	}
	return false;
}
