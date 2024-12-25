// Copyright Audiokinetic 2015

#pragma once
#include "Components/SceneComponent.h"
#include "AkRoomComponent.generated.h"


UCLASS(ClassGroup = Audiokinetic, BlueprintType, hidecategories = (Transform, Rendering, Mobility, LOD, Component, Activation, Tags), meta = (BlueprintSpawnableComponent))
class AKAUDIO_API UAkRoomComponent : public USceneComponent
{
	GENERATED_UCLASS_BODY()

	/** Whether this volume is currently enabled and able to affect sounds */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Toggle, meta = (DisplayName = "Enable Room"))
	uint32 bEnable:1;

	/** We keep a  linked list of ReverbVolumes sorted by priority for faster finding of reverb volumes at a specific location.
	 *	This points to the next volume in the list.
	 */
	class UAkRoomComponent* NextLowerPriorityComponent;

	/**
	* The precedence in which the Rooms will be applied. In the case of overlapping tooms, only the one
	* with the highest priority is chosen. If two or more overlapping rooms have the same
	* priority, the chosen room is unpredictable.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Room")
	float Priority;

	/** Register a room in AK Spatial Audio. Can be called again to update the room parameters	*/
	UFUNCTION(BlueprintCallable, Category = "Audiokinetic|Room")
	void AddSpatialAudioRoom();

	/** Remove a room from AK Spatial Audio	*/
	UFUNCTION(BlueprintCallable, Category = "Audiokinetic|Room")
	void RemoveSpatialAudioRoom();

	bool HasEffectOnLocation(const FVector& Location) const;

	bool RoomIsActive() const { return ParentVolume && bEnable && !IsRunningCommandlet(); }

	AkRoomID GetRoomID() const { return AkRoomID(this); }

	virtual void PostLoad() override;
	virtual void BeginDestroy() override;
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

private:
	class AVolume* ParentVolume;

	void FindPortalsForRoom(TArray<class AAkAcousticPortal*>& out_IntersectingPortals);
	void InitializeParentVolume();
};
