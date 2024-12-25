// Copyright (c) 2006-2012 Audiokinetic Inc. / All Rights Reserved

/*=============================================================================
	AkAudioBankFactory.cpp:
=============================================================================*/
#include "AudiokineticToolsPrivatePCH.h"
#include "AkAudioBank.h"
#include "AkAudioBankFactory.h"
#include "Misc/Paths.h"
/*------------------------------------------------------------------------------
	UAkAudioBankFactory.
------------------------------------------------------------------------------*/
UAkAudioBankFactory::UAkAudioBankFactory(const class FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// Property initialization
	SupportedClass = UAkAudioBank::StaticClass();
	Formats.Add(TEXT("bnk;Audiokinetic SoundBank"));
	bCreateNew = true;
	bEditorImport = true;
	bEditAfterNew = true;
	ImportPriority = -1; // Turn off auto-reimport for this factory.

}

UObject* UAkAudioBankFactory::FactoryCreateNew( UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn )
{
	UAkAudioBank* akBank = NewObject<UAkAudioBank>( InParent, Name, Flags );
	return akBank;
}

bool UAkAudioBankFactory::FactoryCanImport(const FString& Filename)
{
	//check extension
	if (FPaths::GetExtension(Filename) == TEXT("bnk"))
	{
		return true;
	}

	return false;
}