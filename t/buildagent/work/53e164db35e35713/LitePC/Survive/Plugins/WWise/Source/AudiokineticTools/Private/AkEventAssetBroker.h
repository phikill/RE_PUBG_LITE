// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "ComponentAssetBroker.h"

//////////////////////////////////////////////////////////////////////////
// FAkEventAssetBroker

class FAkEventAssetBroker : public IComponentAssetBroker
{
public:
	UClass* GetSupportedAssetClass() override
	{
		return UAkAudioEvent::StaticClass();
	}

	virtual bool AssignAssetToComponent(UActorComponent* InComponent, UObject* InAsset) override
	{
		UAkComponent* AkComp = Cast<UAkComponent>(InComponent);
		UAkAudioEvent* AkEvent = Cast<UAkAudioEvent>(InAsset);
		
		if (AkComp && AkEvent)
		{
			AkComp->AkAudioEvent = AkEvent;
			return true;
		}

		return false;
	}

	virtual UObject* GetAssetFromComponent(UActorComponent* InComponent) override
	{
		UAkComponent* AkComp = Cast<UAkComponent>(InComponent);
		
		if (AkComp)
		{
			return AkComp->AkAudioEvent;
		}
		return NULL;
	}
};

