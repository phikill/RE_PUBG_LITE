// Copyright (c) 2006-2012 Audiokinetic Inc. / All Rights Reserved

/*=============================================================================
	AkGameplayStatics.h:
=============================================================================*/
#pragma once

#include "AkInclude.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AkGameplayStatics.generated.h"

// PostEvent functions need to return the PlayingID (uint32), but Blueprints only work with int32.
// Make sure AkPlayingID is always 32 bits, or else we're gonna have a bad time.
static_assert(sizeof(AkPlayingID) == sizeof(int32), "AkPlayingID is not 32 bits anymore. Change return value of PostEvent functions!");

UENUM(BlueprintType)
enum class AkChannelConfiguration : uint8
{
	Ak_Parent = 0,
	Ak_1_0,
	Ak_2_0,
	Ak_3_0,
	Ak_4_0,
	Ak_5_1,
	Ak_7_1,
	Ak_5_1_2,
	Ak_7_1_2,
	Ak_7_1_4,
	Ak_Auro_9_1,
	Ak_Auro_10_1,
	Ak_Auro_11_1,
	Ak_Auro_13_1,
	Ak_Ambisonics_1st_order,
	Ak_Ambisonics_2nd_order,
	Ak_Ambisonics_3rd_order
};

UENUM(BlueprintType)
enum class PanningRule : uint8
{
	PanningRule_Speakers = 0,	///< Left and right positioned 60 degrees apart (by default - see AK::SoundEngine::GetSpeakerAngles()).
	PanningRule_Headphones = 1		///< Left and right positioned 180 degrees apart.
};

