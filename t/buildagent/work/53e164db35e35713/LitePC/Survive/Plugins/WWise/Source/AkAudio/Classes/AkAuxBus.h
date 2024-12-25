// Copyright (c) 2006-2012 Audiokinetic Inc. / All Rights Reserved

/*=============================================================================
	AkAuxBus.h:
=============================================================================*/
#pragma once

#include "Engine/GameEngine.h"
#include "AkAuxBus.generated.h"

/*------------------------------------------------------------------------------------
	AAkAuxBus
------------------------------------------------------------------------------------*/
UCLASS(hidecategories=(Advanced, Attachment, Volume), BlueprintType)
class AKAUDIO_API UAkAuxBus : public UObject
{
	GENERATED_UCLASS_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bank")
	class UAkAudioBank * RequiredBank;

	/** Get the AkAuxBusId associated to AuxBusName */
	uint32 GetAuxBusId() const 
	{ 
		return AuxBusId;
	}

private:
	uint32	AuxBusId;
};
