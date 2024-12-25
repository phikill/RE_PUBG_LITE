// Copyright (c) 2006-2012 Audiokinetic Inc. / All Rights Reserved

/*=============================================================================
	AkReverbVolume.cpp:
=============================================================================*/

#include "AkAudioDevice.h"
#include "AkAudioClasses.h"
#include "Net/UnrealNetwork.h"
#include "Components/BrushComponent.h"
#include "Model.h"
#include "AkCustomVersion.h"

/*------------------------------------------------------------------------------------
	AAkReverbVolume
------------------------------------------------------------------------------------*/

AAkReverbVolume::AAkReverbVolume(const class FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{
	// Property initialization
	static FName CollisionProfileName(TEXT("OverlapAll"));
	UBrushComponent* BrushComp = GetBrushComponent();
	if (BrushComp)
	{
		BrushComp->SetCollisionProfileName(CollisionProfileName);
	}

	bColored = true;
	BrushColor = FColor(0, 255, 255, 255);
	
	bEnabled_DEPRECATED = true;
	SendLevel_DEPRECATED = 1.0f;
	FadeRate_DEPRECATED = 0.5f;
	Priority_DEPRECATED = 1.0f;


	FString LateReverbName = TEXT("LateReverb");
	LateReverbComponent = ObjectInitializer.CreateDefaultSubobject<UAkLateReverbComponent>(this, FName(*LateReverbName));
}

void AAkReverbVolume::Serialize(FArchive& Ar)
{
	Super::Serialize(Ar);

	Ar.UsingCustomVersion(FAkCustomVersion::GUID);
}

void AAkReverbVolume::PostLoad()
{
	Super::PostLoad();
	const int32 AkVersion = GetLinkerCustomVersion(FAkCustomVersion::GUID);

	if (LateReverbComponent && AkVersion < FAkCustomVersion::AddedSpatialAudio)
	{
		LateReverbComponent->bEnable			= bEnabled_DEPRECATED;
		LateReverbComponent->AuxBus				= AuxBus_DEPRECATED;
		LateReverbComponent->AuxBusName			= AuxBusName_DEPRECATED;
		LateReverbComponent->SendLevel			= SendLevel_DEPRECATED;
		LateReverbComponent->FadeRate			= FadeRate_DEPRECATED;
		LateReverbComponent->Priority			= Priority_DEPRECATED;
	}
}
