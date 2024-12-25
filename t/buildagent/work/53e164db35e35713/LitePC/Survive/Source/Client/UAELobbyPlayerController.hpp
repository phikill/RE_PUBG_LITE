

// Class Client.UAELobbyPlayerController
// //Class Client.UAELobbyPlayerController
//0x0000 (0x0738 - 0x0738)
class AUAELobbyPlayerController : public APlayerController
{
public:

	// Function Engine.PlayerController.WasInputKeyJustReleased
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char WasInputKeyJustReleased(const struct FKey& Key);// sub_397BA0()

	// Function Engine.PlayerController.WasInputKeyJustPressed
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char WasInputKeyJustPressed(const struct FKey& Key);// sub_397AB0()

	// Function Engine.PlayerController.ToggleSpeaking
	// (Exec, Native, Public)
	void ToggleSpeaking(unsigned char bInSpeaking);// sub_397A20()

	// Function Engine.PlayerController.SwitchLevel
	// (Exec, Native, Public)
	void SwitchLevel(const struct FString& URL);// sub_397980()

	// Function Engine.PlayerController.StopHapticEffect
	// (Final, Native, Public, BlueprintCallable)
	void StopHapticEffect(EControllerHand Hand);// sub_3978D0()

	// Function Engine.PlayerController.StartFire
	// (Exec, Native, Public)
	void StartFire(unsigned char FireModeNum);// sub_3973D0()

	// Function Engine.PlayerController.SetVirtualJoystickVisibility
	// (Native, Public, BlueprintCallable)
	void SetVirtualJoystickVisibility(unsigned char bVisible);// sub_397170()

	// Function Engine.PlayerController.SetViewTargetWithBlend
	// (Native, Public, BlueprintCallable)
	void SetViewTargetWithBlend(class AActor* NewViewTargetfloat BlendTimeTEnumAsByte<EViewTargetBlendFunction> BlendFuncfloat BlendExpunsigned char bLockOutgoing);// sub_396FF0()

	// Function Engine.PlayerController.SetName
	// (Exec, Native, Public)
	void SetName(const struct FString& S);// sub_396F50()

	// Function Engine.PlayerController.SetMouseLocation
	// (Final, Native, Public, BlueprintCallable)
	void SetMouseLocation(int Xint Y);// sub_396E90()

	// Function Engine.PlayerController.SetMouseCursorWidget
	// (Final, Native, Public, BlueprintCallable)
	void SetMouseCursorWidget(TEnumAsByte<EMouseCursor> Cursorclass UUserWidget* CursorWidget);// sub_396DD0()

	// Function Engine.PlayerController.SetHapticsByValue
	// (Final, Native, Public, BlueprintCallable)
	void SetHapticsByValue(float Frequencyfloat AmplitudeEControllerHand Hand);// sub_396BB0()

	// Function Engine.PlayerController.SetControllerLightColor
	// (Final, Native, Public, HasDefaults, BlueprintCallable)
	void SetControllerLightColor(const struct FColor& Color);// sub_396B40()

	// Function Engine.PlayerController.SetCinematicMode
	// (Native, Public, BlueprintCallable)
	void SetCinematicMode(unsigned char bInCinematicModeunsigned char bHidePlayerunsigned char bAffectsHUDunsigned char bAffectsMovementunsigned char bAffectsTurning);// sub_396980()

	// Function Engine.PlayerController.SetAudioListenerOverride
	// (Final, Native, Public, HasDefaults, BlueprintCallable)
	void SetAudioListenerOverride(class USceneComponent* AttachToComponentconst struct FVector& Locationconst struct FRotator& Rotation);// sub_396860()

	// Function Engine.PlayerController.ServerViewSelf
	// (Net, Native, Event, Public, NetServer, NetValidate)
	void ServerViewSelf(const struct FViewTargetTransitionParams& TransitionParams);// sub_396730()

	// Function Engine.PlayerController.ServerViewPrevPlayer
	// (Net, Native, Event, Public, NetServer, NetValidate)
	void ServerViewPrevPlayer();// sub_3966E0()

	// Function Engine.PlayerController.ServerViewNextPlayer
	// (Net, Native, Event, Public, NetServer, NetValidate)
	void ServerViewNextPlayer();// sub_396690()

