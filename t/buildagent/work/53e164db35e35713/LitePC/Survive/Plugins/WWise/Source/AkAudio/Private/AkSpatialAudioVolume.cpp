// Copyright (c) 2006-2012 Audiokinetic Inc. / All Rights Reserved

/*=============================================================================
	AkReverbVolume.cpp:
=============================================================================*/

#include "AkAudioDevice.h"
#include "AkAudioClasses.h"
#include "Net/UnrealNetwork.h"
#include "Components/BrushComponent.h"
#include "Model.h"
/*------------------------------------------------------------------------------------
	AAkSpatialAudioVolume
------------------------------------------------------------------------------------*/

AAkSpatialAudioVolume::AAkSpatialAudioVolume(const class FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{
	// Property initialization
	static FName CollisionProfileName(TEXT("OverlapAll"));
	UBrushComponent* BrushComp = GetBrushComponent();
	if (BrushComp)
	{
		BrushComp->SetCollisionProfileName(CollisionProfileName);
	}

	FString SurfReflSetName = TEXT("SurfaceReflector");
	SurfaceReflectorSet = ObjectInitializer.CreateDefaultSubobject<UAkSurfaceReflectorSetComponent>(this, FName(*SurfReflSetName));
	SurfaceReflectorSet->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);

	FString LateReverbame = TEXT("LateReverb");
	LateReverb = ObjectInitializer.CreateDefaultSubobject<UAkLateReverbComponent>(this, FName(*LateReverbame));
	LateReverb->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);

	FString RoomName = TEXT("Room");
	Room = ObjectInitializer.CreateDefaultSubobject<UAkRoomComponent>(this, FName(*RoomName));
	Room->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);

	bColored = true;
	BrushColor = FColor(109, 187, 255, 255);
}

