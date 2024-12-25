// Copyright (c) 2006-2012 Audiokinetic Inc. / All Rights Reserved

/*=============================================================================
	AkAudioEventFactory.cpp:
=============================================================================*/
#include "AudiokineticToolsPrivatePCH.h"
#include "AkAudioEvent.h"
#include "AkAudioEventFactory.h"

/*------------------------------------------------------------------------------
	UAkAudioEventFactory.
------------------------------------------------------------------------------*/
UAkAudioEventFactory::UAkAudioEventFactory(const class FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// Property initialization
	SupportedClass = UAkAudioEvent::StaticClass();

	bCreateNew = true;
	bEditorImport = true;
	bEditAfterNew = true;
}

UObject* UAkAudioEventFactory::FactoryCreateNew( UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn )
{
	UAkAudioEvent* akEvent = NewObject<UAkAudioEvent>( InParent, Name, Flags );
	return akEvent;
}