	// Function Engine.PlayerController.ServerVerifyViewTarget
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void ServerVerifyViewTarget();// sub_396640()

	// Function Engine.PlayerController.ServerUpdateLevelVisibility
	// (Final, Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void ServerUpdateLevelVisibility(const struct FName& PackageNameunsigned char bIsVisible);// sub_396550()

	// Function Engine.PlayerController.ServerUpdateCamera
	// (Net, Native, Event, Public, NetServer, NetValidate)
	void ServerUpdateCamera(const struct FVector_NetQuantize& CamLocint CamPitchAndYaw);// sub_396430()

	// Function Engine.PlayerController.ServerUnmutePlayer
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void ServerUnmutePlayer(const struct FUniqueNetIdRepl& PlayerId);// sub_3962F0()

	// Function Engine.PlayerController.ServerToggleAILogging
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void ServerToggleAILogging();// sub_3962A0()

	// Function Engine.PlayerController.ServerShortTimeout
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void ServerShortTimeout();// sub_396250()

	// Function Engine.PlayerController.ServerSetSpectatorWaiting
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void ServerSetSpectatorWaiting(unsigned char bWaiting);// sub_396190()

	// Function Engine.PlayerController.ServerSetSpectatorLocation
	// (Net, Native, Event, Public, NetServer, HasDefaults, NetValidate)
	void ServerSetSpectatorLocation(const struct FVector& NewLocconst struct FRotator& NewRot);// sub_396060()

	// Function Engine.PlayerController.ServerRestartPlayer
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void ServerRestartPlayer();// sub_396010()

	// Function Engine.PlayerController.ServerPause
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void ServerPause();// sub_395FC0()

	// Function Engine.PlayerController.ServerNotifyLoadedWorld
	// (Final, Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void ServerNotifyLoadedWorld(const struct FName& WorldPackageName);// sub_395F10()

	// Function Engine.PlayerController.ServerMutePlayer
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void ServerMutePlayer(const struct FUniqueNetIdRepl& PlayerId);// sub_395DD0()

	// Function Engine.PlayerController.ServerCheckClientPossessionReliable
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void ServerCheckClientPossessionReliable();// sub_395D80()

	// Function Engine.PlayerController.ServerCheckClientPossession
	// (Net, Native, Event, Public, NetServer, NetValidate)
	void ServerCheckClientPossession();// sub_395D30()

	// Function Engine.PlayerController.ServerChangeName
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void ServerChangeName(const struct FString& S);// sub_395C70()

	// Function Engine.PlayerController.ServerCamera
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void ServerCamera(const struct FName& NewMode);// sub_395BB0()

	// Function Engine.PlayerController.ServerAcknowledgePossession
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void ServerAcknowledgePossession(class APawn* P);// sub_395AF0()

	// Function Engine.PlayerController.SendToConsole
	// (Exec, Native, Public)
	void SendToConsole(const struct FString& Command);// sub_395A50()

	// Function Engine.PlayerController.RestartLevel
	// (Exec, Native, Public)
	void RestartLevel();// sub_395A30()

	// Function Engine.PlayerController.ProjectWorldLocationToScreen
	// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	unsigned char ProjectWorldLocationToScreen(const struct FVector& WorldLocationstruct FVector2D* ScreenLocationunsigned char bPlayerViewportRelative);// sub_3957D0()

	// Function Engine.PlayerController.PlayHapticEffect
	// (Final, Native, Public, BlueprintCallable)
	void PlayHapticEffect(class UHapticFeedbackEffect_Base* HapticEffectEControllerHand Handfloat Scaleunsigned char bLoop);// sub_395680()

	// Function Engine.PlayerController.PlayDynamicForceFeedback
	// (Final, Native, Public, BlueprintCallable)
	void PlayDynamicForceFeedback(float Intensityfloat Durationunsigned char bAffectsLeftLargeunsigned char bAffectsLeftSmallunsigned char bAffectsRightLargeunsigned char bAffectsRightSmallTEnumAsByte<EDynamicForceFeedbackAction> Actionconst struct FLatentActionInfo& LatentInfo);// sub_3953F0()

