// Copyright (c) 2006-2012 Audiokinetic Inc. / All Rights Reserved

/*=============================================================================
	AkComponent.h:
=============================================================================*/

#pragma once

#include "Runtime/Launch/Resources/Version.h"
#include "AkInclude.h"
#include "Components/SceneComponent.h"
#include "AkLateReverbComponent.h"
#include "AkComponent.generated.h"

UENUM(Meta = (Bitflags))
enum class EReflectionFilterBits
{
	Wall,
	Ceiling,
	Floor
};

// PostEvent functions need to return the PlayingID (uint32), but Blueprints only work with int32.
// Make sure AkPlayingID is always 32 bits, or else we're gonna have a bad time.
static_assert(sizeof(AkPlayingID) == sizeof(int32), "AkPlayingID is not 32 bits anymore. Change return value of PostEvent functions!");

/*------------------------------------------------------------------------------------
	UAkComponent
------------------------------------------------------------------------------------*/
UCLASS(ClassGroup=Audiokinetic, BlueprintType, Blueprintable, hidecategories=(Transform,Rendering,Mobility,LOD,Component,Activation), AutoExpandCategories=AkComponent, meta=(BlueprintSpawnableComponent))
class AKAUDIO_API UAkComponent: public USceneComponent
{
	GENERATED_UCLASS_BODY()

public:

