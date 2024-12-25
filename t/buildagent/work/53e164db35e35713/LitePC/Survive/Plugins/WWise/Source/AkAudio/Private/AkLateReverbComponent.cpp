// Copyright (c) 2006-2012 Audiokinetic Inc. / All Rights Reserved

/*=============================================================================
	AkLateReverbComponent.cpp:
=============================================================================*/

#include "AkAudioDevice.h"
#include "AkAudioClasses.h"
#include "Net/UnrealNetwork.h"
#include "Components/BrushComponent.h"
#include "Model.h"
/*------------------------------------------------------------------------------------
	UAkLateReverbComponent
------------------------------------------------------------------------------------*/

UAkLateReverbComponent::UAkLateReverbComponent(const class FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{
	// Property initialization
	SendLevel = 1.0f;
	FadeRate = 0.5f;
	Priority = 1.0f;

	NextLowerPriorityComponent = NULL;

	bEnable = true;
}

bool UAkLateReverbComponent::HasEffectOnLocation(const FVector& Location) const
{
	// Need to add a small radius, because on the Mac, EncompassesPoint returns false if
	// Location is exactly equal to the Volume's location
	static float RADIUS = 0.01f; 
	return LateReverbIsActive() && ParentVolume->EncompassesPoint(Location, RADIUS);
}

uint32 UAkLateReverbComponent::GetAuxBusId() const
{
	if (AuxBus)
	{
		return AuxBus->GetAuxBusId();
	}
	else
	{
		FAkAudioDevice* AkAudioDevice = FAkAudioDevice::Get();
		if (AkAudioDevice)
		{
			return AkAudioDevice->GetIDFromString(AuxBusName);
		}
		return AK_INVALID_UNIQUE_ID;
	}
}

void UAkLateReverbComponent::InitializeParentVolume()
{
	ParentVolume = Cast<AVolume>(GetOwner());
	if (!ParentVolume)
	{
		bEnable = false;
		UE_LOG(LogAkAudio, Error, TEXT("UAkLateReverbComponent requires to be attached to an actor inheriting from AVolume."));
	}
}

#if WITH_EDITOR
void UAkLateReverbComponent::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);
	InitializeParentVolume();
	SendLevel = FMath::Clamp<float>( SendLevel, 0.0f, 1.0f );
	if( FadeRate < 0.f )
	{
		FadeRate = 0.f;
	}
}
#endif // WITH_EDITOR

void UAkLateReverbComponent::PostLoad()
{
	Super::PostLoad();

	InitializeParentVolume();

	FAkAudioDevice* AkAudioDevice = FAkAudioDevice::Get();
	if (AkAudioDevice && LateReverbIsActive())
		AkAudioDevice->AddLateReverbComponentToPrioritizedList(this);
}

void UAkLateReverbComponent::BeginDestroy()
{
	Super::BeginDestroy();
	FAkAudioDevice* AkAudioDevice = FAkAudioDevice::Get();
	if (AkAudioDevice && LateReverbIsActive())
		AkAudioDevice->RemoveLateReverbComponentFromPrioritizedList(this);
}

void UAkLateReverbComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	FAkAudioDevice* AkAudioDevice = FAkAudioDevice::Get();
	if (AkAudioDevice && LateReverbIsActive())
		AkAudioDevice->RemoveLateReverbComponentFromPrioritizedList(this);
}