	// Function Engine.PlayerController.Pause
	// (Exec, Native, Public)
	void Pause();// sub_394E00()

	// Function Engine.PlayerController.OnServerStartedVisualLogger
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void OnServerStartedVisualLogger(unsigned char bIsLogging);// sub_394D70()

	// Function Engine.PlayerController.LocalTravel
	// (Exec, Native, Public)
	void LocalTravel(const struct FString& URL);// sub_394BC0()

	// Function Engine.PlayerController.IsInputKeyDown
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char IsInputKeyDown(const struct FKey& Key);// sub_394AD0()

	// Function Engine.PlayerController.GetViewportSize
	// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	void GetViewportSize(int* SizeXint* SizeY);// sub_394990()

	// Function Engine.PlayerController.GetSpectatorPawn
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	class ASpectatorPawn* GetSpectatorPawn();// sub_3948B0()

	// Function Engine.PlayerController.GetMousePosition
	// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	unsigned char GetMousePosition(float* LocationXfloat* LocationY);// sub_394730()

	// Function Engine.PlayerController.GetInputVectorKeyState
	// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	struct FVector GetInputVectorKeyState(const struct FKey& Key);// sub_394630()

	// Function Engine.PlayerController.GetInputTouchState
	// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	void GetInputTouchState(TEnumAsByte<ETouchIndex> FingerIndexfloat* LocationXfloat* LocationYunsigned char* bIsCurrentlyPressed);// sub_3944B0()

	// Function Engine.PlayerController.GetInputMouseDelta
	// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	void GetInputMouseDelta(float* DeltaXfloat* DeltaY);// sub_3943D0()

	// Function Engine.PlayerController.GetInputMotionState
	// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	void GetInputMotionState(struct FVector* Tiltstruct FVector* RotationRatestruct FVector* Gravitystruct FVector* Acceleration);// sub_394240()

	// Function Engine.PlayerController.GetInputKeyTimeDown
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetInputKeyTimeDown(const struct FKey& Key);// sub_394150()

	// Function Engine.PlayerController.GetInputAnalogStickState
	// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	void GetInputAnalogStickState(TEnumAsByte<EControllerAnalogStick> WhichStickfloat* StickXfloat* StickY);// sub_394030()

	// Function Engine.PlayerController.GetInputAnalogKeyState
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetInputAnalogKeyState(const struct FKey& Key);// sub_393F40()

	// Function Engine.PlayerController.GetHUD
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	class AHUD* GetHUD();// sub_393380()

	// Function Engine.PlayerController.GetHitResultUnderFingerForObjects
	// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	unsigned char GetHitResultUnderFingerForObjects(TEnumAsByte<ETouchIndex> FingerIndexTArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypesunsigned char bTraceComplexstruct FHitResult* HitResult);// sub_393D80()

	// Function Engine.PlayerController.GetHitResultUnderFingerByChannel
	// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	unsigned char GetHitResultUnderFingerByChannel(TEnumAsByte<ETouchIndex> FingerIndexTEnumAsByte<ETraceTypeQuery> TraceChannelunsigned char bTraceComplexstruct FHitResult* HitResult);// sub_393BE0()

	// Function Engine.PlayerController.GetHitResultUnderFinger
	// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	unsigned char GetHitResultUnderFinger(TEnumAsByte<ETouchIndex> FingerIndexTEnumAsByte<ECollisionChannel> TraceChannelunsigned char bTraceComplexstruct FHitResult* HitResult);// sub_393A40()

	// Function Engine.PlayerController.GetHitResultUnderCursorForObjects
	// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	unsigned char GetHitResultUnderCursorForObjects(TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypesunsigned char bTraceComplexstruct FHitResult* HitResult);// sub_3938C0()

	// Function Engine.PlayerController.GetHitResultUnderCursorByChannel
	// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	unsigned char GetHitResultUnderCursorByChannel(TEnumAsByte<ETraceTypeQuery> TraceChannelunsigned char bTraceComplexstruct FHitResult* HitResult);// sub_393760()