	/** Wwise Auxiliary Bus for early reflection processing */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, Category = "AkComponent|Spatial Audio")
	class UAkAuxBus * EarlyReflectionAuxBus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, Category = "AkComponent|Spatial Audio")
	FString EarlyReflectionAuxBusName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, AdvancedDisplay, Category = "AkComponent|Spatial Audio", meta = (ClampMin = "0", ClampMax = "4"))
	int EarlyReflectionOrder;

	UFUNCTION(BlueprintCallable, Category = "Audiokinetic|AkComponent")
	void SetEarlyReflectionOrder(int NewEarlyReflectionOrder);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, Category = "AkComponent|Spatial Audio", meta = (ClampMin = "0.0", ClampMax = "1.0"))
	float EarlyReflectionBusSendGain;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, Category = "AkComponent|Spatial Audio", meta = (ClampMin = "0.0"))
	float EarlyReflectionMaxPathLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AkComponent|Occlusion")
	TEnumAsByte<ECollisionChannel> OcclusionCollisionChannel = ECollisionChannel::ECC_Visibility;

	// Note: Reflection fiters are not currently supported on individual polygons in AkSpatialAudioVolume, so it is useless to have it here and therefor hidden from the UI.
	//UPROPERTY(EditAnywhere, AdvancedDisplay, Category = "AkComponent|Spatial Audio", Meta = (Bitmask, BitmaskEnum = "EReflectionFilterBits"))
	int32 ReflectionFilter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, Category = "AkComponent|Spatial Audio")
	uint32 EnableSpotReflectors : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, Category = "AkComponent|Spatial Audio|Debug Draw")
	uint32 DrawFirstOrderReflections : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, Category = "AkComponent|Spatial Audio|Debug Draw")
	uint32 DrawSecondOrderReflections : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, Category = "AkComponent|Spatial Audio|Debug Draw")
	uint32 DrawHigherOrderReflections : 1;

	/** Stop sound when owner is destroyed? */
	UPROPERTY()
	bool StopWhenOwnerDestroyed;

	/**
	 * Posts this component's AkAudioEvent to Wwise, using this component as the game object source
	 *
	 */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category="Audiokinetic|AkComponent")
	int32 PostAssociatedAkEvent();
	
	/**
	 * Posts an event to Wwise, using this component as the game object source
	 *
	 * @param AkEvent		The event to post
	 */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category="Audiokinetic|AkComponent", meta = (AdvancedDisplay = "1"))
	int32 PostAkEvent( class UAkAudioEvent * AkEvent, const FString& in_EventName );
	
	/**
	 * Posts an event to Wwise using its name, using this component as the game object source
	 *
	 * @param AkEvent		The event to post
	 */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category="Audiokinetic|AkComponent", meta = (DeprecatedFunction, DeprecationMessage = "Please use the \"Event Name\" field of Post Ak Event"))
	int32 PostAkEventByName( const FString& in_EventName );
	
	AkPlayingID PostAkEventByNameWithCallback(const FString& in_EventName, AkUInt32 in_uFlags = 0, AkCallbackFunc in_pfnUserCallback = NULL, void * in_pUserCookie = NULL);

	/**
	 * Stops playback using this component as the game object to stop
	 */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category="Audiokinetic|AkComponent")
	void Stop();
	
	/**
	 * Sets an RTPC value, using this component as the game object source
	 *
	 * @param RTPC			The name of the RTPC to set
	 * @param Value			The value of the RTPC
	 * @param InterpolationTimeMs - Duration during which the RTPC is interpolated towards Value (in ms)
	 */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category="Audiokinetic|AkComponent")
	void SetRTPCValue( FString RTPC, float Value, int32 InterpolationTimeMs );
	
	/**
	 * Posts a trigger to wwise, using this component as the game object source
	 *
	 * @param Trigger		The name of the trigger
	 */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category="Audiokinetic|AkComponent")
	void PostTrigger( FString Trigger );
	
	/**
	 * Sets a switch group in wwise, using this component as the game object source
	 *
	 * @param SwitchGroup	The name of the switch group
	 * @param SwitchState	The new state of the switch
	 */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category="Audiokinetic|AkComponent")
	void SetSwitch( FString SwitchGroup, FString SwitchState );

	/**
	 * Sets whether or not to stop sounds when the component's owner is destroyed
	 *
	 * @param bStopWhenOwnerDestroyed	Whether or not to stop sounds when the component's owner is destroyed
	 */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category="Audiokinetic|AkComponent")
	void SetStopWhenOwnerDestroyed( bool bStopWhenOwnerDestroyed );

	/**
	 * Set a game object's listeners
	 *
	 * @param Listeners	The array of components that listen to this component
	 */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category="Audiokinetic|AkComponent")
	void SetListeners( const TArray<UAkComponent*>& Listeners );

	// Reverb volumes functions

	/**
	 * Set UseReverbVolumes flag. Set value to true to use reverb volumes on this component.
	 *
	 * @param inUseReverbVolumes	Whether to use reverb volumes or not.
	 */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category="Audiokinetic|AkComponent")
	void UseReverbVolumes(bool inUseReverbVolumes);

	// Early Reflections

	/**
	* UseEarlyReflections. Enable (or disable) early reflections for this ak component.
	*
	* @param AuxBus	Aux bus that contains the AkReflect plugin
	* @param Left	Enable reflections off left wall.
	* @param Right	Enable reflections off right wall.
	* @param Floor	Enable reflections off floor.
	* @param Ceiling	Enable reflections off front wall.
	* @param Back	Enable reflections off front wall.
	* @param Front	Enable reflections off front wall.
	* @param EnableSpotReflectors	Enable reflections off spot reflectors.
	* @param AuxBusName	Aux bus name that contains the AkReflect plugin
	*/
	UFUNCTION(BlueprintCallable, Category = "Audiokinetic|AkComponent", meta = (AdvancedDisplay = "8"))
	void UseEarlyReflections(class UAkAuxBus* AuxBus,
								bool Left,
								bool Right,
								bool Floor,
								bool Ceiling,
								bool Back, 
								bool Front,
								bool SpotReflectors,
								const FString& AuxBusName = FString(""));

	/**
	* Set the output bus volume (direct) to be used for the specified game object.
	* The control value is a number ranging from 0.0f to 1.0f.
	*
	* @param BusVolume - Bus volume to set
	*/
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "Audiokinetic|AkComponent")
	void SetOutputBusVolume(float BusVolume);


	// Occlusion/obstruction functions

	/** Modifies the attenuation computations on this game object to simulate sounds with a a larger or smaller area of effect. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="AkComponent")
	float AttenuationScalingFactor;

	/** Sets the attenuation scaling factor, which modifies the attenuation computations on this game object to simulate sounds with a a larger or smaller area of effect. */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "Audiokinetic|AkComponent")
	void SetAttenuationScalingFactor(float Value);

	/** Time interval between occlusion/obstruction checks. Set to 0 to disable occlusion on this component. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AkComponent")
	float OcclusionRefreshInterval;

	/**
	 * Return the real attenuation radius for this component (AttenuationScalingFactor * AkAudioEvent->MaxAttenuationRadius)
	 */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category="Audiokinetic|AkComponent")
	float GetAttenuationRadius() const;

	/** Modifies the attenuation computations on this game object to simulate sounds with a a larger or smaller area of effect. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="AkComponent")
	UAkAudioEvent* AkAudioEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, Category = "AkComponent")
	FString EventName;

	void UpdateGameObjectPosition();

	void GetAkGameObjectName(FString& Name) const;

#if CPP

	/*------------------------------------------------------------------------------------
		UActorComponent interface.
	------------------------------------------------------------------------------------*/
	/**
	 * Called after component is registered
	 */
	virtual void OnRegister();

	/**
	 * Called after component is unregistered
	 */
	virtual void OnUnregister();

	/**
	 * Clean up
	 */
	virtual void FinishDestroy();
	virtual void OnComponentDestroyed(bool bDestroyingHierarchy) override;

	/**
	 * Clean up after error
	 */
	virtual void ShutdownAfterError();

	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;

	// Begin USceneComponent Interface
	virtual void Activate(bool bReset=false) override;
	virtual void OnUpdateTransform(EUpdateTransformFlags UpdateTransformFlags, ETeleportType Teleport = ETeleportType::None) override;
	// End USceneComponent Interface

	/** Gets all AkLateReverbComponents at the AkComponent's current location, and puts them in a list
	 *
	 * @param Loc					The location of the AkComponent
	 */
	void UpdateAkLateReverbComponentList(FVector Loc);

	/** Gets the current room the AkComponent is in.
	 * 
	 * @param Location			The location of the AkComponent
	 */
	void UpdateSpatialAudioRoom(FVector Location);

	void CalculateObstructionOcclusionValues(bool CalledFromTick);

	void SetAutoDestroy(bool in_AutoDestroy) { bAutoDestroy = in_AutoDestroy; }

	bool UseDefaultListeners() const { return bUseDefaultListeners; }

	bool HasActiveEvents() const;

	void OnListenerUnregistered(UAkComponent* in_pListener)
	{
		ListenerInfoMap.Remove(in_pListener);
	}

	void OnDefaultListenerAdded(UAkComponent* in_pListener)
	{
		check(bUseDefaultListeners);
		ListenerInfoMap.FindOrAdd(in_pListener);
	}

	const TSet<UAkComponent*>& GetEmitters();

	AkGameObjectID GetAkGameObjectID() const;

	bool AllowAudioPlayback() const;

	bool VerifyEventName(const FString& in_EventName) const;

	AkRoomID GetSpatialAudioRoom() const;

	const FTransform& GetTransform() const;

