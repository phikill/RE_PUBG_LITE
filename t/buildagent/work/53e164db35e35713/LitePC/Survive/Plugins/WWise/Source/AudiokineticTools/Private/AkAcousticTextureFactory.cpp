// Copyright (c) 2006-2012 Audiokinetic Inc. / All Rights Reserved

/*=============================================================================
	AkAudioTextureFactory.cpp:
=============================================================================*/
#include "AudiokineticToolsPrivatePCH.h"
#include "AkAcousticTexture.h"
#include "AkAcousticTextureFactory.h"

/*------------------------------------------------------------------------------
	UAkAudioEventFactory.
------------------------------------------------------------------------------*/
UAkAcousticTextureFactory::UAkAcousticTextureFactory(const class FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// Property initialization
	SupportedClass = UAkAcousticTexture::StaticClass();

	bCreateNew = true;
	bEditorImport = true;
	bEditAfterNew = true;
}

UObject* UAkAcousticTextureFactory::FactoryCreateNew( UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn )
{
	UAkAcousticTexture* akTexture = NewObject<UAkAcousticTexture>( InParent, Name, Flags );
	return akTexture;
}
