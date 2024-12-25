// Copyright (c) 2006-2012 Audiokinetic Inc. / All Rights Reserved

/*=============================================================================
	AkAudioDevice.h: Audiokinetic audio interface object.
=============================================================================*/

#pragma once

/*------------------------------------------------------------------------------------
	AkAudioDevice system headers
------------------------------------------------------------------------------------*/

#include "AkInclude.h"
#include "AkBankManager.h"
#include "Engine/EngineBaseTypes.h"
#include "Engine/EngineTypes.h"

#define GET_AK_EVENT_NAME(AkEvent, EventName) ((AkEvent) ? ((AkEvent)->GetName()) : (EventName))

#ifndef AK_SUPPORT_WCHAR
	#define TCHAR_TO_AK(Text) (const ANSICHAR*)(TCHAR_TO_ANSI(Text))
#else
	#define TCHAR_TO_AK(Text) (const WIDECHAR*)(Text)
#endif

#if !defined(AK_SUPPORT_WCHAR) || defined(AK_PS4) || defined(AK_LINUX) || defined(AK_MAC_OS_X) || defined(AK_IOS) || defined(AK_NX)
	#define TCHAR_TO_AK_OS(Text) (const ANSICHAR*)(TCHAR_TO_ANSI(Text))
#else
	#define TCHAR_TO_AK_OS(Text) (const WIDECHAR*)(Text)
#endif


DECLARE_LOG_CATEGORY_EXTERN(LogAkAudio, Log, All);

/*------------------------------------------------------------------------------------
	Dependencies, helpers & forward declarations.
------------------------------------------------------------------------------------*/

class UAkComponent;
class UAkLateReverbComponent;
class FAkComponentCallbackManager;
class CAkUnrealIOHookDeferred;
class AkFileCustomParamPolicy;
class AAkAcousticPortal;
class CAkDiskPackage;

template <class T_LLIOHOOK_FILELOC, class T_PACKAGE, class U_CUSTOMPARAM_POLICY>
class CAkFilePackageLowLevelIO;

typedef TSet<UAkComponent*> UAkComponentSet;

#define DUMMY_GAMEOBJ ((AkGameObjectID)0x2)
#define SOUNDATLOCATION_GAMEOBJ ((AkGameObjectID)0x3)

#ifdef AK_SOUNDFRAME
namespace AK {
	namespace SoundFrame {
		class IClient;
		class ISoundFrame;
	}
}
#endif

/** Define hashing for AkGameObjectID. */
template<typename ValueType, bool bInAllowDuplicateKeys>
struct AkGameObjectIdKeyFuncs : TDefaultMapKeyFuncs<AkGameObjectID, ValueType, bInAllowDuplicateKeys>
{
	static FORCEINLINE uint32 GetKeyHash(AkGameObjectID Key)
	{
		if (sizeof(Key) <= 4)
		{
			return (uint32)Key;
		}
		else
		{
			// Copied from GetTypeHash( const uint64 A ) found in ...\Engine\Source\Runtime\Core\Public\Templates\TypeHash.h
			return (uint32)Key + ((uint32)(Key >> 32) * 23);
		}
	}
};


/*------------------------------------------------------------------------------------
	Audiokinetic audio device.
------------------------------------------------------------------------------------*/
 
class AKAUDIO_API FAkAudioDevice
#ifdef AK_SOUNDFRAME
	: public AK::SoundFrame::IClient