protected:
#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

private:
	enum EFaces { MINX, MAXX, MINY, MAXY, MINZ, MAXZ };
	
	void FaceToVertices(EFaces in_face, FBox in_boundingBox, FVector in_hitpoint, TArray<FVector>& out_Points);

	void FaceToVertex(EFaces in_faceA, EFaces in_faceB, const FBox& in_boundingBox, const FVector& in_hitpoint, FVector& out_Point);
	void FaceToVertexHelper(EFaces in_face, const FBox& in_boundingBox, FVector& out_Point);
	bool LineTrace(const FVector& in_From, const FVector& in_To, FHitResult& out_Hit, const struct FCollisionQueryParams& collisionQueryParam);

	/**
	 * Register the component with Wwise
	 */
	void RegisterGameObject();

	/**
	 * Unregister the component from Wwise
	 */
	void UnregisterGameObject();

    bool IsRegisteredWithWwise = false;

	FVector GetPosition() const;

	// Reverb Volume features ---------------------------------------------------------------------

	/** Computes the increment to apply to a fading AkReverbVolume for a given time increment.
	 *
	 * @param DeltaTime		The given time increment since last fade computation
	 * @param FadeRate		The rate at which the fade is applied (percentage of target value per second)
	 * @param TargetValue	The targer control value at which the fading stops
	 * @return				The increment to apply
	 */
	FORCEINLINE float ComputeFadeIncrement(float DeltaTime, float FadeRate, float TargetValue) const
	{
		// Rate (%/s) * Delta (s) = % for given delta, apply to target.
		return (FadeRate * DeltaTime) * TargetValue;
	}

	/** Look if a new AkReverbVolume is in this component's CurrentAkReverbVolumes. */
	int32 FindNewAkLateReverbComponentInCurrentlist(void* FadeControlUniqueId);

	/** Apply the current list of AkReverbVolumes 
	 *
	 * @param DeltaTime		The given time increment since last fade computation
	 */
	void ApplyAkReverbVolumeList(float DeltaTime);

	bool FindPathAroundObstacle(FVector in_origin, FVector in_destination, FBox in_boundingBox, FVector& out_toPoint, FVector& out_newPoint, bool& out_bDestinationWhitinLastBoundingBox);
	bool FindBestCornerPath(FVector in_origin, FVector in_destination, TArray<FVector>& in_pointsTo, FVector& out_bestTo);
	bool FindBestPath(FVector in_origin, FVector in_destination, TArray<FVector>& in_pointsTo, TArray<FVector>& in_pointsAwayFrom, FVector& out_bestTo, FVector& out_bestAwayFrom);

	bool IntersecBoundingBox(FBox in_boundingBox, FVector in_origin, FVector in_destination, TArray<FVector>& out_hitpointTo, TArray<FVector>& out_hitpointFrom);

	struct AkReverbFadeControl
	{
		uint32 AuxBusId;
		float CurrentControlValue;
		float TargetControlValue;
		float FadeRate;
		bool bIsFadingOut;
		float Priority;
		void* FadeControlUniqueId;

		AkReverbFadeControl(const class UAkLateReverbComponent& LateReverbComponent) :
			AuxBusId(LateReverbComponent.GetAuxBusId()),
			CurrentControlValue(0.0f),
			TargetControlValue(LateReverbComponent.SendLevel),
			FadeRate(LateReverbComponent.FadeRate),
			bIsFadingOut(false),
			Priority(LateReverbComponent.Priority),
			FadeControlUniqueId((void*)&LateReverbComponent)
		{}
	};

	/** Array of the active AkReverbVolumes at the AkComponent's location */
	TArray<AkReverbFadeControl> CurrentLateReverbComponents;

	/** Room the AkComponent is currently in. nullptr if none */
	class UAkRoomComponent* CurrentRoom;

	/** Whether to use reverb volumes or not */
	bool bUseReverbVolumes;

	/** Whether to automatically destroy the component when the event is finished */
	bool bAutoDestroy;

	/** Whether an event was posted on the component. Never reset to false. */
	bool bStarted;

	// Occlusion/obstruction features -------------------------------------------------------------

	/** 
	 * Determine if this component is occluded
	 * 
	 * @param DeltaTime		Time elasped since last function call.
	 */
	void SetObstructionOcclusion(const float DeltaTime);
	void ClearOcclusionValues();

	/** Last time occlusion was refreshed */
	float LastObstructionOcclusionRefresh;

	static const int kMaxVirtualPos = 8;
	AkSoundPosition VirtualPositions[kMaxVirtualPos];
	int NumVirtualPos;

	struct FAkListenerOcclusionObstruction
	{
		float CurrentValue;
		float TargetValue;
		float Rate;

		FAkListenerOcclusionObstruction(float in_TargetValue = 0.0f, float in_CurrentValue = 0.0f);

		void SetTarget(float in_TargetValue);
		bool ReachedTarget();
		bool Update(float DeltaTime);
	};

	struct FAkListenerOcclusionObstructionPair
	{
		FAkListenerOcclusionObstruction Occ;
		FAkListenerOcclusionObstruction Obs;

		bool Update(float DeltaTime);
		bool ReachedTarget();
	};

	void SetOcclusionForListener(const UAkComponent* in_Listener, FAkListenerOcclusionObstructionPair& OccObs);
	bool CalculateObstructionBasedOnShoeboxes(const FVector& SourcePosition, AkRoomID SourceRoom, const FVector& ListenerPosition, AkRoomID ListenerRoom, FAkListenerOcclusionObstructionPair& OccObs);

	static const float OCCLUSION_OBSTRUCTION_FADE_RATE;
	bool ClearingOcclusionObstruction;

#endif

#if WITH_EDITORONLY_DATA
	/** Utility function that updates which texture is displayed on the sprite dependent on the properties of the Audio Component. */
	void UpdateSpriteTexture();
#endif

	bool bUseDefaultListeners;
	TMap<UAkComponent*, FAkListenerOcclusionObstructionPair> ListenerInfoMap;
	
	//NOTE: This set of emitters is only valid if this UAkComopnent is a listener, and it it is not a default listener. See GetEmitters().
	TSet<UAkComponent*> Emitters;

	void CheckEmitterListenerConsistancy();

	void DebugDrawReflections() const;
	void _DebugDrawReflections(const AkVector& akEmitterPos, const AkVector& akListenerPos, const AkSoundPathInfo* paths, AkUInt32 uNumPaths) const;
};
