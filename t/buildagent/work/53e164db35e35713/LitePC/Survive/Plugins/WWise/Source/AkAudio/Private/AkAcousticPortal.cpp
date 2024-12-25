// Copyright (c) 2006-2012 Audiokinetic Inc. / All Rights Reserved

/*=============================================================================
	AAkAcousticPortal.cpp:
=============================================================================*/

#include "AkAudioDevice.h"
#include "AkAudioClasses.h"
#include "Net/UnrealNetwork.h"
#include "Components/BrushComponent.h"

/*------------------------------------------------------------------------------------
	AAkAcousticPortal
------------------------------------------------------------------------------------*/

AAkAcousticPortal::AAkAcousticPortal(const class FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{
	// Property initialization
	static FName CollisionProfileName(TEXT("OverlapAll"));
	GetBrushComponent()->SetCollisionProfileName(CollisionProfileName);

	bColored = true;
	BrushColor = FColor(255, 196, 137, 255);
	
	Gain = 1.0f;

	InitialState = AkAcousticPortalState::Open;
	CurrentState = (int)InitialState;
}

void AAkAcousticPortal::OpenPortal()
{
	CurrentState++;

	if (CurrentState == 1)
	{
		FAkAudioDevice * Dev = FAkAudioDevice::Get();
		if (Dev != nullptr)
		{
			Dev->AddSpatialAudioPortal(this);
		}
	}
}

void AAkAcousticPortal::ClosePortal()
{
	CurrentState--;

	if (CurrentState == 0)
	{
		FAkAudioDevice * Dev = FAkAudioDevice::Get();
		if (Dev != nullptr)
		{
			Dev->AddSpatialAudioPortal(this);
		}
	}
}

AkAcousticPortalState AAkAcousticPortal::GetCurrentState() const
{
	return CurrentState > 0 ? AkAcousticPortalState::Open : AkAcousticPortalState::Closed;
}

void AAkAcousticPortal::PostRegisterAllComponents()
{
	CurrentState = (int)InitialState;

	Super::PostRegisterAllComponents();
	FAkAudioDevice * Dev = FAkAudioDevice::Get();
	if (Dev != nullptr)
	{
		Dev->AddSpatialAudioPortal(this);
	}
}

void AAkAcousticPortal::PostUnregisterAllComponents()
{
	Super::PostUnregisterAllComponents();
	FAkAudioDevice * Dev = FAkAudioDevice::Get();
	if (Dev != nullptr)
	{
		Dev->RemoveSpatialAudioPortal(this);
	}
}
