// Copyright (c) 2006-2012 Audiokinetic Inc. / All Rights Reserved

/*=============================================================================
	AkReverbVolume.h:
=============================================================================*/
#pragma once

#include "GameFramework/Volume.h"
#include "AkLateReverbComponent.h"
#include "AkReverbVolume.generated.h"

/*------------------------------------------------------------------------------------
	AAkReverbVolume
------------------------------------------------------------------------------------*/
UCLASS(hidecategories=(Advanced, Attachment, Volume), BlueprintType)
class AKAUDIO_API AAkReverbVolume : public AVolume
{
	GENERATED_UCLASS_BODY()

	/** Whether this volume is currently enabled and able to affect sounds */
	UPROPERTY()
	uint32 bEnabled_DEPRECATED:1;

	UPROPERTY()
	class UAkAuxBus * AuxBus_DEPRECATED;

	/** Wwise Auxiliary Bus associated to this AkReverbVolume */
	UPROPERTY()
	FString AuxBusName_DEPRECATED;

	/** Maximum send level to the Wwise Auxiliary Bus associated to this AkReverbVolume */
	UPROPERTY()
	float SendLevel_DEPRECATED;

	/** Rate at which to fade in/out the SendLevel of the current Reverb Volume when entering/exiting it, in percentage per second (0.2 will make the fade time 5 seconds) */
	UPROPERTY()
	float FadeRate_DEPRECATED;

	/**
	 * The precedence in which the AkReverbVolumes will be applied. In the case of overlapping volumes, only the ones 
	 * with the highest priority are chosen (the number of simultaneous AkReverbVolumes is configurable in the Unreal 
	 * Editor Project Settings under Plugins > Wwise). If two or more overlapping AkReverbVolumes have the same 
	 * priority, the chosen AkReverbVolume is unpredictable.
	 */
	UPROPERTY()
	float Priority_DEPRECATED;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "LateReverb", meta = (ShowOnlyInnerProperties))
	UAkLateReverbComponent* LateReverbComponent;

	virtual void PostLoad() override;
	virtual void Serialize(FArchive& Ar) override;
};