	// Function Engine.PlayerController.GetHitResultUnderCursor
	// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	unsigned char GetHitResultUnderCursor(TEnumAsByte<ECollisionChannel> TraceChannelunsigned char bTraceComplexstruct FHitResult* HitResult);// sub_393600()

	// Function Engine.PlayerController.GetFocalLocation
	// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	struct FVector GetFocalLocation();// sub_393340()

	// Function Engine.PlayerController.FOV
	// (Exec, Native, Public)
	void FOV(float NewFOV);// sub_393160()

	// Function Engine.PlayerController.EnableCheats
	// (Exec, Native, Public)
	void EnableCheats();// sub_393140()

	// Function Engine.PlayerController.DeprojectScreenPositionToWorld
	// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	unsigned char DeprojectScreenPositionToWorld(float ScreenXfloat ScreenYstruct FVector* WorldLocationstruct FVector* WorldDirection);// sub_392FC0()

	// Function Engine.PlayerController.DeprojectMousePositionToWorld
	// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	unsigned char DeprojectMousePositionToWorld(struct FVector* WorldLocationstruct FVector* WorldDirection);// sub_392EC0()

	// Function Engine.PlayerController.ConsoleKey
	// (Exec, Native, Public)
	void ConsoleKey(const struct FKey& Key);// sub_392DE0()

	// Function Engine.PlayerController.ClientWasKicked
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ClientWasKicked(const struct FText& KickReason);// sub_392D20()

	// Function Engine.PlayerController.ClientVoiceHandshakeComplete
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ClientVoiceHandshakeComplete();// sub_392D00()

	// Function Engine.PlayerController.ClientUpdateLevelStreamingStatus
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ClientUpdateLevelStreamingStatus(const struct FName& PackageNameunsigned char bNewShouldBeLoadedunsigned char bNewShouldBeVisibleunsigned char bNewShouldBlockOnLoadint LODIndex);// sub_392B50()

	// Function Engine.PlayerController.ClientUnmutePlayer
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ClientUnmutePlayer(const struct FUniqueNetIdRepl& PlayerId);// sub_392A60()

	// Function Engine.PlayerController.ClientTravelInternal
	// (Net, NetReliable, Native, Event, Public, HasDefaults, NetClient)
	void ClientTravelInternal(const struct FString& URLTEnumAsByte<ETravelType> TravelTypeunsigned char bSeamlessconst struct FGuid& MapPackageGuid);// sub_3928F0()

	// Function Engine.PlayerController.ClientTravel
	// (Final, Native, Public, HasDefaults)
	void ClientTravel(const struct FString& URLTEnumAsByte<ETravelType> TravelTypeunsigned char bSeamlessconst struct FGuid& MapPackageGuid);// sub_392780()

	// Function Engine.PlayerController.ClientTeamMessage
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ClientTeamMessage(class APlayerState* SenderPlayerStateconst struct FString& Sconst struct FName& Typefloat MsgLifeTime);// sub_392620()

	// Function Engine.PlayerController.ClientStopForceFeedback
	// (Net, NetReliable, Native, Event, Public, NetClient, BlueprintCallable)
	void ClientStopForceFeedback(class UForceFeedbackEffect* ForceFeedbackEffectconst struct FName& Tag);// sub_392550()

	// Function Engine.PlayerController.ClientStopCameraShake
	// (Net, NetReliable, Native, Event, Public, NetClient, BlueprintCallable)
	void ClientStopCameraShake(class UCameraShake* Shakeunsigned char bImmediately);// sub_392480()

	// Function Engine.PlayerController.ClientStopCameraAnim
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ClientStopCameraAnim(class UCameraAnim* AnimToStop);// sub_3923F0()

	// Function Engine.PlayerController.ClientStartOnlineSession
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ClientStartOnlineSession();// sub_3923D0()

	// Function Engine.PlayerController.ClientSpawnCameraLensEffect
	// (Net, Native, Event, Public, NetClient, BlueprintCallable)
	void ClientSpawnCameraLensEffect(class AEmitterCameraLensEffectBase* LensEffectEmitterClass);// sub_392340()

	// Function Engine.PlayerController.ClientSetViewTarget
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ClientSetViewTarget(class AActor* Aconst struct FViewTargetTransitionParams& TransitionParams);// sub_392220()

