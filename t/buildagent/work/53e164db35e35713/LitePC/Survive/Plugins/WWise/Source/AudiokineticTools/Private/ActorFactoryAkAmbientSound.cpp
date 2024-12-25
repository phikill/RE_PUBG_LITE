// Copyright (c) 2006-2012 Audiokinetic Inc. / All Rights Reserved

/*=============================================================================
	ActorFactoryAkAmbientSound.cpp: 
=============================================================================*/
#include "AudiokineticToolsPrivatePCH.h"
#include "ActorFactoryAkAmbientSound.h"
#include "AkAudioClasses.h"
#include "AssetData.h"
#include "Editor/EditorEngine.h"

#define LOCTEXT_NAMESPACE "ActorFactoryAkAmbientSound"

/*-----------------------------------------------------------------------------
	UActorFactoryAkAmbientSound
-----------------------------------------------------------------------------*/

UActorFactoryAkAmbientSound::UActorFactoryAkAmbientSound(const class FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// Property initialization
	DisplayName = LOCTEXT("AkAmbientSoundName", "AkAmbientSound");
	NewActorClass = AAkAmbientSound::StaticClass();
	bShowInEditorQuickMenu = true;
}

bool UActorFactoryAkAmbientSound::CanCreateActorFrom( const FAssetData& AssetData, FText& OutErrorMsg )
{
	//We allow creating AAmbientSounds without an existing sound asset
	if ( UActorFactory::CanCreateActorFrom( AssetData, OutErrorMsg ) )
	{
		return true;
	}

	if ( AssetData.IsValid() && !AssetData.GetClass()->IsChildOf( UAkAudioEvent::StaticClass() ) )
	{
		OutErrorMsg = NSLOCTEXT("CanCreateActor", "NoSoundAsset", "A valid sound asset must be specified.");
		return false;
	}

	return true;
}

void UActorFactoryAkAmbientSound::PostSpawnActor( UObject* Asset, AActor* NewActor )
{
	UAkAudioEvent* AmbientSound = Cast<UAkAudioEvent>( Asset );

	if ( AmbientSound != NULL )
	{
		AAkAmbientSound* NewSound = CastChecked<AAkAmbientSound>( NewActor );
		FActorLabelUtilities::SetActorLabelUnique(NewSound, AmbientSound->GetName());
		NewSound->AkComponent->AkAudioEvent = AmbientSound;
	}
}

UObject* UActorFactoryAkAmbientSound::GetAssetFromActorInstance(AActor* Instance)
{
	check(Instance->IsA(NewActorClass));
	AAkAmbientSound* SoundActor = CastChecked<AAkAmbientSound>(Instance);

	check(SoundActor->AkComponent->AkAudioEvent);
	return SoundActor->AkComponent->AkAudioEvent;
}

void UActorFactoryAkAmbientSound::PostCreateBlueprint( UObject* Asset, AActor* CDO )
{
	UAkAudioEvent* AmbientSound = Cast<UAkAudioEvent>( Asset );

	if ( AmbientSound != NULL )
	{
		AAkAmbientSound* NewSound = CastChecked<AAkAmbientSound>( CDO );
		NewSound->AkComponent->AkAudioEvent = AmbientSound;
	}
}

#undef LOCTEXT_NAMESPACE