UCLASS()
class AKAUDIO_API UAkGameplayStatics : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	/** Get an AkComponent attached to and following the specified component. 
	 * @param AttachPointName - Optional named point within the AttachComponent to play the sound at.
	 */
	UFUNCTION(BlueprintCallable, Category="Audiokinetic")
	static class UAkComponent * GetAkComponent( class USceneComponent* AttachToComponent, FName AttachPointName = NAME_None, FVector Location = FVector(ForceInit), EAttachLocation::Type LocationType = EAttachLocation::KeepRelativeOffset );

	UFUNCTION(BlueprintCallable, Category="Audiokinetic")
	static bool IsEditor();

	UFUNCTION(BlueprintCallable, Category = "Audiokinetic")
	static bool IsGame(UObject* WorldContextObject);


	/** Posts a Wwise Event attached to and following the specified component.
	 * @param AkEvent - Wwise Event to post.
	 * @param Actor - actor on which to post the Wwise Event.
	 * @param AttachPointName - Optional named point within the AttachComponent to play the sound at (NOT FUNCTIONAL).
	 * @param bStopWhenAttachedToDestroyed - Specifies whether the sound should stop playing when the owner of the attach to component is destroyed.
	 */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(DeprecatedFunction), Category="Audiokinetic|Actor", meta = (AdvancedDisplay = "3"))
	static int32 PostEventAttached(	class UAkAudioEvent* AkEvent, 
									class AActor* Actor, 
									FName AttachPointName = NAME_None,
									bool bStopWhenAttachedToDestroyed = false,
									FString EventName = FString(""));
	
	/** Posts a Wwise Event attached to and following the root component of the specified actor.
	 * @param AkEvent - ak event to play.
	 * @param Actor - actor on which to play the event.
	 * @param bStopWhenAttachedToDestroyed - Specifies whether the sound should stop playing when the owner of the attach to component is destroyed.
	 */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category="Audiokinetic|Actor", meta=(AdvancedDisplay="3"))
	static int32 PostEvent(	class UAkAudioEvent* AkEvent, 
							class AActor* Actor, 
							bool bStopWhenAttachedToDestroyed = false,
							FString EventName = FString(""));

	/** Posts a Wwise Event by name attached to and following the root component of the specified actor.
	 * @param AkEvent - ak event to play.
	 * @param Actor - actor on which to play the event.
	 * @param bStopWhenAttachedToDestroyed - Specifies whether the sound should stop playing when the owner of the attach to component is destroyed.
	 */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category="Audiokinetic|Actor", meta=(DeprecatedFunction, DeprecationMessage = "Please use the \"Event Name\" field of PostEvent"))
	static void PostEventByName(	const FString& EventName, 
									class AActor* Actor, 
									bool bStopWhenAttachedToDestroyed = false);

	/** Posts a Wwise Event at the specified location. This is a fire and forget sound, created on a temporary Wwise Game Object. Replication is also not handled at this point.
	 * @param AkEvent - Wwise Event to post.
	 * @param Location - Location from which to post the Wwise Event.
	 * @param Orientation - Orientation of the event.
	 */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category="Audiokinetic", meta=(WorldContext="WorldContextObject", AdvancedDisplay = "3"))
	static int32 PostEventAtLocation(class UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation, const FString& EventName, UObject* WorldContextObject );

	/** Posts a Wwise Event by name at the specified location. This is a fire and forget sound, created on a temporary Wwise Game Object. Replication is also not handled at this point.
	 * @param AkEvent - Wwise Event to post.
	 * @param Location - Location from which to post the Wwise Event.
	 * @param Orientation - Orientation of the event.
	 */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category="Audiokinetic", meta=(WorldContext="WorldContextObject", DeprecatedFunction, DeprecationMessage = "Please use the \"Event Name\" field of PostEventAtLocation"))
	static void PostEventAtLocationByName(const FString& EventName, FVector Location, FRotator Orientation, UObject* WorldContextObject );

	/** Spawn an AkComponent at a location. Allows, for example, to set a switch on a fire and forget sound.
	 * @param AkEvent - Wwise Event to post.
	 * @param EarlyReflectionsBus - Use the provided auxiliary bus to process early reflections.  If NULL, EarlyReflectionsBusName will be used.
	 * @param Location - Location from which to post the Wwise Event.
	 * @param Orientation - Orientation of the event.
	 * @param AutoPost - Automatically post the event once the AkComponent is created.
	 * @param EarlyReflectionsBusName - Use the provided auxiliary bus to process early reflections.  If empty, no early reflections will be processed.
	 * @param AutoDestroy - Automatically destroy the AkComponent once the event is finished.
	 */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category="Audiokinetic", meta=(WorldContext="WorldContextObject", AdvancedDisplay = "6"))
	static class UAkComponent* SpawnAkComponentAtLocation(UObject* WorldContextObject, class UAkAudioEvent* AkEvent, class UAkAuxBus* EarlyReflectionsBus, FVector Location, FRotator Orientation, bool AutoPost, const FString& EventName, const FString& EarlyReflectionsBusName = FString(""), bool AutoDestroy = true);

	/**
	 * Sets the value of a Game Parameter, optionally targetting the root component of a specified actor.
	 * @param RTPC - The name of the Game Parameter to set
	 * @param Value - The value of the Game Parameter
	 * @param InterpolationTimeMs - Duration during which the Game Parameter is interpolated towards Value (in ms)
	 * @param Actor - (Optional) Actor on which to set the Game Parameter value
	 */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category="Audiokinetic")
	static void SetRTPCValue( FName RTPC, float Value, int32 InterpolationTimeMs, class AActor* Actor );

	/**
	 * Set the active State for a given State Group.
	 * @param StateGroup - Name of the State Group to be modified
	 * @param State - Name of the State to be made active
	 */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category="Audiokinetic")
	static void SetState( FName StateGroup, FName State );
	
	/**
	 * Posts a Trigger, targetting the root component of a specified actor.
	 * @param Trigger - Name of the Trigger
	 * @param Actor - Actor on which to post the Trigger
	 */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category="Audiokinetic|Actor")
	static void PostTrigger( FName Trigger, class AActor* Actor );
	
	/**
	 * Sets the active Switch for a given Switch Group, targetting the root component of a specified actor.
	 * @param SwitchGroup - Name of the Switch Group to be modified
	 * @param SwitchState - Name of the Switch to be made active
	 * @param Actor - Actor on which to set the switch
	 */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category="Audiokinetic|Actor")
	static void SetSwitch( FName SwitchGroup, FName SwitchState, class AActor* Actor );

	/**
	* Sets UseReverbVolumes flag on a specified actor. Set value to true to use reverb volumes on this component.
	*
	* @param inUseReverbVolumes - Whether to use reverb volumes or not.
	* @param Actor - Actor on which to set the flag
	*/
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category="Audiokinetic|Actor")
	static void UseReverbVolumes(bool inUseReverbVolumes, class AActor* Actor);

	/**
	* Sets UseEarlyReflections flag on a specified actor. Set value to true to use calculate and render early reflections on this component.
	*
	* @param Actor - Actor on which to set the flag
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
	UFUNCTION(BlueprintCallable, Category = "Audiokinetic|Actor", meta = (AdvancedDisplay = "9"))
	static void UseEarlyReflections(class AActor* Actor, 
		class UAkAuxBus* AuxBus,
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
	* @param Actor - Actor on which to set the flag
	*/
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "Audiokinetic|Actor")
	static void SetOutputBusVolume(float BusVolume, class AActor* Actor);

	/**
	* Force channel configuration for the specified bus.
	* This function has unspecified behavior when changing the configuration of a bus that
	* is currently playing.
	* You cannot change the configuration of the master bus.
	*
	* @param BusName				Bus Name
	* @param ChannelConfiguration	Desired channel configuration.
	* @return Always returns AK_Success
	*/
	UFUNCTION(BlueprintCallable, Category = "Audiokinetic")
	static void SetBusConfig(const FString& BusName, AkChannelConfiguration ChannelConfiguration);

	/**
	*  Set the panning rule of the specified output.
	*  This may be changed anytime once the sound engine is initialized.
	*  @warning This function posts a message through the sound engine's internal message queue, whereas GetPanningRule() queries the current panning rule directly.
	*
	* @param PanRule	Panning rule.
	*/
	UFUNCTION(BlueprintCallable, Category = "Audiokinetic")
	static void SetPanningRule(PanningRule PanRule);
	
	/**
	 * Sets the occlusion calculation refresh interval, targetting the root component of a specified actor.
	 * @param RefreshInterval - Value of the wanted refresh interval
	 * @param Actor - Actor on which to set the refresh interval
	 */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category="Audiokinetic|Actor")
	static void SetOcclusionRefreshInterval(float RefreshInterval, class AActor* Actor );

	/**
	 * Stop all sounds for an actor.
	 */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category="Audiokinetic|Actor")
	static void StopActor(class AActor* Actor);

	/**
	 * Stop all sounds.
	 */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category="Audiokinetic")
	static void StopAll();

	/**
	 * Start all Ak ambient sounds.
	 */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category="Audiokinetic|AkAmbientSound", meta=(HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject"))
	static void StartAllAmbientSounds(UObject* WorldContextObject);
	
	/**
	 * Stop all Ak ambient sounds.
	 */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category="Audiokinetic|AkAmbientSound", meta=(HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject"))
	static void StopAllAmbientSounds(UObject* WorldContextObject);

	
	/**
	 * Clear all loaded banks 
	 */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category="Audiokinetic|SoundBanks")
	static void ClearBanks();

	/* 
	 * Loads a bank.
	 * @param Bank - The bank to load.
	 * 
	 */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category="Audiokinetic|SoundBanks", meta=(AdvancedDisplay="1"))
	static void LoadBank(class UAkAudioBank* Bank, const FString& BankName);

	/* 
	 * Loads a bank by its name.
	 * @param Bank - The bank to load.
	 * 
	 */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category="Audiokinetic|SoundBanks", meta=(DeprecatedFunction, DeprecationMessage = "Please use the \"Bank Name\" field of Load Bank"))
	static void LoadBankByName(const FString& BankName);

	/* 
	 * Loads an array of bank.
	 * @param Banks - An array of banks to load
	 * @param CleanUpBanks - If true, will unload any loaded banks that are not in Banks
	 * 
	 */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category="Audiokinetic|SoundBanks")
	static void LoadBanks(const TArray<UAkAudioBank*>& SoundBanks, bool SynchronizeSoundBanks);
	
	/* 
	 * Loads the init bank.
	 * 
	 */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category="Audiokinetic|SoundBanks")
	static void LoadInitBank();
	
	/**
	 * Unloads a bank.
	 * @param Bank - The bank to unload.
	 */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category="Audiokinetic|SoundBanks", meta=(AdvancedDisplay="1"))
	static void UnloadBank(class UAkAudioBank* Bank, const FString& BankName);

	/**
	 * Unloads a bank by its name.
	 * @param Bank - The bank to unload.
	 */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category="Audiokinetic|SoundBanks", meta = (DeprecatedFunction, DeprecationMessage = "Please use the \"Bank Name\" field of Unload Bank"))
	static void UnloadBankByName(const FString& BankName);

	/**
	 * Starts a Wwise output capture. The output file will be located in the same folder as the SoundBanks.
	 * @param Filename - The name to give to the output file.
	 */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category="Audiokinetic|Debug")
	static void StartOutputCapture(const FString& Filename);

	/**
	 * Add text marker in output capture file.
	 * @param MarkerText - The name text to put in the marker.
	 */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category="Audiokinetic|Debug")
	static void AddOutputCaptureMarker(const FString& MarkerText);

	/**
	 * Stops a Wwise output capture. The output file will be located in the same folder as the SoundBanks.
	 */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category="Audiokinetic|Debug")
	static void StopOutputCapture();
	
	/**
	 * Starts a Wwise profiler capture. The output file will be located in the same folder as the SoundBanks.
	 * @param Filename - The name to give to the output file.
	 */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category="Audiokinetic|Debug")
	static void StartProfilerCapture(const FString& Filename);

	/**
	 * Stops a Wwise profiler capture. The output file will be located in the same folder as the SoundBanks.
	 */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category="Audiokinetic|Debug")
	static void StopProfilerCapture();

	/**
	* Allows to globally tweak the occlusion with a multiplicative factor.
	*/
	UFUNCTION(BlueprintCallable, Category = "Audiokinetic")
	static void SetOcclusionScalingFactor(float ScalingFactor) { OcclusionScalingFactor = ScalingFactor; }

	/**
	* Allows to globally tweak the occlusion with a multiplicative factor.
	*/
	UFUNCTION(BlueprintCallable, Category = "Audiokinetic")
	static float GetOcclusionScalingFactor() { return OcclusionScalingFactor; }

	static bool m_bSoundEngineRecording;

private:
	static inline void GetChannelConfig(AkChannelConfiguration ChannelConfiguration, AkChannelConfig& config);

	static float OcclusionScalingFactor;

};