	// Function Engine.PlayerController.ClientSetSpectatorWaiting
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ClientSetSpectatorWaiting(unsigned char bWaiting);// sub_392190()

	// Function Engine.PlayerController.ClientSetHUD
	// (Net, NetReliable, Native, Event, Public, NetClient, BlueprintCallable)
	void ClientSetHUD(class AHUD* NewHUDClass);// sub_392100()

	// Function Engine.PlayerController.ClientSetForceMipLevelsToBeResident
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ClientSetForceMipLevelsToBeResident(class UMaterialInterface* Materialfloat ForceDurationint CinematicTextureGroups);// sub_392000()

	// Function Engine.PlayerController.ClientSetCinematicMode
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ClientSetCinematicMode(unsigned char bInCinematicModeunsigned char bAffectsMovementunsigned char bAffectsTurningunsigned char bAffectsHUD);// sub_391E90()

	// Function Engine.PlayerController.ClientSetCameraMode
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ClientSetCameraMode(const struct FName& NewCamMode);// sub_391E00()

	// Function Engine.PlayerController.ClientSetCameraFade
	// (Net, NetReliable, Native, Event, Public, HasDefaults, NetClient)
	void ClientSetCameraFade(unsigned char bEnableFadingconst struct FColor& FadeColorconst struct FVector2D& FadeAlphafloat FadeTimeunsigned char bFadeAudio);// sub_391C70()

	// Function Engine.PlayerController.ClientSetBlockOnAsyncLoading
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ClientSetBlockOnAsyncLoading();// sub_391C50()

	// Function Engine.PlayerController.ClientReturnToMainMenu
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ClientReturnToMainMenu(const struct FString& ReturnReason);// sub_391BB0()

	// Function Engine.PlayerController.ClientRetryClientRestart
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ClientRetryClientRestart(class APawn* NewPawn);// sub_391B20()

	// Function Engine.PlayerController.ClientRestart
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ClientRestart(class APawn* NewPawn);// sub_391A90()

	// Function Engine.PlayerController.ClientReset
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ClientReset();// sub_391A70()

	// Function Engine.PlayerController.ClientRepObjRef
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ClientRepObjRef(class UObject* Object);// sub_3919E0()

	// Function Engine.PlayerController.ClientReceiveLocalizedMessage
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ClientReceiveLocalizedMessage(class ULocalMessage* Messageint Switchclass APlayerState* RelatedPlayerState_2class APlayerState* RelatedPlayerState_3class UObject* OptionalObject);// sub_391860()

	// Function Engine.PlayerController.ClientPrestreamTextures
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ClientPrestreamTextures(class AActor* ForcedActorfloat ForceDurationunsigned char bEnableStreamingint CinematicTextureGroups);// sub_391710()

	// Function Engine.PlayerController.ClientPrepareMapChange
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ClientPrepareMapChange(const struct FName& LevelNameunsigned char bFirstunsigned char bLast);// sub_391600()

	// Function Engine.PlayerController.ClientPlaySoundAtLocation
	// (Net, Native, Event, Public, HasDefaults, NetClient)
	void ClientPlaySoundAtLocation(class USoundBase* Soundconst struct FVector& Locationfloat VolumeMultiplierfloat PitchMultiplier);// sub_3914B0()

	// Function Engine.PlayerController.ClientPlaySound
	// (Net, Native, Event, Public, NetClient)
	void ClientPlaySound(class USoundBase* Soundfloat VolumeMultiplierfloat PitchMultiplier);// sub_3913B0()

	// Function Engine.PlayerController.ClientPlayForceFeedback
	// (Net, Native, Event, Public, NetClient, BlueprintCallable)
	void ClientPlayForceFeedback(class UForceFeedbackEffect* ForceFeedbackEffectunsigned char bLoopingunsigned char bIgnoreTimeDilationconst struct FName& Tag);// sub_391250()

	// Function Engine.PlayerController.ClientPlayCameraShake
	// (Net, Native, Event, Public, HasDefaults, NetClient, BlueprintCallable)
	void ClientPlayCameraShake(class UCameraShake* Shakefloat ScaleTEnumAsByte<ECameraAnimPlaySpace> PlaySpaceconst struct FRotator& UserPlaySpaceRot);// sub_3910F0()

