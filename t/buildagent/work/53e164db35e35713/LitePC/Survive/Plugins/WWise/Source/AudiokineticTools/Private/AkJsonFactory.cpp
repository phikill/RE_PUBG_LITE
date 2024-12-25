// Copyright (c) 2006-2012 Audiokinetic Inc. / All Rights Reserved

/*=============================================================================
	AkJsonFactory.cpp:
=============================================================================*/
#include "AudiokineticToolsPrivatePCH.h"
#include "AkJsonFactory.h"
#include "AkAudioClasses.h"
/*------------------------------------------------------------------------------
	UAkJsonFactory.
------------------------------------------------------------------------------*/
UAkJsonFactory::UAkJsonFactory(const class FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	SupportedClass = UAkAudioEvent::StaticClass();
	Formats.Add(TEXT("json;Audiokinetic SoundBank Metadata"));
	bCreateNew = true;
	bEditorImport = true;
	ImportPriority = 101;
}

UObject* UAkJsonFactory::FactoryCreateNew( UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn )
{
	return nullptr;
}

bool UAkJsonFactory::FactoryCanImport(const FString& Filename)
{
	//check extension
	if (FPaths::GetExtension(Filename) == TEXT("json"))
	{
		if(Filename.Contains("WwiseAudio"))
		{
			return true;
		}
	}

	return false;
}

bool UAkJsonFactory::ShouldShowInNewMenu() const
{
	return false;
}
