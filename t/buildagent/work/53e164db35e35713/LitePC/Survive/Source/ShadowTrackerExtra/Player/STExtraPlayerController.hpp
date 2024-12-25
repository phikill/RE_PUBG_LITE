

// Class ShadowTrackerExtra.STExtraPlayerController
// //Class ShadowTrackerExtra.STExtraPlayerController
//0x1A28 (0x2360 - 0x0938)
class ASTExtraPlayerController : public AUAEPlayerController
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0938(0x0018) MISSED OFFSET
	float                                              CanMoveCDTime;                                            // 0x0950(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7C];                                      // 0x0954(0x007C) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPlayerExitFlying;                                       // 0x09D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      bMoveable : 1;                                            // 0x09E0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x09E1(0x0007) MISSED OFFSET
	struct FString                                     FollowCandidateName;                                      // 0x09E8(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FScriptMulticastDelegate                    triggerShotVoiceCheckDelegate;                            // 0x09F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              DoubleClickCancelDistanceThreshold;                       // 0x0A08(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RescueTotalSeconds;                                       // 0x0A0C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UPlayerControllerState*                      PlayerControllerStateFinished;                            // 0x0A10(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              CurrentCameraFOV;                                         // 0x0A18(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TouchForceFireThreshold;                                  // 0x0A1C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAutoAimType>                          AutoAimType;                                              // 0x0A20(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bNotMoveFire : 1;                                         // 0x0A21(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0A22(0x0002) MISSED OFFSET
	float                                              DefaultCameraFOV;                                         // 0x0A24(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DoubleClickFireDistanceThreshold;                         // 0x0A28(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InputTouchRepeatLastTime;                                 // 0x0A2C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0A30(0x0004) MISSED OFFSET
	float                                              AutoSprintBtnTime;                                        // 0x0A34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class ASTExtraVehicleBase*>                 nowNearBlowVehicleList;                                   // 0x0A38(0x0010) (ZeroConstructor)
	struct FString                                     GameTipParam2;                                            // 0x0A48(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData05[0x48];                                      // 0x0A58(0x0048) MISSED OFFSET
	unsigned char                                      bLandAfterJumpPlane : 1;                                  // 0x0AA0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06 : 8;                                        // 0x0AA1(0x0001)
	unsigned char                                      bIsTrainingMode : 1;                                      // 0x0AA1(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0xE];                                       // 0x0AA2(0x000E) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnReleaseFireBtn;                                         // 0x0AB0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData08[0x31];                                      // 0x0AC0(0x0031) MISSED OFFSET
	unsigned char                                      bIsAutoAimOnlyInTouch : 1;                                // 0x0AF1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x0AF2(0x0002) MISSED OFFSET
	struct FVector2D                                   CurFreeCamPosition;                                       // 0x0AF4(0x0008) (IsPlainOldData)
	unsigned char                                      bHasInitUIFinished : 1;                                   // 0x0AFC(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10 : 8;                                        // 0x0AFD(0x0001)
	unsigned char                                      isShowVaultEnable : 1;                                    // 0x0AFD(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x2];                                       // 0x0AFE(0x0002) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSwitchCameraModeStart;                                  // 0x0B00(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPlayerCannotJump;                                       // 0x0B10(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData12[0x4];                                       // 0x0B20(0x0004) MISSED OFFSET
	float                                              Mobile_CameraMoveAdjustSensitiveValue;                    // 0x0B24(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnChangeBattleOwnerDel;                                   // 0x0B28(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      bMoveablePickup : 1;                                      // 0x0B38(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x0B39(0x0003) MISSED OFFSET
	float                                              FreeCamera_FPP_PITCH_MAX_LIMITED;                         // 0x0B3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnPlayerPutDownAllProp;                                   // 0x0B40(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      IsPlayerUnableToDoAutoSprintOperation : 1;                // 0x0B50(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x0B51(0x0003) MISSED OFFSET
	float                                              NoRespondArea;                                            // 0x0B54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FreeCameraSPL_Hor_Parachute;                              // 0x0B58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x0B5C(0x0004) MISSED OFFSET
	class UPlayerControllerState*                      PlayerControllerStateJumping;                             // 0x0B60(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      bUseTouchForce : 1;                                       // 0x0B68(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData16[0x87];                                      // 0x0B69(0x0087) MISSED OFFSET
	float                                              FreeViewUpRate;                                           // 0x0BF0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData17[0x4];                                       // 0x0BF4(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnRepTeammateChange;                                      // 0x0BF8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              FreeCameraSPL_Hor;                                        // 0x0C08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData18[0x14];                                      // 0x0C0C(0x0014) MISSED OFFSET
	unsigned char                                      UnknownData19[0x50];                                      // 0x0C0C(0x0050) UNKNOWN PROPERTY: SetProperty ShadowTrackerExtra.STExtraPlayerController.TouchIndexSet
	float                                              DoubleClickFireTimeThreshold;                             // 0x0C70(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PC_CameraMoveRateY;                                       // 0x0C74(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FCommonCameraModeData                       NearCameraModeData;                                       // 0x0C78(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData20[0x4];                                       // 0x0C9C(0x0004) MISSED OFFSET
	struct FTransform                                  FPPModeSpringArmTrans;                                    // 0x0CA0(0x0030) (IsPlainOldData)
	unsigned char                                      UnknownData21[0x80];                                      // 0x0CD0(0x0080) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPlayerEnterFighting;                                    // 0x0D50(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      bDebugShowYawInput : 1;                                   // 0x0D60(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData22[0x7];                                       // 0x0D61(0x0007) MISSED OFFSET
	TEnumAsByte<ETouchIndex>                           FreeCameraFigerIndex;                                     // 0x0D68(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData23[0x3];                                       // 0x0D69(0x0003) MISSED OFFSET
	struct FVector                                     ForceJumpLocation;                                        // 0x0D6C(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData24[0x4];                                       // 0x0D78(0x0004) MISSED OFFSET
	float                                              MoveableLandHardTime;                                     // 0x0D7C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FreeCamera_FPP_PITCH_MAX;                                 // 0x0D80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CanSprintCDTime;                                          // 0x0D84(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnTeammateHPChangeDelegate;                               // 0x0D88(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UCurveFloat*                                 CurveFPPCameraLerp;                                       // 0x0D98(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      CharacterTouchMove : 1;                                   // 0x0DA0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData25 : 8;                                        // 0x0DA1(0x0001)
	unsigned char                                      IsDeadForLogout : 1;                                      // 0x0DA1(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData26[0x2];                                       // 0x0DA2(0x0002) MISSED OFFSET
	float                                              Mobile_CameraMoveRateX;                                   // 0x0DA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnPlayerCanCutOffParachute;                               // 0x0DA8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FVector2D                                   StartPosition;                                            // 0x0DB8(0x0008) (IsPlainOldData)
	struct FScriptMulticastDelegate                    OnUnequipWeaponDel;                                       // 0x0DC0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPlayerCannotCutOffParachute;                            // 0x0DD0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData27[0x48];                                      // 0x0DE0(0x0048) MISSED OFFSET
	class ASTExtraBaseCharacter*                       closedAimTarget;                                          // 0x0E28(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FPlayerBaseInfoInOB>                 TotalPlayers;                                             // 0x0E30(0x0010) (Net, ZeroConstructor)
	unsigned char                                      DiedisableInput : 1;                                      // 0x0E40(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData28[0x7];                                       // 0x0E41(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    RunOnNextFrameDelegate;                                   // 0x0E48(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UNewbieGuideComponent*                       NewbieComponent;                                          // 0x0E58(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<ETouchFireType>                        TouchFireType;                                            // 0x0E60(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData29[0x7];                                       // 0x0E61(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnCharacterBreathChange;                                  // 0x0E68(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSpectatorChange;                                        // 0x0E78(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              FreeCamera_FPP_MAX;                                       // 0x0E88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FreeCameraSPL_Ver;                                        // 0x0E8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FreeCamera_FPP_PITCH_MIN_LIMITED;                         // 0x0E90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData30[0x4];                                       // 0x0E94(0x0004) MISSED OFFSET
	struct FWeaponSystemReconnectReplicateData         WeaponSystemReconnectReplicateData;                       // 0x0E98(0x0030) (Net)
	int                                                GameTipMsgID;                                             // 0x0EC8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData31[0x4];                                       // 0x0ECC(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnStopFireEvent;                                          // 0x0ED0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData32[0x8];                                       // 0x0EE0(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnUseMainSlot;                                            // 0x0EE8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBackpackMainSlot;                                       // 0x0EF8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UGuideComponent*                             GuideComponent;                                           // 0x0F08(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              AccumulateYawInput;                                       // 0x0F10(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData33[0x4];                                       // 0x0F14(0x0004) MISSED OFFSET
	struct FName                                       AutoScopeAimCompName;                                     // 0x0F18(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FCommonCameraModeData                       NormalCameraModeData;                                     // 0x0F20(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<ETouchIndex>                           OnFireTouchFingerIndex;                                   // 0x0F44(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData34[0x3];                                       // 0x0F45(0x0003) MISSED OFFSET
	float                                              JoystickTriggerSprintDuration;                            // 0x0F48(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData35[0xC];                                       // 0x0F4C(0x000C) MISSED OFFSET
	unsigned char                                      bCanGetTouchInput : 1;                                    // 0x0F58(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData36[0x57];                                      // 0x0F59(0x0057) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPlayerExitFighting;                                     // 0x0FB0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData37[0x1];                                       // 0x0FC0(0x0001) MISSED OFFSET
	unsigned char                                      bIsBattleOwner : 1;                                       // 0x0FC1(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData38[0x6];                                       // 0x0FC2(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnUseInventoryItem;                                       // 0x0FC8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData39[0x10];                                      // 0x0FD8(0x0010) MISSED OFFSET
	float                                              FPPInteractableAngle;                                     // 0x0FE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData40[0xC];                                       // 0x0FEC(0x000C) MISSED OFFSET
	struct FCommonCameraModeData                       PlaneCameraModeData;                                      // 0x0FF8(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              LandAfterJumpPlaneDelayMoveTime;                          // 0x101C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FreeCamera_FPP_MIN;                                       // 0x1020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData41[0x4];                                       // 0x1024(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnRemoveMainSlot;                                         // 0x1028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FName                                       PlayerControllerState;                                    // 0x1038(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnPlayerNameChange;                                       // 0x1040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      bIsTouching : 1;                                          // 0x1050(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData42[0x3];                                       // 0x1051(0x0003) MISSED OFFSET
	struct FVector2D                                   NearCameraModeCameraMoveAdditionalRate;                   // 0x1054(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData43[0x44];                                      // 0x105C(0x0044) MISSED OFFSET
	struct FScriptMulticastDelegate                    triggerMoveVoiceCheckDelegate;                            // 0x10A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData44[0x50];                                      // 0x10B0(0x0050) MISSED OFFSET
	float                                              AutoSprintRequestCD;                                      // 0x1100(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bMoveableLandHard : 1;                                    // 0x1104(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData45[0x3];                                       // 0x1105(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPlayerPickUpActor;                                      // 0x1108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	int                                                MaxCacheInputSpeedNum;                                    // 0x1118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData46[0x4];                                       // 0x111C(0x0004) MISSED OFFSET
	struct FObservedData                               ObservedData;                                             // 0x1120(0x0028) (BlueprintVisible)
	int                                                UseMotionControlType;                                     // 0x1148(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData47[0x4];                                       // 0x114C(0x0004) MISSED OFFSET
	struct FString                                     GameTipParam1;                                            // 0x1150(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              MinFovChangeView;                                         // 0x1160(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData48[0x4];                                       // 0x1164(0x0004) MISSED OFFSET
	class UChatComponent*                              ChatComponent;                                            // 0x1168(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      bTrackingKillerEnabled : 1;                               // 0x1170(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData49[0x17];                                      // 0x1171(0x0017) MISSED OFFSET
	float                                              CanOpenParachuteHeight;                                   // 0x1188(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData50[0x4];                                       // 0x118C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPlayerCanOpenParachute;                                 // 0x1190(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      bUseDisCurve : 1;                                         // 0x11A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData51[0x4F];                                      // 0x11A1(0x004F) MISSED OFFSET
	class UPlayerControllerState*                      PlayerControllerStateFighting;                            // 0x11F0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData52[0x8];                                       // 0x11F8(0x0008) MISSED OFFSET
	class AActor*                                      PlaneActor;                                               // 0x1200(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCanOpenParachute : 1;                                    // 0x1208(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData53 : 8;                                        // 0x1209(0x0001)
	unsigned char                                      bIsAutoAimOnlyOnFire : 1;                                 // 0x1209(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData54[0x2];                                       // 0x120A(0x0002) MISSED OFFSET
	float                                              InHouseSpringArmLengthModifierChangeSpeed;                // 0x120C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FreeCameraStartMinPitchMax;                               // 0x1210(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData55[0x4];                                       // 0x1214(0x0004) MISSED OFFSET
	struct FKillOrPutDownMessage                       KillOrPutDownMessageData;                                 // 0x1218(0x00C8) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bIsUseDisOrSpeedMove : 1;                                 // 0x12E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData56[0x3];                                       // 0x12E1(0x0003) MISSED OFFSET
	float                                              MoveCameraMinTimeThreshold;                               // 0x12E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FAimCameraModeData                          AimCameraModeData;                                        // 0x12E8(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData57[0x4];                                       // 0x130C(0x0004) MISSED OFFSET
	class UPlayerControllerStateMachine*               PlayerControllerStateMachine;                             // 0x1310(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class AActor*>                              nowGrenadeList;                                           // 0x1318(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UPlayerControllerState*                      PlayerControllerStateFlying;                              // 0x1328(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnPlayerEnterJumping;                                     // 0x1330(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData58[0x8];                                       // 0x1340(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnGameStartCountDownDelegate;                             // 0x1348(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      bNeedSetFireTouchFingerIndex : 1;                         // 0x1358(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData59[0x7];                                       // 0x1359(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPlayerEnterFinished;                                    // 0x1360(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRepPlayerState;                                         // 0x1370(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	int                                                WeaponReconnectOpIndex;                                   // 0x1380(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData60[0x14];                                      // 0x1384(0x0014) MISSED OFFSET
	TArray<class ASTExtraVehicleBase*>                 nowNearVehicleList;                                       // 0x1398(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnMatchSessionChange;                                     // 0x13A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              RescueRemainingSeconds;                                   // 0x13B8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData61[0x4];                                       // 0x13BC(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnStartFireEvent;                                         // 0x13C0(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnAutoSprintActive;                                       // 0x13D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData62[0x4D];                                      // 0x13E0(0x004D) MISSED OFFSET
	unsigned char                                      MaxTouchMoveDelayFrame;                                   // 0x142D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData63[0x2];                                       // 0x142E(0x0002) MISSED OFFSET
	TArray<struct FBattleItemData>                     ObservedItemList;                                         // 0x1430(0x0010) (Net, ZeroConstructor)
	EObserverAuthorityType                             ObserverAuthorityType;                                    // 0x1440(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData64[0x17];                                      // 0x1441(0x0017) MISSED OFFSET
	struct FScriptMulticastDelegate                    triggerVehicleVoiceCheckDelegate;                         // 0x1458(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<struct FClientFatalDamageRecordData>        ClientFatalDamageRecords;                                 // 0x1468(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnLostConnection;                                         // 0x1478(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FVector2D                                   AimCameraModeCameraMoveMaxSpeed;                          // 0x1488(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnPossessingCharacterDeathDelegate;                       // 0x1490(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTakeDamagedDelegate;                                    // 0x14A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TMap<TEnumAsByte<ETouchIndex>, float>              TouchForceMap;                                            // 0x14B0(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              OceanSideDetectInterval;                                  // 0x1500(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData65[0x4];                                       // 0x1504(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPingChangeDelegate;                                     // 0x1508(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FServerHitEnemyReplicatedData               ServerHitEnemyReplicatedData;                             // 0x1518(0x0010) (BlueprintVisible, BlueprintReadOnly, Net)
	unsigned char                                      UnknownData66[0x38];                                      // 0x1528(0x0038) MISSED OFFSET
	TArray<struct FPlayerInfoInOB>                     SameTeamPlayerList;                                       // 0x1560(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FScriptMulticastDelegate                    triggerGlassVoiceCheckDelegate;                           // 0x1570(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<class ASTExtraShootWeapon*>                 nowShotWeaponList;                                        // 0x1580(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData67[0x8];                                       // 0x1590(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnStartAutoSprintCountDown;                               // 0x1598(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData68[0x18];                                      // 0x15A8(0x0018) MISSED OFFSET
	struct FScriptMulticastDelegate                    On3DTouchForceChange;                                     // 0x15C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UBackpackComponent*                          BackpackComponent;                                        // 0x15D0(0x0008) (ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FTeamMateStateInfo>                  TeamMateStates;                                           // 0x15D8(0x0010) (ZeroConstructor)
	TMap<TEnumAsByte<ETouchIndex>, struct FTeamMateStateInfo> DoubleClickLastTouchInfoMap;                              // 0x15E8(0x0050) (ZeroConstructor)
	TMap<TEnumAsByte<ETouchIndex>, struct FTeamMateStateInfo> DoubleClickCurTouchInfoMap;                               // 0x1638(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData69[0x8];                                       // 0x1688(0x0008) MISSED OFFSET
	class AActor*                                      ThePlane;                                                 // 0x1690(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	float                                              JoystickSprintDisThreshold;                               // 0x1698(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                FireMode;                                                 // 0x169C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData70[0x74];                                      // 0x16A0(0x0074) MISSED OFFSET
	unsigned char                                      bCanCloseParachute : 1;                                   // 0x1714(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData71[0x3];                                       // 0x1715(0x0003) MISSED OFFSET
	TArray<struct FPlayerInfoInOB>                     NearPlayerList;                                           // 0x1718(0x0010) (BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData72[0x4];                                       // 0x1728(0x0004) MISSED OFFSET
	float                                              CloseParachuteHeight;                                     // 0x172C(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	TArray<class ASTExtraBaseCharacter*>               nowNearCharacterList;                                     // 0x1730(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData73[0x10];                                      // 0x1740(0x0010) MISSED OFFSET
	class APlayerTombBox*                              DeadTombBox;                                              // 0x1750(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData74[0x14];                                      // 0x1758(0x0014) MISSED OFFSET
	int                                                DefaultParachuteItemID;                                   // 0x176C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FSensibilityConfig                          SensibilityConfig;                                        // 0x1770(0x0054) (BlueprintVisible)
	unsigned char                                      UnknownData75[0x4];                                       // 0x17C4(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPlayerCannotOpenParachute;                              // 0x17C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData76[0x10];                                      // 0x17D8(0x0010) MISSED OFFSET
	unsigned char                                      bMoveInMiniMap : 1;                                       // 0x17E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData77 : 8;                                        // 0x17E9(0x0001)
	unsigned char                                      bIsLandingOnGround : 1;                                   // 0x17E9(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData78 : 8;                                        // 0x17EA(0x0001)
	unsigned char                                      bAlreadyFired : 1;                                        // 0x17EA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData79[0x5];                                       // 0x17EB(0x0005) MISSED OFFSET
	struct FString                                     MurderName;                                               // 0x17F0(0x0010) (ZeroConstructor)
	float                                              FreeCameraStartMinPitchMin;                               // 0x1800(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TouchForceWatchFrame;                                     // 0x1804(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData80[0x8];                                       // 0x1808(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnExitGame;                                               // 0x1810(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	class AActor*                                      OwnerPlane;                                               // 0x1820(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnSwitchCameraModeEnd;                                    // 0x1828(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData81[0x8];                                       // 0x1838(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnLocalCharacterHPChangeDel;                              // 0x1840(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              RealTimePawnHeight;                                       // 0x1850(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData82[0xC];                                       // 0x1854(0x000C) MISSED OFFSET
	unsigned char                                      EnableAsyncLoading : 1;                                   // 0x1860(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData83[0x7F];                                      // 0x1861(0x007F) MISSED OFFSET
	TArray<TEnumAsByte<ETouchIndex>>                   IgnoreCameraMovingIndexArray;                             // 0x18E0(0x0010) (BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData84[0x38];                                      // 0x18F0(0x0038) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnRank;                                                   // 0x1928(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      IsCurrentSpectatorFreeView : 1;                           // 0x1938(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData85[0x57];                                      // 0x1939(0x0057) MISSED OFFSET
	float                                              AutoScopeAimTraceDistance;                                // 0x1990(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData86[0x4];                                       // 0x1994(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPlayerExitJumping;                                      // 0x1998(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData87[0x9];                                       // 0x19A8(0x0009) MISSED OFFSET
	TEnumAsByte<ETouchIndex>                           OnFreeCameraFingerIndex;                                  // 0x19B1(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData88[0x6];                                       // 0x19B2(0x0006) MISSED OFFSET
	float                                              PC_CameraMoveRateX;                                       // 0x19B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TestForce;                                                // 0x19BC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpringArmComponent*                         CurrentActiveSpringArmCache;                              // 0x19C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnDoubleClickCheck;                                       // 0x19C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData89[0x78];                                      // 0x19D8(0x0078) MISSED OFFSET
	unsigned char                                      bEnableAutoAimTrainingMode : 1;                           // 0x1A50(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData90 : 8;                                        // 0x1A51(0x0001)
	unsigned char                                      bIsRightScreenUseComfortableSwipe : 1;                    // 0x1A51(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData91[0xE];                                       // 0x1A52(0x000E) MISSED OFFSET
	class ATslPostProcessEffect*                       OutlineEffectClass;                                       // 0x1A60(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	float                                              OutlineEffectMultiplyValue;                               // 0x1A68(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData92[0x4];                                       // 0x1A6C(0x0004) MISSED OFFSET
	class ATslPostProcessEffect*                       OutlineEffect;                                            // 0x1A70(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class ATslTracerManager*                           TracerManager;                                            // 0x1A78(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData93[0x4];                                       // 0x1A80(0x0004) MISSED OFFSET
	unsigned char                                      bPlayWinnerWinnerChickenDinnerAnimationAtMatchFinished : 1;// 0x1A84(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData94[0xB];                                       // 0x1A85(0x000B) MISSED OFFSET
	TArray<struct FPlayerInfoInOB>                     TotalPlayerList;                                          // 0x1A90(0x0010) (BlueprintVisible, ZeroConstructor)
	float                                              RecoverLagDelayTime;                                      // 0x1AA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsLeftScreenUseComfortableSwipe : 1;                     // 0x1AA4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData95[0x3];                                       // 0x1AA5(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnGameStartDelegate;                                      // 0x1AA8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnInterruptAutoSprintCountDown;                           // 0x1AB8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              MovealbeSwitchPoseTime;                                   // 0x1AC8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ComfortableSwipeAddition;                                 // 0x1ACC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                CrossHairColor;                                           // 0x1AD0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData96[0x4];                                       // 0x1AE0(0x0004) MISSED OFFSET
	float                                              MoveCameraMinDistanceThreshold;                           // 0x1AE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData97[0x8];                                       // 0x1AE8(0x0008) MISSED OFFSET
	TArray<struct FAirDropBoxInOb>                     AirDropBoxList;                                           // 0x1AF0(0x0010) (BlueprintVisible, Net, ZeroConstructor)
	unsigned char                                      UnknownData98[0x28];                                      // 0x1B00(0x0028) MISSED OFFSET
	TArray<class ATslLPCPlayerState*>                  KillerTeamPlayerStates;                                   // 0x1B28(0x0010) (Net, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnPlayerCanJump;                                          // 0x1B38(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UMeshComponent*                              SpectatorScopingMesh;                                     // 0x1B48(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnEquipWeaponDel;                                         // 0x1B50(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              InteractableAngle;                                        // 0x1B60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData99[0x4];                                       // 0x1B64(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnReconnected;                                            // 0x1B68(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FVector2D                                   AimCameraModeCameraMoveAdditionalRate;                    // 0x1B78(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData100[0x8];                                      // 0x1B80(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnAboutToChangeViewTarget;                                // 0x1B88(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFinishedChangeViewTarget;                               // 0x1B98(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      MurderIsAI : 1;                                           // 0x1BA8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData101 : 8;                                       // 0x1BA9(0x0001)
	unsigned char                                      bIsLastTwoCircle : 1;                                     // 0x1BA9(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData102[0x2];                                      // 0x1BAA(0x0002) MISSED OFFSET
	struct FRotator                                    FreeCameraStartRotation;                                  // 0x1BAC(0x000C) (IsPlainOldData)
	class ASTExtraBaseCharacter*                       STExtraBaseCharacter;                                     // 0x1BB8(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData103[0x4];                                      // 0x1BC0(0x0004) MISSED OFFSET
	float                                              OceanSideDetectDistance;                                  // 0x1BC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              JoystickSprintAngleThreshold;                             // 0x1BC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              JoystickSprintDisThresholdNew;                            // 0x1BCC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    triggerVoiceCheckDelegate;                                // 0x1BD0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCharacterRecoveryHealth;                                // 0x1BE0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData104[0x4];                                      // 0x1BF0(0x0004) MISSED OFFSET
	struct FVector2D                                   NearCameraModeCameraMoveMaxSpeed;                         // 0x1BF4(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData105[0x4];                                      // 0x1BFC(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPlayerEnterFlying;                                      // 0x1C00(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData106[0x10];                                     // 0x1C10(0x0010) MISSED OFFSET
	class UPlayerControllerState*                      PlayerControllerStateActive;                              // 0x1C20(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnPlayerPutDownActor;                                     // 0x1C28(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              InHouseSpringArmLengthModifier;                           // 0x1C38(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      EnableNetCullingDistOnVeryLowDevice : 1;                  // 0x1C3C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData107[0x43];                                     // 0x1C3D(0x0043) MISSED OFFSET
	struct FVector                                     CurScreenMoveSpeed;                                       // 0x1C80(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData108[0x8];                                      // 0x1C8C(0x0008) MISSED OFFSET
	unsigned char                                      bIsAutoAimEnabled : 1;                                    // 0x1C94(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData109[0x3];                                      // 0x1C95(0x0003) MISSED OFFSET
	float                                              FreeCamera_FPP_PITCH_MIN;                                 // 0x1C98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData110[0x4];                                      // 0x1C9C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnDamageToOther;                                          // 0x1CA0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TMap<TEnumAsByte<ESTEPoseState>, struct FCameraViewPitchLimitData> CameraViewPitchLimitDataMap;                              // 0x1CB0(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnPlayerExitParachute;                                    // 0x1D00(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              ForceOpenParachuteHeight;                                 // 0x1D10(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EnmSprintOptType>                      sprintOptType;                                            // 0x1D14(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData111[0x3];                                      // 0x1D15(0x0003) MISSED OFFSET
	float                                              SwitchPoseCDTime;                                         // 0x1D18(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData112[0x4];                                      // 0x1D1C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPlayerEnterParachute;                                   // 0x1D20(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              Mobile_CameraMoveRateY;                                   // 0x1D30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData113[0x4];                                      // 0x1D34(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnCharacterNearDeathOrRescueingOtherNotifyDelegate;       // 0x1D38(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              GameAssistantJoyStickOpacity;                             // 0x1D48(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData114[0x1];                                      // 0x1D4C(0x0001) MISSED OFFSET
	TEnumAsByte<EJoystickOperatingMode>                JoystickOperatingMode;                                    // 0x1D4D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bIsNeedCheckPullPercentage : 1;                           // 0x1D4E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData115[0x1];                                      // 0x1D4F(0x0001) MISSED OFFSET
	TMap<struct FString, unsigned char>                IsTeammatesAutoFollowing;                                 // 0x1D50(0x0050) (BlueprintVisible, ZeroConstructor)
	float                                              JoystickSprintBtnHeight;                                  // 0x1DA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      WallFeedBack : 1;                                         // 0x1DA4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData116 : 8;                                       // 0x1DA5(0x0001)
	unsigned char                                      ShouldShowPawnDetailInfoOnHUD : 1;                        // 0x1DA5(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData117[0x2];                                      // 0x1DA6(0x0002) MISSED OFFSET
	class UPlayerControllerState*                      PlayerControllerStateLanding;                             // 0x1DA8(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCurveFloat*                                 CameraMoveSpeedUpAdditionalRateCurveBaseXMoveDis;         // 0x1DB0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UVehicleUserComponent*                       VehicleUserComp;                                          // 0x1DB8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnShowSkillPrompt;                                        // 0x1DC0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class AKillerTracker*                              KillerTrackerTemplate;                                    // 0x1DD0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnShowAutoSprintButton;                                   // 0x1DD8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      bCanJump : 1;                                             // 0x1DE8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData118[0x3];                                      // 0x1DE9(0x0003) MISSED OFFSET
	int                                                CurrOBAirDropID;                                          // 0x1DEC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData119[0x70];                                     // 0x1DF0(0x0070) MISSED OFFSET
	class UCurveFloat*                                 CameraMoveSpeedUpAdditionalRateCurveBaseXMoveSpeed;       // 0x1E60(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bMoveableAirborne : 1;                                    // 0x1E68(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData120[0x7];                                      // 0x1E69(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSwitchWeapon;                                           // 0x1E70(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              EasyGoStraightAngle;                                      // 0x1E80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData121[0x4];                                      // 0x1E84(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnMapMarkChangeDelegate;                                  // 0x1E88(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TMap<TEnumAsByte<ETouchIndex>, struct FString>     EndTouchScreenCommandMap;                                 // 0x1E98(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              FreeCameraSPL_Ver_Parachute;                              // 0x1EE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData122[0x4];                                      // 0x1EEC(0x0004) MISSED OFFSET
	TEnumAsByte<EPlayerCameraMode>                     CurCameraMode;                                            // 0x1EF0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData123[0x3];                                      // 0x1EF1(0x0003) MISSED OFFSET
	float                                              PlaneFlyHeightFromGameMode;                               // 0x1EF4(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	class UCameraComponent*                            CurrentActiveCameraCache;                                 // 0x1EF8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData124[0x10];                                     // 0x1F00(0x0010) MISSED OFFSET
	float                                              DeathResultDelaySeconds;                                  // 0x1F10(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData125[0x78];                                     // 0x1F14(0x0078) MISSED OFFSET
	float                                              CPPNavigatorTickRate;                                     // 0x1F8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DisplayCharRotation;                                      // 0x1F90(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData126[0x4];                                      // 0x1F94(0x0004) MISSED OFFSET
	float                                              MaxValidPing;                                             // 0x1F98(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData127[0x4];                                      // 0x1F9C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnNotifyDisplayMessage;                                   // 0x1FA0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotifyTimerMessage;                                     // 0x1FB0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData128[0x4];                                      // 0x1FC0(0x0004) MISSED OFFSET
	unsigned char                                      IsInGameMenuOpened : 1;                                   // 0x1FC4(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData129 : 8;                                       // 0x1FC5(0x0001)
	unsigned char                                      IsWheelOpened : 1;                                        // 0x1FC5(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData130 : 8;                                       // 0x1FC6(0x0001)
	unsigned char                                      IsInventoryOpened : 1;                                    // 0x1FC6(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData131[0x1C9];                                    // 0x1FC7(0x01C9) MISSED OFFSET
	unsigned char                                      bNeedVoiceCheck : 1;                                      // 0x2190(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData132 : 8;                                       // 0x2191(0x0001)
	unsigned char                                      bNeedImmediateVoiceCheck : 1;                             // 0x2191(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData133[0x2];                                      // 0x2192(0x0002) MISSED OFFSET
	float                                              PingCoolTimeSeconds;                                      // 0x2194(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData134[0x8];                                      // 0x2198(0x0008) MISSED OFFSET
	TArray<struct FGameModePlayerItem>                 BasicEquipItemList;                                       // 0x21A0(0x0010) (ZeroConstructor)
	TArray<struct FGameModePlayerItem>                 PrevEquipItemList;                                        // 0x21B0(0x0010) (ZeroConstructor)
	TArray<struct FGameModeRevivePlayerBullet>         RevivePlayerBulletArray;                                  // 0x21C0(0x0010) (ZeroConstructor)
	struct FScriptMulticastDelegate                    OnMyTeamScoreChangedAtClient;                             // 0x21D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData135[0x18];                                     // 0x21E0(0x0018) MISSED OFFSET
	TArray<struct FRespawnEquipWeaponInfo>             PrevEquipWeaponArray;                                     // 0x21F8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData136[0x8];                                      // 0x2208(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPickupItemNotify;                                       // 0x2210(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData137[0x10];                                     // 0x2220(0x0010) MISSED OFFSET
	int                                                PlayerStartIndex;                                         // 0x2230(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData138[0x4];                                      // 0x2234(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnViewTargetPlayerStateChange;                            // 0x2238(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData139[0x18];                                     // 0x2248(0x0018) MISSED OFFSET
	struct FVector_NetQuantizeNormal                   SpectatorAccumViewRotation;                               // 0x2260(0x000C) (Net, Transient)
	unsigned char                                      UnknownData140[0xC];                                      // 0x226C(0x000C) MISSED OFFSET
	struct FRotator                                    SpectatorVehicleViewRotation;                             // 0x2278(0x000C) (Transient, IsPlainOldData)
	unsigned char                                      UnknownData141[0x14];                                     // 0x2284(0x0014) MISSED OFFSET
	class ASTExtraBaseCharacter*                       SpectatorViewCharacter;                                   // 0x2298(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bProcessingInput : 1;                                     // 0x22A0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData142[0x7];                                      // 0x22A1(0x0007) MISSED OFFSET
	TMap<class UObject*, struct FTrailMarkActorBlock>  TrailMarkActorLookupTable;                                // 0x22A8(0x0050) (ZeroConstructor, Transient)
	TArray<struct FFootprintActorInfo>                 FootprintActorInfo;                                       // 0x22F8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	int                                                MaxTeamFootprintCount;                                    // 0x2308(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxOtherFootprintCount;                                   // 0x230C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<EPhysicalSurfaceDescription, struct FFootprintActorBlock> FootprintActorLookupTable;                                // 0x2310(0x0050) (ZeroConstructor)

	// Function ShadowTrackerExtra.STExtraPlayerController.VisualizeItem
	// (Final, Exec, Native, Public)
	void VisualizeItem();// sub_3170E0()

	// Function ShadowTrackerExtra.STExtraPlayerController.ViewVehicle
	// (Final, Native, Public, HasDefaults)
	void ViewVehicle(float YawAddfloat PitchAddconst struct FVector& Loc);// sub_6DE710()

	// Function ShadowTrackerExtra.STExtraPlayerController.ViewPlane
	// (Final, Native, Public)
	void ViewPlane();// sub_6DE6F0()

	// Function ShadowTrackerExtra.STExtraPlayerController.VersionCheck
	// (Final, Exec, Native, Public)
	void VersionCheck();// sub_3170E0()

	// Function ShadowTrackerExtra.STExtraPlayerController.UpdatePoseState
	// (Final, Native, Public, BlueprintCallable)
	void UpdatePoseState(TEnumAsByte<ESTEPoseState> PoseType);// sub_6DE200()

	// Function ShadowTrackerExtra.STExtraPlayerController.UnreliablePong
	// (Final, Net, Native, Event, Private, NetServer, NetValidate)
	void UnreliablePong(int SeqIDint64_t DateTimeTickFromServer);// sub_6DE040()

	// Function ShadowTrackerExtra.STExtraPlayerController.UnreliablePing
	// (Final, Net, Native, Event, Private, NetClient)
	void UnreliablePing(int SeqIDint64_t DateTimeTick);// sub_6DDF70()

	// Function ShadowTrackerExtra.STExtraPlayerController.UnLoadAllCollision
	// (Final, Exec, Native, Public)
	void UnLoadAllCollision(unsigned char Unload);// sub_6DDEE0()

	// DelegateFunction ShadowTrackerExtra.STExtraPlayerController.TslHudOnDisplayMessage__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void TslHudOnDisplayMessage__DelegateSignature(ESystemMessageType MessageTypeconst struct FText& Messagefloat Durationclass UAkAudioEvent* Sound);// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraPlayerController.TracerProjectileModeType
	// (Final, Exec, Native, Public)
	void TracerProjectileModeType(int InModeint InType);// sub_6DDE20()

	// Function ShadowTrackerExtra.STExtraPlayerController.TracerBulletModeType
	// (Final, Exec, Native, Public)
	void TracerBulletModeType(int InModeint InType);// sub_6DDD60()

	// Function ShadowTrackerExtra.STExtraPlayerController.TouchMove
	// (Final, Native, Public, HasDefaults, BlueprintCallable)
	void TouchMove(const struct FVector& LocTEnumAsByte<ETouchIndex> FingerIndex);// sub_6DDC90()

	// Function ShadowTrackerExtra.STExtraPlayerController.ToggleVehicleSync
	// (Final, Exec, Native, Public)
	void ToggleVehicleSync(unsigned char Val);// sub_317670()

	// Function ShadowTrackerExtra.STExtraPlayerController.ToggleUserCmdDeltaSendAck
	// (Final, Exec, Native, Public)
	void ToggleUserCmdDeltaSendAck(unsigned char Val);// sub_317670()

	// Function ShadowTrackerExtra.STExtraPlayerController.ToggleUserCmdDeltaFlag
	// (Final, Exec, Native, Public)
	void ToggleUserCmdDeltaFlag(unsigned char Val);// sub_317670()

	// Function ShadowTrackerExtra.STExtraPlayerController.ToggleUserCmdDeltaCheckSum
	// (Final, Exec, Native, Public)
	void ToggleUserCmdDeltaCheckSum(unsigned char Val);// sub_317670()

	// Function ShadowTrackerExtra.STExtraPlayerController.ToggleUserCmdDelta
	// (Final, Exec, Native, Public)
	void ToggleUserCmdDelta(unsigned char Val);// sub_317670()

	// Function ShadowTrackerExtra.STExtraPlayerController.ToggleTracerManager
	// (Final, Exec, Native, Public)
	void ToggleTracerManager();// sub_6DDC50()

	// Function ShadowTrackerExtra.STExtraPlayerController.ToggleServerAcknowledgePossession
	// (Final, Exec, Native, Public)
	void ToggleServerAcknowledgePossession(unsigned char Val);// sub_317670()

	// Function ShadowTrackerExtra.STExtraPlayerController.ToggleReportPlayer
	// (Final, Native, Public, BlueprintCallable)
	void ToggleReportPlayer();// sub_6DDC30()

	// Function ShadowTrackerExtra.STExtraPlayerController.ToggleMissionList
	// (Final, Native, Public, BlueprintCallable)
	void ToggleMissionList();// sub_6DDC10()

	// Function ShadowTrackerExtra.STExtraPlayerController.ToggleInventoryEx
	// (Event, Public, BlueprintEvent)
	void ToggleInventoryEx();// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraPlayerController.TestBlackBox
	// (Final, Exec, Native, Public)
	void TestBlackBox();// sub_3170E0()

	// Function ShadowTrackerExtra.STExtraPlayerController.TeamNoAlwaysRelevant
	// (Final, Exec, Native, Public)
	void TeamNoAlwaysRelevant();// sub_3170E0()

	// Function ShadowTrackerExtra.STExtraPlayerController.SwitchViewTarget
	// (Final, Exec, Native, Public)
	void SwitchViewTarget();// sub_3170E0()

	// Function ShadowTrackerExtra.STExtraPlayerController.SwitchToDeadBox
	// (Final, Native, Public)
	void SwitchToDeadBox();// sub_6DDB40()

	// Function ShadowTrackerExtra.STExtraPlayerController.SwitchPoseStateServer
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void SwitchPoseStateServer(class ASTExtraBaseCharacter* TargetCharacterTEnumAsByte<ESTEPoseState> PoseState);// sub_6DDA40()

	// Function ShadowTrackerExtra.STExtraPlayerController.SwitchPoseStateFailedResponse
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void SwitchPoseStateFailedResponse(class ASTExtraBaseCharacter* TargetCharacterTEnumAsByte<ESTEPoseState> PoseState);// sub_6DD970()

	// Function ShadowTrackerExtra.STExtraPlayerController.SwitchPoseStateClient
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void SwitchPoseStateClient(class ASTExtraBaseCharacter* TargetCharacterTEnumAsByte<ESTEPoseState> PoseState);// sub_6DD8A0()

	// Function ShadowTrackerExtra.STExtraPlayerController.SwitchGenerateItem
	// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
	void SwitchGenerateItem();// sub_6DD850()

	// Function ShadowTrackerExtra.STExtraPlayerController.SwitchCameraModeScope
	// (Final, Native, Public, BlueprintCallable)
	void SwitchCameraModeScope(TEnumAsByte<EPlayerCameraMode> Modeclass ASTExtraBaseCharacter* InCharacter);// sub_6DD790()

	// Function ShadowTrackerExtra.STExtraPlayerController.SwitchCameraModeByOrder
	// (Final, Native, Public, BlueprintCallable)
	void SwitchCameraModeByOrder();// sub_6DD770()

	// Function ShadowTrackerExtra.STExtraPlayerController.SwitchCameraMode
	// (Final, Native, Public, BlueprintCallable)
	void SwitchCameraMode(TEnumAsByte<EPlayerCameraMode> Modeclass ASTExtraBaseCharacter* InCharacterunsigned char IsUseLerpFPP);// sub_6DD660()

	// Function ShadowTrackerExtra.STExtraPlayerController.SwapWeaponByPropSlotOnServer
	// (Final, Native, Public, BlueprintCallable)
	void SwapWeaponByPropSlotOnServer(ESurviveWeaponPropSlot Slot1ESurviveWeaponPropSlot Slot2unsigned char bForce);// sub_6DD550()

	// Function ShadowTrackerExtra.STExtraPlayerController.SwapMainWeapon
	// (Final, Native, Public, BlueprintCallable)
	void SwapMainWeapon();// sub_6DD530()

	// Function ShadowTrackerExtra.STExtraPlayerController.StopRedZone
	// (Final, Exec, Native, Public)
	void StopRedZone(int bStop);// sub_3168A0()

	// Function ShadowTrackerExtra.STExtraPlayerController.StopInvincivility
	// (Final, Native, Protected)
	void StopInvincivility();// sub_6DD510()

	// Function ShadowTrackerExtra.STExtraPlayerController.StartTrainingFor
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void StartTrainingFor(class ASTExtraPlayerCharacter* TargetCharacter);// sub_6DD450()

	// Function ShadowTrackerExtra.STExtraPlayerController.StartSelfSkydivingTraining
	// (Final, Exec, Native, Public)
	void StartSelfSkydivingTraining();// sub_3170E0()

	// Function ShadowTrackerExtra.STExtraPlayerController.StartReadyCountDown
	// (Final, Exec, Native, Public)
	void StartReadyCountDown();// sub_3170E0()

	// Function ShadowTrackerExtra.STExtraPlayerController.StartRagdoll
	// (Final, Exec, Native, Public)
	void StartRagdoll();// sub_3170E0()

	// Function ShadowTrackerExtra.STExtraPlayerController.StartOnePlane
	// (Final, Exec, Native, Public)
	void StartOnePlane();// sub_6DD350()

	// Function ShadowTrackerExtra.STExtraPlayerController.StartLandOnGroundAfterJumpPlane
	// (Final, Native, Public, BlueprintCallable)
	void StartLandOnGroundAfterJumpPlane();// sub_6DD330()

	// Function ShadowTrackerExtra.STExtraPlayerController.StartGame
	// (Final, Native, Public, BlueprintCallable)
	void StartGame();// sub_3170E0()

	// Function ShadowTrackerExtra.STExtraPlayerController.StartFreeCamera
	// (Final, Native, Public, BlueprintCallable)
	void StartFreeCamera(TEnumAsByte<ETouchIndex> FigerIndex);// sub_6DD2B0()

	// Function ShadowTrackerExtra.STExtraPlayerController.StartAirDropSpecified
	// (Final, Exec, Native, Public)
	void StartAirDropSpecified(float Xfloat Y);// sub_6CBDA0()

	// Function ShadowTrackerExtra.STExtraPlayerController.StartAirDropCurrent
	// (Final, Exec, Native, Public)
	void StartAirDropCurrent();// sub_3170E0()

	// Function ShadowTrackerExtra.STExtraPlayerController.StartAirDrop
	// (Final, Exec, Native, Public)
	void StartAirDrop(int Index);// sub_3168A0()

	// DelegateFunction ShadowTrackerExtra.STExtraPlayerController.SpectatorOnDeath__DelegateSignature
	// (MulticastDelegate, Public, Delegate, HasDefaults)
	void SpectatorOnDeath__DelegateSignature(const struct FString& InViewTargetKillerUniqueIdint KillerTeamIdconst struct FVector& InLastDeathLocation);// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraPlayerController.SpectatorCameraChange_Broadcast
	// (Net, NetReliable, Native, Event, Protected, NetClient, NetValidate)
	void SpectatorCameraChange_Broadcast(unsigned char bDie);// sub_6DD1F0()

	// Function ShadowTrackerExtra.STExtraPlayerController.SpectateCharacterOnDeath
	// (Final, Native, Private, HasDefaults)
	void SpectateCharacterOnDeath(const struct FString& InViewTargetKillerUniqueIdint ViewTargetTeamIdconst struct FVector& InLastDeathLocation);// sub_6DD090()

	// Function ShadowTrackerExtra.STExtraPlayerController.SpawnVehicleWithPath
	// (Final, Exec, Native, Public)
	void SpawnVehicleWithPath(const struct FString& Path);// sub_6D3590()

	// Function ShadowTrackerExtra.STExtraPlayerController.SpawnVehicle
	// (Final, Exec, Native, Public)
	void SpawnVehicle();// sub_3170E0()

	// Function ShadowTrackerExtra.STExtraPlayerController.SpawnRedzonePosition
	// (Final, Exec, Native, Public)
	void SpawnRedzonePosition(float Xfloat Yfloat Radius);// sub_6D4610()

	// Function ShadowTrackerExtra.STExtraPlayerController.SpawnRedzoneOnPlayer
	// (Final, Exec, Native, Public)
	void SpawnRedzoneOnPlayer();// sub_3170E0()

	// Function ShadowTrackerExtra.STExtraPlayerController.SpawnObject
	// (Final, Exec, Native, Public)
	void SpawnObject(const struct FString& Pathfloat OffsetForwardfloat OffsetHeight);// sub_6DCF70()

	// Function ShadowTrackerExtra.STExtraPlayerController.SpawnDummy
	// (Final, Exec, Native, Public)
	void SpawnDummy(int DummyLevelfloat LifeSpan);// sub_6DCEA0()

	// Function ShadowTrackerExtra.STExtraPlayerController.SpawnAI
	// (Final, Exec, Native, Public)
	void SpawnAI(int Num);// sub_3168A0()

	// Function ShadowTrackerExtra.STExtraPlayerController.SoftReconnectRecoverData
	// (Final, Native, Public)
	void SoftReconnectRecoverData(class AUAEPlayerController* PC);// sub_6D7440()

	// Function ShadowTrackerExtra.STExtraPlayerController.ShowVaultEnable
	// (Final, Exec, Native, Public)
	void ShowVaultEnable();// sub_6DCE80()

	// Function ShadowTrackerExtra.STExtraPlayerController.ShowTeammatchIntroWidget
	// (Final, Native, Public)
	void ShowTeammatchIntroWidget(unsigned char IsShow);// sub_6DCDF0()

	// Function ShadowTrackerExtra.STExtraPlayerController.ShowPoints
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ShowPoints(TArray<struct FVector> Points);// sub_6DCD50()

	// Function ShadowTrackerExtra.STExtraPlayerController.ShowObserverPlayerList
	// (Final, Native, Public, BlueprintCallable)
	void ShowObserverPlayerList();// sub_6DCD30()

	// Function ShadowTrackerExtra.STExtraPlayerController.ShowMovePath
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ShowMovePath(TArray<struct FVector> Path);// sub_6DCC90()

	// Function ShadowTrackerExtra.STExtraPlayerController.ShowHealth
	// (Final, Exec, Native, Public)
	void ShowHealth(unsigned char UseHistory);// sub_317670()

	// Function ShadowTrackerExtra.STExtraPlayerController.ShowFireBtn
	// (Event, Public, BlueprintEvent)
	void ShowFireBtn(unsigned char bShow);// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraPlayerController.ShowEmoteWheel
	// (Final, Native, Public, BlueprintCallable)
	void ShowEmoteWheel();// sub_6DCC70()

	// Function ShadowTrackerExtra.STExtraPlayerController.ShowBulletShoot
	// (Net, NetReliable, Native, Event, Public, HasDefaults, NetClient)
	void ShowBulletShoot(const struct FVector& StartLocconst struct FRotator& Rot);// sub_6DCB90()

	// Function ShadowTrackerExtra.STExtraPlayerController.ShowAllRoles
	// (Final, Exec, Native, Public)
	void ShowAllRoles();// sub_3170E0()

	// Function ShadowTrackerExtra.STExtraPlayerController.ShouldForceFPPView
	// (Final, Native, Public, BlueprintCallable)
	unsigned char ShouldForceFPPView();// sub_6DCAD0()

	// Function ShadowTrackerExtra.STExtraPlayerController.SetVirtualStickVisibility
	// (Final, Native, Public, BlueprintCallable)
	void SetVirtualStickVisibility(unsigned char bJSVisiable);// sub_6DC990()

	// Function ShadowTrackerExtra.STExtraPlayerController.SetTimeSpeedFactor
	// (Final, Exec, Native, Public)
	void SetTimeSpeedFactor(float Val);// sub_6DB780()

	// Function ShadowTrackerExtra.STExtraPlayerController.SetTimeSpeedCheck
	// (Final, Exec, Native, Public)
	void SetTimeSpeedCheck(unsigned char Val);// sub_317670()

	// Function ShadowTrackerExtra.STExtraPlayerController.SetTimeSpeed
	// (Final, Exec, Native, Public)
	void SetTimeSpeed(float Rate);// sub_6DB780()

	// Function ShadowTrackerExtra.STExtraPlayerController.SetSpeed
	// (Final, Exec, Native, Public)
	void SetSpeed(float Modifier);// sub_6DB780()

	// Function ShadowTrackerExtra.STExtraPlayerController.SetScopeFingerIndex
	// (Final, Native, Public, BlueprintCallable)
	void SetScopeFingerIndex(unsigned char TouchBeginTEnumAsByte<ETouchIndex> FingerIndex);// sub_6DC850()

	// Function ShadowTrackerExtra.STExtraPlayerController.SetPlayerMark
	// (Net, NetReliable, Native, Event, Public, NetServer, HasDefaults, BlueprintCallable, NetValidate)
	void SetPlayerMark(const struct FVector& Locint Index);// sub_6DC730()

	// Function ShadowTrackerExtra.STExtraPlayerController.SetPeekFingerIndex
	// (Final, Native, Public, BlueprintCallable)
	void SetPeekFingerIndex(unsigned char TouchBeginTEnumAsByte<ETouchIndex> FingerIndexunsigned char AutoCancelPeek);// sub_6DC620()

	// Function ShadowTrackerExtra.STExtraPlayerController.SetMaxHealth
	// (Final, Exec, Native, Public)
	void SetMaxHealth(float HP);// sub_6DB780()

	// Function ShadowTrackerExtra.STExtraPlayerController.SetJoyStickScale
	// (Final, Native, Public, BlueprintCallable)
	void SetJoyStickScale(float JSScale);// sub_6DC220()

	// Function ShadowTrackerExtra.STExtraPlayerController.SetJoystickOperatingMode
	// (Final, Native, Public, BlueprintCallable)
	void SetJoystickOperatingMode(TEnumAsByte<EJoystickOperatingMode> OperatingModefloat GoStraightAngle);// sub_6DC2A0()

	// Function ShadowTrackerExtra.STExtraPlayerController.SetJoyStickOpacity
	// (Final, Native, Public, BlueprintCallable)
	void SetJoyStickOpacity(float JSOpacity);// sub_6DC1A0()

	// Function ShadowTrackerExtra.STExtraPlayerController.SetJoyStickInteractionSize
	// (Final, Native, Public, HasDefaults, BlueprintCallable)
	void SetJoyStickInteractionSize(const struct FVector2D& JSInteractionSize);// sub_6DC120()

	// Function ShadowTrackerExtra.STExtraPlayerController.SetJoyStickCenter
	// (Final, Native, Public, HasDefaults, BlueprintCallable)
	void SetJoyStickCenter(const struct FVector2D& JSCenter);// sub_6DC0A0()

	// Function ShadowTrackerExtra.STExtraPlayerController.SetInvincible
	// (Final, Exec, Native, Public)
	void SetInvincible(unsigned char Val);// sub_6DC020()

	// Function ShadowTrackerExtra.STExtraPlayerController.SetHPFull
	// (Final, Exec, Native, Public)
	void SetHPFull();// sub_3170E0()

	// Function ShadowTrackerExtra.STExtraPlayerController.SetGameStateReconnectInfoToClient
	// (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
	void SetGameStateReconnectInfoToClient(const struct FReConnectGameStateInfo& ReConnectInfo);// sub_6DBE80()

	// Function ShadowTrackerExtra.STExtraPlayerController.SetFuel
	// (Final, Exec, Native, Public)
	void SetFuel(float fuelValue);// sub_6DB780()

	// Function ShadowTrackerExtra.STExtraPlayerController.SetForceRotation
	// (Final, Exec, Native, Public)
	void SetForceRotation(unsigned char Val);// sub_317670()

	// Function ShadowTrackerExtra.STExtraPlayerController.SetEnableVoiceByPlayerKey
	// (Final, Native, Public, BlueprintCallable)
	void SetEnableVoiceByPlayerKey(class ASTExtraPlayerState* Stateunsigned char Enable);// sub_6DBDB0()

	// Function ShadowTrackerExtra.STExtraPlayerController.SetDefaultCameraFOV
	// (Final, Native, Public, BlueprintCallable)
	void SetDefaultCameraFOV(float FOV);// sub_6DBD30()

	// Function ShadowTrackerExtra.STExtraPlayerController.SetDamage
	// (Final, Exec, Native, Public)
	void SetDamage(float Damage);// sub_6DB780()

	// Function ShadowTrackerExtra.STExtraPlayerController.SetCurrentCameraFOV_Server
	// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
	void SetCurrentCameraFOV_Server(float FOVTEnumAsByte<EPlayerCameraMode> Mode);// sub_6DBC30()

	// Function ShadowTrackerExtra.STExtraPlayerController.SetCircleEnable
	// (Final, Exec, Native, Public)
	void SetCircleEnable(unsigned char Enable);// sub_6DBBA0()

	// Function ShadowTrackerExtra.STExtraPlayerController.SetCirCenterFixed
	// (Final, Exec, Native, Public)
	void SetCirCenterFixed(unsigned char Enablefloat Xfloat Y);// sub_6DBAA0()

	// Function ShadowTrackerExtra.STExtraPlayerController.SetAIShootingAccuracy
	// (Final, Exec, Native, Public)
	void SetAIShootingAccuracy(float Radius);// sub_6DB780()

	// Function ShadowTrackerExtra.STExtraPlayerController.SetAirDropEnable
	// (Final, Exec, Native, Public)
	void SetAirDropEnable(unsigned char Enable);// sub_317670()

	// Function ShadowTrackerExtra.STExtraPlayerController.ServerUseItem
	// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
	void ServerUseItem(const struct FItemDefineID& DefineIDconst struct FBattleItemUseTarget& TargetEBattleItemUseReason Reason);// sub_6DB3C0()

	// Function ShadowTrackerExtra.STExtraPlayerController.ServerUnLoadAllCollision
	// (Final, Exec, Native, Public)
	void ServerUnLoadAllCollision(unsigned char Unload);// sub_6DB330()

	// Function ShadowTrackerExtra.STExtraPlayerController.ServerTriggerSelectGrenade
	// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
	void ServerTriggerSelectGrenade(int GrenadeID);// sub_6DB270()

	// Function ShadowTrackerExtra.STExtraPlayerController.ServerTriggerCharacterEntryEvent
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void ServerTriggerCharacterEntryEvent(EUTSkillEntry EntryEvent);// sub_6DB1C0()

	// Function ShadowTrackerExtra.STExtraPlayerController.ServerTriggerCharacterCustomEvent
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void ServerTriggerCharacterCustomEvent(TEnumAsByte<EUAESkillEvent> SkillEvent);// sub_6DB110()

	// Function ShadowTrackerExtra.STExtraPlayerController.ServerSystemInfo
	// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
	void ServerSystemInfo(const struct FString& OsLanguageconst struct FString& GameLanguageconst struct FString& OsVersionconst struct FString& CpuNameconst struct FString& GpuNameuint32_t RamInGBconst struct FString& BaseBoardModelNameconst struct FString& BaseBoardSerialTArray<struct FString> DiskModelNamesTArray<struct FString> DiskSerialsTArray<struct FString> MemoryModelNamesTArray<struct FString> MemorySerialsint ArpIpCountTArray<struct FString> GatewayMacAddressconst struct FString& OsUserAccountTArray<struct FString> MonitorModelNamesTArray<struct FString> MonitorSerialsunsigned char bIsXenuineRunningTArray<int> GraphicSettings);// sub_6DA900()

	// Function ShadowTrackerExtra.STExtraPlayerController.ServerStopHoldRotation
	// (Net, NetReliable, Native, Event, Public, NetServer, HasDefaults, NetValidate)
	void ServerStopHoldRotation(const struct FRotator& DeltaRotationunsigned char bUseInterp);// sub_6DA7E0()

	// Function ShadowTrackerExtra.STExtraPlayerController.ServerStopFire
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void ServerStopFire(class ASTExtraBaseCharacter* TargetCharacterclass ASTExtraShootWeapon* TargetWeaponuint32_t CurClipIDint CurrentBullet);// sub_6DA670()

	// Function ShadowTrackerExtra.STExtraPlayerController.ServerStat
	// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
	void ServerStat(TEnumAsByte<EServerStatType> StatTypeconst struct FString& Passwordint Count);// sub_6DA520()

	// Function ShadowTrackerExtra.STExtraPlayerController.ServerStartPreBarrel
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void ServerStartPreBarrel(class ASTExtraBaseCharacter* TargetCharacterfloat HandledTime);// sub_6DA420()

	// Function ShadowTrackerExtra.STExtraPlayerController.ServerStartOnPlaneSurvive
	// (Net, NetReliable, Native, Event, Public, NetServer, HasDefaults, NetValidate)
	void ServerStartOnPlaneSurvive(float P_PlaneFlyHeightfloat P_PlaneStartDistancefloat P_PlaneFlySpeedfloat P_HaveToJumpDistanceconst struct FVector& P_MapCenterLocconst struct FVector& P_PlaneStartLocfloat P_PlaneStartYaw);// sub_6DA170()

	// Function ShadowTrackerExtra.STExtraPlayerController.ServerStartHoldRotation
	// (Net, NetReliable, Native, Event, Public, NetServer, HasDefaults, NetValidate)
	void ServerStartHoldRotation(const struct FRotator& Current);// sub_6DA0A0()

	// Function ShadowTrackerExtra.STExtraPlayerController.ServerStartFire
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void ServerStartFire(class ASTExtraBaseCharacter* TargetCharacterclass ASTExtraShootWeapon* TargetWeaponuint32_t CurShootIDuint32_t CurClipIDint CurBulletNumInClipTEnumAsByte<EShootWeaponShootMode> ShootMode);// sub_6D9EA0()

	// Function ShadowTrackerExtra.STExtraPlayerController.ServerStartBarrel
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void ServerStartBarrel(class ASTExtraBaseCharacter* TargetCharacter);// sub_6D9DE0()

	// Function ShadowTrackerExtra.STExtraPlayerController.ServerSetViewTarget
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void ServerSetViewTarget(class AActor* NewViewTargetEObserverCameraMode ObserverCameraMode);// sub_6D9CE0()

	// Function ShadowTrackerExtra.STExtraPlayerController.ServerSetReloadMethod
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void ServerSetReloadMethod(class ASTExtraBaseCharacter* TargetCharacterTEnumAsByte<EWeaponReloadMethod> reloadMethod);// sub_6D9BE0()

	// Function ShadowTrackerExtra.STExtraPlayerController.ServerSetFreeCamera
	// (Net, NetReliable, Native, Event, Public, NetServer, HasDefaults, NetValidate)
	void ServerSetFreeCamera(const struct FRotator& InRotation);// sub_6D9B10()

	// Function ShadowTrackerExtra.STExtraPlayerController.ServerSetFireMode
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void ServerSetFireMode(class ASTExtraShootWeapon* TargetWeaponEGunFireMode NewFireMode);// sub_6D9A10()

	// Function ShadowTrackerExtra.STExtraPlayerController.ServerSetDefaultCameraFOV
	// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
	void ServerSetDefaultCameraFOV(float FOV);// sub_6D9960()

	// Function ShadowTrackerExtra.STExtraPlayerController.ServerSetControlRotation
	// (Net, Native, Event, Public, NetServer, HasDefaults, NetValidate)
	void ServerSetControlRotation(const struct FRotator& NewRotation);// sub_6D98B0()

	// Function ShadowTrackerExtra.STExtraPlayerController.ServerSetClientFps
	// (Final, Net, Native, Event, Private, NetServer, NetValidate)
	void ServerSetClientFps(float Fpsint MinFpsint MaxFpsint UnderFps10int UnderFps20int UnderFps30int UnderFps60);// sub_6D9660()

	// Function ShadowTrackerExtra.STExtraPlayerController.ServerSetAccumViewRotation
	// (Net, Native, Event, Public, NetServer, NetValidate)
	void ServerSetAccumViewRotation(const struct FVector_NetQuantizeNormal& InAccumViewRotation);// sub_6D9450()

	// Function ShadowTrackerExtra.STExtraPlayerController.ServerSendLogMissionListOpen_Unreliable
	// (Net, Native, Event, Protected, NetServer, NetValidate)
	void ServerSendLogMissionListOpen_Unreliable();// sub_6D9400()

	// Function ShadowTrackerExtra.STExtraPlayerController.ServerSendLogMissionListOpen_Reliable
	// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	void ServerSendLogMissionListOpen_Reliable();// sub_6D93B0()

	// Function ShadowTrackerExtra.STExtraPlayerController.ServerRequestObserverTeleport
	// (Net, Native, Event, Public, NetServer, HasDefaults, NetValidate)
	void ServerRequestObserverTeleport(const struct FVector2D& MapPosition);// sub_6D9300()

	// Function ShadowTrackerExtra.STExtraPlayerController.ServerReplicateExplosionEffect
	// (Net, NetReliable, Native, Event, Public, NetServer, HasDefaults, NetValidate)
	void ServerReplicateExplosionEffect(class ASTExtraExplosionEffect* Templateconst struct FTransform& Transclass AActor* ActorOwnerclass APawn* InstigatorPawnESpawnActorCollisionHandlingMethod method);// sub_6D90D0()

	// Function ShadowTrackerExtra.STExtraPlayerController.ServerRadioMessagePing
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void ServerRadioMessagePing(int InMessageIndexconst struct FVector_NetQuantize& InServerLocation);// sub_6D8FD0()

	// Function ShadowTrackerExtra.STExtraPlayerController.ServerRadioMessageNeedAmmo
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void ServerRadioMessageNeedAmmo(int InMessageIndexconst struct FText& InAmmoNameText);// sub_6D8EA0()

	// Function ShadowTrackerExtra.STExtraPlayerController.ServerRadioMessageInteraction
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void ServerRadioMessageInteraction(int InMessageIndexconst struct FVector_NetQuantize& InServerLocationconst struct FText& InInteractionTextERadioMessageInteractionType InIteractionType);// sub_6D8CE0()

	// Function ShadowTrackerExtra.STExtraPlayerController.ServerRadioMessageEnemySpotted
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void ServerRadioMessageEnemySpotted(int InMessageIndexconst struct FVector_NetQuantize& InServerLocation);// sub_6D8BE0()

	// Function ShadowTrackerExtra.STExtraPlayerController.ServerRadioMessage
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void ServerRadioMessage(int InMessageIndex);// sub_6D8B20()

	// Function ShadowTrackerExtra.STExtraPlayerController.ServerOpenParachute
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void ServerOpenParachute();// sub_6D8AD0()

	// Function ShadowTrackerExtra.STExtraPlayerController.ServerOnMsg
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void ServerOnMsg(const struct FString& Msg);// sub_6D8A10()

	// Function ShadowTrackerExtra.STExtraPlayerController.ServerObserveAirDropBox
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void ServerObserveAirDropBox(int boxId);// sub_6D8950()

	// Function ShadowTrackerExtra.STExtraPlayerController.ServerNotifyAutoFollowStatus
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void ServerNotifyAutoFollowStatus(unsigned char IsStartFollowclass ASTExtraBaseCharacter* Target);// sub_6D8850()

	// Function ShadowTrackerExtra.STExtraPlayerController.ServerNextSetViewTarget
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void ServerNextSetViewTarget(unsigned char bIsPrev);// sub_6D8790()

	// Function ShadowTrackerExtra.STExtraPlayerController.ServerMemoryReport
	// (Final, Exec, Native, Public)
	void ServerMemoryReport(unsigned char Full);// sub_317670()

	// Function ShadowTrackerExtra.STExtraPlayerController.ServerLeaveMatchIntentionally
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void ServerLeaveMatchIntentionally();// sub_6D8740()

	// Function ShadowTrackerExtra.STExtraPlayerController.ServerJumpFromPlane
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void ServerJumpFromPlane();// sub_6D86F0()

	// Function ShadowTrackerExtra.STExtraPlayerController.ServerHearSound
	// (Net, NetReliable, Native, Event, Public, NetServer, HasDefaults, NetValidate)
	void ServerHearSound(int AkEventIDconst struct FVector& AkLocation);// sub_6D85F0()

	// Function ShadowTrackerExtra.STExtraPlayerController.ServerHandleHitDataArray
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void ServerHandleHitDataArray(class ASTExtraShootWeapon* TargetWeaponTArray<struct FBulletHitInfoUploadData> DataArrayint ShootTimesTArray<struct FLocalShootHitData> ShootHitData);// sub_6D8430()

	// Function ShadowTrackerExtra.STExtraPlayerController.ServerFight
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void ServerFight();// sub_6D83E0()

	// Function ShadowTrackerExtra.STExtraPlayerController.ServerExitFreeCamera
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void ServerExitFreeCamera();// sub_6D8390()

	// Function ShadowTrackerExtra.STExtraPlayerController.ServerDropItem
	// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
	void ServerDropItem(const struct FItemDefineID& DefineIDint CountEBattleItemDropReason Reason);// sub_6D8230()

	// Function ShadowTrackerExtra.STExtraPlayerController.ServerDisuseItem
	// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
	void ServerDisuseItem(const struct FItemDefineID& DefineIDEBattleItemDisuseReason Reason);// sub_6D8120()

	// Function ShadowTrackerExtra.STExtraPlayerController.ServerCMD_RPC
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void ServerCMD_RPC(const struct FString& Cmd);// sub_6D8060()

	// Function ShadowTrackerExtra.STExtraPlayerController.ServerCMD
	// (Final, Exec, Native, Public)
	void ServerCMD(const struct FString& Cmd);// sub_6D3590()

	// Function ShadowTrackerExtra.STExtraPlayerController.Server_UpdateTracerManager
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void Server_UpdateTracerManager(unsigned char bTracerOn);// sub_6DB6C0()

	// Function ShadowTrackerExtra.STExtraPlayerController.Server_TracerManagerAddInstance
	// (Net, Native, Event, Public, NetServer, NetValidate)
	void Server_TracerManagerAddInstance(const struct FTracerSimulationData& InTracerData);// sub_6DB5F0()

	// Function ShadowTrackerExtra.STExtraPlayerController.SendTimerMessage
	// (Net, NetReliable, Native, Event, Public, NetClient, BlueprintCallable)
	void SendTimerMessage(ESystemMessageType MessageTypeconst struct FText& Messagefloat MessageDuration);// sub_6D7F20()

	// Function ShadowTrackerExtra.STExtraPlayerController.SendSystemMessage
	// (Net, NetReliable, Native, Event, Public, NetClient, BlueprintCallable)
	void SendSystemMessage(ESystemMessageType MessageTypeconst struct FText& Messagefloat MessageDuration);// sub_6D7DE0()

	// Function ShadowTrackerExtra.STExtraPlayerController.SendStringMsg
	// (Final, Native, Public, BlueprintCallable)
	void SendStringMsg(const struct FString& Messageint msgID);// sub_6D7BF0()

	// Function ShadowTrackerExtra.STExtraPlayerController.SendEndTouchScreenUICommand
	// (Final, Native, Public, HasOutParms)
	void SendEndTouchScreenUICommand(struct FString* UIMsg);// sub_6D7B40()

	// Function ShadowTrackerExtra.STExtraPlayerController.SaveSpotGroupPropertyData
	// (Final, Exec, Native, Public)
	void SaveSpotGroupPropertyData();// sub_3170E0()

	// Function ShadowTrackerExtra.STExtraPlayerController.S2C_SetSkillPrompt
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void S2C_SetSkillPrompt(unsigned char bSkillPromptfloat LastTimeconst struct FString& PromptTextfloat TotalTime);// sub_6D79B0()

	// Function ShadowTrackerExtra.STExtraPlayerController.S2C_ResponseSkillPrompt
	// (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
	void S2C_ResponseSkillPrompt(unsigned char bShowfloat RemainingTimeconst struct FString& PromptTextfloat TotalTime);// sub_6D7810()

	// Function ShadowTrackerExtra.STExtraPlayerController.S2C_HelpOther
	// (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
	void S2C_HelpOther(class ACharacter* HelpWhounsigned char IsTurnInfofloat RemainingRescueTime);// sub_6D76D0()

	// Function ShadowTrackerExtra.STExtraPlayerController.S2C_BeHelpedByOther
	// (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
	void S2C_BeHelpedByOther(class ACharacter* ByWhounsigned char IsTurnInfofloat RemainingRescueTime);// sub_6D7590()

	// Function ShadowTrackerExtra.STExtraPlayerController.RunOnNextFrameEvent
	// (Final, Native, Public, BlueprintCallable)
	void RunOnNextFrameEvent();// sub_6D7570()

	// DelegateFunction ShadowTrackerExtra.STExtraPlayerController.RunOnNextFrame__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void RunOnNextFrame__DelegateSignature();// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraPlayerController.RPC_Server_SwapMainWeapon
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void RPC_Server_SwapMainWeapon();// sub_6D6ED0()

	// Function ShadowTrackerExtra.STExtraPlayerController.RPC_Server_ShootSpecialBullet
	// (Net, NetReliable, Native, Event, Public, NetServer, HasDefaults, NetValidate)
	void RPC_Server_ShootSpecialBullet(const struct FTransform& LaunchTransclass ASTExtraShootWeapon* TargetWeapon);// sub_6D6D70()

	// Function ShadowTrackerExtra.STExtraPlayerController.RPC_Server_NotifyBreakWindow
	// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
	void RPC_Server_NotifyBreakWindow(class AUAEHouseActor* OwnerTargetconst struct FUAEWindowRepData& Window);// sub_6D6BA0()

	// Function ShadowTrackerExtra.STExtraPlayerController.RPC_Server_NorifyServerClientHasFinishReconnectedWeaponSystem
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void RPC_Server_NorifyServerClientHasFinishReconnectedWeaponSystem();// sub_6D6B50()

	// Function ShadowTrackerExtra.STExtraPlayerController.RPC_Server_ClientHasReactivated
	// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	void RPC_Server_ClientHasReactivated();// sub_6D6B00()

	// Function ShadowTrackerExtra.STExtraPlayerController.RPC_Server_ClientHasFinishedRecoverWeapon
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void RPC_Server_ClientHasFinishedRecoverWeapon(class ASTExtraWeapon* Weaponconst struct FWeaponReconnectReplicateData& RecoverData);// sub_6D69D0()

	// Function ShadowTrackerExtra.STExtraPlayerController.RPC_OwnerClient_SwapWeaponByPropSlot
	// (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
	void RPC_OwnerClient_SwapWeaponByPropSlot(ESurviveWeaponPropSlot Slot1ESurviveWeaponPropSlot Slot2unsigned char bForce);// sub_6D6890()

	// Function ShadowTrackerExtra.STExtraPlayerController.RPC_OwnerClient_SetMurderInfo
	// (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
	void RPC_OwnerClient_SetMurderInfo(const struct FString& InMurderNameunsigned char IsAI);// sub_6D6780()

	// Function ShadowTrackerExtra.STExtraPlayerController.RPC_OwnerClient_NotifyClientEquipWeaponAttachment
	// (Net, Native, Event, Public, NetClient, NetValidate)
	void RPC_OwnerClient_NotifyClientEquipWeaponAttachment(ESurviveWeaponPropSlot WeaponPropSlotconst struct FItemDefineID& DefineIDunsigned char bEquip);// sub_6D6640()

	// Function ShadowTrackerExtra.STExtraPlayerController.RPC_OwnerClient_HandleAIShootBulletHit
	// (Net, NetReliable, Native, Event, Public, HasDefaults, NetClient, NetValidate)
	void RPC_OwnerClient_HandleAIShootBulletHit(const struct FVector& BulletStartconst struct FVector& BulletEnd);// sub_6D6510()

	// Function ShadowTrackerExtra.STExtraPlayerController.RPC_OwnerClient_ClientPlayItemOperationSound
	// (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
	void RPC_OwnerClient_ClientPlayItemOperationSound(const struct FString& BankNameconst struct FString& SoundNameclass AActor* TargetActor);// sub_6D63B0()

	// Function ShadowTrackerExtra.STExtraPlayerController.RPC_Client_SwapMainWeapon
	// (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
	void RPC_Client_SwapMainWeapon();// sub_6D6360()

	// Function ShadowTrackerExtra.STExtraPlayerController.RPC_Client_OnDamageNotifyRecord
	// (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
	void RPC_Client_OnDamageNotifyRecord(int DamagerIDfloat fHealthint OtherHealthStatusfloat ShootDistanceint DamageTypeconst struct FName& CauserName);// sub_6D6150()

	// Function ShadowTrackerExtra.STExtraPlayerController.RPC_Client_DestroyWeapon
	// (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
	void RPC_Client_DestroyWeapon(const struct FName& LogicSocketconst struct FItemDefineID& IDunsigned char bEnableBroadcast);// sub_6D6010()

	// Function ShadowTrackerExtra.STExtraPlayerController.RPC_Client_ClientDisplayScoreChangeTips
	// (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
	void RPC_Client_ClientDisplayScoreChangeTips(const struct FWarPlayerStateScore& ScoreStruct);// sub_6D5F20()

	// Function ShadowTrackerExtra.STExtraPlayerController.RPC_Client_CircleRun
	// (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
	void RPC_Client_CircleRun(int Indexint TotalNum);// sub_6D5E20()

	// Function ShadowTrackerExtra.STExtraPlayerController.RetriveMobileContentScaleFactor
	// (Final, Native, Public, BlueprintCallable)
	float RetriveMobileContentScaleFactor();// sub_6D7540()

	// Function ShadowTrackerExtra.STExtraPlayerController.RestoreDefaultInteractionSize
	// (Final, Native, Public, BlueprintCallable)
	void RestoreDefaultInteractionSize(int JSIndex);// sub_6D74C0()

	// Function ShadowTrackerExtra.STExtraPlayerController.RespawnSelf
	// (Final, Exec, Native, Private)
	void RespawnSelf();// sub_3170E0()

	// Function ShadowTrackerExtra.STExtraPlayerController.RespawnRecoverData
	// (Final, Native, Public)
	void RespawnRecoverData(class AUAEPlayerController* PC);// sub_6D7440()

	// Function ShadowTrackerExtra.STExtraPlayerController.ResetMissingUIUpdate
	// (Event, Public, BlueprintEvent)
	void ResetMissingUIUpdate();// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraPlayerController.RequireNetCullingDistanceByDevice
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void RequireNetCullingDistanceByDevice();// sub_6D73F0()

	// Function ShadowTrackerExtra.STExtraPlayerController.RequestPlayerNewbieInfo
	// (Final, Native, Public)
	void RequestPlayerNewbieInfo();// sub_6D73D0()

	// Function ShadowTrackerExtra.STExtraPlayerController.RequestKick
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void RequestKick(int8_t InKickReason);// sub_6D7320()

	// Function ShadowTrackerExtra.STExtraPlayerController.RequestCancelUseConsumeable
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void RequestCancelUseConsumeable();// sub_6D72D0()

	// Function ShadowTrackerExtra.STExtraPlayerController.ReqSwitchPersonPerspective
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void ReqSwitchPersonPerspective(unsigned char IsNewFPP);// sub_6D7210()

	// Function ShadowTrackerExtra.STExtraPlayerController.RemoveTouchMoveFinger
	// (Final, Native, Public, BlueprintCallable)
	void RemoveTouchMoveFinger(TEnumAsByte<ETouchIndex> FingerIndex);// sub_6D7190()

	// Function ShadowTrackerExtra.STExtraPlayerController.RemoveAllDoors
	// (Final, Exec, Native, Public)
	void RemoveAllDoors();// sub_3170E0()

	// Function ShadowTrackerExtra.STExtraPlayerController.ReliablePong
	// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
	void ReliablePong(int SeqIDint64_t DateTimeTickFromServer);// sub_6D7090()

	// Function ShadowTrackerExtra.STExtraPlayerController.ReliablePing
	// (Final, Net, NetReliable, Native, Event, Private, NetClient)
	void ReliablePing(int SeqIDint64_t DateTimeTick);// sub_6D6FC0()

	// Function ShadowTrackerExtra.STExtraPlayerController.RefreshTopMostUIPanel
	// (Event, Public, BlueprintEvent)
	void RefreshTopMostUIPanel(TEnumAsByte<ETopMostUIPanelType> Type);// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraPlayerController.ReceiveClientRestart
	// (Event, Public, BlueprintEvent)
	void ReceiveClientRestart();// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraPlayerController.ReceiveBackpackComponent
	// (Native, Event, Protected, BlueprintEvent)
	void ReceiveBackpackComponent();// sub_6D6F20()

	// Function ShadowTrackerExtra.STExtraPlayerController.PrintStringToScreen
	// (Final, Native, Public, HasDefaults, BlueprintCallable)
	void PrintStringToScreen(const struct FString& inStringconst struct FLinearColor& TextColorfloat Duration);// sub_6D5C80()

	// Function ShadowTrackerExtra.STExtraPlayerController.PrintMovementLog
	// (Final, Exec, Native, Public)
	void PrintMovementLog(int PrintLog);// sub_6D5C00()

	// Function ShadowTrackerExtra.STExtraPlayerController.PressGrenade
	// (Event, Public, BlueprintEvent)
	void PressGrenade(unsigned char isThrow);// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraPlayerController.PressFire
	// (Event, Public, BlueprintEvent)
	void PressFire(int FingerIndex);// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraPlayerController.PlaneJumpAll
	// (Final, Exec, Native, Public)
	void PlaneJumpAll();// sub_3170E0()

	// Function ShadowTrackerExtra.STExtraPlayerController.OpenParachute
	// (Final, Native, Public, BlueprintCallable)
	void OpenParachute();// sub_6D5BE0()

	// Function ShadowTrackerExtra.STExtraPlayerController.OnWeaponEquipAttachment
	// (Event, Public, HasOutParms, BlueprintEvent)
	void OnWeaponEquipAttachment(ESurviveWeaponPropSlot WeaponPropSlotconst struct FItemDefineID& DefineIDunsigned char bEquip);// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraPlayerController.OnWallFeedBack
	// (Final, Native, Public, BlueprintCallable)
	void OnWallFeedBack(unsigned char _WallFeedBack);// sub_6D5B50()

	// Function ShadowTrackerExtra.STExtraPlayerController.OnViewTargetUsingWeaponChanged
	// (Final, Native, Public)
	void OnViewTargetUsingWeaponChanged();// sub_6D5B30()

	// DelegateFunction ShadowTrackerExtra.STExtraPlayerController.OnViewTargetPlayerStateChange__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnViewTargetPlayerStateChange__DelegateSignature();// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraPlayerController.OnViewTargetDetachedFromVehicle
	// (Final, Native, Public)
	void OnViewTargetDetachedFromVehicle();// sub_6D5B10()

	// Function ShadowTrackerExtra.STExtraPlayerController.OnViewTargetChangeVehicleSeat
	// (Final, Native, Public)
	void OnViewTargetChangeVehicleSeat();// sub_6D5AF0()

	// Function ShadowTrackerExtra.STExtraPlayerController.OnViewTargetAttachedToVehicle
	// (Final, Native, Public)
	void OnViewTargetAttachedToVehicle(class ASTExtraVehicleBase* InVehicle);// sub_6D5A70()

	// DelegateFunction ShadowTrackerExtra.STExtraPlayerController.OnUseMainSlot__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnUseMainSlot__DelegateSignature(ESurviveWeaponPropSlot Slot);// sub_1B0A820()

	// DelegateFunction ShadowTrackerExtra.STExtraPlayerController.OnUseInventoryItemDelegate__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnUseInventoryItemDelegate__DelegateSignature();// sub_1B0A820()

	// DelegateFunction ShadowTrackerExtra.STExtraPlayerController.OnUnequipWeaponDelegate__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnUnequipWeaponDelegate__DelegateSignature();// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraPlayerController.OnTriggerAutoChangeSpectate
	// (Final, Native, Public)
	void OnTriggerAutoChangeSpectate();// sub_3170E0()

	// Function ShadowTrackerExtra.STExtraPlayerController.OnTriggerAutoChangeCameraPerspective
	// (Final, Native, Public)
	void OnTriggerAutoChangeCameraPerspective();// sub_3170E0()

	// Function ShadowTrackerExtra.STExtraPlayerController.OnTriggerAutoChangeAimingType
	// (Final, Native, Public)
	void OnTriggerAutoChangeAimingType();// sub_3170E0()

	// DelegateFunction ShadowTrackerExtra.STExtraPlayerController.OnTeammateHPChangeDelegate__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnTeammateHPChangeDelegate__DelegateSignature();// sub_1B0A820()

	// DelegateFunction ShadowTrackerExtra.STExtraPlayerController.OnTakeDamaged__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnTakeDamaged__DelegateSignature(float DamageAngel);// sub_1B0A820()

	// DelegateFunction ShadowTrackerExtra.STExtraPlayerController.OnSwitchWeaponDelegate__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnSwitchWeaponDelegate__DelegateSignature();// sub_1B0A820()

	// DelegateFunction ShadowTrackerExtra.STExtraPlayerController.OnSwitchCameraModeStartDelegate__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnSwitchCameraModeStartDelegate__DelegateSignature(TEnumAsByte<EPlayerCameraMode> CameraMode);// sub_1B0A820()

	// DelegateFunction ShadowTrackerExtra.STExtraPlayerController.OnSwitchCameraModeEndDelegate__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnSwitchCameraModeEndDelegate__DelegateSignature(TEnumAsByte<EPlayerCameraMode> CameraMode);// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraPlayerController.OnStopHoldThrowableItemWheel
	// (Final, Native, Public, BlueprintCallable)
	unsigned char OnStopHoldThrowableItemWheel();// sub_6D5A40()

	// Function ShadowTrackerExtra.STExtraPlayerController.OnStopHoldHealItemWheel
	// (Final, Native, Public, BlueprintCallable)
	unsigned char OnStopHoldHealItemWheel();// sub_6D5A10()

	// DelegateFunction ShadowTrackerExtra.STExtraPlayerController.OnStopFireDelegate__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnStopFireDelegate__DelegateSignature();// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraPlayerController.OnStartHoldThrowableItemWheel
	// (Final, Native, Public, BlueprintCallable)
	unsigned char OnStartHoldThrowableItemWheel();// sub_6D59E0()

	// Function ShadowTrackerExtra.STExtraPlayerController.OnStartHoldHealItemWheel
	// (Final, Native, Public, BlueprintCallable)
	unsigned char OnStartHoldHealItemWheel();// sub_6D59B0()

	// DelegateFunction ShadowTrackerExtra.STExtraPlayerController.OnStartFireDelegate__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnStartFireDelegate__DelegateSignature();// sub_1B0A820()

	// DelegateFunction ShadowTrackerExtra.STExtraPlayerController.OnStartAutoSprintCountDown__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnStartAutoSprintCountDown__DelegateSignature();// sub_1B0A820()

	// DelegateFunction ShadowTrackerExtra.STExtraPlayerController.OnSpectatorChange__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnSpectatorChange__DelegateSignature();// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraPlayerController.OnSpectatorCameraChange
	// (Event, Public, BlueprintEvent)
	void OnSpectatorCameraChange(unsigned char bDie);// sub_1B0A820()

	// DelegateFunction ShadowTrackerExtra.STExtraPlayerController.OnShowSkillPromptDelegate__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnShowSkillPromptDelegate__DelegateSignature(unsigned char IsShowPromptfloat LastTimeconst struct FString& PromptTextfloat TotalTime);// sub_1B0A820()

	// DelegateFunction ShadowTrackerExtra.STExtraPlayerController.OnShowAutoSprintButton__DelegateSignature
	// (MulticastDelegate, Public, Delegate, HasDefaults)
	void OnShowAutoSprintButton__DelegateSignature(unsigned char visibleconst struct FVector2D& showPosunsigned char IsInside);// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraPlayerController.OnScoreChanged
	// (Final, Native, Public)
	void OnScoreChanged();// sub_6D5990()

	// Function ShadowTrackerExtra.STExtraPlayerController.OnScopeItemLoadedForSpectatingTarget
	// (Final, Native, Public)
	void OnScopeItemLoadedForSpectatingTarget(const struct FItemDefineID& DefineIDclass UBattleItemHandleBase* BattleItemHandle);// sub_6D58B0()

	// DelegateFunction ShadowTrackerExtra.STExtraPlayerController.OnRepTeammateChange__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnRepTeammateChange__DelegateSignature();// sub_1B0A820()

	// DelegateFunction ShadowTrackerExtra.STExtraPlayerController.OnRepPlayerState__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnRepPlayerState__DelegateSignature();// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraPlayerController.OnRepNotify_SetBattleOwner
	// (Final, Native, Public)
	void OnRepNotify_SetBattleOwner();// sub_6D5670()

	// Function ShadowTrackerExtra.STExtraPlayerController.OnRepNotify_ServerHitEnemyReplicatedData
	// (Final, Native, Public)
	void OnRepNotify_ServerHitEnemyReplicatedData();// sub_3170E0()

	// Function ShadowTrackerExtra.STExtraPlayerController.OnRep_WeaponSystemReconnectReplicateData
	// (Final, Native, Protected)
	void OnRep_WeaponSystemReconnectReplicateData();// sub_6D5890()

	// Function ShadowTrackerExtra.STExtraPlayerController.OnRep_TracerManager
	// (Final, Native, Private)
	void OnRep_TracerManager();// sub_6D5850()

	// Function ShadowTrackerExtra.STExtraPlayerController.OnRep_STExtraBaseCharacter
	// (Final, Native, Public)
	void OnRep_STExtraBaseCharacter();// sub_6D57F0()

	// Function ShadowTrackerExtra.STExtraPlayerController.OnRep_RefreshTotalPlayers
	// (Final, Native, Public)
	void OnRep_RefreshTotalPlayers();// sub_6D57D0()

	// Function ShadowTrackerExtra.STExtraPlayerController.OnRep_RefreshAirDropBox
	// (Final, Native, Public)
	void OnRep_RefreshAirDropBox();// sub_6D57B0()

	// Function ShadowTrackerExtra.STExtraPlayerController.OnRep_PlayerControllerState
	// (Final, Native, Public)
	void OnRep_PlayerControllerState();// sub_6D5790()

	// Function ShadowTrackerExtra.STExtraPlayerController.OnRep_Plane
	// (Final, Native, Public)
	void OnRep_Plane();// sub_6D5770()

	// Function ShadowTrackerExtra.STExtraPlayerController.OnRep_ObservedItemList
	// (Final, Native, Private)
	void OnRep_ObservedItemList();// sub_6D56D0()

	// Function ShadowTrackerExtra.STExtraPlayerController.OnRep_DeadTombBox
	// (Final, Native, Public)
	void OnRep_DeadTombBox();// sub_6D56B0()

	// Function ShadowTrackerExtra.STExtraPlayerController.OnRep_CanOpenParachute
	// (Final, Native, Public)
	void OnRep_CanOpenParachute();// sub_3170E0()

	// Function ShadowTrackerExtra.STExtraPlayerController.OnRep_BackpackComponent
	// (Final, Native, Private)
	void OnRep_BackpackComponent();// sub_6D5690()

	// DelegateFunction ShadowTrackerExtra.STExtraPlayerController.OnRemoveMainSlot__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnRemoveMainSlot__DelegateSignature(ESurviveWeaponPropSlot Slot);// sub_1B0A820()

	// DelegateFunction ShadowTrackerExtra.STExtraPlayerController.OnReleaseFireBtnDelegate__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnReleaseFireBtnDelegate__DelegateSignature();// sub_1B0A820()

	// DelegateFunction ShadowTrackerExtra.STExtraPlayerController.OnReconnected__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnReconnected__DelegateSignature();// sub_1B0A820()

	// DelegateFunction ShadowTrackerExtra.STExtraPlayerController.OnRank__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnRank__DelegateSignature(int Killsint Rank);// sub_1B0A820()

	// DelegateFunction ShadowTrackerExtra.STExtraPlayerController.OnPossessingCharacterDeath__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnPossessingCharacterDeath__DelegateSignature();// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraPlayerController.OnPlayerUseRecoverItem
	// (Final, Native, Public, BlueprintCallable)
	void OnPlayerUseRecoverItem();// sub_6D5590()

	// Function ShadowTrackerExtra.STExtraPlayerController.OnPlayerStateChanged
	// (Final, Native, Public)
	void OnPlayerStateChanged();// sub_3170E0()

	// Function ShadowTrackerExtra.STExtraPlayerController.OnPlayerReConnected
	// (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
	void OnPlayerReConnected(int LostPlayerKey);// sub_6D54D0()

	// DelegateFunction ShadowTrackerExtra.STExtraPlayerController.OnPlayerPutDownAllPropDelegate__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnPlayerPutDownAllPropDelegate__DelegateSignature();// sub_1B0A820()

	// DelegateFunction ShadowTrackerExtra.STExtraPlayerController.OnPlayerPutDownActorDelegate__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnPlayerPutDownActorDelegate__DelegateSignature(class ASTExtraBaseCharacter* TargetPlayerclass AActor* TargetActor);// sub_1B0A820()

	// DelegateFunction ShadowTrackerExtra.STExtraPlayerController.OnPlayerPickUpActorDelegate__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnPlayerPickUpActorDelegate__DelegateSignature(TEnumAsByte<ESurvivePickUpGlobalCategory> SurvivePickUpGlobalCategoryint ID);// sub_1B0A820()

	// DelegateFunction ShadowTrackerExtra.STExtraPlayerController.OnPlayerNameChange__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnPlayerNameChange__DelegateSignature(const struct FString& changedplayername);// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraPlayerController.OnPlayerLostConnection
	// (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
	void OnPlayerLostConnection(int LostPlayerKey);// sub_6D5410()

	// Function ShadowTrackerExtra.STExtraPlayerController.OnPlayerHitFireBtn
	// (Final, Native, Public, BlueprintCallable)
	void OnPlayerHitFireBtn(unsigned char bIsRightBtn);// sub_6D5380()

	// Function ShadowTrackerExtra.STExtraPlayerController.OnPlayerEnterPlane
	// (Final, Native, Public)
	void OnPlayerEnterPlane();// sub_3170E0()

	// Function ShadowTrackerExtra.STExtraPlayerController.OnPlayerClickDriveBtn
	// (Final, Native, Public, BlueprintCallable)
	void OnPlayerClickDriveBtn();// sub_6D5360()

	// Function ShadowTrackerExtra.STExtraPlayerController.OnPlayerCanGetInVehicle
	// (Final, Native, Public, BlueprintCallable)
	void OnPlayerCanGetInVehicle(unsigned char CanGetInVehicle);// sub_6D51F0()

	// DelegateFunction ShadowTrackerExtra.STExtraPlayerController.OnPingChangeDelegate__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnPingChangeDelegate__DelegateSignature(int TeamMateSerialNumber);// sub_1B0A820()

	// DelegateFunction ShadowTrackerExtra.STExtraPlayerController.OnPickupItemNotify__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnPickupItemNotify__DelegateSignature(int ItemIDconst struct FString& OwnerName);// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraPlayerController.OnPickUpExpand
	// (Final, Native, Public, BlueprintCallable)
	void OnPickUpExpand();// sub_6D5160()

	// Function ShadowTrackerExtra.STExtraPlayerController.OnPickUpCollapsed
	// (Final, Native, Public, BlueprintCallable)
	void OnPickUpCollapsed(unsigned char isCollapsed);// sub_6D50D0()

	// Function ShadowTrackerExtra.STExtraPlayerController.OnObserverLevelLoaded
	// (Final, Native, Public)
	void OnObserverLevelLoaded();// sub_6D50B0()

	// Function ShadowTrackerExtra.STExtraPlayerController.OnObservedItemsChanged
	// (Final, Native, Public)
	void OnObservedItemsChanged();// sub_6D5090()

	// Function ShadowTrackerExtra.STExtraPlayerController.OnObservedBulletNumChanged
	// (Final, Native, Public)
	void OnObservedBulletNumChanged();// sub_6D5070()

	// DelegateFunction ShadowTrackerExtra.STExtraPlayerController.OnMatchSessionChange__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnMatchSessionChange__DelegateSignature();// sub_1B0A820()

	// DelegateFunction ShadowTrackerExtra.STExtraPlayerController.OnMapMarkChangeDelegate__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnMapMarkChangeDelegate__DelegateSignature(int TeamMateSerialNumber);// sub_1B0A820()

	// DelegateFunction ShadowTrackerExtra.STExtraPlayerController.OnLostConnection__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnLostConnection__DelegateSignature();// sub_1B0A820()

	// DelegateFunction ShadowTrackerExtra.STExtraPlayerController.OnLocalCharacterHPChangeDelegate__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnLocalCharacterHPChangeDelegate__DelegateSignature(float currentHPfloat ratioHP);// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraPlayerController.OnLandOnGroundAfterJumpPlaneEnd
	// (Event, Public, BlueprintEvent)
	void OnLandOnGroundAfterJumpPlaneEnd();// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraPlayerController.OnItemOperation
	// (Final, Native, Private)
	void OnItemOperation(const struct FItemDefineID& DefineIDEBattleItemOperationType operationTypeunsigned char Reason);// sub_6D4F60()

	// DelegateFunction ShadowTrackerExtra.STExtraPlayerController.OnInterruptAutoSprintCountDown__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnInterruptAutoSprintCountDown__DelegateSignature();// sub_1B0A820()

	// DelegateFunction ShadowTrackerExtra.STExtraPlayerController.OnGameStartDelegate__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnGameStartDelegate__DelegateSignature();// sub_1B0A820()

	// DelegateFunction ShadowTrackerExtra.STExtraPlayerController.OnGameStartCountDownDelegate__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnGameStartCountDownDelegate__DelegateSignature(float CountDownTime);// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraPlayerController.OnForceUpdatePlayerStateProperties
	// (Final, Native, Private)
	void OnForceUpdatePlayerStateProperties();// sub_6D4F40()

	// DelegateFunction ShadowTrackerExtra.STExtraPlayerController.OnExitGame__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnExitGame__DelegateSignature();// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraPlayerController.OnExecuteExitCommand
	// (Final, Native, Public)
	void OnExecuteExitCommand();// sub_6D4F20()

	// DelegateFunction ShadowTrackerExtra.STExtraPlayerController.OnEquipWeaponDelegate__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnEquipWeaponDelegate__DelegateSignature();// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraPlayerController.OnEmoteAnimation
	// (Final, Native, Public)
	void OnEmoteAnimation(unsigned char InIndex);// sub_6D4EA0()

	// DelegateFunction ShadowTrackerExtra.STExtraPlayerController.OnDoubleClickCheckDelegate__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnDoubleClickCheckDelegate__DelegateSignature(TEnumAsByte<ETouchIndex> FingerIndex);// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraPlayerController.OnDeadBoxExpand
	// (Final, Native, Public, BlueprintCallable)
	void OnDeadBoxExpand();// sub_6D4E80()

	// Function ShadowTrackerExtra.STExtraPlayerController.OnDeadBoxCollapsed
	// (Final, Native, Public, BlueprintCallable)
	void OnDeadBoxCollapsed(unsigned char isCollpased);// sub_6D4DF0()

	// DelegateFunction ShadowTrackerExtra.STExtraPlayerController.OnDamageToOtherDelegate__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnDamageToOtherDelegate__DelegateSignature(float damageToOther);// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraPlayerController.OnControllerStateChange
	// (Final, Native, Public, BlueprintCallable)
	void OnControllerStateChange(const struct FName& LastestState);// sub_6D4D70()

	// Function ShadowTrackerExtra.STExtraPlayerController.OnClickedReportButton
	// (Final, Native, Public, BlueprintCallable)
	void OnClickedReportButton(EReportCause ReportCauseconst struct FString& NetIdESubjectToReport SubjectToReportTArray<EReportDetailCauseType> ReportDetailCauseTypeList);// sub_6D4B90()

	// DelegateFunction ShadowTrackerExtra.STExtraPlayerController.OnCharacterVehicleCheckVoiceTriggerDelegate__DelegateSignature
	// (MulticastDelegate, Public, Delegate, HasDefaults)
	void OnCharacterVehicleCheckVoiceTriggerDelegate__DelegateSignature(class ASTExtraVehicleBase* nowVehicleconst struct FVector& posVectorfloat showTime);// sub_1B0A820()

	// DelegateFunction ShadowTrackerExtra.STExtraPlayerController.OnCharacterShotCheckVoiceTriggerDelegate__DelegateSignature
	// (MulticastDelegate, Public, Delegate, HasDefaults)
	void OnCharacterShotCheckVoiceTriggerDelegate__DelegateSignature(class ASTExtraShootWeapon* nowWeaponconst struct FVector& posVectorfloat showTimeunsigned char isslience);// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraPlayerController.OnCharacterRecoveryHealthEvent
	// (Final, Native, Public, BlueprintCallable)
	void OnCharacterRecoveryHealthEvent();// sub_6D4B70()

	// DelegateFunction ShadowTrackerExtra.STExtraPlayerController.OnCharacterRecoveryHealth__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnCharacterRecoveryHealth__DelegateSignature();// sub_1B0A820()

	// DelegateFunction ShadowTrackerExtra.STExtraPlayerController.OnCharacterNearDeathOrRescueingOtherNotifyDelegate__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnCharacterNearDeathOrRescueingOtherNotifyDelegate__DelegateSignature(unsigned char IsNearDeathunsigned char IsRescueingOther);// sub_1B0A820()

	// DelegateFunction ShadowTrackerExtra.STExtraPlayerController.OnCharacterMoveCheckVoiceTriggerDelegate__DelegateSignature
	// (MulticastDelegate, Public, Delegate, HasDefaults)
	void OnCharacterMoveCheckVoiceTriggerDelegate__DelegateSignature(class ASTExtraBaseCharacter* nowCharacterconst struct FVector& posVectorfloat showTime);// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraPlayerController.OnCharacterHealStart
	// (Final, Native, Public)
	void OnCharacterHealStart(int InTargetPlayerID);// sub_6D4AF0()

	// Function ShadowTrackerExtra.STExtraPlayerController.OnCharacterHealEnd
	// (Final, Native, Public)
	void OnCharacterHealEnd(int InTargetPlayerIDunsigned char IsHealComplete);// sub_6D4A30()

	// DelegateFunction ShadowTrackerExtra.STExtraPlayerController.OnCharacterGlassCheckVoiceTriggerDelegate__DelegateSignature
	// (MulticastDelegate, Public, Delegate, HasDefaults)
	void OnCharacterGlassCheckVoiceTriggerDelegate__DelegateSignature(const struct FVector& posVectorfloat showTime);// sub_1B0A820()

	// DelegateFunction ShadowTrackerExtra.STExtraPlayerController.OnCharacterCheckVoiceTriggerDelegate__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnCharacterCheckVoiceTriggerDelegate__DelegateSignature(class AActor* nowActorfloat checkDis);// sub_1B0A820()

	// DelegateFunction ShadowTrackerExtra.STExtraPlayerController.OnCharacterBreathChangeDelegate__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnCharacterBreathChangeDelegate__DelegateSignature(float currentBRfloat ratioBRclass ACharacter* OwnerCharacterint HealthStatus);// sub_1B0A820()

	// DelegateFunction ShadowTrackerExtra.STExtraPlayerController.OnChangeBattleOwnerDelegate__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnChangeBattleOwnerDelegate__DelegateSignature();// sub_1B0A820()

	// DelegateFunction ShadowTrackerExtra.STExtraPlayerController.OnBackpackMainSlot__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnBackpackMainSlot__DelegateSignature(ESurviveWeaponPropSlot Slot);// sub_1B0A820()

	// DelegateFunction ShadowTrackerExtra.STExtraPlayerController.OnAutoSprintActive__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnAutoSprintActive__DelegateSignature();// sub_1B0A820()

	// DelegateFunction ShadowTrackerExtra.STExtraPlayerController.On3DTouchForceChangeDelegate__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void On3DTouchForceChangeDelegate__DelegateSignature();// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraPlayerController.ObserveAirDropBox
	// (Final, Native, Public, BlueprintCallable)
	void ObserveAirDropBox(int boxId);// sub_6D48E0()

	// Function ShadowTrackerExtra.STExtraPlayerController.NotifyInvincibleUIMsg
	// (Net, Native, Event, Public, NetClient)
	void NotifyInvincibleUIMsg(EInvincibleType Type);// sub_6D4860()

	// Function ShadowTrackerExtra.STExtraPlayerController.NotifyInOutPickUpActorWrapperBP
	// (Event, Public, BlueprintEvent)
	void NotifyInOutPickUpActorWrapperBP(unsigned char bIsIn);// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraPlayerController.NextSetViewTarget
	// (Final, Native, Public, BlueprintCallable)
	void NextSetViewTarget();// sub_6D4840()

	// Function ShadowTrackerExtra.STExtraPlayerController.MoveUp
	// (Final, Native, Protected, BlueprintCallable)
	void MoveUp(float Rate);// sub_6D4740()

	// Function ShadowTrackerExtra.STExtraPlayerController.MoveToAI
	// (Final, Exec, Native, Public)
	void MoveToAI();// sub_6D4720()

	// Function ShadowTrackerExtra.STExtraPlayerController.MoveTo
	// (Final, Exec, Native, Public)
	void MoveTo(float Xfloat Yfloat Z);// sub_6D4610()

	// Function ShadowTrackerExtra.STExtraPlayerController.MovePlayer
	// (Final, Exec, Native, Public)
	void MovePlayer(float Xfloat Yfloat Zfloat RPfloat RYfloat RR);// sub_6D43B0()

	// Function ShadowTrackerExtra.STExtraPlayerController.ModifyTouchIndex
	// (Final, Native, Public, HasDefaults, BlueprintCallable)
	void ModifyTouchIndex(const struct FVector& LocTEnumAsByte<ETouchIndex> FingerIndex);// sub_6D4260()

	// Function ShadowTrackerExtra.STExtraPlayerController.MemberVoice
	// (Event, Public, BlueprintEvent)
	void MemberVoice(int Memberint status);// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraPlayerController.MakeTestCrash
	// (Final, Exec, Native, Public)
	void MakeTestCrash();// sub_3170E0()

	// Function ShadowTrackerExtra.STExtraPlayerController.LocalTeamNoAlwaysRelevant
	// (Final, Exec, Native, Public)
	void LocalTeamNoAlwaysRelevant();// sub_6D40D0()

	// Function ShadowTrackerExtra.STExtraPlayerController.LocalStopRedZone
	// (Final, Exec, Native, Public)
	void LocalStopRedZone(int bStop);// sub_6D4050()

	// Function ShadowTrackerExtra.STExtraPlayerController.LocalStartReadyCountDown
	// (Final, Exec, Native, Public)
	void LocalStartReadyCountDown();// sub_6D4030()

	// Function ShadowTrackerExtra.STExtraPlayerController.LocalStartAirDropSpecified
	// (Final, Exec, Native, Public)
	void LocalStartAirDropSpecified(float Xfloat Y);// sub_6D3F70()

	// Function ShadowTrackerExtra.STExtraPlayerController.LocalStartAirDrop
	// (Final, Exec, Native, Public)
	void LocalStartAirDrop(int Index);// sub_6D3EF0()

	// Function ShadowTrackerExtra.STExtraPlayerController.LocalSpawnVehicle
	// (Final, Exec, Native, Public)
	void LocalSpawnVehicle(const struct FString& Path);// sub_6D3E50()

	// Function ShadowTrackerExtra.STExtraPlayerController.LocalSpawnRedzonePosition
	// (Final, Exec, Native, Public)
	void LocalSpawnRedzonePosition(float Xfloat Yfloat Radius);// sub_6D3D40()

	// Function ShadowTrackerExtra.STExtraPlayerController.LocalSpawnRedzoneOnPlayer
	// (Final, Exec, Native, Public)
	void LocalSpawnRedzoneOnPlayer();// sub_6D3D20()

	// Function ShadowTrackerExtra.STExtraPlayerController.LocalSpawnAI
	// (Final, Exec, Native, Public)
	void LocalSpawnAI(int Num);// sub_6D3CA0()

	// Function ShadowTrackerExtra.STExtraPlayerController.LocalSetSpeed
	// (Final, Exec, Native, Public)
	void LocalSetSpeed(float Modifier);// sub_6D3C20()

	// Function ShadowTrackerExtra.STExtraPlayerController.LocalSetMaxHealth
	// (Final, Exec, Native, Public)
	void LocalSetMaxHealth(float HP);// sub_6D3BA0()

	// Function ShadowTrackerExtra.STExtraPlayerController.LocalSetAirDropEnable
	// (Final, Exec, Native, Public)
	void LocalSetAirDropEnable(unsigned char Enable);// sub_6D3B10()

	// Function ShadowTrackerExtra.STExtraPlayerController.LocalRemoveAllDoors
	// (Final, Exec, Native, Public)
	void LocalRemoveAllDoors();// sub_6D3AF0()

	// Function ShadowTrackerExtra.STExtraPlayerController.LocalProfileFootprint
	// (Final, Exec, Native, Public)
	void LocalProfileFootprint();// sub_6D3AD0()

	// Function ShadowTrackerExtra.STExtraPlayerController.LocalMoveTo
	// (Final, Exec, Native, Public)
	void LocalMoveTo(float Xfloat Yfloat Z);// sub_6D39C0()

	// Function ShadowTrackerExtra.STExtraPlayerController.LocalKillSomeOne
	// (Final, Exec, Native, Public)
	void LocalKillSomeOne(const struct FString& InPlayerName);// sub_6D3920()

	// Function ShadowTrackerExtra.STExtraPlayerController.LocalKillAll
	// (Final, Exec, Native, Public)
	void LocalKillAll();// sub_6D3900()

	// Function ShadowTrackerExtra.STExtraPlayerController.LocalGotoFlying
	// (Final, Exec, Native, Public)
	void LocalGotoFlying();// sub_6D38E0()

	// Function ShadowTrackerExtra.STExtraPlayerController.LocalGetGameStateReconnectInfo
	// (Final, Native, Public)
	void LocalGetGameStateReconnectInfo();// sub_6D38C0()

	// Function ShadowTrackerExtra.STExtraPlayerController.LocalGameModeGotoNextState
	// (Final, Exec, Native, Public)
	void LocalGameModeGotoNextState();// sub_6D38A0()

	// Function ShadowTrackerExtra.STExtraPlayerController.LocalGameModeGotoFightingState
	// (Final, Exec, Native, Public)
	void LocalGameModeGotoFightingState();// sub_6D3880()

	// Function ShadowTrackerExtra.STExtraPlayerController.LocalChangeWeather
	// (Final, Exec, Native, Public)
	void LocalChangeWeather(const struct FString& WeatherID);// sub_6D37A0()

	// Function ShadowTrackerExtra.STExtraPlayerController.LocalChangeAvatar
	// (Final, Exec, Native, Public)
	void LocalChangeAvatar(int genderint Faceint FaceColorint Hairint HairColor);// sub_6CD310()

	// Function ShadowTrackerExtra.STExtraPlayerController.LocalAddItem
	// (Final, Exec, Native, Public)
	void LocalAddItem(int IDint Count);// sub_6D36E0()

	// Function ShadowTrackerExtra.STExtraPlayerController.LoadAllLand
	// (Final, Exec, Native, Public)
	void LoadAllLand(unsigned char bLoadAll);// sub_6D3650()

	// Function ShadowTrackerExtra.STExtraPlayerController.LerpFPPCamera
	// (Final, Native, Public)
	void LerpFPPCamera();// sub_6D3630()

	// Function ShadowTrackerExtra.STExtraPlayerController.KillSomeOne
	// (Final, Exec, Native, Public)
	void KillSomeOne(const struct FString& InPlayerName);// sub_6D3590()

	// Function ShadowTrackerExtra.STExtraPlayerController.KillSelf
	// (Final, Exec, Native, Public, BlueprintCallable)
	void KillSelf();// sub_3170E0()

	// Function ShadowTrackerExtra.STExtraPlayerController.KillAll
	// (Final, Exec, Native, Public)
	void KillAll();// sub_3170E0()

	// Function ShadowTrackerExtra.STExtraPlayerController.JumpWorld
	// (Final, Exec, Native, Public, BlueprintCallable)
	void JumpWorld(float Xfloat Y);// sub_6CBDA0()

	// Function ShadowTrackerExtra.STExtraPlayerController.JumpFromPlane
	// (Final, Native, Public, BlueprintCallable)
	void JumpFromPlane();// sub_6D3570()

	// Function ShadowTrackerExtra.STExtraPlayerController.JoystickTriggerSprint
	// (Event, Public, BlueprintEvent)
	void JoystickTriggerSprint(unsigned char bIsSprint);// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraPlayerController.IsViewTarget
	// (Native, Public, BlueprintCallable)
	unsigned char IsViewTarget(class AActor* pActor);// sub_6D34D0()

	// Function ShadowTrackerExtra.STExtraPlayerController.IsUse3DTouch
	// (Final, Native, Public, BlueprintCallable, BlueprintPure)
	unsigned char IsUse3DTouch();// sub_6D34A0()

	// Function ShadowTrackerExtra.STExtraPlayerController.IsSpectatorState
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char IsSpectatorState();// sub_6D3440()

	// Function ShadowTrackerExtra.STExtraPlayerController.IsSpectating
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char IsSpectating();// sub_6D3410()

	// Function ShadowTrackerExtra.STExtraPlayerController.IsSameTeam
	// (Final, Native, Public, BlueprintCallable)
	unsigned char IsSameTeam(class APawn* Other);// sub_6D3380()

	// Function ShadowTrackerExtra.STExtraPlayerController.IsRescueing
	// (Final, Native, Public, BlueprintCallable, BlueprintPure)
	unsigned char IsRescueing();// sub_6D3350()

	// Function ShadowTrackerExtra.STExtraPlayerController.IsObserving
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char IsObserving();// sub_6D3260()

	// Function ShadowTrackerExtra.STExtraPlayerController.IsObserverWidgetInputBlocking
	// (Event, Public, BlueprintEvent)
	unsigned char IsObserverWidgetInputBlocking();// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraPlayerController.IsMoveable
	// (Final, Native, Public, Const)
	unsigned char IsMoveable();// sub_6D3130()

	// Function ShadowTrackerExtra.STExtraPlayerController.IsMissionListDisplayable
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char IsMissionListDisplayable();// sub_6D3100()

	// Function ShadowTrackerExtra.STExtraPlayerController.IsLastBreathOrRescueingOther
	// (Final, Native, Protected, BlueprintCallable)
	unsigned char IsLastBreathOrRescueingOther();// sub_6D30D0()

	// Function ShadowTrackerExtra.STExtraPlayerController.IsKillerSpectating
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char IsKillerSpectating();// sub_6D30A0()

	// Function ShadowTrackerExtra.STExtraPlayerController.IsInPlane
	// (Final, Native, Public, BlueprintCallable, BlueprintPure)
	unsigned char IsInPlane();// sub_6D3040()

	// Function ShadowTrackerExtra.STExtraPlayerController.IsInParachute
	// (Final, Native, Public, BlueprintCallable, BlueprintPure)
	unsigned char IsInParachute();// sub_6D3010()

	// Function ShadowTrackerExtra.STExtraPlayerController.IsInFreeCameraView
	// (Final, Native, Public, BlueprintCallable)
	unsigned char IsInFreeCameraView();// sub_6D2F20()

	// Function ShadowTrackerExtra.STExtraPlayerController.IsInDeathReplay
	// (Final, Native, Public)
	unsigned char IsInDeathReplay();// sub_6D2EF0()

	// Function ShadowTrackerExtra.STExtraPlayerController.IsHardLanding
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char IsHardLanding();// sub_6D2EC0()

	// Function ShadowTrackerExtra.STExtraPlayerController.IsAllowActorTouchMove
	// (Final, Native, Public)
	unsigned char IsAllowActorTouchMove();// sub_6D2E60()

	// Function ShadowTrackerExtra.STExtraPlayerController.IsAGMPlayer
	// (Final, Native, Public, BlueprintCallable, BlueprintPure)
	unsigned char IsAGMPlayer();// sub_6D2E30()

	// Function ShadowTrackerExtra.STExtraPlayerController.InsertGrenadeIDToName
	// (Final, Native, Public, BlueprintCallable)
	void InsertGrenadeIDToName(int GrenadeIDconst struct FName& Name);// sub_6D2D70()

	// Function ShadowTrackerExtra.STExtraPlayerController.InsertGrenadeIDInOrder
	// (Final, Native, Public, BlueprintCallable)
	void InsertGrenadeIDInOrder(int GrenadeID);// sub_6D2CF0()

	// Function ShadowTrackerExtra.STExtraPlayerController.InitVehicleAvatarList
	// (Final, Native, Public, BlueprintCallable)
	void InitVehicleAvatarList();// sub_6D2C40()

	// Function ShadowTrackerExtra.STExtraPlayerController.InitNewbieComponent
	// (Event, Public, HasOutParms, BlueprintEvent)
	void InitNewbieComponent(TArray<int> FinishedGuideTArray<int> FinishedCountsint PlayerLevelint PlayerExperienceType);// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraPlayerController.InitJoyStickAfterActivation
	// (Event, Public, BlueprintEvent)
	void InitJoyStickAfterActivation();// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraPlayerController.HideObserverPlayerList
	// (Final, Native, Public, BlueprintCallable)
	void HideObserverPlayerList();// sub_6D2C20()

	// Function ShadowTrackerExtra.STExtraPlayerController.HideInventoryMapWidget
	// (Event, Public, BlueprintEvent)
	void HideInventoryMapWidget();// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraPlayerController.HideEmoteWheel
	// (Final, Native, Public, BlueprintCallable)
	void HideEmoteWheel();// sub_6D2C00()

	// Function ShadowTrackerExtra.STExtraPlayerController.HandleLandOnGroundEnd
	// (Final, Native, Protected)
	void HandleLandOnGroundEnd();// sub_6D2BE0()

	// Function ShadowTrackerExtra.STExtraPlayerController.HandleClipboard
	// (Final, Native, Private)
	void HandleClipboard();// sub_6D2BC0()

	// Function ShadowTrackerExtra.STExtraPlayerController.HandleClientHasReactivated
	// (Final, Native, Protected)
	void HandleClientHasReactivated();// sub_6D2BA0()

	// Function ShadowTrackerExtra.STExtraPlayerController.HandleCameraModeChanged
	// (Final, Native, Public)
	void HandleCameraModeChanged(TEnumAsByte<EPlayerCameraMode> NewModeclass ASTExtraBaseCharacter* InCharacter);// sub_6D2AE0()

	// Function ShadowTrackerExtra.STExtraPlayerController.GotoFlying
	// (Final, Exec, Native, Public, BlueprintCallable)
	void GotoFlying();// sub_3170E0()

	// Function ShadowTrackerExtra.STExtraPlayerController.GMTeleport
	// (Final, Exec, Native, Public, BlueprintCallable)
	void GMTeleport(const struct FName& Teleporter);// sub_445A50()

	// Function ShadowTrackerExtra.STExtraPlayerController.GMServerTeleport
	// (Final, Exec, Native, Public)
	void GMServerTeleport(const struct FName& Teleporter);// sub_445A50()

	// Function ShadowTrackerExtra.STExtraPlayerController.GetWriteCircleDistance
	// (Final, Native, Public, BlueprintCallable)
	int GetWriteCircleDistance();// sub_6D2940()

	// Function ShadowTrackerExtra.STExtraPlayerController.GetViewTargetCharacter
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	class ASTExtraBaseCharacter* GetViewTargetCharacter();// sub_6D2910()

	// Function ShadowTrackerExtra.STExtraPlayerController.GetViewPortDPIScale
	// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	float GetViewPortDPIScale();// sub_6D28D0()

	// Function ShadowTrackerExtra.STExtraPlayerController.GetUseMotionControlLog
	// (Final, Native, Public, BlueprintCallable, BlueprintPure)
	unsigned char GetUseMotionControlLog();// sub_6D28A0()

	// Function ShadowTrackerExtra.STExtraPlayerController.GetUseMotionControlEnable
	// (Final, Native, Public, BlueprintCallable, BlueprintPure)
	unsigned char GetUseMotionControlEnable();// sub_6D2870()

	// Function ShadowTrackerExtra.STExtraPlayerController.GetTslPlayerMatchResultInfos
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	TArray<struct FTslPlayerMatchResultInfo> GetTslPlayerMatchResultInfos();// sub_6D2790()

	// Function ShadowTrackerExtra.STExtraPlayerController.GetTouchForce
	// (Final, Native, Public, BlueprintCallable, BlueprintPure)
	float GetTouchForce(TEnumAsByte<ETouchIndex> FingerIndex);// sub_6D2700()

	// Function ShadowTrackerExtra.STExtraPlayerController.GetThePlane
	// (Final, Native, Public, BlueprintCallable)
	class AActor* GetThePlane();// sub_6D26E0()

	// Function ShadowTrackerExtra.STExtraPlayerController.GetTargetedSpringArm
	// (Final, Native, Public)
	class USpringArmComponent* GetTargetedSpringArm();// sub_6D26B0()

	// Function ShadowTrackerExtra.STExtraPlayerController.GetStatTriangles
	// (Final, Native, Public, BlueprintCallable, BlueprintPure)
	int GetStatTriangles();// sub_442210()

	// Function ShadowTrackerExtra.STExtraPlayerController.GetStatMemory
	// (Final, Native, Public, BlueprintCallable, BlueprintPure)
	struct FString GetStatMemory();// sub_6CF2D0()

	// Function ShadowTrackerExtra.STExtraPlayerController.GetStatDrawCalls
	// (Final, Native, Public, BlueprintCallable, BlueprintPure)
	int GetStatDrawCalls();// sub_442210()

	// Function ShadowTrackerExtra.STExtraPlayerController.GetSensibilityRate
	// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	struct FRotator GetSensibilityRate(unsigned char bIsMotionControl);// sub_6D25D0()

	// Function ShadowTrackerExtra.STExtraPlayerController.GetPlayerCharacterSafety
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	class ASTExtraBaseCharacter* GetPlayerCharacterSafety();// sub_6D24B0()

	// Function ShadowTrackerExtra.STExtraPlayerController.GetObserverAuthorityType
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	EObserverAuthorityType GetObserverAuthorityType();// sub_6D2480()

	// Function ShadowTrackerExtra.STExtraPlayerController.GetObservedItemList
	// (Final, Native, Public, BlueprintCallable)
	TArray<struct FBattleItemData> GetObservedItemList();// sub_6D2390()

	// Function ShadowTrackerExtra.STExtraPlayerController.GetNewestAirDropBoxPos
	// (Final, Native, Public, HasDefaults, BlueprintCallable)
	struct FVector GetNewestAirDropBoxPos();// sub_6D2350()

	// Function ShadowTrackerExtra.STExtraPlayerController.GetNearPlayerList
	// (Final, Native, Public, BlueprintCallable)
	TArray<struct FPlayerInfoInOB> GetNearPlayerList();// sub_6D2260()

	// Function ShadowTrackerExtra.STExtraPlayerController.GetNameBySpecificID
	// (Event, Public, BlueprintEvent)
	struct FString GetNameBySpecificID(int TypeSpecificID);// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraPlayerController.GetMurderName
	// (Final, Native, Public, BlueprintCallable)
	struct FString GetMurderName();// sub_6D21A0()

	// Function ShadowTrackerExtra.STExtraPlayerController.GetMurderIsAI
	// (Final, Native, Public, BlueprintCallable)
	unsigned char GetMurderIsAI();// sub_6D2180()

	// Function ShadowTrackerExtra.STExtraPlayerController.GetMultiItemFromItemList
	// (Final, Native, Public, BlueprintCallable, BlueprintPure)
	TArray<struct FBattleItemData> GetMultiItemFromItemList(TArray<int> ItemSpecifiedID);// sub_6D2050()

	// Function ShadowTrackerExtra.STExtraPlayerController.GetMaxTouchForceFinger
	// (Final, Native, Public, BlueprintCallable)
	TEnumAsByte<ETouchIndex> GetMaxTouchForceFinger();// sub_6D2010()

	// Function ShadowTrackerExtra.STExtraPlayerController.GetKeysForAction
	// (Final, Native, Public, HasOutParms, BlueprintCallable)
	void GetKeysForAction(const struct FName& ActionNameTArray<struct FInputActionKeyMapping>* Bindings);// sub_6D1A60()

	// Function ShadowTrackerExtra.STExtraPlayerController.GetJoyStickVisualSize
	// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	struct FVector2D GetJoyStickVisualSize();// sub_6D1A20()

	// Function ShadowTrackerExtra.STExtraPlayerController.GetJoyStickCenter
	// (Final, Native, Public, HasDefaults, BlueprintCallable)
	struct FVector2D GetJoyStickCenter();// sub_6D19E0()

	// Function ShadowTrackerExtra.STExtraPlayerController.GetGameStateReconnectInfoOnServer
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void GetGameStateReconnectInfoOnServer();// sub_6D1960()

	// Function ShadowTrackerExtra.STExtraPlayerController.GetGameScreenSize
	// (Final, Exec, Native, Public)
	void GetGameScreenSize();// sub_3170E0()

	// Function ShadowTrackerExtra.STExtraPlayerController.GetFriendDistance
	// (Final, Native, Public, BlueprintCallable)
	int GetFriendDistance();// sub_442210()

	// Function ShadowTrackerExtra.STExtraPlayerController.GetFocalLocation
	// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	struct FVector GetFocalLocation();// sub_393340()

	// Function ShadowTrackerExtra.STExtraPlayerController.GetCurrentBuildVersion
	// (Final, Native, Static, Public, BlueprintCallable)
	static struct FString STATIC_GetCurrentBuildVersion();// sub_6D1920()

	// Function ShadowTrackerExtra.STExtraPlayerController.GetCurPlayerState
	// (Final, Native, Public, BlueprintCallable)
	class ASTExtraPlayerState* GetCurPlayerState();// sub_6D18F0()

	// Function ShadowTrackerExtra.STExtraPlayerController.GetCurPlayerId
	// (Final, Native, Public, BlueprintCallable)
	int GetCurPlayerId();// sub_6D18C0()

	// Function ShadowTrackerExtra.STExtraPlayerController.GetCurPawnLocation
	// (Final, Native, Public, HasDefaults, BlueprintCallable)
	struct FVector GetCurPawnLocation();// sub_6D1880()

	// Function ShadowTrackerExtra.STExtraPlayerController.GetCurPawn
	// (Final, Native, Public, BlueprintCallable, BlueprintPure)
	class APawn* GetCurPawn();// sub_6D1850()

	// Function ShadowTrackerExtra.STExtraPlayerController.GetCurFPS
	// (Final, Native, Public, BlueprintCallable, BlueprintPure)
	float GetCurFPS();// sub_5696F0()

	// Function ShadowTrackerExtra.STExtraPlayerController.GetControlLookRotation
	// (Native, Public, HasDefaults, BlueprintCallable)
	struct FRotator GetControlLookRotation();// sub_6D1810()

	// Function ShadowTrackerExtra.STExtraPlayerController.GetControlLookPoint
	// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	struct FVector GetControlLookPoint(int LineTraceRangeunsigned char* HitTaget);// sub_6D1720()

	// Function ShadowTrackerExtra.STExtraPlayerController.GetChatComponent
	// (Final, Native, Public)
	class UChatComponent* GetChatComponent();// sub_6D16F0()

	// Function ShadowTrackerExtra.STExtraPlayerController.GetCanAllSpectate
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char GetCanAllSpectate();// sub_6D16D0()

	// Function ShadowTrackerExtra.STExtraPlayerController.GetCachedReportUserInfos
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	TArray<struct FTslReportUserInfo> GetCachedReportUserInfos();// sub_6D15B0()

	// Function ShadowTrackerExtra.STExtraPlayerController.GetBaseCharacter
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	class ASTExtraBaseCharacter* GetBaseCharacter();// sub_6D14E0()

	// Function ShadowTrackerExtra.STExtraPlayerController.GetBackpackComponent
	// (Final, Native, Public)
	class UBackpackComponent* GetBackpackComponent();// sub_6D14B0()

	// Function ShadowTrackerExtra.STExtraPlayerController.GetAliveTeamMemberCount
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	int GetAliveTeamMemberCount(unsigned char bIncludeQuitter);// sub_6D1420()

	// Function ShadowTrackerExtra.STExtraPlayerController.GetAirplaneActor
	// (Final, Native, Public, BlueprintCallable)
	class AActor* GetAirplaneActor();// sub_6D13D0()

	// Function ShadowTrackerExtra.STExtraPlayerController.GenerateAirDropData
	// (Final, Native, Public, BlueprintCallable)
	TArray<struct FSearchedTombBoxAndWrapperListResult> GenerateAirDropData(int boxId);// sub_6D1240()

	// Function ShadowTrackerExtra.STExtraPlayerController.GameModeGotoNextState
	// (Final, Exec, Native, Public, BlueprintCallable)
	void GameModeGotoNextState();// sub_3170E0()

	// Function ShadowTrackerExtra.STExtraPlayerController.GameModeGotoFightingState
	// (Final, Exec, Native, Public, BlueprintCallable)
	void GameModeGotoFightingState();// sub_3170E0()

	// Function ShadowTrackerExtra.STExtraPlayerController.FreeCameraTouchMove
	// (Final, Native, Public, HasDefaults, BlueprintCallable)
	void FreeCameraTouchMove(const struct FVector& LocTEnumAsByte<ETouchIndex> FingerIndex);// sub_6D1170()

	// Function ShadowTrackerExtra.STExtraPlayerController.ForceReleaseCurTouchMoveFinger
	// (Final, Native, Public, BlueprintCallable)
	void ForceReleaseCurTouchMoveFinger();// sub_6D1150()

	// Function ShadowTrackerExtra.STExtraPlayerController.FireTakeDamagedEvent
	// (Final, Native, Public, HasDefaults, BlueprintCallable)
	void FireTakeDamagedEvent(const struct FVector& CauserLocation);// sub_6D10C0()

	// Function ShadowTrackerExtra.STExtraPlayerController.Fight
	// (Final, Native, Public, BlueprintCallable)
	void Fight();// sub_6D0F60()

	// Function ShadowTrackerExtra.STExtraPlayerController.ExitFreeCamera
	// (Final, Native, Public, BlueprintCallable)
	void ExitFreeCamera(unsigned char IsForceReset);// sub_6D0ED0()

	// Function ShadowTrackerExtra.STExtraPlayerController.EndTouchScreen
	// (Final, Native, Public, HasDefaults, BlueprintCallable)
	void EndTouchScreen(const struct FVector& LocTEnumAsByte<ETouchIndex> FingerIndex);// sub_6D0E00()

	// Function ShadowTrackerExtra.STExtraPlayerController.EnablePlayerInHouse
	// (Final, Native, Public, BlueprintCallable)
	void EnablePlayerInHouse(unsigned char bIsIn);// sub_6D0D70()

	// Function ShadowTrackerExtra.STExtraPlayerController.EnableMyLandscapeDraw
	// (Final, Exec, Native, Public)
	void EnableMyLandscapeDraw();// sub_3170E0()

	// Function ShadowTrackerExtra.STExtraPlayerController.EmoteWheelCalledWithNumberSelected
	// (Final, Native, Public, BlueprintCallable)
	void EmoteWheelCalledWithNumberSelected(int Index);// sub_6D0CF0()

	// Function ShadowTrackerExtra.STExtraPlayerController.DoUITouchMove
	// (Event, Public, HasDefaults, BlueprintEvent)
	void DoUITouchMove(const struct FVector& Loc);// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraPlayerController.DoubleClickCancel
	// (Final, Native, Protected, BlueprintCallable)
	void DoubleClickCancel(TEnumAsByte<ETouchIndex> FingerIndex);// sub_6CFA10()

	// Function ShadowTrackerExtra.STExtraPlayerController.DoTouchMove
	// (Event, Public, BlueprintEvent)
	void DoTouchMove(float Yawfloat Pitch);// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraPlayerController.DoRespawn
	// (Final, Native, Protected)
	void DoRespawn();// sub_6CF9F0()

	// Function ShadowTrackerExtra.STExtraPlayerController.DisplayGameTipWithMsgIDAndString
	// (Final, Native, Public, BlueprintCallable)
	void DisplayGameTipWithMsgIDAndString(int IDconst struct FString& param1const struct FString& param2);// sub_6CF850()

	// Function ShadowTrackerExtra.STExtraPlayerController.DisplayGameTipWithMsgID
	// (Final, Native, Public, BlueprintCallable)
	void DisplayGameTipWithMsgID(int ID);// sub_6CF7D0()

	// Function ShadowTrackerExtra.STExtraPlayerController.DisplayGameTipForLowFPSWarning
	// (Final, Native, Public, BlueprintCallable)
	void DisplayGameTipForLowFPSWarning(int IDconst struct FString& param1const struct FString& param2);// sub_6CF630()

	// Function ShadowTrackerExtra.STExtraPlayerController.DispatchPlayerRespawnedEvent
	// (Final, Native, Public)
	void DispatchPlayerRespawnedEvent(class AUAEPlayerController* PlayerController);// sub_445A50()

	// Function ShadowTrackerExtra.STExtraPlayerController.DispatchPlayerRecoveredEvent
	// (Final, Native, Public)
	void DispatchPlayerRecoveredEvent();// sub_6CF610()

	// Function ShadowTrackerExtra.STExtraPlayerController.DispatchPlayerReconnectedEvent
	// (Final, Native, Public)
	void DispatchPlayerReconnectedEvent();// sub_6CF5F0()

	// Function ShadowTrackerExtra.STExtraPlayerController.DispatchPlayerLostEvent
	// (Final, Native, Public)
	void DispatchPlayerLostEvent();// sub_6CF5D0()

	// Function ShadowTrackerExtra.STExtraPlayerController.DispatchPlayerExitEvent
	// (Final, Native, Public)
	void DispatchPlayerExitEvent();// sub_6CF5B0()

	// Function ShadowTrackerExtra.STExtraPlayerController.DispatchPlayerAboutToRespawnEvent
	// (Final, Native, Public)
	void DispatchPlayerAboutToRespawnEvent(class AUAEPlayerController* PlayerController);// sub_6CF530()

	// Function ShadowTrackerExtra.STExtraPlayerController.DisableMyLandscapeDraw
	// (Final, Exec, Native, Public)
	void DisableMyLandscapeDraw();// sub_3170E0()

	// Function ShadowTrackerExtra.STExtraPlayerController.DelayForceExitFreeCamera
	// (Final, Native, Public)
	void DelayForceExitFreeCamera();// sub_6CF510()

	// Function ShadowTrackerExtra.STExtraPlayerController.DebugSetUIVisibility
	// (Event, Public, BlueprintEvent)
	void DebugSetUIVisibility(unsigned char bUIVisibility);// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraPlayerController.DealGetAllNearShotWeapon
	// (Final, Native, Public, BlueprintCallable)
	void DealGetAllNearShotWeapon(float disRate);// sub_6CF490()

	// Function ShadowTrackerExtra.STExtraPlayerController.DealGetAllNearMoveVehicle
	// (Final, Native, Public, BlueprintCallable)
	void DealGetAllNearMoveVehicle(float checkDisfloat minSpeed);// sub_6CF3D0()

	// Function ShadowTrackerExtra.STExtraPlayerController.DealGetAllNearMoveCharacter
	// (Final, Native, Public, BlueprintCallable)
	void DealGetAllNearMoveCharacter(float checkDis);// sub_6CF350()

	// Function ShadowTrackerExtra.STExtraPlayerController.CopyVehicleCount
	// (Final, Exec, Native, Public)
	void CopyVehicleCount();// sub_3170E0()

	// Function ShadowTrackerExtra.STExtraPlayerController.CopyItemCount
	// (Final, Exec, Native, Public)
	void CopyItemCount();// sub_3170E0()

	// Function ShadowTrackerExtra.STExtraPlayerController.CopyHitInfoToClipboard
	// (Final, Exec, Native, Public)
	void CopyHitInfoToClipboard();// sub_3170E0()

	// Function ShadowTrackerExtra.STExtraPlayerController.CloseKickPlayerWarningPopup
	// (Final, Native, Public)
	void CloseKickPlayerWarningPopup(EPopupButtonID ButtonID);// sub_6CF1B0()

	// Function ShadowTrackerExtra.STExtraPlayerController.ClientWasWarnedTobeKickedTP
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ClientWasWarnedTobeKickedTP(const struct FText& KickReason);// sub_6CF030()

	// Function ShadowTrackerExtra.STExtraPlayerController.ClientWasKickedToLobbyTP
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ClientWasKickedToLobbyTP(const struct FText& KickReason);// sub_6CEF70()

	// Function ShadowTrackerExtra.STExtraPlayerController.ClientWasKickedAndExitTP
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ClientWasKickedAndExitTP(const struct FText& KickReason);// sub_6CEEB0()

	// Function ShadowTrackerExtra.STExtraPlayerController.ClientStartOnlineGame
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ClientStartOnlineGame();// sub_6CEE90()

	// Function ShadowTrackerExtra.STExtraPlayerController.ClientShowMatchResultDeathMatchTeam
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ClientShowMatchResultDeathMatchTeam(unsigned char IsAbortGameint MvpIDfloat BPReward);// sub_6CED80()

	// Function ShadowTrackerExtra.STExtraPlayerController.ClientShowMatchResultDeathMatchFFA
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ClientShowMatchResultDeathMatchFFA(unsigned char IsAbortGameint InRankint InKillint InDeathfloat BPReward);// sub_6CEBF0()

	// Function ShadowTrackerExtra.STExtraPlayerController.ClientShowMatchResult
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ClientShowMatchResult();// sub_6CEBD0()

	// Function ShadowTrackerExtra.STExtraPlayerController.ClientSetTslPlayerMatchResultInfos
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ClientSetTslPlayerMatchResultInfos(TArray<struct FTslPlayerMatchResultInfo> InTslPlayerMatchResultInfos);// sub_6CEB10()

	// Function ShadowTrackerExtra.STExtraPlayerController.ClientSetDefaultCameraFOV
	// (Final, Net, NetReliable, Native, Event, Private, NetClient)
	void ClientSetDefaultCameraFOV(float FOV);// sub_6CEA90()

	// Function ShadowTrackerExtra.STExtraPlayerController.ClientSetCanAllSpectate
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ClientSetCanAllSpectate(unsigned char InbCanSpectate);// sub_6CEA00()

	// Function ShadowTrackerExtra.STExtraPlayerController.ClientSendRoundEndEvent
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ClientSendRoundEndEvent(unsigned char bIsWinnerint ExpendedTimeInSeconds);// sub_6CE930()

	// Function ShadowTrackerExtra.STExtraPlayerController.ClientResponseObserverTeleport
	// (Net, Native, Event, Public, HasDefaults, NetClient)
	void ClientResponseObserverTeleport(const struct FVector& DestServerPosition);// sub_6CE8B0()

	// Function ShadowTrackerExtra.STExtraPlayerController.ClientRadioMessagePing
	// (Net, NetReliable, Native, Event, Public, HasDefaults, NetClient)
	void ClientRadioMessagePing(class ATslLPCPlayerState* InSenderint InMessageIndexconst struct FVector_NetQuantize& InServerLocationconst struct FVector2D& MarkerCoordint InSquadMemberIndexTArray<struct FVoiceParam> VoiceList);// sub_6CE6F0()

	// Function ShadowTrackerExtra.STExtraPlayerController.ClientRadioMessageNeedAmmo
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ClientRadioMessageNeedAmmo(class ATslLPCPlayerState* InSenderint InMessageIndexconst struct FText& InAmmoNameTextint InSquadMemberIndexTArray<struct FVoiceParam> VoiceList);// sub_6CE520()

	// Function ShadowTrackerExtra.STExtraPlayerController.ClientRadioMessageInteraction
	// (Net, NetReliable, Native, Event, Public, HasDefaults, NetClient)
	void ClientRadioMessageInteraction(class ATslLPCPlayerState* InSenderint InMessageIndexconst struct FText& InInteractionTextconst struct FVector_NetQuantize& InServerLocationERadioMessageInteractionType InIteractionTypeconst struct FVector2D& MarkerCoordint InSquadMemberIndex);// sub_6CE2F0()

	// Function ShadowTrackerExtra.STExtraPlayerController.ClientRadioMessageEnemySpotted
	// (Net, NetReliable, Native, Event, Public, HasDefaults, NetClient)
	void ClientRadioMessageEnemySpotted(class ATslLPCPlayerState* InSenderint InMessageIndexconst struct FVector_NetQuantize& InServerLocationconst struct FVector2D& MarkerCoordint InSquadMemberIndexTArray<struct FVoiceParam> VoiceList);// sub_6CE130()

	// Function ShadowTrackerExtra.STExtraPlayerController.ClientRadioMessage
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ClientRadioMessage(class ATslLPCPlayerState* InSenderint InMessageIndexint InSquadMemberIndexTArray<struct FVoiceParam> VoiceList);// sub_6CDFE0()

	// Function ShadowTrackerExtra.STExtraPlayerController.ClientOnMsg
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ClientOnMsg(const struct FString& Msg);// sub_6CDF40()

	// Function ShadowTrackerExtra.STExtraPlayerController.ClientOnHurt
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ClientOnHurt();// sub_6CDF20()

	// Function ShadowTrackerExtra.STExtraPlayerController.ClientOnDamageToOther
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ClientOnDamageToOther(float _DamageToOther);// sub_6CDEA0()

	// Function ShadowTrackerExtra.STExtraPlayerController.ClientOnCharacterDeath
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ClientOnCharacterDeath(const struct FTslReportUserInfo& InKillerInfounsigned char InbCanReport);// sub_6CDD40()

	// Function ShadowTrackerExtra.STExtraPlayerController.ClientNotifyPickupItem
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ClientNotifyPickupItem(int ItemSpecificIDconst struct FString& PlayerName);// sub_6CDC60()

	// Function ShadowTrackerExtra.STExtraPlayerController.ClientNotifyCharacterHealStart
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ClientNotifyCharacterHealStart();// sub_6CDC40()

	// Function ShadowTrackerExtra.STExtraPlayerController.ClientNotifyCharacterHealEnd
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ClientNotifyCharacterHealEnd(unsigned char IsHealComplete);// sub_6CDBB0()

	// Function ShadowTrackerExtra.STExtraPlayerController.ClientLeaveMatchIntentionally
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ClientLeaveMatchIntentionally();// sub_6CDB90()

	// Function ShadowTrackerExtra.STExtraPlayerController.ClientInitIngameUIAfterRespawn
	// (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
	void ClientInitIngameUIAfterRespawn();// sub_6CDB40()

	// Function ShadowTrackerExtra.STExtraPlayerController.ClientHearSound
	// (Net, NetReliable, Native, Event, Public, HasDefaults, NetClient)
	void ClientHearSound(int AkEventIDconst struct FVector& AkLocation);// sub_6CDA80()

	// Function ShadowTrackerExtra.STExtraPlayerController.ClientGameStarted
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ClientGameStarted();// sub_6CDA60()

	// Function ShadowTrackerExtra.STExtraPlayerController.ClientEnterViewBox
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ClientEnterViewBox(int boxId);// sub_6CD9D0()

	// Function ShadowTrackerExtra.STExtraPlayerController.ClientEndOnlineGame
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ClientEndOnlineGame();// sub_6CD9B0()

	// Function ShadowTrackerExtra.STExtraPlayerController.ClientDisplayGameTipWithMsgID
	// (Net, Native, Event, Public, NetClient, NetValidate)
	void ClientDisplayGameTipWithMsgID(int ID);// sub_6CD8F0()

	// Function ShadowTrackerExtra.STExtraPlayerController.ClientAdminCopyString
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ClientAdminCopyString(const struct FString& inString);// sub_6CD850()

	// Function ShadowTrackerExtra.STExtraPlayerController.Client_AddInstance
	// (Net, Native, Event, Public, NetClient)
	void Client_AddInstance(const struct FTracerSimulationData& InTracerData);// sub_6CF0F0()

	// Function ShadowTrackerExtra.STExtraPlayerController.ClearHitInfoHistory
	// (Final, Exec, Native, Public)
	void ClearHitInfoHistory();// sub_3170E0()

	// Function ShadowTrackerExtra.STExtraPlayerController.ClearAllBlockInput
	// (Final, Native, Public, BlueprintCallable, Const)
	void ClearAllBlockInput();// sub_6CD810()

	// Function ShadowTrackerExtra.STExtraPlayerController.CleanVoice
	// (Final, Exec, Native, Public)
	void CleanVoice();// sub_3170E0()

	// Function ShadowTrackerExtra.STExtraPlayerController.CleanAvatar
	// (Final, Exec, Native, Public)
	void CleanAvatar();// sub_3170E0()

	// Function ShadowTrackerExtra.STExtraPlayerController.ClampFreeCamIconOffset
	// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	struct FVector2D ClampFreeCamIconOffset(const struct FGeometry& MyGeometry);// sub_6CD750()

	// Function ShadowTrackerExtra.STExtraPlayerController.ChangeWeather
	// (Final, Exec, Native, Public)
	void ChangeWeather(const struct FString& WeatherID);// sub_6CD650()

	// Function ShadowTrackerExtra.STExtraPlayerController.ChangeSpectatorStateToFreeView
	// (Final, Native, Public, BlueprintCallable)
	void ChangeSpectatorStateToFreeView();// sub_6CD630()

	// Function ShadowTrackerExtra.STExtraPlayerController.ChangeCheckGame
	// (Final, Exec, Native, Private)
	void ChangeCheckGame(int Enable);// sub_3168A0()

	// Function ShadowTrackerExtra.STExtraPlayerController.ChangeBasicEquipItemList
	// (Final, Native, Public, HasOutParms)
	void ChangeBasicEquipItemList(TArray<struct FGameModePlayerItem> InRevivalEquipListTArray<struct FGameModeRevivePlayerBullet> InBulletInfoclass APawn* VictimPawn);// sub_6CD490()

	// Function ShadowTrackerExtra.STExtraPlayerController.ChangeAvatar
	// (Final, Exec, Native, Public)
	void ChangeAvatar(int genderint Faceint FaceColorint Hairint HairColor);// sub_6CD310()

	// Function ShadowTrackerExtra.STExtraPlayerController.CanTarget
	// (Final, Native, Public, BlueprintCallable, BlueprintPure)
	unsigned char CanTarget();// sub_6CD2E0()

	// Function ShadowTrackerExtra.STExtraPlayerController.CanSeeAllUI
	// (Final, Exec, Native, Public, BlueprintCallable)
	void CanSeeAllUI(unsigned char bUIVisibility);// sub_317670()

	// Function ShadowTrackerExtra.STExtraPlayerController.CanReport
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char CanReport();// sub_6CD2B0()

	// Function ShadowTrackerExtra.STExtraPlayerController.CallShowTouchInterface
	// (Native, Event, Public, BlueprintEvent)
	void CallShowTouchInterface(unsigned char InShow);// sub_6CD220()

	// Function ShadowTrackerExtra.STExtraPlayerController.CalInputFromRotaionRate
	// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	void CalInputFromRotaionRate(float* OutPitchfloat* OutYawunsigned char* bIsAddPitchunsigned char* bIsAddYawconst struct FVector& CurMotionDatafloat PitchRevercefloat MotionTouchRate_Pitchfloat MotionTouchAimRate_Pitchfloat MotionRate_Pitchfloat MotionAimRate_Pitchfloat MotionTouchRate_Yawfloat MotionTouchAimRate_Yawfloat MotionRate_Yawfloat MotionAimRate_Yawfloat MotionRate_Pitch_Thresholdfloat MotionRate_Yaw_Thresholdfloat Leftfloat Rightunsigned char bLandScapeOrientation);// sub_6CC700()

	// Function ShadowTrackerExtra.STExtraPlayerController.CalcAttactBtnPos
	// (Final, Native, Public, HasDefaults, BlueprintCallable)
	struct FVector2D CalcAttactBtnPos(float locXfloat locYfloat SizeXfloat SizeY);// sub_6CD0C0()

	// Function ShadowTrackerExtra.STExtraPlayerController.CalcAngleByCauserLocation
	// (Final, Native, Public, BlueprintCallable, BlueprintPure)
	float CalcAngleByCauserLocation();// sub_6CD090()

	// Function ShadowTrackerExtra.STExtraPlayerController.C2S_RequestSkillPrompt
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void C2S_RequestSkillPrompt();// sub_6CC6B0()

	// Function ShadowTrackerExtra.STExtraPlayerController.C2S_RequestBeingRescuedRemainingTime
	// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
	void C2S_RequestBeingRescuedRemainingTime();// sub_6CC660()

	// Function ShadowTrackerExtra.STExtraPlayerController.BroadcastFatalDamageToClient
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void BroadcastFatalDamageToClient(const struct FString& CauserNameconst struct FString& VictimNameint DamageTypeint AdditionalParamunsigned char IsHeadshotint ResultHealthStatusint Relationshipint PreviousHealthStatusconst struct FString& realKillerNameint realKillerNewKillNumint CauserTeamIDint VictimTeamID);// sub_6CC300()

	// Function ShadowTrackerExtra.STExtraPlayerController.BroadcastClientsSpawnExplosionEffect
	// (Net, Native, Event, NetMulticast, Public, HasDefaults, NetValidate)
	void BroadcastClientsSpawnExplosionEffect(class ASTExtraExplosionEffect* Templateconst struct FTransform& Transclass AActor* ActorOwnerclass APawn* InstigatorPawnESpawnActorCollisionHandlingMethod method);// sub_6CC0D0()

	// Function ShadowTrackerExtra.STExtraPlayerController.BPGetIsAndroidSimulator
	// (Final, Native, Public, BlueprintCallable, BlueprintPure)
	unsigned char BPGetIsAndroidSimulator();// sub_3ADE80()

	// Function ShadowTrackerExtra.STExtraPlayerController.BP_OceanSideDetected
	// (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
	void BP_OceanSideDetected(const struct FVector& OceansideLocationunsigned char bDetectedRiver);// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraPlayerController.BlockInputActionListAndAxisList
	// (Final, Native, Public, BlueprintCallable, Const)
	void BlockInputActionListAndAxisList(TArray<struct FBlockInput_Action> UnBlockActionListTArray<struct FName> UnBlockAxisList);// sub_6CBF50()

	// Function ShadowTrackerExtra.STExtraPlayerController.BeginTouchScreen
	// (Final, Native, Public, HasDefaults, BlueprintCallable)
	void BeginTouchScreen(const struct FVector& LocTEnumAsByte<ETouchIndex> FingerIndex);// sub_6CBE80()

	// Function ShadowTrackerExtra.STExtraPlayerController.BackToGameDataRefresh
	// (Final, Native, Private)
	void BackToGameDataRefresh();// sub_6CBE60()

	// Function ShadowTrackerExtra.STExtraPlayerController.AutoHPRecovery
	// (Final, Exec, Native, Public)
	void AutoHPRecovery(float Secondsfloat Recovery);// sub_6CBDA0()

	// Function ShadowTrackerExtra.STExtraPlayerController.AutoChangeSpectateTarget
	// (Final, Exec, Native, Public)
	void AutoChangeSpectateTarget(unsigned char bActivefloat ChangeInterval);// sub_6CBCD0()

	// Function ShadowTrackerExtra.STExtraPlayerController.AutoChangeCameraPerspective
	// (Final, Exec, Native, Public)
	void AutoChangeCameraPerspective(unsigned char bActivefloat ChangeInterval);// sub_6CBCD0()

	// Function ShadowTrackerExtra.STExtraPlayerController.AutoChangeAimingType
	// (Final, Exec, Native, Public)
	void AutoChangeAimingType(unsigned char TargetAimingValfloat ChangeInterval);// sub_6CBC10()

	// Function ShadowTrackerExtra.STExtraPlayerController.AddVoice
	// (Final, Exec, Native, Public)
	void AddVoice(int Slotint radioSlotint ActorIDint VoiceID);// sub_6CB930()

	// Function ShadowTrackerExtra.STExtraPlayerController.AddVehicleAvatar
	// (Final, Exec, Native, Public)
	void AddVehicleAvatar(int AvatarID);// sub_3168A0()

	// Function ShadowTrackerExtra.STExtraPlayerController.AddTouchMoveFinger
	// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	void AddTouchMoveFinger(TEnumAsByte<ETouchIndex> FingerIndexunsigned char Priorityconst struct FVector& TouchLoc);// sub_6CB820()

	// Function ShadowTrackerExtra.STExtraPlayerController.AddItem
	// (Final, Exec, Native, Public)
	void AddItem(int IDint Count);// sub_6CB760()

	// Function ShadowTrackerExtra.STExtraPlayerController.AddInitialItem
	// (Final, Exec, Native, Public)
	void AddInitialItem(int ID);// sub_3168A0()

	// Function ShadowTrackerExtra.STExtraPlayerController.AddFlaregunCarepackages
	// (Final, Exec, Native, Public)
	void AddFlaregunCarepackages(int WhitezonePackageint OutsidezonePackage);// sub_6CB760()

	// Function ShadowTrackerExtra.STExtraPlayerController.AddEmote
	// (Final, Exec, Native, Public)
	void AddEmote(int ID);// sub_3168A0()

	// Function ShadowTrackerExtra.STExtraPlayerController.AddBackpackAvatar
	// (Final, Exec, Native, Public)
	void AddBackpackAvatar(int AvatarID);// sub_3168A0()

	// Function ShadowTrackerExtra.STExtraPlayerController.AddAvatar
	// (Final, Exec, Native, Public)
	void AddAvatar(int AvatarID);// sub_3168A0()

	// Function ShadowTrackerExtra.STExtraPlayerController.ActivateTouchInterface
	// (Native, Public, BlueprintCallable)
	void ActivateTouchInterface(class UTouchInterface* NewTouchInterface);// sub_3902A0()


}