	// Function Engine.PlayerController.ClientPlayCameraAnim
	// (Net, Native, Event, Public, HasDefaults, NetClient, BlueprintCallable)
	void ClientPlayCameraAnim(class UCameraAnim* AnimToPlayfloat Scalefloat Ratefloat BlendInTimefloat BlendOutTimeunsigned char bLoopunsigned char bRandomStartTimeTEnumAsByte<ECameraAnimPlaySpace> Spaceconst struct FRotator& CustomPlaySpace);// sub_390E50()

	// Function Engine.PlayerController.ClientMutePlayer
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ClientMutePlayer(const struct FUniqueNetIdRepl& PlayerId);// sub_390D60()

	// Function Engine.PlayerController.ClientMessage
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ClientMessage(const struct FString& Sconst struct FName& Typefloat MsgLifeTime);// sub_390C40()

	// Function Engine.PlayerController.ClientIgnoreMoveInput
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ClientIgnoreMoveInput(unsigned char bIgnore);// sub_390BB0()

	// Function Engine.PlayerController.ClientIgnoreLookInput
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ClientIgnoreLookInput(unsigned char bIgnore);// sub_390B20()

	// Function Engine.PlayerController.ClientGotoState
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ClientGotoState(const struct FName& NewState);// sub_390A90()

	// Function Engine.PlayerController.ClientGameEnded
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ClientGameEnded(class AActor* EndGameFocusunsigned char bIsWinner);// sub_3909C0()

	// Function Engine.PlayerController.ClientForceGarbageCollection
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ClientForceGarbageCollection();// sub_3909A0()

	// Function Engine.PlayerController.ClientFlushLevelStreaming
	// (Final, Net, NetReliable, Native, Event, Public, NetClient)
	void ClientFlushLevelStreaming();// sub_390980()

	// Function Engine.PlayerController.ClientEndOnlineSession
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ClientEndOnlineSession();// sub_390960()

	// Function Engine.PlayerController.ClientEnableNetworkVoice
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ClientEnableNetworkVoice(unsigned char bEnable);// sub_3908D0()

	// Function Engine.PlayerController.ClientCommitMapChange
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ClientCommitMapChange();// sub_3908B0()

	// Function Engine.PlayerController.ClientClearCameraLensEffects
	// (Net, NetReliable, Native, Event, Public, NetClient, BlueprintCallable)
	void ClientClearCameraLensEffects();// sub_390890()

	// Function Engine.PlayerController.ClientCapBandwidth
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ClientCapBandwidth(int Cap);// sub_390800()

	// Function Engine.PlayerController.ClientCancelPendingMapChange
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ClientCancelPendingMapChange();// sub_3907E0()

	// Function Engine.PlayerController.ClientAddTextureStreamingLoc
	// (Final, Net, NetReliable, Native, Event, Public, HasDefaults, NetClient)
	void ClientAddTextureStreamingLoc(const struct FVector& InLocfloat Durationunsigned char bOverrideLocation);// sub_3906C0()

	// Function Engine.PlayerController.ClearAudioListenerOverride
	// (Final, Native, Public, BlueprintCallable)
	void ClearAudioListenerOverride();// sub_390680()

	// Function Engine.PlayerController.Camera
	// (Exec, Native, Public)
	void Camera(const struct FName& NewMode);// sub_3905F0()

	// Function Engine.PlayerController.AddYawInput
	// (Native, Public, BlueprintCallable)
	void AddYawInput(float Val);// sub_390570()

	// Function Engine.PlayerController.AddRollInput
	// (Native, Public, BlueprintCallable)
	void AddRollInput(float Val);// sub_3904F0()

	// Function Engine.PlayerController.AddPitchInput
	// (Native, Public, BlueprintCallable)
	void AddPitchInput(float Val);// sub_390470()

	// Function Engine.PlayerController.ActivateTouchInterface
	// (Native, Public, BlueprintCallable)
	void ActivateTouchInterface(class UTouchInterface* NewTouchInterface);// sub_3902A0()


}

