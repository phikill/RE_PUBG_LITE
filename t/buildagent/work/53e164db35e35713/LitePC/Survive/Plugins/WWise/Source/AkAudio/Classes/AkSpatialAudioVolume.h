// Copyright (c) 2006-2012 Audiokinetic Inc. / All Rights Reserved

/*=============================================================================
	AkReverbVolume.h:
=============================================================================*/
#pragma once

#include "GameFramework/Volume.h"
#include "AkSurfaceReflectorSetComponent.h"
#include "AkLateReverbComponent.h"
#include "AkSpatialAudioVolume.generated.h"

/*------------------------------------------------------------------------------------
	AAkSpatialAudioVolume
------------------------------------------------------------------------------------*/
UCLASS(ClassGroup = Audiokinetic, BlueprintType, hidecategories = (Advanced, Attachment, Volume))
class AKAUDIO_API AAkSpatialAudioVolume : public AVolume
{
	GENERATED_UCLASS_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "SurfaceReflectorSet", meta = (ShowOnlyInnerProperties))
	UAkSurfaceReflectorSetComponent* SurfaceReflectorSet;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "LateReverb", meta = (ShowOnlyInnerProperties))
	UAkLateReverbComponent* LateReverb;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Room", meta = (ShowOnlyInnerProperties))
	UAkRoomComponent* Room;
};
