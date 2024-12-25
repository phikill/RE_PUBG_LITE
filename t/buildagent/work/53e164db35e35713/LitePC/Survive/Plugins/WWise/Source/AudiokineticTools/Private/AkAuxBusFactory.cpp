// Copyright (c) 2006-2012 Audiokinetic Inc. / All Rights Reserved

/*=============================================================================
	AkAuxBusFactory.cpp:
=============================================================================*/
#include "AudiokineticToolsPrivatePCH.h"
#include "AkAuxBus.h"
#include "AkAuxBusFactory.h"

/*------------------------------------------------------------------------------
	UAkAuxBusFactory.
------------------------------------------------------------------------------*/
UAkAuxBusFactory::UAkAuxBusFactory(const class FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// Property initialization
	SupportedClass = UAkAuxBus::StaticClass();

	bCreateNew = true;
	bEditorImport = true;
	bEditAfterNew = true;
}

UObject* UAkAuxBusFactory::FactoryCreateNew( UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn )
{
	UAkAuxBus* akAuxBus = NewObject<UAkAuxBus>( InParent, Name, Flags );
	return akAuxBus;
}
