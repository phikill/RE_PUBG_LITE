// Copyright Audiokinetic 2015

#pragma once
#include "Components/SceneComponent.h"
#include "AkLateReverbComponent.generated.h"


UCLASS(ClassGroup = Audiokinetic, BlueprintType, hidecategories = (Transform, Rendering, Mobility, LOD, Component, Activation, Tags), meta = (BlueprintSpawnableComponent))
class AKAUDIO_API UAkLateReverbComponent : public USceneComponent
{
	GENERATED_UCLASS_BODY()

	/** Whether this volume is currently enabled and able to affect sounds */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Toggle, meta = (DisplayName = "Enable Late Reverb"))
	uint32 bEnable:1;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="LateReverb")
	class UAkAuxBus * AuxBus;

	/** Wwise Auxiliary Bus associated to this AkReverbVolume */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, Category = "LateReverb")
	FString AuxBusName;

	/** Maximum send level to the Wwise Auxiliary Bus associated to this AkReverbVolume */
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "LateReverb")
	float SendLevel;

	/** Rate at which to fade in/out the SendLevel of the current Reverb Volume when entering/exiting it, in percentage per second (0.2 will make the fade time 5 seconds) */
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "LateReverb")
	float FadeRate;

	/**
	 * The precedence in which the AkReverbVolumes will be applied. In the case of overlapping volumes, only the ones 
	 * with the highest priority are chosen (the number of simultaneous AkReverbVolumes is configurable in the Unreal 
	 * Editor Project Settings under Plugins > Wwise). If two or more overlapping AkReverbVolumes have the same 
	 * priority, the chosen AkReverbVolume is unpredictable.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LateReverb")
	float Priority;

	/** Get the AkAuxBusId associated to AuxBusName */
	uint32 GetAuxBusId() const;

	/** We keep a  linked list of ReverbVolumes sorted by priority for faster finding of reverb volumes at a specific location.
	 *	This points to the next volume in the list.
	 */
	class UAkLateReverbComponent* NextLowerPriorityComponent;

	bool HasEffectOnLocation(const FVector& Location) const;

	bool LateReverbIsActive() const { return ParentVolume && bEnable & !IsRunningCommandlet(); }

	virtual void PostLoad() override;
	virtual void BeginDestroy() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif
	
private:
	class AVolume* ParentVolume;
	void InitializeParentVolume();
};