#endif
{
public:
	//virtual bool Exec( const TCHAR* Cmd, FOutputDevice& Ar )
	//{
	//	return true;
	//}

	virtual ~FAkAudioDevice() {}

	/**
	 * Initializes the audio device and creates sources.
	 *
	 * @return true if initialization was successful, false otherwise
	 */
	virtual bool Init( void );

	/**
	 * Update the audio device and calculates the cached inverse transform later
	 * on used for spatialization.
	 */
	virtual bool Update( float DeltaTime );
	
	/**
	 * Tears down audio device by stopping all sounds, removing all buffers, 
	 * destroying all sources, ... Called by both Destroy and ShutdownAfterError
	 * to perform the actual tear down.
	 */
	virtual void Teardown();

	/**
	 * Stops all game sounds (and possibly UI) sounds
	 *
	 * @param bShouldStopUISounds If true, this function will stop UI sounds as well
	 */
	virtual void StopAllSounds( bool bShouldStopUISounds = false );

	/**
	 * Stop all audio associated with a scene
	 *
	 * @param SceneToFlush		Interface of the scene to flush
	 */
	void Flush(UWorld* WorldToFlush);

	/**
	 * Clears all loaded soundbanks
	 *
	 * @return Result from ak sound engine 
	 */
	AKRESULT ClearBanks();

	/**
	 * Load a soundbank
	 *
	 * @param in_Bank			The bank to load
	 * @param in_memPoolId		Memory pool ID (media is stored in the sound engine's default pool if AK_DEFAULT_POOL_ID is passed)
	 * @param out_bankID		Returned bank ID
	 * @return Result from ak sound engine 
	 */
	AKRESULT LoadBank(
		class UAkAudioBank *	in_Bank,
		AkMemPoolId		in_memPoolId,
		AkBankID &      out_bankID
		);

	/**
	 * Load a soundbank by name
	 *
	 * @param in_BankName			The name of the bank to load
	 * @param in_memPoolId		Memory pool ID (media is stored in the sound engine's default pool if AK_DEFAULT_POOL_ID is passed)
	 * @param out_bankID		Returned bank ID
	 * @return Result from ak sound engine 
	 */
	AKRESULT LoadBank(
		const FString&	in_BankName,
		AkMemPoolId		in_memPoolId,
		AkBankID &      out_bankID
		);

	/**
	 * Load a soundbank asynchronously
	 *
	 * @param in_Bank			The bank to load
	 * @param in_pfnBankCallback Callback function
	 * @param in_pCookie		Callback cookie (reserved to user, passed to the callback function)
	 * @param in_memPoolId		Memory pool ID (media is stored in the sound engine's default pool if AK_DEFAULT_POOL_ID is passed)
	 * @param out_bankID		Returned bank ID
	 * @return Result from ak sound engine 
	 */
	AKRESULT LoadBank(
        class UAkAudioBank *      in_Bank,
		AkBankCallbackFunc  in_pfnBankCallback,
		void *              in_pCookie,
        AkMemPoolId         in_memPoolId,
		AkBankID &          out_bankID
        );
		
	/**
	 * Unload a soundbank
	 *
	 * @param in_Bank			The bank to unload
	 * @param out_pMemPoolId	Returned memory pool ID used with LoadBank() (can pass NULL)
	 * @return Result from ak sound engine 
	 */
	AKRESULT UnloadBank(
        class UAkAudioBank *      in_Bank,
        AkMemPoolId *       out_pMemPoolId = NULL
        );

	/**
	 * Unload a soundbank by its name
	 *
	 * @param in_BankName		The name of the bank to unload
	 * @param out_pMemPoolId	Returned memory pool ID used with LoadBank() (can pass NULL)
	 * @return Result from ak sound engine 
	 */
	AKRESULT UnloadBank(
        const FString&      in_BankName,
        AkMemPoolId *       out_pMemPoolId = NULL
        );

	/**
	 * Unload a soundbank asynchronously
	 *
	 * @param in_Bank			The bank to unload
	 * @param in_pfnBankCallback Callback function
	 * @param in_pCookie		Callback cookie (reserved to user, passed to the callback function)
	 * @return Result from ak sound engine 
	 */
	AKRESULT UnloadBank(
        class UAkAudioBank *      in_Bank,
		AkBankCallbackFunc  in_pfnBankCallback,
		void *              in_pCookie
        );

	/**
	 * Load the audiokinetic 'init' bank
	 *
	 * @return Result from ak sound engine 
	 */
	AKRESULT LoadInitBank(void);

	/**
	* Load all file packages found in the SoundBanks base path
	*
	* @return operation success
	*/
	bool LoadAllFilePackages(void);

	/**
	 * Unload the audiokinetic 'init' bank
	 *
	 * @return Result from ak sound engine 
	 */
	AKRESULT UnloadInitBank(void);

	/**
	* Unload all file packages found in the SoundBanks base path
	*
	* @return operation success
	*/
	bool UnloadAllFilePackages(void);

	/**
	 * Load all banks currently being referenced
	 */
	void LoadAllReferencedBanks(void);
	
	/**
	 * Reload all banks currently being referenced
	 */
	void ReloadAllReferencedBanks(void);

	/**
	 * FString-friendly GetIDFromString
	 */
	AkUniqueID GetIDFromString(const FString& in_string);

	/**
	 * Post an event to ak soundengine
	 *
	 * @param in_pEvent			Name of the event to post
	 * @param in_pComponent		AkComponent on which to play the event
	 * @param in_uFlags			Bitmask: see \ref AkCallbackType
	 * @param in_pfnCallback	Callback function
	 * @param in_pCookie		Callback cookie that will be sent to the callback function along with additional information.
	 * @param in_bStopWhenOwnerDestroyed If true, then the sound should be stopped if the owning actor is destroyed
	 * @return ID assigned by ak soundengine
	 */
	AkPlayingID PostEvent(
		class UAkAudioEvent * in_pEvent,
		AActor * in_pActor,
        AkUInt32 in_uFlags = 0,
		AkCallbackFunc in_pfnCallback = NULL,
		void * in_pCookie = NULL,
		bool in_bStopWhenOwnerDestroyed = false
        );

	/**
	 * Post an event to ak soundengine by name
	 *
	 * @param in_EventName		Name of the event to post
	 * @param in_pComponent		AkComponent on which to play the event
	 * @param in_uFlags			Bitmask: see \ref AkCallbackType
	 * @param in_pfnCallback	Callback function
	 * @param in_pCookie		Callback cookie that will be sent to the callback function along with additional information.
	 * @param in_bStopWhenOwnerDestroyed If true, then the sound should be stopped if the owning actor is destroyed
	 * @return ID assigned by ak soundengine
	 */
	AkPlayingID PostEvent(
		const FString& in_EventName, 
		AActor * in_pActor,
		AkUInt32 in_uFlags = 0,
		AkCallbackFunc in_pfnCallback = NULL,
		void * in_pCookie = NULL,
		bool in_bStopWhenOwnerDestroyed = false
		);

	/**
	* Post an event to ak soundengine by name
	*
	* @param in_EventName		Name of the event to post
	* @param in_pComponent		AkComponent on which to play the event
	* @param in_uFlags			Bitmask: see \ref AkCallbackType
	* @param in_pfnCallback	Callback function
	* @param in_pCookie		Callback cookie that will be sent to the callback function along with additional information.
	* @return ID assigned by ak soundengine
	*/
	AkPlayingID PostEvent(
		const FString& in_EventName,
		UAkComponent* in_pComponent,
		AkUInt32 in_uFlags = 0,
		AkCallbackFunc in_pfnCallback = NULL,
		void * in_pCookie = NULL
		);

	/**
	 * Post an event at location to ak soundengine
	 *
	 * @param in_pEvent			Name of the event to post
	 * @param in_Location		Location at which to play the event
	 * @return ID assigned by ak soundengine
	 */
	AkPlayingID PostEventAtLocation(
		class UAkAudioEvent * in_pEvent,
		FVector in_Location,
		FRotator in_Orientation,
		class UWorld* in_World
		);

	/**
	 * Post an event by name at location to ak soundengine
	 *
	 * @param in_pEvent			Name of the event to post
	 * @param in_Location		Location at which to play the event
	 * @return ID assigned by ak soundengine
	 */
	AkPlayingID PostEventAtLocation(
		const FString& in_EventName,
		FVector in_Location,
		FRotator in_Orientation,
		class UWorld* in_World
		);

	/** Spawn an AkComponent at a location. Allows, for example, to set a switch on a fire and forget sound.
	 * @param AkEvent - Wwise Event to post.
	 * @param EarlyReflectionsBus - Use the provided auxiliary bus to process early reflections.  If NULL, EarlyReflectionsBus will be used.
	 * @param Location - Location from which to post the Wwise Event.
	 * @param Orientation - Orientation of the event.
	 * @param AutoPost - Automatically post the event once the AkComponent is created.
	 * @param EarlyReflectionsBusName - Use the provided auxiliary bus to process early reflections.  If empty, no early reflections will be processed.
	 * @param AutoDestroy - Automatically destroy the AkComponent once the event is finished.
	 */
	class UAkComponent* SpawnAkComponentAtLocation( class UAkAudioEvent* in_pAkEvent, class UAkAuxBus* EarlyReflectionsBus, FVector Location, FRotator Orientation, bool AutoPost, const FString& EventName, const FString& EarlyReflectionsBusName, bool AutoDestroy, class UWorld* in_World );

	/**
	 * Post a trigger to ak soundengine
	 *
	 * @param in_pszTrigger		Name of the trigger
	 * @param in_pAkComponent	AkComponent on which to post the trigger
	 * @return Result from ak sound engine
	 */
	AKRESULT PostTrigger( 
		const TCHAR * in_pszTrigger,
		AActor * in_pActor
		);

	/**
	 * Set a RTPC in ak soundengine
	 *
	 * @param in_pszRtpcName	Name of the RTPC
	 * @param in_value			Value to set
	 * @param in_interpolationTimeMs - Duration during which the RTPC is interpolated towards in_value (in ms)
	 * @param in_pActor			AActor on which to set the RTPC
	 * @return Result from ak sound engine
	 */
	AKRESULT SetRTPCValue( 
		const TCHAR * in_pszRtpcName,
		AkRtpcValue in_value,
		int32 in_interpolationTimeMs,
		AActor * in_pActor
		);

	/**
	 * Set a state in ak soundengine
	 *
	 * @param in_pszStateGroup	Name of the state group
	 * @param in_pszState		Name of the state
	 * @return Result from ak sound engine
	 */
	AKRESULT SetState( 
		const TCHAR * in_pszStateGroup,
		const TCHAR * in_pszState
	    );
		
	/**
	 * Set a switch in ak soundengine
	 *
	 * @param in_pszSwitchGroup	Name of the switch group
	 * @param in_pszSwitchState	Name of the switch
	 * @param in_pComponent		AkComponent on which to set the switch
	 * @return Result from ak sound engine
	 */
	AKRESULT SetSwitch( 
		const TCHAR * in_pszSwitchGroup,
		const TCHAR * in_pszSwitchState,
		AActor * in_pActor
		);
		
	/**
	 * Sets occlusion and obstruction values for a game object and a listener.
	 *
	 * @param in_pActor			AkComponent on which to activate the occlusion
	 * @param in_ListenerIndex	Listener index on which to set the parameters
	 * @param in_Occlusion		Occlusion value to set
	 * @param in_Obstruction	Obstruction value to set
	 * @return Result from ak sound engine
	 */
	AKRESULT SetOcclusionObstruction(
		const UAkComponent * const in_pEmitter,
		const UAkComponent * const in_pListener,
		const float in_Obstruction,
		const float in_Occlusion
		);

	/**
	 * Set auxiliary sends
	 *
	 * @param in_GameObjId		Wwise Game Object ID
	 * @param in_AuxSendValues	Array of AkAuxSendValue, containins all Aux Sends to set on the game objectt
	 * @return Result from ak sound engine
	 */
	AKRESULT SetAuxSends(
		const AkGameObjectID in_GameObjId,
		TArray<AkAuxSendValue>& in_AuxSendValues
		);

	/**
	* Set spatial audio room
	*
	* @param in_GameObjId		Wwise Game Object ID
	* @param in_RoomID	ID of the room that the game object is inside.
	* @return Result from ak sound engine
	*/
	AKRESULT SetInSpatialAudioRoom(
		const AkGameObjectID in_GameObjId,
		AkRoomID in_RoomID
	);

	/**
	 * Force channel configuration for the specified bus.
	 * This function has unspecified behavior when changing the configuration of a bus that 
	 * is currently playing.
	 * You cannot change the configuration of the master bus.
	 *
	 * @param in_BusName	Bus Name
	 * @param in_Config		Desired channel configuration. An invalid configuration (from default constructor) means "as parent".
	 * @return Always returns AK_Success
	 */
	AKRESULT SetBusConfig(
		const FString&	in_BusName,
		AkChannelConfig	in_Config
		);

	/**
	 *  Set the panning rule of the specified output.
	 *  This may be changed anytime once the sound engine is initialized.
	 *  \warning This function posts a message through the sound engine's internal message queue, whereas GetPanningRule() queries the current panning rule directly.
	 */
	AKRESULT SetPanningRule(
		AkPanningRule		in_ePanningRule			///< Panning rule.
		);


	/**
	 * Set the output bus volume (direct) to be used for the specified game object.
	 * The control value is a number ranging from 0.0f to 1.0f.
	 *
	 * @param in_GameObjId		Wwise Game Object ID
	 * @param in_fControlValue	Control value to set
	 * @return	Always returns Ak_Success
	 */
	AKRESULT SetGameObjectOutputBusVolume(
		const UAkComponent* in_pEmitter,
		const UAkComponent* in_pListener,
		float in_fControlValue
		);

	/**
	 * Obtain a pointer to the singleton instance of FAkAudioDevice
	 *
	 * @return Pointer to the singleton instance of FAkAudioDevice
	 */
	static FAkAudioDevice * Get();

	/**
	 * Stop all audio associated with a game object
	 *
	 * @param in_pComponent		AkComponent which should be stopped
	 */
	void StopGameObject(UAkComponent * in_pComponent);

	/**
	 * Stop all audio associated with a playing ID
	 *
	 * @param in_playingID		AkPlayingID which should be stopped
	 */
	void StopPlayingID( AkPlayingID in_playingID );

	/**
	 * Register an ak audio component with ak sound engine
	 *
	 * @param in_pComponent		Pointer to the component to register
	 */
	void RegisterComponent(UAkComponent * in_pComponent);

	/**
	 * Unregister an ak audio component with ak sound engine
	 *
	 * @param in_pComponent		Pointer to the component to unregister
	 */
	void UnregisterComponent(UAkComponent * in_pComponent);
	
	/**
	* Register an ak audio component with ak spatial audio
	*
	* @param in_pComponent		Pointer to the component to register
	*/
	void RegisterSpatialAudioEmitter(UAkComponent * in_pComponent);

	/**
	* Unregister an ak audio component with ak spatial audio
	*
	* @param in_pComponent		Pointer to the component to unregister
	*/
	void UnregisterSpatialAudioEmitter(UAkComponent * in_pComponent);

	/**
	* Send a set of triangles to the Spatial Audio Engine
	*/
	AKRESULT AddGeometrySet(AkGeometrySetID AcousticZoneID, AkTriangle* Triangles, AkUInt32 NumTriangles);

	/**
	* Remove a set of triangles from the Spatial Audio Engine
	*/
	AKRESULT RemoveGeometrySet(AkGeometrySetID AcousticZoneID);


	/**
	 * Get an ak audio component, or create it if none exists that fit the attachment criteria.
	 */
	static class UAkComponent* GetAkComponent( 
		class USceneComponent* AttachToComponent, FName AttachPointName, const FVector * Location, EAttachLocation::Type LocationType );

	/**
	 * Cancel the callback cookie for a dispatched event 
	 *
	 * @param in_cookie			The cookie to cancel
	 */
	void CancelEventCallbackCookie(void* in_cookie);

	 /** 
	  * Set the scaling factor of a game object.
	  * Modify the attenuation computations on this game object to simulate sounds with a a larger or smaller area of effect.
	  */
	AKRESULT SetAttenuationScalingFactor(AActor* Actor, float ScalingFactor);

	 /** 
	  * Set the scaling factor of a AkComponent.
	  * Modify the attenuation computations on this game object to simulate sounds with a a larger or smaller area of effect.
	  */
	AKRESULT SetAttenuationScalingFactor(UAkComponent* AkComponent, float ScalingFactor);

	/**
	 * Starts a Wwise output capture. The output file will be located in the same folder as the SoundBanks.
	 * @param Filename - The name to give to the output file.
	 */
	void StartOutputCapture(const FString& Filename);

	/**
	 * Add text marker in output capture file.
	 * @param MarkerText - The name text to put in the marker.
	 */
	void AddOutputCaptureMarker(const FString& MarkerText);

	/**
	 * Stops a Wwise output capture. The output file will be located in the same folder as the SoundBanks.
	 */
	void StopOutputCapture();

	/**
	 * Starts a Wwise profiler capture. The output file will be located in the same folder as the SoundBanks.
	 * @param Filename - The name to give to the output file.
	 */
	void StartProfilerCapture(const FString& Filename);

	/**
	 * Stops a Wwise profiler capture. The output file will be located in the same folder as the SoundBanks.
	 */
	void StopProfilerCapture();

	/**
	* Gets the path where the SoundBanks are located on disk
	*/
	FString GetBasePath();


#ifdef AK_SOUNDFRAME
	/**
	 * Called when sound frame connects 
	 *
	 * @param in_bConnect		True if Wwise is connected, False if it is not
	 */	
	virtual void OnConnect( 
		bool in_bConnect		///< True if Wwise is connected, False if it is not
		);
		
	/**
	 * Event notification. This method is called when an event is added, removed, changed, or pushed.
	 *
	 * @param in_eNotif			Notification type
	 * @param in_eventID		Unique ID of the event
	 */	
	virtual void OnEventNotif( 
		Notif in_eNotif,
		AkUniqueID in_eventID
		);
			
	/**
	 * SoundBank notification. This method is called when a soundbank is added, removed, or changed.
	 */
	virtual void OnSoundBankNotif(
		Notif in_eNotif,			///< Notification type
		AkUniqueID in_AuxBusID		///< Unique ID of the auxiliary bus
		) {};

	/**
	 * Dialogue Event notification. This method is called when a dialogue event is added, removed or changed.
	 *
	 * This notification will be sent if an argument is added, removed or moved within a dialogue event.
	 *
	 * @param in_eNotif			Notification type
	 * @param in_eventID		Unique ID of the event
	 */
	virtual void OnDialogueEventNotif( 
		Notif in_eNotif,
		AkUniqueID in_dialogueEventID
		) {}
			
	/**
	 * Sound object notification. This method is called when a sound object is added, removed, or changed.
	 *
	 * @param in_eNotif			Notification type
	 * @param in_soundObjectID	Unique ID of the sound object
	 */
	virtual void OnSoundObjectNotif( 
		Notif in_eNotif,
		AkUniqueID in_soundObjectID
		);
		
	/**
	 * State notification.
	 *
	 * This method is called when a state group or a state is added, removed or changed.
	 * It is also called (with in_eNotif equal to Notif_Changed) when the current state of a state group changes.
	 *
	 * This notification will be sent for all state changes (through Wwise, the Sound Frame, or the sound engine).
	 *
	 * @param in_eNotif			Notification type
	 * @param in_stateGroupID	Unique ID of the state group
	 */
	virtual void OnStatesNotif( 
		Notif in_eNotif,
		AkUniqueID in_stateGroupID
		) {}
			
	/**
	 * Switch notification.
	 *
	 * This method is called when a switch group or a switch is added, removed or changed.
	 * It is also called (with in_eNotif equal to Notif_Changed) when the current switch in a switch group changes on any game object.
	 *
	 * This notification will be sent for all switch changes (through Wwise, the Sound Frame, or the sound engine).
	 *
	 * @param in_eNotif			Notification type
	 * @param in_switchGroupID	Unique ID of the switch group
	 */
	virtual void OnSwitchesNotif( 
		Notif in_eNotif,			///< Notification type
		AkUniqueID in_switchGroupID	///< Unique ID of the switch group
		) {}
			
	/**
	 * Game parameter notification.
	 *
	 * This method is called when a game parameter is added, removed, or changed.
	 *
	 * @param in_eNotif			Notification type
	 * @param in_gameParameterID Unique ID of the game parameter
	 */
	virtual void OnGameParametersNotif( 
		Notif in_eNotif,
		AkUniqueID in_gameParameterID
		) {}
			
	/**
	 * Trigger notification.
	 *
	 * This method is called when a trigger is added, removed, or changed.
	 *
	 * @param in_eNotif			Notification type
	 * @param in_triggerID		Unique ID of the trigger
	 */
	virtual void OnTriggersNotif( 
		Notif in_eNotif,
		AkUniqueID in_triggerID
		) {}
				
	/**
	 * Argument notification.
	 *
	 * This method is called when an argument or argument value is added, removed, or changed.
	 * Although this notification is called when an argument is created, you will probably be more interested to 
	 * know when this argument gets referenced by a dialogue event. See OnDialogueEventNotif().
	 *
	 * @param in_eNotif			Notification type
	 * @param in_argumentID		Unique ID of the argument
	 */
	virtual void OnArgumentsNotif( 
		Notif in_eNotif,
		AkUniqueID in_argumentID
		) {}
			
	/**
	 * Aux bus notification.
	 *
	 * This method is called when an aux bus is added, removed, or changed.
	 *
	 * @param in_eNotif			Notification type
	 * @param in_AuxBusID		Unique ID of the aux bus
	 */
	virtual void OnAuxBusNotif( 
		Notif in_eNotif,     
		AkUniqueID in_AuxBusID
		) {}
			
	/**
	 * Game object notification.
	 *
	 * This method is called when a game object is registered or unregistered.
	 * The notification type will be Notif_Added when a game object is registered, and Notif_Removed 
	 * when its unregistered.
	 * - This notification will be sent for game object registration and unregistration made through the Sound Frame 
	 * or the sound engine.
	 * - The notification type will be Notif_Reset when all game objects are removed from the Sound Engine.
	 *
	 * @param in_eNotif			Notification type
	 * @param in_gameObjectID	Unique ID of the game object
	 */
	virtual void OnGameObjectsNotif( 
		Notif in_eNotif,
		AkGameObjectID in_gameObjectID
		) {}

	/**
	 * Obtain a pointer to sound frame
	 *
	 * @return A pointer to sound frame
	 */
	AK::SoundFrame::ISoundFrame * GetSoundFrame(void) { return m_pSoundFrame; }
#endif

	static inline void FVectorToAKVector( const FVector & in_vect, AkVector & out_vect )
	{
		out_vect.X = in_vect.X;
		out_vect.Y = in_vect.Y;
		out_vect.Z = in_vect.Z;
	}

	static inline AkVector FVectorToAKVector(const FVector & in_vect)
	{
		return AkVector{ in_vect.X, in_vect.Y, in_vect.Z };
	}

	static inline void FVectorsToAKTransform(const FVector& in_Position, const FVector& in_Front, const FVector& in_Up, AkTransform& out_AkTransform)
	{
		// Convert from the UE axis system to the Wwise axis system
		out_AkTransform.Set(FVectorToAKVector(in_Position), FVectorToAKVector(in_Front), FVectorToAKVector(in_Up));
	}

	static inline void AKVectorToFVector(const AkVector & in_vect, FVector & out_vect)
	{
		out_vect.X = in_vect.X;
		out_vect.Y = in_vect.Y;
		out_vect.Z = in_vect.Z;
	}

	static inline FVector AKVectorToFVector(const AkVector& in_vect)
	{
		return FVector(in_vect.X, in_vect.Y, in_vect.Z);
	}

	FAkBankManager * GetAkBankManager()
	{
		return AkBankManager;
	}

	uint8 GetMaxAuxBus()
	{
		return MaxAuxBus;
	}

	static void SetEngineExiting(bool isExiting) { m_EngineExiting = isExiting; }

#if WITH_EDITOR
	void SetMaxAuxBus(uint8 ValToSet) 
	{
		MaxAuxBus = ValToSet;
	}
#endif

	static const int32 FIND_COMPONENTS_DEPTH_INFINITE = -1;

	/** Find UAkLateReverbComponents at a given location. */
	TArray<class UAkLateReverbComponent*> FindLateReverbComponentsAtLocation(const FVector& Loc, const UWorld* in_World, int32 depth = FIND_COMPONENTS_DEPTH_INFINITE);

	/** Add a UAkLateReverbComponent to the linked list. */
	void AddLateReverbComponentToPrioritizedList(class UAkLateReverbComponent* in_ComponentToAdd);

	/** Remove a UAkLateReverbComponent from the linked list. */
	void RemoveLateReverbComponentFromPrioritizedList(class UAkLateReverbComponent* in_ComponentToRemove);

	/** Get whether the given world has room registered in it. */
	bool WorldHasActiveRooms(UWorld* in_World);

	/** Find UAkRoomComponents at a given location. */
	TArray<class UAkRoomComponent*> FindRoomComponentsAtLocation(const FVector& Loc, const UWorld* in_World, int32 depth = FIND_COMPONENTS_DEPTH_INFINITE);

	/** Add a UAkRoomComponent to the linked list. */
	void AddRoomComponentToPrioritizedList(class UAkRoomComponent* in_ComponentToAdd);

	/** Remove a UAkRoomComponent from the linked list. */
	void RemoveRoomComponentFromPrioritizedList(class UAkRoomComponent* in_ComponentToRemove);

	/** Return true if any UAkRoomComponents have been added to the prioritized list of rooms for the in_World**/
	bool UsingSpatialAudioRooms(const UWorld* in_World);

	/** Get the aux send values corresponding to a point in the world.**/
	void GetAuxSendValuesAtLocation(FVector Loc, TArray<AkAuxSendValue>& AkAuxSendValues, const UWorld* in_World);

	/** Update all rooms. */
	void UpdateAllSpatialAudioRooms(UWorld* InWorld);

	/** Register a Portal in AK Spatial Audio.  Can be called again to update the portal parameters.	*/
	void AddSpatialAudioPortal(const AAkAcousticPortal* in_Portal);
	
	/** Remove a Portal from AK Spatial Audio	*/
	void RemoveSpatialAudioPortal(const AAkAcousticPortal* in_Portal);
	
	void OnActorSpawned(AActor* SpawnedActor);

	UAkComponentSet& GetDefaultListeners() { return m_defaultListeners; }
	UAkComponentSet& GetDefaultEmitters() { return m_defaultEmitters; }

	void SetListeners(UAkComponent* in_pEmitter, const TArray<UAkComponent*>& in_listenerSet);
	void AddDefaultListener(UAkComponent* in_pListener);
	void UpdateDefaultActiveListeners();

	AKRESULT SetEmitterPosition(UAkComponent* in_pListener, const AkTransform& in_SoundPosition, AkTransform* in_VirtualPositions, uint32 in_NumVirtualPositions);

	AKRESULT AddRoom(UAkRoomComponent* in_pRoom, const AkRoomParams& in_RoomParams);
	AKRESULT RemoveRoom(UAkRoomComponent* in_pRoom);

	AKRESULT AddImageSource(AkReflectImageSource& in_ImageSourceInfo, AkUniqueID in_AuxBusID, AkRoomID in_RoomID, const FString& in_Name);
	AKRESULT RemoveImageSource(class AAkSpotReflector* in_pSpotReflector, AkUniqueID in_AuxBusID);

private:
	bool EnsureInitialized();

	void SetBankDirectory();
	
	void* AllocatePermanentMemory( int32 Size, /*OUT*/ bool& AllocatedInPool );
	
	AKRESULT GetGameObjectID(AActor * in_pActor, AkGameObjectID& io_GameObject );

	// Overload allowing to modify StopWhenOwnerDestroyed after getting the AkComponent
	AKRESULT GetGameObjectID(AActor * in_pActor, AkGameObjectID& io_GameObject, bool in_bStopWhenOwnerDestroyed );

	/** We keep a linked list of UAkLateReverbComponents sorted by priority for faster finding of reverb volumes at a specific location.
	 *	This points to the highest volume in the list.
	 */
	TMap<UWorld*, class UAkLateReverbComponent*> HighestPriorityLateReverbComponentMap;

	/** We keep a linked list of Spatial audio Rooms sorted by priority for faster finding of reverb volumes at a specific location.
	 *	This points to the highest volume in the list.
	 */
	TMap<UWorld*, class UAkRoomComponent*> HighestPriorityRoomComponentMap;

	/** Add a Component that is prioritized (either UAkLateReverbComponent or UAkRoomComponent) in the active linked list. */
	template<class COMPONENT_TYPE>
	void AddPrioritizedComponentInList(COMPONENT_TYPE* in_ComponentToAdd, TMap<UWorld*, COMPONENT_TYPE*>& HighestPriorityComponentMap);

	/** Remove a Component that is prioritized (either UAkLateReverbComponent or UAkRoomComponent) from the linked list. */
	template<class COMPONENT_TYPE>
	void RemovePrioritizedComponentFromList(COMPONENT_TYPE* in_ComponentToRemove, TMap<UWorld*, COMPONENT_TYPE*>& HighestPriorityComponentMap);

	/** Find Components that are prioritized (either UAkLateReverbComponent or UAkRoomComponent) at a given location.**/
	template<class COMPONENT_TYPE>
	TArray<COMPONENT_TYPE*> FindPrioritizedComponentsAtLocation(const FVector& Loc, const UWorld* in_World, TMap<UWorld*, COMPONENT_TYPE*>& HighestPriorityComponentMap, int32 depth = FIND_COMPONENTS_DEPTH_INFINITE);

	static bool m_bSoundEngineInitialized;
	UAkComponentSet m_defaultListeners;
	UAkComponentSet m_defaultEmitters;

	// OCULUS_START - vhamm - suspend audio when not in focus
	bool m_isSuspended;
	// OCULUS_END

	uint8 MaxAuxBus;

	FAkComponentCallbackManager* CallbackManager;
	FAkBankManager* AkBankManager;
	CAkFilePackageLowLevelIO<CAkUnrealIOHookDeferred, CAkDiskPackage, AkFileCustomParamPolicy>* LowLevelIOHook;

	static bool m_EngineExiting;

#ifdef AK_SOUNDFRAME
	class AK::SoundFrame::ISoundFrame * m_pSoundFrame;
#endif
};
