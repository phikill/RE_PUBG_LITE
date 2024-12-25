// Copyright (c) 2006-2012 Audiokinetic Inc. / All Rights Reserved

/*=============================================================================
	AkSpotReflector.h:
=============================================================================*/
#pragma once

#include "AkAcousticTexture.h"
#include "GameFramework/Actor.h"
#include "AkSpotReflector.generated.h"

UCLASS(config = Engine)
class AKAUDIO_API AAkSpotReflector : public AActor
{
	GENERATED_UCLASS_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AkSpotReflector)
	class UAkAuxBus * AuxBus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, Category = AkSpotReflector)
	FString AuxBusName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AkSpotReflector)
	UAkAcousticTexture* AcousticTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AkSpotReflector, meta = (ClampMin = "0.0"))
	float DistanceScalingFactor;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AkSpotReflector, meta = (ClampMin = "0.0", ClampMax = "4.0"))
	float Level;
	
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void BeginDestroy() override;

private:

#if WITH_EDITORONLY_DATA
	/** Editor only component used to display the sprite so as to be able to see the location of the Spot Reflector  */
	class UBillboardComponent* SpriteComponent;
#endif

	AkUniqueID m_uAuxBusID;
};
