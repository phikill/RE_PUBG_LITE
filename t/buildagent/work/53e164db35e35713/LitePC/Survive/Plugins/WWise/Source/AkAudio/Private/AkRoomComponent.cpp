// Copyright (c) 2006-2012 Audiokinetic Inc. / All Rights Reserved

/*=============================================================================
	AkRoomComponent.cpp:
=============================================================================*/

#include "AkAudioDevice.h"
#include "AkAudioClasses.h"
#include "Net/UnrealNetwork.h"
#include "Components/BrushComponent.h"
#include "GameFramework/Volume.h"
#include "Model.h"
#include "EngineUtils.h"

/*------------------------------------------------------------------------------------
	UAkRoomComponent
------------------------------------------------------------------------------------*/

UAkRoomComponent::UAkRoomComponent(const class FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{
	// Property initialization
	NextLowerPriorityComponent = NULL;

	bEnable = true;
}

bool UAkRoomComponent::HasEffectOnLocation(const FVector& Location) const
{
	// Need to add a small radius, because on the Mac, EncompassesPoint returns false if
	// Location is exactly equal to the Volume's location
	static float RADIUS = 0.01f;
	return RoomIsActive() && ParentVolume->EncompassesPoint(Location, RADIUS);
}

void UAkRoomComponent::PostLoad()
{
	Super::PostLoad();
	InitializeParentVolume();

	FAkAudioDevice* AkAudioDevice = FAkAudioDevice::Get();
	if (AkAudioDevice && RoomIsActive())
	{
		AkAudioDevice->AddRoomComponentToPrioritizedList(this);
	}
}

void UAkRoomComponent::BeginPlay()
{
	Super::BeginPlay();

	AddSpatialAudioRoom();
}

void UAkRoomComponent::InitializeParentVolume()
{
	ParentVolume = Cast<AVolume>(GetOwner());
	if (!ParentVolume)
	{
		bEnable = false;
		UE_LOG(LogAkAudio, Error, TEXT("UAkRoomComponent requires to be attached to an actor inheriting from AVolume."));
	}
}

void UAkRoomComponent::BeginDestroy()
{
	Super::BeginDestroy();
	FAkAudioDevice* AkAudioDevice = FAkAudioDevice::Get();
	if (AkAudioDevice && RoomIsActive())
	{
		AkAudioDevice->RemoveRoomComponentFromPrioritizedList(this);
		RemoveSpatialAudioRoom();
	}
}

void UAkRoomComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	FAkAudioDevice* AkAudioDevice = FAkAudioDevice::Get();
	if (AkAudioDevice && RoomIsActive())
	{
		AkAudioDevice->RemoveRoomComponentFromPrioritizedList(this);
		RemoveSpatialAudioRoom();
	}
}

void UAkRoomComponent::FindPortalsForRoom(TArray<AAkAcousticPortal*>& out_IntersectingPortals)
{
	if(!RoomIsActive())
		return;

	UWorld* CurrentWorld = ParentVolume->GetWorld();

	for (TActorIterator<AAkAcousticPortal> ActorItr(CurrentWorld); ActorItr; ++ActorItr)
	{
		AAkAcousticPortal* pPortal = *ActorItr;

		UBrushComponent* pBrComp = pPortal->GetBrushComponent();
		if (pBrComp && pBrComp->Brush)
		{
			FTransform toWorld = pPortal->GetTransform();
			for (uint8 iPnt = 0; iPnt < pBrComp->Brush->Points.Num(); iPnt++)
			{
				FVector pt = toWorld.TransformPosition(pBrComp->Brush->Points[iPnt]);
				if (HasEffectOnLocation(pt))
				{
					out_IntersectingPortals.Add(pPortal);
					break;
				}
			}
		}
	}
}

void UAkRoomComponent::AddSpatialAudioRoom()
{
	if(!RoomIsActive())
		return;

	TArray<AAkAcousticPortal*> IntersectingPortals;

	FindPortalsForRoom(IntersectingPortals);

	FString nameStr = ParentVolume->GetName();

	FRotator rotation = ParentVolume->GetActorRotation();

	FVector Front = rotation.RotateVector(FVector::RightVector);
	FVector Up = rotation.RotateVector(FVector::UpVector);

	FAkAudioDevice* AkAudioDevice = FAkAudioDevice::Get();
	if(!AkAudioDevice)
		return;

	AkRoomParams params;
	AkAudioDevice->FVectorToAKVector(Front, params.Front);
	AkAudioDevice->FVectorToAKVector(Up, params.Up);

	params.pConnectedPortals = NULL;
	params.uNumPortals = IntersectingPortals.Num();
	params.strName = *nameStr;
	if (params.uNumPortals > 0)
	{
		params.pConnectedPortals = (AkPortalID*)alloca(sizeof(AkPortalID) * params.uNumPortals);

		for (uint32 i=0; i<params.uNumPortals; ++i)
		{
			params.pConnectedPortals[i] = (AkPortalID)IntersectingPortals[i];
		}
	}

	AkAudioDevice->AddRoom(this, params);
}

void UAkRoomComponent::RemoveSpatialAudioRoom()
{
	FAkAudioDevice* AkAudioDevice = FAkAudioDevice::Get();
	if(RoomIsActive() && AkAudioDevice)
		AkAudioDevice->RemoveRoom(this);
}

#if WITH_EDITOR
void UAkRoomComponent::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);
	InitializeParentVolume();
}
#endif
