



// Class ShadowTrackerExtra.STExtraBaseCharacter
// //Class ShadowTrackerExtra.STExtraBaseCharacter
//0x15D0 (0x1E20 - 0x0850)
class ASTExtraBaseCharacter : public AUAECharacter
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0850(0x0038) MISSED OFFSET
	float                                              RefreshUITimeAfterSpawn;                                  // 0x0888(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x088C(0x0004) MISSED OFFSET
	struct FPlayerAnimList                             CurPlayerAnimList;                                        // 0x0890(0x00F0) (BlueprintVisible, BlueprintReadOnly)
	float                                              ScopeAimCrosshairUIScale;                                 // 0x0980(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0984(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnCharacterShootDelegate;                                 // 0x0988(0x0010) (ZeroConstructor, InstancedReference)
	float                                              HealthMax;                                                // 0x0998(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x099C(0x0004) MISSED OFFSET
	float                                              TurnLinearEndThreshold;                                   // 0x09A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SwimableWaterDepth;                                       // 0x09A4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bIgnoreInput : 1;                                         // 0x09A8(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData04[0x7];                                       // 0x09A9(0x0007) MISSED OFFSET
	float                                              FarRelevantDistanceSqured;                                // 0x09B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              VoiceCheckDis;                                            // 0x09B4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0xC];                                       // 0x09B8(0x000C) MISSED OFFSET
	float                                              CapsuleTurnInterpSpeedLocomotionSprint;                   // 0x09C4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      FriendThread : 1;                                         // 0x09C8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x1];                                       // 0x09C9(0x0001) MISSED OFFSET
	unsigned char                                      IsPeekRight : 1;                                          // 0x09CA(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x5];                                       // 0x09CB(0x0005) MISSED OFFSET
	float                                              MinTurnAngleHip;                                          // 0x09D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bCollisionDebug : 1;                                      // 0x09D4(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08 : 8;                                        // 0x09D5(0x0001)
	unsigned char                                      bWasOnVehicle : 1;                                        // 0x09D5(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x09D6(0x0002) MISSED OFFSET
	float                                              VehicleMaxShowDis;                                        // 0x09D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x8];                                       // 0x09DC(0x0008) MISSED OFFSET
	unsigned char                                      EnableSprintSync : 1;                                     // 0x09E4(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x09E5(0x0003) MISSED OFFSET
	class UAttrModifyComponent*                        AttrModifyComp;                                           // 0x09E8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData12[0x8];                                       // 0x09F0(0x0008) MISSED OFFSET
	TArray<struct FDamageCauserRecordData>             DamageCauserRecords;                                      // 0x09F8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	float                                              MaxSwimSprintSpeed;                                       // 0x0A08(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x0A0C(0x0004) MISSED OFFSET
	TArray<class AActor*>                              InventoryData;                                            // 0x0A10(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	unsigned char                                      UnknownData14[0x4];                                       // 0x0A20(0x0004) MISSED OFFSET
	unsigned char                                      bUseSameTeamDamage : 1;                                   // 0x0A24(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0xB];                                       // 0x0A25(0x000B) MISSED OFFSET
	class UCurveFloat*                                 Curve_TurningLerpLocomotion;                              // 0x0A30(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExtremeFallVerticalVelocityThreshold;                     // 0x0A38(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x0A3C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnCharacterStartFireDelegate;                             // 0x0A40(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData17[0x40];                                      // 0x0A50(0x0040) MISSED OFFSET
	float                                              Health;                                                   // 0x0A90(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ScopeAimShootSpreadRot;                                   // 0x0A94(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0xC];                                       // 0x0AA0(0x000C) MISSED OFFSET
	int                                                LocalSimulateStates;                                      // 0x0AAC(0x0004) (ZeroConstructor, IsPlainOldData)
	class UCameraComponent*                            ThirdPersonCameraComponent;                               // 0x0AB0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              MoveMaxShowDis;                                           // 0x0AB8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData19[0x4];                                       // 0x0ABC(0x0004) MISSED OFFSET
	class APlayerTombBox*                              DeadInventoryBoxTemplate;                                 // 0x0AC0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    CharacterAnimEventDelegate;                               // 0x0AC8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UAkComponent*                                FootstepSound_Comp;                                       // 0x0AD8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              voiceCheckShowCD;                                         // 0x0AE0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentReticleShapeIndex;                                 // 0x0AE4(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              MiddleDistanceAimFOV;                                     // 0x0AE8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData20[0x44];                                      // 0x0AEC(0x0044) MISSED OFFSET
	unsigned char                                      bDead : 1;                                                // 0x0B30(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData21[0x3];                                       // 0x0B31(0x0003) MISSED OFFSET
	float                                              TurnNonLinearEndThreshold;                                // 0x0B34(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FPoseChangeTime                             SwitchPoseTime;                                           // 0x0B38(0x0018) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData22[0x8];                                       // 0x0B50(0x0008) MISSED OFFSET
	struct FName                                       EmoteSlots;                                               // 0x0B58(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bUsingFreeCamera : 1;                                     // 0x0B60(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData23[0x17];                                      // 0x0B61(0x0017) MISSED OFFSET
	float                                              RelevantPlayerAIPolicyDecisionLogInterval;                // 0x0B78(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData24[0x4];                                       // 0x0B7C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPlayerHandFoldedChanged;                                // 0x0B80(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData25[0x8];                                       // 0x0B90(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPlayerPickUp_Server;                                    // 0x0B98(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData26[0xC];                                       // 0x0BA8(0x000C) MISSED OFFSET
	struct FVector                                     NewStandHitBodyBoxScale;                                  // 0x0BB4(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               ThrowawayWeaponSound;                                     // 0x0BC0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData27[0x8];                                       // 0x0BC8(0x0008) MISSED OFFSET
	struct FTransform                                  HitBoxLeanTransR;                                         // 0x0BD0(0x0030) (Edit, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bIsWeaponFiring : 1;                                      // 0x0C00(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData28[0x7];                                       // 0x0C01(0x0007) MISSED OFFSET
	class UAdaptiveCrosshairWidget*                    AdaptiveCrosshairWidget;                                  // 0x0C08(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnCharacterAttrChangedWithDetail;                         // 0x0C10(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData29[0x8];                                       // 0x0C20(0x0008) MISSED OFFSET
	class UAkAudioEvent*                               SwitchFireModeSound;                                      // 0x0C28(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HitStateOffDelayTime;                                     // 0x0C30(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PawnBackpackCapacity;                                     // 0x0C34(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	class ASTExtraPlayerState*                         WhoKillMeRecord;                                          // 0x0C38(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                FirstDamageTypeSpesificID;                                // 0x0C40(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FPPSkillPromptRotationPitchMax;                           // 0x0C44(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData30[0x8];                                       // 0x0C48(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnStartInitDelegate;                                      // 0x0C50(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData31[0x30];                                      // 0x0C60(0x0030) MISSED OFFSET
	struct FVector_NetQuantizeNormal                   LastAimOffsets;                                           // 0x0C90(0x000C)
	float                                              RefreshUITimeAfterSpawnInterval;                          // 0x0C9C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ESTEPoseState>                         LastPoseState;                                            // 0x0CA0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData32[0x3];                                       // 0x0CA1(0x0003) MISSED OFFSET
	float                                              WaterHeightOffset;                                        // 0x0CA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnDoorInteractionDelegate;                                // 0x0CA8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDoorInteraction_Server;                                 // 0x0CB8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              AttackStateOffDelayTime;                                  // 0x0CC8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData33[0x4];                                       // 0x0CCC(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPlayerPickUp;                                           // 0x0CD0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      bShouldDrowningHurt : 1;                                  // 0x0CE0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData34[0x1F];                                      // 0x0CE1(0x001F) MISSED OFFSET
	class UAkAudioEvent*                               AmbientSound;                                             // 0x0D00(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpeedDynamicScale;                                        // 0x0D08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData35[0x4];                                       // 0x0D0C(0x0004) MISSED OFFSET
	struct FTransform                                  HitBoxLeanTransL;                                         // 0x0D10(0x0030) (Edit, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData36[0x4];                                       // 0x0D40(0x0004) MISSED OFFSET
	struct FAnimVehParamList                           CurAnimVehParamList;                                      // 0x0D44(0x0018) (BlueprintVisible, BlueprintReadOnly)
	float                                              AnimDeathLifeSpan;                                        // 0x0D5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData37[0x8];                                       // 0x0D60(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnDoSomethingDelaySomeFrames;                             // 0x0D68(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    IsEnterNearDeathDelegate;                                 // 0x0D78(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData38[0x8];                                       // 0x0D88(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnHit;                                                    // 0x0D90(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData39[0x8];                                       // 0x0DA0(0x0008) MISSED OFFSET
	TArray<class AActor*>                              PlayerSlotData;                                           // 0x0DA8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TEnumAsByte<EMovementMode>                         MovementModeBeforeNearDeath;                              // 0x0DB8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData40[0x7];                                       // 0x0DB9(0x0007) MISSED OFFSET
	TArray<struct FHealthPredictShowData>              HealthPredictShowDataList;                                // 0x0DC0(0x0010) (ZeroConstructor)
	TEnumAsByte<EHitPartJugementType>                  ClientHitPartJudgment;                                    // 0x0DD0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EHitPartJugementType>                  DSHitPartJudgment;                                        // 0x0DD1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData41[0x6];                                       // 0x0DD2(0x0006) MISSED OFFSET
	class UCharacterWeaponManagerComponent*            WeaponManagerComponent;                                   // 0x0DD8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      bIsDelayingMove : 1;                                      // 0x0DE0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData42[0x3];                                       // 0x0DE1(0x0003) MISSED OFFSET
	float                                              UpWaterHeight;                                            // 0x0DE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData43[0x8];                                       // 0x0DE8(0x0008) MISSED OFFSET
	struct FBodyTypeDef                                VechicleBodyDef;                                          // 0x0DF0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnPreVaultServer;                                         // 0x0DF8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData44[0x4];                                       // 0x0E08(0x0004) MISSED OFFSET
	float                                              PickUpRadius;                                             // 0x0E0C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       TPPCameraBoneName;                                        // 0x0E10(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FPPSkillPromptRotationYawMax;                             // 0x0E18(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData45[0x68];                                      // 0x0E1C(0x0068) MISSED OFFSET
	unsigned char                                      IsHiddenUI : 1;                                           // 0x0E84(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData46 : 8;                                        // 0x0E85(0x0001)
	unsigned char                                      bWeaponCollision : 1;                                     // 0x0E85(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData47[0xA];                                       // 0x0E86(0x000A) MISSED OFFSET
	struct FScriptMulticastDelegate                    StateLeaveHandler;                                        // 0x0E90(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      bMarkScopeLocDirty : 1;                                   // 0x0EA0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData48[0x7];                                       // 0x0EA1(0x0007) MISSED OFFSET
	struct FVector                                     LeanLeftTraceOffset;                                      // 0x0EA8(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    ServerControlRotation;                                    // 0x0EB4(0x000C) (BlueprintVisible, BlueprintReadOnly, Net, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnCharacterStopFireDelegate;                              // 0x0EC0(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      bHasStuckOperation : 1;                                   // 0x0ED0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData49[0x3];                                       // 0x0ED1(0x0003) MISSED OFFSET
	float                                              StandHalfHeight;                                          // 0x0ED4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData50[0x4];                                       // 0x0ED8(0x0004) MISSED OFFSET
	float                                              ScopeAimShootSpreadRotValMax;                             // 0x0EDC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData51[0x80];                                      // 0x0EE0(0x0080) MISSED OFFSET
	struct FVector                                     ScopeAimShootSpreadDir;                                   // 0x0F60(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData52[0x4];                                       // 0x0F6C(0x0004) MISSED OFFSET
	class UCapsuleComponent*                           ProneBoxComponent;                                        // 0x0F70(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      IsPressedWalk : 1;                                        // 0x0F78(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData53[0x7];                                       // 0x0F79(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnCharacterAimModeChanged;                                // 0x0F80(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UAkAudioEvent*                               VariableZoomStepAk;                                       // 0x0F90(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bIsDrawLocation : 1;                                      // 0x0F98(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData54[0x7];                                       // 0x0F99(0x0007) MISSED OFFSET
	class USTBaseBuffSystemComponent*                  BuffSystemComponent;                                      // 0x0FA0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData55[0x8];                                       // 0x0FA8(0x0008) MISSED OFFSET
	unsigned char                                      bPeekLeftToggled : 1;                                     // 0x0FB0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData56 : 8;                                        // 0x0FB1(0x0001)
	unsigned char                                      bPeekRightToggled : 1;                                    // 0x0FB1(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData57[0x2];                                       // 0x0FB2(0x0002) MISSED OFFSET
	struct FVector_NetQuantizeNormal                   AimOffsets;                                               // 0x0FB4(0x000C) (Net, Transient)
	class UTslBreatheComp*                             BreatheComp;                                              // 0x0FC0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FKilledTipsBlock                            BlockData;                                                // 0x0FC8(0x0038) (Edit, BlueprintVisible, BlueprintReadOnly, Net)
	class UAnimInstance*                               FPPAnimClass;                                             // 0x1000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData58[0x8];                                       // 0x1008(0x0008) MISSED OFFSET
	class UStaticMeshComponent*                        ScopComp;                                                 // 0x1010(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData59[0x8];                                       // 0x1018(0x0008) MISSED OFFSET
	class AController*                                 NetOwnerController;                                       // 0x1020(0x0008) (Net, Transient)
	class UInteractorComponent*                        InteractorComponent;                                      // 0x1028(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UCharacterInteractionComponent*              InteractionComponent;                                     // 0x1030(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      bIsHoldingAngled : 1;                                     // 0x1038(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData60[0x13];                                      // 0x1039(0x0013) MISSED OFFSET
	float                                              CapsuleTurnInterpSpeedLocomotion;                         // 0x104C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     NewProneHitBodyBoxScale;                                  // 0x1050(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData61[0x4];                                       // 0x105C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    StateInterruptedHandlerBP;                                // 0x1060(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData62[0x4];                                       // 0x1070(0x0004) MISSED OFFSET
	float                                              LeanOffset_Prone;                                         // 0x1074(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InteractAngleThreshold;                                   // 0x1078(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData63[0x4];                                       // 0x107C(0x0004) MISSED OFFSET
	class ASTExtraPlayerState*                         STExtraPlayerState;                                       // 0x1080(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     ScopeNewTargetLoc;                                        // 0x1088(0x000C) (BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData64[0x4];                                       // 0x1094(0x0004) MISSED OFFSET
	class ASTExtraBaseCharacter*                       WhoFollowMe;                                              // 0x1098(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class ASTExtraPlayerController*>            MySpectators;                                             // 0x10A0(0x0010) (ZeroConstructor)
	float                                              WataerSurfaceZOffset;                                     // 0x10B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData65[0x14];                                      // 0x10B4(0x0014) MISSED OFFSET
	class UPlayerSwimComponent*                        swimComponet;                                             // 0x10C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData66[0x10];                                      // 0x10D0(0x0010) MISSED OFFSET
	float                                              PreviousValueToSetForHealthPredict;                       // 0x10E0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData67[0x4];                                       // 0x10E4(0x0004) MISSED OFFSET
	class UPlayerGunCollosionComp*                     PlayerGunCollosionComp;                                   // 0x10E8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData68[0x18];                                      // 0x10F0(0x0018) MISSED OFFSET
	class UBaseCharacterPickupProxy*                   PickupProxy;                                              // 0x1108(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnPlayerPoseChange;                                       // 0x1110(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      bSwitchingToGrenade : 1;                                  // 0x1120(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData69 : 8;                                        // 0x1121(0x0001)
	unsigned char                                      bIsLastTwoCircle : 1;                                     // 0x1121(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData70[0x2];                                       // 0x1122(0x0002) MISSED OFFSET
	float                                              BreathAmount;                                             // 0x1124(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	struct FBodyTypeDef                                DyingBodyDef;                                             // 0x1128(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      UnknownData71[0x4];                                       // 0x1130(0x0004) MISSED OFFSET
	unsigned char                                      bDying : 1;                                               // 0x1134(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData72[0x3];                                       // 0x1135(0x0003) MISSED OFFSET
	float                                              FarDistanceAimFOV;                                        // 0x1138(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HealthPredict;                                            // 0x113C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData73[0x10];                                      // 0x1140(0x0010) MISSED OFFSET
	float                                              SprintingSmallGunMOdifier;                                // 0x1150(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SprintingBigGunModifier;                                  // 0x1154(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SprintingRifleModifier;                                   // 0x1158(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BoostPhase3BuffSpeedModifier;                             // 0x115C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BoostPhase4BuffSpeedModifier;                             // 0x1160(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeavyFallMovementStopTime;                                // 0x1164(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              voiceCheckCD;                                             // 0x1168(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData74[0x4];                                       // 0x116C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnReloadEnd;                                              // 0x1170(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData75[0x8];                                       // 0x1180(0x0008) MISSED OFFSET
	class ASTExtraShootWeapon*                         AutoEquipWeaponTemplate;                                  // 0x1188(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bWeaponObstruct : 1;                                      // 0x1190(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData76[0x3];                                       // 0x1191(0x0003) MISSED OFFSET
	float                                              ScopeAimShootSpreadDirValMax;                             // 0x1194(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ScopeNewIdleLoc;                                          // 0x1198(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	EInvincibleType                                    InvincibleType;                                           // 0x11A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData77[0x3];                                       // 0x11A5(0x0003) MISSED OFFSET
	unsigned char                                      bShowName : 1;                                            // 0x11A8(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bShowDamageToOther : 1;                                   // 0x11A8(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData78[0x3];                                       // 0x11A9(0x0003) MISSED OFFSET
	int                                                IsEnableReportPlayerBehavior;                             // 0x11AC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              Money;                                                    // 0x11B0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData79[0x4];                                       // 0x11B4(0x0004) MISSED OFFSET
	struct FName                                       HeadSocketName;                                           // 0x11B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       LFootSocketName;                                          // 0x11C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       RFootSocketName;                                          // 0x11C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData80[0xC];                                       // 0x11D0(0x000C) MISSED OFFSET
	unsigned char                                      CurrentWeaponZoomLevel;                                   // 0x11DC(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData81[0xB];                                       // 0x11DD(0x000B) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPlayerWeaponChangeState;                                // 0x11E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TEnumAsByte<ESTEPoseState>                         PoseState;                                                // 0x11F8(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData82[0x3];                                       // 0x11F9(0x0003) MISSED OFFSET
	float                                              WeaponMaxShowDis;                                         // 0x11FC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               SwitchSightSound;                                         // 0x1200(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData83[0x4];                                       // 0x1208(0x0004) MISSED OFFSET
	int                                                ServerSimulateStates;                                     // 0x120C(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData84[0x4];                                       // 0x1210(0x0004) MISSED OFFSET
	unsigned char                                      bPressedSprint : 1;                                       // 0x1214(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData85 : 8;                                        // 0x1215(0x0001)
	unsigned char                                      UseShootVerifyEx : 1;                                     // 0x1215(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData86[0x2];                                       // 0x1216(0x0002) MISSED OFFSET
	float                                              SwimableCharacterLengthOnSurface;                         // 0x1218(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData87[0x4];                                       // 0x121C(0x0004) MISSED OFFSET
	TArray<struct FWeaponSlotSwitchTimeData>           SwitchSlotTimeDataList;                                   // 0x1220(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class USTCharacterFollowComp*                      AutoFollowComponent;                                      // 0x1230(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData88[0x8];                                       // 0x1238(0x0008) MISSED OFFSET
	class UTslPlayerDamageConfig*                      DamageConfig;                                             // 0x1240(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData89[0x8];                                       // 0x1248(0x0008) MISSED OFFSET
	struct FAnimParamList                              CurAnimParamList;                                         // 0x1250(0x00EC) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData90[0x4];                                       // 0x133C(0x0004) MISSED OFFSET
	class UCharacterAvatarComponent*                   AvatarComponent;                                          // 0x1340(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData91[0x4];                                       // 0x1348(0x0004) MISSED OFFSET
	unsigned char                                      bIsGunADS : 1;                                            // 0x134C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData92 : 8;                                        // 0x134D(0x0001)
	unsigned char                                      IsBeingRescued : 1;                                       // 0x134D(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData93[0x2];                                       // 0x134E(0x0002) MISSED OFFSET
	float                                              ScopeMoveInOutSpeed;                                      // 0x1350(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData94[0x4];                                       // 0x1354(0x0004) MISSED OFFSET
	float                                              ValueLimitForHealthPredict;                               // 0x1358(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsRescueingOther : 1;                                     // 0x135C(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData95[0x3];                                       // 0x135D(0x0003) MISSED OFFSET
	TMap<int, float>                                   CachedReticleBrightnessMap;                               // 0x1360(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData96[0x8];                                       // 0x13B0(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnWeaponFireModeChangeDelegate;                           // 0x13B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDetachedFromVehicle;                                    // 0x13C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FBodyTypeDef                                ProneBodyDef;                                             // 0x13D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnPlayerAttrChangeDelegate;                               // 0x13E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	int                                                HandFolderRatio;                                          // 0x13F0(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EThrowGrenadeMode>                     ThrowGrenadeMode;                                         // 0x13F4(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData97[0x7];                                       // 0x13F5(0x0007) MISSED OFFSET
	int                                                IsEnableReportRoute;                                      // 0x13FC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              maxShowAlpha;                                             // 0x1400(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      PeekHasCollision : 1;                                     // 0x1404(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData98[0x3];                                       // 0x1405(0x0003) MISSED OFFSET
	float                                              AutoScopeDelayTimeWhenPeek;                               // 0x1408(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData99[0x4];                                       // 0x140C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPlayerTeleport;                                         // 0x1410(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData100[0x18];                                     // 0x1420(0x0018) MISSED OFFSET
	struct FCharacterEnergyData                        Energy;                                                   // 0x1438(0x0038) (Edit, BlueprintVisible, BlueprintReadOnly, Net)
	int                                                SkillPromptItemID;                                        // 0x1470(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsPeekLeft : 1;                                           // 0x1474(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData101[0x13];                                     // 0x1475(0x0013) MISSED OFFSET
	TMap<int, int>                                     CachedReticleShapeIndexMap;                               // 0x1488(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData102[0x8];                                      // 0x14D8(0x0008) MISSED OFFSET
	float                                              TurnInPlaceAngel;                                         // 0x14E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData103[0x4];                                      // 0x14E4(0x0004) MISSED OFFSET
	struct FAnimStatusKeyList                          CurUpdateStatusKeyList;                                   // 0x14E8(0x0020)
	unsigned char                                      IsSwimUpWater : 1;                                        // 0x1508(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData104[0x3];                                      // 0x1509(0x0003) MISSED OFFSET
	struct FVector2D                                   DesiredInput;                                             // 0x150C(0x0008) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              DelayHideDuration;                                        // 0x1514(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData105[0x4];                                      // 0x1518(0x0004) MISSED OFFSET
	float                                              ProneHalfHeight;                                          // 0x151C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData106[0x8];                                      // 0x1520(0x0008) MISSED OFFSET
	class ASTExtraVehicleBase*                         LatestVehicle;                                            // 0x1528(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               MountAccessoriesSound;                                    // 0x1530(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData107[0x8];                                      // 0x1538(0x0008) MISSED OFFSET
	float                                              CapsuleTurnInterpSpeedLocomotionProne;                    // 0x1540(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData108[0x14];                                     // 0x1544(0x0014) MISSED OFFSET
	float                                              ExtremeFallMovementStopTime;                              // 0x1558(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData109[0x54];                                     // 0x155C(0x0054) MISSED OFFSET
	class USTCharacterMovementComponent*               STCharacterMovement;                                      // 0x15B0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      IsEnablePeek : 1;                                         // 0x15B8(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData110[0x17];                                     // 0x15B9(0x0017) MISSED OFFSET
	int                                                VehicleSeatIdx;                                           // 0x15D0(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData111[0x4];                                      // 0x15D4(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnBulletChange;                                           // 0x15D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData112[0x18];                                     // 0x15E8(0x0018) MISSED OFFSET
	float                                              FOV_OnScopingEaseExp;                                     // 0x1600(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData113[0x4];                                      // 0x1604(0x0004) MISSED OFFSET
	class UCurveFloat*                                 CameraFovRatioCurve;                                      // 0x1608(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveVector*                                Curve_FPPCameraOffsetByFOV;                               // 0x1610(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 AngledCurve;                                              // 0x1618(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimoffsetsLastRepTime;                                    // 0x1620(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData114[0x4];                                      // 0x1624(0x0004) MISSED OFFSET
	unsigned char                                      bNonLinearTurn : 1;                                       // 0x1628(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData115[0x7];                                      // 0x1629(0x0007) MISSED OFFSET
	class UTslEmoteComponent*                          EmoteComponent;                                           // 0x1630(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData116[0x4];                                      // 0x1638(0x0004) MISSED OFFSET
	float                                              PointDamageForce_MapMin;                                  // 0x163C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData117[0x4];                                      // 0x1640(0x0004) MISSED OFFSET
	unsigned char                                      bCheckRelevantWithFOV : 1;                                // 0x1644(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData118[0x13];                                     // 0x1645(0x0013) MISSED OFFSET
	struct FSoftClassPath                              AdaptiveCrosshairWidgetClass;                             // 0x1658(0x0018) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData119[0x50];                                     // 0x1670(0x0050) MISSED OFFSET
	float                                              TargetPlayerAIPolicyDecisionLogInterval;                  // 0x16C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimStateReturnTime;                                       // 0x16C4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ASTExtraWeapon*                              CurrentReloadWeapon;                                      // 0x16C8(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnPreVaultClient;                                         // 0x16D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData120[0xC];                                      // 0x16E0(0x000C) MISSED OFFSET
	float                                              PointDamageForceMultiplier;                               // 0x16EC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData121[0x8];                                      // 0x16F0(0x0008) MISSED OFFSET
	unsigned char                                      bUseRagdoll : 1;                                          // 0x16F8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData122[0x3];                                      // 0x16F9(0x0003) MISSED OFFSET
	float                                              WaterFloorDetectionLength;                                // 0x16FC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData123[0x8];                                      // 0x1700(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    StateEnterHandler;                                        // 0x1708(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData124[0x4];                                      // 0x1718(0x0004) MISSED OFFSET
	float                                              ScopeLagScale;                                            // 0x171C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWeaponOwnerProxy*                           WeaponOwnerProxy;                                         // 0x1720(0x0008) (ZeroConstructor, IsPlainOldData)
	class UBaseCharacterEffectCom*                     EffectComponent;                                          // 0x1728(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     LeanRightTraceOffset;                                     // 0x1730(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData125[0x4];                                      // 0x173C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnHideUIAfterPlayerDeadDelegate;                          // 0x1740(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              FPPPutDownWeaponCoolingStart;                             // 0x1750(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData126[0x10];                                     // 0x1754(0x0010) MISSED OFFSET
	float                                              SwimableCharacterLengthOnSurfaceWhenSwimming;             // 0x1764(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData127[0x4];                                      // 0x1768(0x0004) MISSED OFFSET
	float                                              HeavyFallVerticalVelocityThreshold;                       // 0x176C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      IsFiveTimesWalkSpeed : 1;                                 // 0x1770(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData128[0x7];                                      // 0x1771(0x0007) MISSED OFFSET
	struct FAnimStatusKeyList                          LastUpdateStatusKeyList;                                  // 0x1778(0x0020)
	unsigned char                                      UnknownData129[0x4];                                      // 0x1798(0x0004) MISSED OFFSET
	struct FRotator                                    BlendTargetViewRotation;                                  // 0x179C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData130[0x78];                                     // 0x17A8(0x0078) MISSED OFFSET
	unsigned char                                      bSimulatePressedSprint : 1;                               // 0x1820(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData131 : 8;                                       // 0x1821(0x0001)
	unsigned char                                      bShowSkillPrompt : 1;                                     // 0x1821(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData132[0x2];                                      // 0x1822(0x0002) MISSED OFFSET
	float                                              NetCullingDistanceOnVeryLowDevice;                        // 0x1824(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	class USTCharacterRescueOtherComp*                 RescueOtherComponent;                                     // 0x1828(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData133[0x4];                                      // 0x1830(0x0004) MISSED OFFSET
	unsigned char                                      IsFPP : 1;                                                // 0x1834(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData134[0x3];                                      // 0x1835(0x0003) MISSED OFFSET
	float                                              TurnSpeedHip;                                             // 0x1838(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ETeamNumber>                           TeamNum;                                                  // 0x183C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      hHasCallGameModeKill : 1;                                 // 0x183D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData135[0x2];                                      // 0x183E(0x0002) MISSED OFFSET
	float                                              ScopeAimShootSpreadDecDirValSpeed;                        // 0x1840(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RadialDamageForceMultiplier;                              // 0x1844(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimStateDefaultTime;                                      // 0x1848(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData136[0x4];                                      // 0x184C(0x0004) MISSED OFFSET
	class UAkComponent*                                AmbientSound_Comp;                                        // 0x1850(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData137[0x4];                                      // 0x1858(0x0004) MISSED OFFSET
	float                                              EnterNearDeathCDTimeInitValue;                            // 0x185C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ScopeNewAimLoc;                                           // 0x1860(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData138[0x4];                                      // 0x186C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPlayerEnterRescueingStatus;                             // 0x1870(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FPlayerVehAnimList                          CurPlayerVehAnimList;                                     // 0x1880(0x0040) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData139[0x18];                                     // 0x18C0(0x0018) MISSED OFFSET
	class UAkAudioEvent*                               PickupSound;                                              // 0x18D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FPPPutDownWeaponCoolingEnd;                               // 0x18E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData140[0x4];                                      // 0x18E4(0x0004) MISSED OFFSET
	class UCurveFloat*                                 Curve_TurningLerp;                                        // 0x18E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnJoyStickInteruptDelegate;                               // 0x18F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData141[0x8];                                      // 0x1900(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnAttachedToVehicle;                                      // 0x1908(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      IsAutoFollow : 1;                                         // 0x1918(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData142[0x7];                                      // 0x1919(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    FFailSkillPromptConditionEvent;                           // 0x1920(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              ScopeAimShootSpreadDecRotValSpeed;                        // 0x1930(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LeanOffset_Crouch;                                        // 0x1934(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData143[0x10];                                     // 0x1938(0x0010) MISSED OFFSET
	TMap<struct FString, EAvatarDamagePosition>        NewHitBodyPosMap;                                         // 0x1948(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData144[0x8];                                      // 0x1998(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnDeath;                                                  // 0x19A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              NetDelayMinAniCompensate;                                 // 0x19B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData145[0x4];                                      // 0x19B4(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPlayerPawnHPChange;                                     // 0x19B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData146[0x4];                                      // 0x19C8(0x0004) MISSED OFFSET
	float                                              SwimUpRate;                                               // 0x19CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCustomSpringArmComponent*                   SpringArmComp;                                            // 0x19D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              CrouchHalfHeight;                                         // 0x19D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData147[0xC];                                      // 0x19DC(0x000C) MISSED OFFSET
	unsigned char                                      EnableStatesInterruptRPC : 1;                             // 0x19E8(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData148[0x7];                                      // 0x19E9(0x0007) MISSED OFFSET
	struct FSyncAKEvent                                SyncAKEvent;                                              // 0x19F0(0x0010) (BlueprintVisible, BlueprintReadOnly, Net)
	struct FScriptMulticastDelegate                    OnReconnectNotifyDelegate;                                // 0x1A00(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              ScopeAimShootSpreadAddDirValSpeed;                        // 0x1A10(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData149[0x4];                                      // 0x1A14(0x0004) MISSED OFFSET
	class UNavigationInvokerComponent*                 NavigationInvokerComponent;                               // 0x1A18(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              FreeCameraRestoreTime;                                    // 0x1A20(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData150[0x1C];                                     // 0x1A24(0x001C) MISSED OFFSET
	class UEffectComponent*                            NewEffectComponent;                                       // 0x1A40(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData151[0x8];                                      // 0x1A48(0x0008) MISSED OFFSET
	class UParachuteFollowComponent*                   ParachuteFollowComp;                                      // 0x1A50(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class ASTExtraBaseCharacter*>               FlyingTeam;                                               // 0x1A58(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	class ASTExtraBaseCharacter*                       Leader;                                                   // 0x1A68(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	EFollowState                                       FollowState;                                              // 0x1A70(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData152[0x7];                                      // 0x1A71(0x0007) MISSED OFFSET
	TArray<struct FParachuteFollowState>               TeammateParachuteFollowState;                             // 0x1A78(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	TArray<class ASTExtraBaseCharacter*>               Inviters;                                                 // 0x1A88(0x0010) (ZeroConstructor)
	float                                              LeaveVehicleVelocityKeepTime;                             // 0x1A98(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LandPredictedLocation_CP;                                 // 0x1A9C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentReticleBrightness;                                 // 0x1AA8(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData153[0x4];                                      // 0x1AAC(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               DeathSound;                                               // 0x1AB0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimStateDrawTime;                                         // 0x1AB8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      IsInWater : 1;                                            // 0x1ABC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData154 : 8;                                       // 0x1ABD(0x0001)
	unsigned char                                      IsWaterCanProne : 1;                                      // 0x1ABD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData155[0x2];                                      // 0x1ABE(0x0002) MISSED OFFSET
	float                                              PeekCheckCollisionTimer_Local;                            // 0x1AC0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData156[0x4];                                      // 0x1AC4(0x0004) MISSED OFFSET
	float                                              FPPFreeCameraRotationYawMax;                              // 0x1AC8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bHasHandleDead : 1;                                       // 0x1ACC(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData157[0x7];                                      // 0x1ACD(0x0007) MISSED OFFSET
	float                                              MiddleRelevantDistanceSqured;                             // 0x1AD4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CorpseLifeSpan;                                           // 0x1AD8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData158[0x1];                                      // 0x1ADC(0x0001) MISSED OFFSET
	TEnumAsByte<ECharacterHealthStatus>                HealthStatus;                                             // 0x1ADD(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData159[0x2];                                      // 0x1ADE(0x0002) MISSED OFFSET
	float                                              FPPSwimRotationPitchMax;                                  // 0x1AE0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FBodyTypeDef                                StandBodyDef;                                             // 0x1AE4(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      UnknownData160[0x4];                                      // 0x1AEC(0x0004) MISSED OFFSET
	class ASTExtraVehicleBase*                         CurrentVehicle;                                           // 0x1AF0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData161[0x8];                                      // 0x1AF8(0x0008) MISSED OFFSET
	float                                              FPPProneRotationYawMax;                                   // 0x1B00(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData162[0x4];                                      // 0x1B04(0x0004) MISSED OFFSET
	class USTCharacterNearDeathComp*                   NearDeatchComponent;                                      // 0x1B08(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData163[0x4];                                      // 0x1B10(0x0004) MISSED OFFSET
	float                                              PointDamageForce_MapMax;                                  // 0x1B14(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnChangedVehicleSeat;                                     // 0x1B18(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData164[0x8];                                      // 0x1B28(0x0008) MISSED OFFSET
	float                                              FPPSprintWeaponSmoothTime;                                // 0x1B30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBodyTypeDef                                CrouchBodyDef;                                            // 0x1B34(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	float                                              DeadInventoryBoxOverrideFindPutDownPointZThreshold;       // 0x1B3C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData165[0x70];                                     // 0x1B40(0x0070) MISSED OFFSET
	class UAkComponent*                                WeaponSound_Comp;                                         // 0x1BB0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     CurInputVector;                                           // 0x1BB8(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData166[0x9C];                                     // 0x1BC4(0x009C) MISSED OFFSET
	struct FVector                                     MoveInputState;                                           // 0x1C60(0x000C) (Net, IsPlainOldData)
	float                                              ScopeAimShootSpreadAddRotValSpeed;                        // 0x1C6C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<EAvatarDamagePosition, struct FBodyPartCfg>   BodyPartConfigMap;                                        // 0x1C70(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	float                                              UnderwaterSwimGapFromSurface;                             // 0x1CC0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData167[0x4];                                      // 0x1CC4(0x0004) MISSED OFFSET
	float                                              LeanOffset_Stand;                                         // 0x1CC8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PrevServerSimulateStates;                                 // 0x1CCC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CurrentEmoteIndex;                                        // 0x1CD0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CurrentEmoteID;                                           // 0x1CD4(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    EmoteMontageFinishedEvent;                                // 0x1CD8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData168[0x28];                                     // 0x1CE8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ShadowTrackerExtra.STExtraBaseCharacter.TempEmoteResource
	unsigned char                                      UnknownData169[0x38];                                     // 0x1D10(0x0038) MISSED OFFSET
	struct FVector                                     EmoteColBox;                                              // 0x1D48(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData170[0x4];                                      // 0x1D54(0x0004) MISSED OFFSET
	class UHackReporterComponent*                      HackReporterComponent;                                    // 0x1D58(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnPlayerRespawnInvincible;                                // 0x1D60(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPlayerHealStart;                                        // 0x1D70(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnPlayerHealEnd;                                          // 0x1D80(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData171[0x30];                                     // 0x1D90(0x0030) MISSED OFFSET
	float                                              LastDistanceCache;                                        // 0x1DC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsCrosshairObstructed : 1;                               // 0x1DC4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData172[0x3];                                      // 0x1DC5(0x0003) MISSED OFFSET
	int                                                SpectatedCount;                                           // 0x1DC8(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bSprintingAuto : 1;                                       // 0x1DCC(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData173[0x3];                                      // 0x1DCD(0x0003) MISSED OFFSET
	struct FVector                                     JumpStartLocation_CP;                                     // 0x1DD0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              FallHeight_CP;                                            // 0x1DDC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bServerFinishedVault : 1;                                 // 0x1DE0(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData174[0x3];                                      // 0x1DE1(0x0003) MISSED OFFSET
	struct FVector                                     VaultEndVelocity_CP;                                      // 0x1DE4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     VaultLastLocation_CP;                                     // 0x1DF0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData175[0x4];                                      // 0x1DFC(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnCharacterWeaponRecoil;                                  // 0x1E00(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              MaxDispalyFootprintDistance;                              // 0x1E10(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData176[0xC];                                      // 0x1E14(0x000C) MISSED OFFSET

	// Function ShadowTrackerExtra.STExtraBaseCharacter.ZeroingLevelUp
	// (Final, Native, Protected, BlueprintCallable)
	void ZeroingLevelUp();// sub_BAB4E0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.ZeroingLevelDown
	// (Final, Native, Protected, BlueprintCallable)
	void ZeroingLevelDown();// sub_BAB4C0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.VaultStartPosNotifyBPToCpp
	// (Final, Native, Public, HasDefaults, BlueprintCallable)
	void VaultStartPosNotifyBPToCpp(unsigned char isvaulttingunsigned char IsValidVaultclass ASTExtraBaseCharacter* vaultCharacterconst struct FVector& startPos);// sub_BAB340()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.VaultFailPawnCPP
	// (Net, NetReliable, Native, Event, NetMulticast, Public, BlueprintCallable)
	void VaultFailPawnCPP(const struct FString& Content);// sub_BAB2A0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.VaultFailPawnBluePrint
	// (Native, Event, Public, HasOutParms, BlueprintEvent)
	void VaultFailPawnBluePrint(const struct FString& Content);// sub_BAB1F0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.UserCancelRescue
	// (Final, Native, Public, BlueprintCallable)
	void UserCancelRescue();// sub_BAB1D0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.UpdateStanceMode
	// (Final, Native, Public, BlueprintCallable)
	void UpdateStanceMode(TEnumAsByte<ESTEPoseState> LastStateTEnumAsByte<ESTEPoseState> CurState);// sub_BAB110()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.UpdateDeathReplayInitTrans
	// (Final, Native, Protected)
	void UpdateDeathReplayInitTrans(float DeltaTime);// sub_BAB090()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.UnequipWeaponFinish
	// (Final, Native, Public)
	void UnequipWeaponFinish();// sub_3170E0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.UnequipWeapon
	// (Final, Native, Public)
	void UnequipWeapon(ESurviveWeaponPropSlot Slotunsigned char bSwitchWeapon);// sub_BAAFC0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.UnBindCallbackToHUD
	// (Final, Native, Public)
	void UnBindCallbackToHUD();// sub_BAAFA0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.TryToEquipGrenadeByType
	// (Final, Native, Public, BlueprintCallable)
	unsigned char TryToEquipGrenadeByType(EGrenadeType grenadeType);// sub_BAAF10()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.TryToBroadcastFatalDamageEvent
	// (Final, Native, Public, HasOutParms)
	void TryToBroadcastFatalDamageEvent(class AController* causerint HSChangeMarginconst struct FDamageEvent& DamageEventunsigned char IsHeadshotclass AActor* DamageCauser);// sub_BAAD40()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.TryPeek
	// (Final, Native, Public, BlueprintCallable)
	void TryPeek(unsigned char IsLeftunsigned char ButtonDown);// sub_BAAC70()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.TriggerEntryEvent_Implementation
	// (Native, Public, BlueprintCallable)
	void TriggerEntryEvent_Implementation(EUTSkillEntry EntryEvent);// sub_BAABF0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.TriggerCustomEvent_Implementation
	// (Native, Public, BlueprintCallable)
	void TriggerCustomEvent_Implementation(TEnumAsByte<EUAESkillEvent> EventType);// sub_BAAB70()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.ToggleThrowGrenadeMode
	// (Final, Native, Public, BlueprintCallable)
	void ToggleThrowGrenadeMode();// sub_BAAB50()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.TickWeaponInertia
	// (Final, Native, Public)
	void TickWeaponInertia(float DeltaSeconds);// sub_BAAAD0()

	// DelegateFunction ShadowTrackerExtra.STExtraBaseCharacter.TakeDamageWhenThrowedDelegate__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void TakeDamageWhenThrowedDelegate__DelegateSignature();// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.SyncDeadTombBoxToController
	// (Native, Protected)
	void SyncDeadTombBoxToController(class APlayerTombBox* _DeadTombBox);// sub_6DDB60()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.SwitchWeaponBySlot
	// (Final, Native, Public, BlueprintCallable)
	void SwitchWeaponBySlot(ESurviveWeaponPropSlot Slotunsigned char bUseAnimationunsigned char bForceFinishPreviousSwitch);// sub_BAA9C0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.SwitchToLastWeapon
	// (Final, Native, Public, BlueprintCallable)
	void SwitchToLastWeapon(unsigned char bUseAnimationunsigned char bForceFinishPreviousSwitch);// sub_BAA8F0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.SwitchToLastNoneGrenageWeapon
	// (Final, Native, Public, BlueprintCallable)
	void SwitchToLastNoneGrenageWeapon(unsigned char bUseAnimationunsigned char bForceFinishPreviousSwitch);// sub_BAA820()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.SwitchToGrenadeWeapon
	// (Final, Native, Public, BlueprintCallable)
	void SwitchToGrenadeWeapon(const struct FItemDefineID& DefineIDunsigned char bUseAnimationunsigned char bForceFinishPreviousSwitch);// sub_BAA6E0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.SwitchToGrenadeSlot
	// (Final, Native, Public, BlueprintCallable)
	unsigned char SwitchToGrenadeSlot(EGrenadeType grenadeType);// sub_BAA650()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.SwitchPoseState
	// (Final, Native, Public, BlueprintCallable)
	unsigned char SwitchPoseState(TEnumAsByte<ESTEPoseState> Stateunsigned char bIgnoreCDunsigned char bIgnoreCheckunsigned char ShouldShowPromptunsigned char IsTriggerByPressBtn);// sub_BAA490()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.StopFireFilter
	// (Native, Event, Public, BlueprintEvent)
	unsigned char StopFireFilter();// sub_BAA460()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.StopFire
	// (Final, Native, Public, BlueprintCallable)
	void StopFire();// sub_BAA440()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.StopDeathPlaybackRecording
	// (Final, Native, Protected)
	void StopDeathPlaybackRecording();// sub_BAA420()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.StopCurrentSkill_Server
	// (Final, Native, Public, BlueprintCallable)
	void StopCurrentSkill_Server();// sub_BAA400()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.StartRagdoll_Multicast
	// (Net, NetReliable, Native, Event, NetMulticast, Public)
	void StartRagdoll_Multicast();// sub_BAA3E0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.StartRagdoll
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void StartRagdoll();// sub_BAA390()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.StartFireSimple
	// (Native, Public, BlueprintCallable)
	void StartFireSimple();// sub_BAA370()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.StartFireFilter
	// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	unsigned char StartFireFilter();// sub_BAA340()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.StartFire
	// (Native, Public, HasDefaults, BlueprintCallable)
	void StartFire(int BurstShootBulletsLimitfloat BurstShootTimeLimitTEnumAsByte<EShootWeaponShootMode> ShootModeconst struct FVector& SimpleShootTarget);// sub_BAA1F0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.SpawnFootprint
	// (Final, Native, Public, BlueprintCallable)
	void SpawnFootprint(EFootprintType FootprintType);// sub_BAA170()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.SpawnBulletPassByEffect
	// (Native, Event, Public, HasDefaults, BlueprintEvent)
	void SpawnBulletPassByEffect(const struct FVector& Locationfloat BulletVelocity);// sub_BAA0A0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.SpawnAndSwithToGrenadeServerCall
	// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
	void SpawnAndSwithToGrenadeServerCall(EGrenadeType grenadeType);// sub_BA9FF0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.SpawnAndSwitchToGrenadeOnServer
	// (Final, Native, Public, BlueprintCallable)
	class ASTExtraWeapon* SpawnAndSwitchToGrenadeOnServer(const struct FName& SpesificLogicGrenadeSlot);// sub_BA9F60()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.SpawnAndSwitchToGrenadeOnClient
	// (Final, Native, Public, BlueprintCallable)
	class ASTExtraWeapon* SpawnAndSwitchToGrenadeOnClient(const struct FName& SpesificLogicGrenadeSlot);// sub_BA9ED0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.SpawnAndBackpackWeaponOnServer
	// (Final, Native, Public, BlueprintCallable)
	class ASTExtraWeapon* SpawnAndBackpackWeaponOnServer(class ASTExtraWeapon* Templateconst struct FItemDefineID& IDconst struct FName& LogicSocketunsigned char bAutoUseunsigned char bResetBulletNum);// sub_BA9D00()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.ShowDynamicCrosshair
	// (Final, Exec, Native, Public)
	void ShowDynamicCrosshair(unsigned char bShow);// sub_BA9C70()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.ShowDebugRole
	// (Final, Native, Protected, BlueprintCallable)
	void ShowDebugRole();// sub_3170E0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.ShowDebugRecordData
	// (Final, Native, Protected, BlueprintCallable)
	void ShowDebugRecordData();// sub_BA9C50()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.ShowDebugPickUpFlow
	// (Final, Native, Protected, BlueprintCallable)
	void ShowDebugPickUpFlow();// sub_BA9C50()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.ShowDebugEquipOrUnequipFlow
	// (Final, Native, Protected, BlueprintCallable)
	void ShowDebugEquipOrUnequipFlow();// sub_BA9C50()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.ShouldUpdateHPOnUI
	// (Native, Public, BlueprintCallable)
	unsigned char ShouldUpdateHPOnUI();// sub_BA9C20()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.ShouldAutoScopeWhenPeek
	// (Native, Event, Public, BlueprintEvent)
	unsigned char ShouldAutoScopeWhenPeek();// sub_BA9BF0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.SetWeaponObstruct
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void SetWeaponObstruct(unsigned char bObstruct);// sub_BA9B30()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.SetWeaponInertia
	// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	void SetWeaponInertia(const struct FRotator& InInertia);// sub_BA9AA0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.SetThrowGrenadeMode
	// (Final, Native, Public, BlueprintCallable)
	void SetThrowGrenadeMode(TEnumAsByte<EThrowGrenadeMode> ThrowMode);// sub_BA9A20()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.SetShootWeaponFireMode
	// (Final, Native, Public, BlueprintCallable)
	unsigned char SetShootWeaponFireMode(EGunFireMode NewFireMode);// sub_BA9990()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.SetServiveHUDVisibility
	// (Final, Native, Public, BlueprintCallable)
	void SetServiveHUDVisibility(unsigned char bVisibility);// sub_BA9900()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.SetServerVaultFinished
	// (Final, Native, Public, BlueprintCallable)
	void SetServerVaultFinished(unsigned char InFinished);// sub_BA9870()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.SetReloadMethod
	// (Final, Native, Public, BlueprintCallable)
	void SetReloadMethod(TEnumAsByte<EWeaponReloadMethod> reloadMethod);// sub_BA97F0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.SetJumpStartLocationAndFallheight
	// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	void SetJumpStartLocationAndFallheight(const struct FVector& JumpStartLocfloat FallHeight);// sub_BA9710()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.SetIsAutoFollow
	// (Final, Native, Public)
	void SetIsAutoFollow(unsigned char Valclass ASTExtraBaseCharacter* IFollowWho);// sub_BA9650()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.SetHealthSafety
	// (Final, Native, Public, BlueprintCallable)
	void SetHealthSafety(float NewHealthTEnumAsByte<ERecoveryReasonType> Reason);// sub_BA9590()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.SetHandFoldRatio
	// (Final, Native, Public, BlueprintCallable)
	void SetHandFoldRatio(int Ratio);// sub_BA9510()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.SetDelayStateSwitchTime
	// (Final, Native, Public, BlueprintCallable)
	void SetDelayStateSwitchTime(float DelayTime);// sub_BA9490()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.SetCurrentPersonPerspective
	// (Final, Native, Public, BlueprintCallable)
	unsigned char SetCurrentPersonPerspective(unsigned char IsNewFPPunsigned char IsInitSetting);// sub_BA93B0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.SetComponentsActive
	// (Native, Public, BlueprintCallable)
	void SetComponentsActive(class UObject* ComponentClassunsigned char IsActive);// sub_BA92E0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.SetCheatSpeedModifier
	// (Net, NetReliable, Native, Event, NetMulticast, Public)
	void SetCheatSpeedModifier(float NewModifier);// sub_BA9260()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.SetAnimParamIsRescueing
	// (Final, Native, Public)
	void SetAnimParamIsRescueing(unsigned char Val);// sub_BA91D0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.SetAnimParamIsNearDeathStatus
	// (Final, Native, Public, BlueprintCallable)
	void SetAnimParamIsNearDeathStatus(unsigned char Val);// sub_BA9140()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.SetADSSocketOffset
	// (Final, Native, Public, HasDefaults, BlueprintCallable)
	void SetADSSocketOffset(const struct FVector& NewOffset);// sub_BA90B0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.ServerTriggerJump
	// (Net, Native, Event, Public, NetServer, NetValidate)
	void ServerTriggerJump();// sub_BA8C30()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.ServerSetPeekState
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void ServerSetPeekState(unsigned char IsLeftunsigned char ButtonDown);// sub_BA8B30()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.ServerSetPeekCollision
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void ServerSetPeekCollision(unsigned char HasCollision);// sub_BA8A70()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.ServerSetMovementState
	// (Net, Native, Event, Public, NetServer, HasDefaults, NetValidate)
	void ServerSetMovementState(const struct FVector& Input);// sub_BA89A0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.ServerSetHoldingAngled
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void ServerSetHoldingAngled(unsigned char bNewHoldingAngled);// sub_BA88E0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.ServerSetCurrentWeaponZoomLevel
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void ServerSetCurrentWeaponZoomLevel(unsigned char ZoomLevel);// sub_BA8830()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.ServerSetAimOffsets
	// (Net, Native, Event, Protected, NetServer, NetValidate)
	void ServerSetAimOffsets(const struct FVector_NetQuantizeNormal& NewAimOffsets);// sub_BA8760()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.ServerResponseInvite
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void ServerResponseInvite(class ASTExtraBaseCharacter* SomeOneEInviteResponceType res);// sub_BA8660()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.ServerOnThrowableDetachedFromHand
	// (Net, NetReliable, Native, Event, Public, NetServer, HasDefaults, NetValidate)
	void ServerOnThrowableDetachedFromHand(const struct FVector& RelDetachedHandPosition);// sub_BA85B0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.ServerLogFireWeapon
	// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	void ServerLogFireWeapon(const struct FAttackId& AttackIdint ItemDefineID);// sub_BA84B0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.ServerInviteTeammate
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void ServerInviteTeammate(TArray<struct FString> Names);// sub_BA83C0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.ServerInterrupt
	// (Final, Native, Public, BlueprintCallable)
	void ServerInterrupt(int stateID);// sub_BA8340()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.ServerFollowTeammate
	// (Net, Native, Event, Public, NetServer, NetValidate)
	void ServerFollowTeammate(const struct FString& Name);// sub_BA8280()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.ServerChangeThrowGrenadeMode
	// (Net, Native, Event, Public, NetServer, NetValidate)
	void ServerChangeThrowGrenadeMode(TEnumAsByte<EThrowGrenadeMode> ThrowMode);// sub_BA81D0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.ServerCancelFollow
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void ServerCancelFollow();// sub_BA8180()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.ServerAddOrUpdateReticleShapeIndex
	// (Net, Native, Event, Public, NetServer, NetValidate)
	void ServerAddOrUpdateReticleShapeIndex(int ScopeTypeSpecificIDint NextShapeIndex);// sub_BA8080()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.ServerAddOrUpdateReticleBrightness
	// (Net, Native, Event, Public, NetServer, NetValidate)
	void ServerAddOrUpdateReticleBrightness(int ScopeTypeSpecificIDfloat NextBrightness);// sub_BA7F80()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.Server_StopWeaponInspection_CP
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void Server_StopWeaponInspection_CP();// sub_BA9060()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.Server_StartWeaponInspection_CP
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void Server_StartWeaponInspection_CP();// sub_BA9010()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.Server_SetVaultCancel
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void Server_SetVaultCancel(unsigned char InCancel);// sub_BA8F50()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.Server_PressedSprint
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void Server_PressedSprint(unsigned char bSprint);// sub_BA8E90()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.Server_HandleVault_CP
	// (Net, NetReliable, Native, Event, Public, NetServer, HasDefaults, NetValidate)
	void Server_HandleVault_CP(const struct FVaultingTask& InVaultTaskunsigned char bIInIsClimbconst struct FVector& InJumpStartPosconst struct FVector& InImpactPosconst struct FName& InObjectName);// sub_BA8C80()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.SearchTombBoxes
	// (Final, Native, Public, BlueprintCallable)
	TArray<struct FSearchedTombBoxAndWrapperListResult> SearchTombBoxes();// sub_BA7E40()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.SearchPickUpWrapperActors
	// (Final, Native, Public, BlueprintCallable)
	TArray<struct FSearchedPickUpItemResult> SearchPickUpWrapperActors(unsigned char bIncludeWrapprsOnGroundunsigned char bIncludeWrapprsInBox);// sub_BA7CD0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.SaveMeshUpdateFlag
	// (Final, Native, Public, BlueprintCallable)
	void SaveMeshUpdateFlag();// sub_BA7C40()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.S2C_InterruptState
	// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	void S2C_InterruptState(int stateIDint interruptedBy);// sub_BA7B80()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.S2C_FailSkillPrompt
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void S2C_FailSkillPrompt();// sub_BA7B60()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.RPC_Server_SwitchWeapon
	// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	void RPC_Server_SwitchWeapon(ESurviveWeaponPropSlot Slotunsigned char bUseAnimationunsigned char bForceFinishPreviousSwitch);// sub_BA73D0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.RPC_Server_SwitchToGrenadeWeapon
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void RPC_Server_SwitchToGrenadeWeapon(const struct FItemDefineID& DefineID);// sub_BA7300()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.RPC_Server_SpawnAndSwitchToGrenade
	// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	void RPC_Server_SpawnAndSwitchToGrenade(const struct FName& SpesificLogicGrenadeSlot);// sub_BA7240()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.RPC_Server_SetHandFoldRatio
	// (Net, Native, Event, Protected, NetServer, BlueprintCallable, NetValidate)
	void RPC_Server_SetHandFoldRatio(int Ratio);// sub_BA7180()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.RPC_Server_EnableCurrentWeaponInfiniteBullets
	// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	void RPC_Server_EnableCurrentWeaponInfiniteBullets(unsigned char bEnable);// sub_BA70C0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.RPC_Server_DestroyGrenadeAndSwitchBackToPreviousWeapon
	// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	void RPC_Server_DestroyGrenadeAndSwitchBackToPreviousWeapon();// sub_BA7070()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.RPC_NetMulticast_HandlePlayerPickUpActor
	// (Net, Native, Event, NetMulticast, Public, NetValidate)
	void RPC_NetMulticast_HandlePlayerPickUpActor(float TargetZLoc);// sub_BA6FC0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.RPC_Client_SwitchWeapon
	// (Net, NetReliable, Native, Event, Protected, NetClient, NetValidate)
	void RPC_Client_SwitchWeapon(ESurviveWeaponPropSlot Slotunsigned char bUseAnimationunsigned char bForceFinishPreviousSwitch);// sub_BA6E80()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.RPC_Client_StopCurrentSkill
	// (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
	void RPC_Client_StopCurrentSkill();// sub_BA6E30()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.RPC_Client_SpawnAndSwitchToGrenade
	// (Net, NetReliable, Native, Event, Protected, NetClient, NetValidate)
	void RPC_Client_SpawnAndSwitchToGrenade(const struct FName& SpesificLogicGrenadeSlot);// sub_BA6D70()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.RPC_Client_SetReloadCurWeapon
	// (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
	void RPC_Client_SetReloadCurWeapon(class ASTExtraWeapon* Weapon);// sub_BA6CB0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.RPC_Client_OnDeathStopRecordingNotify
	// (Net, NetReliable, Native, Event, Protected, NetClient, NetValidate)
	void RPC_Client_OnDeathStopRecordingNotify(const struct FName& SpectatorName);// sub_BA6BF0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.RPC_Client_OnDamageNotifyRecord
	// (Net, NetReliable, Native, Event, Protected, NetClient, NetValidate)
	void RPC_Client_OnDamageNotifyRecord(int DamagerIDfloat fHealthint OtherHealthStatusfloat ShootDistanceint DamageTypeconst struct FName& CauserName);// sub_BA69E0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.RPC_Client_EnableCurrentWeaponInfiniteBullets
	// (Net, NetReliable, Native, Event, Protected, NetClient, NetValidate)
	void RPC_Client_EnableCurrentWeaponInfiniteBullets(unsigned char bEnable);// sub_BA6920()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.RPC_Client_DestroyGrenadeAndSwitchBackToPreviousWeapon
	// (Net, NetReliable, Native, Event, Protected, NetClient, NetValidate)
	void RPC_Client_DestroyGrenadeAndSwitchBackToPreviousWeapon();// sub_BA68D0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.ReticleBrightnessUp
	// (Final, Native, Protected, BlueprintCallable)
	void ReticleBrightnessUp();// sub_BA7B40()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.ReticleBrightnessDown
	// (Final, Native, Protected, BlueprintCallable)
	void ReticleBrightnessDown();// sub_BA7B20()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.RestoreMeshUpdateFlag
	// (Final, Native, Public, BlueprintCallable)
	void RestoreMeshUpdateFlag();// sub_BA7A90()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.ResponceInvite
	// (Final, Native, Public, BlueprintCallable)
	void ResponceInvite(class ASTExtraBaseCharacter* SomeOneEInviteResponceType res);// sub_BA79D0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.ResetZeroingLevel
	// (Final, Native, Protected, BlueprintCallable)
	void ResetZeroingLevel();// sub_BA79B0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.ResetValueLimitForHealthPredict
	// (Final, Native, Public, BlueprintCallable)
	void ResetValueLimitForHealthPredict();// sub_BA7990()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.ResetGunAimingParameters
	// (Final, Native, Protected, BlueprintCallable)
	void ResetGunAimingParameters();// sub_BA7970()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.ResetControlPitch
	// (Final, Native, Public, BlueprintCallable)
	void ResetControlPitch();// sub_3170E0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.ResetCamera
	// (Final, Native, Public, BlueprintCallable)
	void ResetCamera();// sub_BA7950()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.ResetAimStateTimer
	// (Final, Native, Public)
	void ResetAimStateTimer();// sub_BA7930()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.RequestUserCancleRescue
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void RequestUserCancleRescue();// sub_BA78E0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.ReqStartPlayEmote
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void ReqStartPlayEmote(int EmoteID);// sub_BA7820()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.ReqInteruptPlayEmote
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void ReqInteruptPlayEmote(int EmoteID);// sub_BA7760()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.ReqEmotePlayFinished
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void ReqEmotePlayFinished(int EmoteID);// sub_BA76A0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.RemoveBuff
	// (Native, Public, BlueprintCallable)
	unsigned char RemoveBuff(const struct FName& BuffNameunsigned char RemoveLayerOnly);// sub_BA75D0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.ReloadWeaponFilter
	// (Native, Event, Public, BlueprintEvent)
	unsigned char ReloadWeaponFilter();// sub_BA75A0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.ReloadFail_Client
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ReloadFail_Client();// sub_BA7580()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.ReloadFail
	// (Final, Native, Public)
	void ReloadFail();// sub_BA7560()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.ReloadCurrentWeapon
	// (Final, Native, Public, BlueprintCallable)
	unsigned char ReloadCurrentWeapon();// sub_BA7530()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.RefreshMoveAttrModifier
	// (Final, Native, Public, BlueprintCallable)
	void RefreshMoveAttrModifier();// sub_BA7510()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.ProcessAdaptiveCrosshair
	// (Final, Native, Private, BlueprintCallable)
	void ProcessAdaptiveCrosshair();// sub_BA68B0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.PrintAIPolicyDecisionData
	// (Final, Native, Public, BlueprintCallable)
	void PrintAIPolicyDecisionData();// sub_3170E0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.PostGetPlayerAnimation
	// (Event, Public, BlueprintEvent)
	void PostGetPlayerAnimation();// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.PlayToggleFiringModeSound
	// (Final, Native, Public, BlueprintCallable)
	void PlayToggleFiringModeSound();// sub_BA6860()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.PlaySwitchSightSound
	// (Final, Native, Public, BlueprintCallable)
	void PlaySwitchSightSound();// sub_BA6840()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.PlaySwitchFireModeSound
	// (Final, Native, Public, BlueprintCallable)
	void PlaySwitchFireModeSound();// sub_BA6820()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.PlaySelfThrowAwayWeaponSound
	// (Final, Native, Public, BlueprintCallable)
	void PlaySelfThrowAwayWeaponSound();// sub_BA6800()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.PlayPullBoltSound
	// (Final, Native, Public, BlueprintCallable)
	void PlayPullBoltSound();// sub_BA67E0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.PlayOperateItemSound
	// (Final, Native, Public, BlueprintCallable)
	void PlayOperateItemSound(const struct FString& BankNameconst struct FString& SoundName);// sub_BA6670()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.PlayMountAccessoriesSound
	// (Final, Native, Public, BlueprintCallable)
	void PlayMountAccessoriesSound();// sub_BA6650()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.PlayMagOUTSound
	// (Final, Native, Public, BlueprintCallable)
	void PlayMagOUTSound();// sub_BA6630()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.PlayMagINSound
	// (Final, Native, Public, BlueprintCallable)
	void PlayMagINSound();// sub_BA6610()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.PlayLocalShellDropFX
	// (Final, Native, Public, BlueprintCallable)
	void PlayLocalShellDropFX();// sub_BA65F0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.PlayLoadBulletSound
	// (Final, Native, Public, BlueprintCallable)
	void PlayLoadBulletSound();// sub_BA65D0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.PlayFootstepSound
	// (Final, Native, Public, BlueprintCallable)
	void PlayFootstepSound(const struct FString& AkEventName);// sub_BA6530()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.PlayerConfirmToRescue
	// (Final, Native, Public, BlueprintCallable)
	unsigned char PlayerConfirmToRescue();// sub_BA6880()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.PlayEmote
	// (Final, Native, Public, BlueprintCallable)
	void PlayEmote(int EmoteID);// sub_BA64B0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.PlayChangeMagazineSound
	// (Final, Native, Public, BlueprintCallable)
	void PlayChangeMagazineSound();// sub_BA6490()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.PlayAmbientSound
	// (Final, Native, Public, BlueprintCallable)
	void PlayAmbientSound();// sub_BA6470()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.PickUpWrapperActor
	// (Final, Native, Public, HasOutParms, BlueprintCallable)
	void PickUpWrapperActor(class AActor* Targetconst struct FPickUpItemData& ItemDataconst struct FName& EquipSlotNameint PickUpCount);// sub_BA62E0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.PickUpGroundItem
	// (Final, Native, Public, BlueprintCallable)
	unsigned char PickUpGroundItem(float InValidAngle);// sub_BA6250()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.PickUpActor
	// (Final, Native, Public, BlueprintCallable)
	void PickUpActor(class AActor* Targetint AdditionalParamconst struct FName& EquipSlotNameint PickUpCount);// sub_BA6110()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.PawnVaultServerCPP
	// (Net, NetReliable, Native, Event, Public, NetServer, HasDefaults, BlueprintCallable, NetValidate)
	void PawnVaultServerCPP(float disfloat Heightfloat Lengthconst struct FString& VaultKeyconst struct FVector& startPosclass AActor* checkActorfloat crossblockMaxFallfloat crossblockMaxDisconst struct FVector& hitpointclass AActor* WindowActorconst struct FRotator& MoveDirfloat ArrivalHeight);// sub_BA5CD0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.PawnVaultServerBluePrint
	// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
	void PawnVaultServerBluePrint(float disfloat Heightfloat Lengthconst struct FString& VaultKeyconst struct FVector& startPosclass AActor* checkActorfloat crossblockMaxFallfloat crossblockMaxDisconst struct FVector& hitpointclass AActor* WindowActorconst struct FRotator& MoveDirfloat ArrivalHeight);// sub_BA5940()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.PawnVaultAllCPP
	// (Net, NetReliable, Native, Event, NetMulticast, Public, HasDefaults, BlueprintCallable)
	void PawnVaultAllCPP(float disfloat Heightfloat Lengthconst struct FString& VaultKeyconst struct FVector& startPosclass AActor* checkActorfloat crossblockMaxFallfloat crossblockMaxDisconst struct FVector& hitpointconst struct FRotator& MoveDirfloat ArrivalHeight);// sub_BA55F0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.PawnVaultAllBluePrint
	// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
	void PawnVaultAllBluePrint(float disfloat Heightfloat Lengthconst struct FString& VaultKeyconst struct FVector& startPosclass AActor* checkActorfloat crossblockMaxFallfloat crossblockMaxDisconst struct FVector& hitpointconst struct FRotator& MoveDirfloat ArrivalHeight);// sub_BA52A0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.OnWeaponInspectionPressed
	// (Final, Native, Public)
	void OnWeaponInspectionPressed();// sub_BA5280()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.OnWeaponChanged
	// (Event, Protected, BlueprintEvent)
	void OnWeaponChanged();// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.OnUserQualitySettingChanged
	// (Final, Native, Public)
	void OnUserQualitySettingChanged(int renderlevel);// sub_BA5200()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.OnUnEquipWeapon
	// (Event, Public, BlueprintEvent)
	void OnUnEquipWeapon();// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.OnThrowableDetachedFromHand
	// (Final, Native, Public, BlueprintCallable)
	void OnThrowableDetachedFromHand();// sub_BA51E0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.OnStopFreeCamera
	// (Event, Public, BlueprintEvent)
	void OnStopFreeCamera();// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.OnStopFire
	// (Event, Public, BlueprintEvent)
	void OnStopFire();// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.OnStateLeave
	// (Final, Native, Public)
	void OnStateLeave(EPawnState EnteredState);// sub_BA5160()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.OnStateEnter
	// (Final, Native, Public)
	void OnStateEnter(EPawnState EnteredState);// sub_BA50E0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.OnStartVault
	// (Final, Native, Public)
	void OnStartVault();// sub_BA50C0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.OnStartJumpOrVault
	// (Final, Native, Public)
	void OnStartJumpOrVault();// sub_BA50A0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.OnStartJump
	// (Final, Native, Public)
	void OnStartJump();// sub_BA5080()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.OnStartFreeCamera
	// (Event, Public, BlueprintEvent)
	void OnStartFreeCamera();// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.OnStartFire
	// (Event, Public, BlueprintEvent)
	void OnStartFire(EGunFireMode isAuto);// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.OnShowName
	// (Event, Public, BlueprintEvent)
	void OnShowName(unsigned char _IsShowconst struct FString& _Name);// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.OnShowDynamicCrosshair
	// (Event, Public, BlueprintEvent)
	void OnShowDynamicCrosshair(unsigned char bShow);// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.OnRep_VehicleSeatIdx
	// (Final, Native, Protected)
	void OnRep_VehicleSeatIdx();// sub_BA5060()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.OnRep_ThrowGrenadeMode
	// (Final, Native, Public)
	void OnRep_ThrowGrenadeMode();// sub_3170E0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.OnRep_StatusChanged
	// (Final, Native, Protected)
	void OnRep_StatusChanged(TEnumAsByte<ECharacterHealthStatus> prevStatus);// sub_BA4FE0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.OnRep_PoseStateNotify
	// (Final, Native, Public)
	void OnRep_PoseStateNotify(TEnumAsByte<ESTEPoseState> LastState);// sub_BA4F60()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.OnRep_PlayerKey
	// (Final, Native, Private)
	void OnRep_PlayerKey();// sub_BA4F40()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.OnRep_PeekHasCollision
	// (Final, Native, Public)
	void OnRep_PeekHasCollision();// sub_BA4F20()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.OnRep_ParseEmoteSlotNames
	// (Final, Native, Public)
	void OnRep_ParseEmoteSlotNames();// sub_3170E0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.OnRep_MoneyNotify
	// (Final, Native, Public)
	void OnRep_MoneyNotify();// sub_BA4F00()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.OnRep_KillTipsNotify
	// (Final, Native, Public)
	void OnRep_KillTipsNotify();// sub_3170E0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.OnRep_IsRescueingOtherStatusChange
	// (Final, Native, Public)
	void OnRep_IsRescueingOtherStatusChange();// sub_BA4EE0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.OnRep_IsFPPChanged
	// (Final, Native, Public, BlueprintCallable)
	void OnRep_IsFPPChanged();// sub_BA4EC0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.OnRep_IsBeingRescuedStatusChange
	// (Final, Native, Public)
	void OnRep_IsBeingRescuedStatusChange();// sub_BA4EA0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.OnRep_HealthPredict
	// (Final, Native, Protected)
	void OnRep_HealthPredict();// sub_BA4E80()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.OnRep_Health
	// (Final, Native, Protected)
	void OnRep_Health();// sub_BA4E60()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.OnRep_HandFolderRatio
	// (Final, Native, Public)
	void OnRep_HandFolderRatio();// sub_BA4E40()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.OnRep_FollowState
	// (Final, Native, Public)
	void OnRep_FollowState();// sub_BA4E20()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.OnRep_EnergyChange
	// (Final, Native, Public)
	void OnRep_EnergyChange();// sub_BA4E00()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.OnRep_CurrentWeaponZoomLevel
	// (Final, Native, Public)
	void OnRep_CurrentWeaponZoomLevel();// sub_BA4DE0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.OnRep_CurrentVehicle
	// (Final, Native, Public)
	void OnRep_CurrentVehicle(class ASTExtraVehicleBase* LastVehicle);// sub_BA4D60()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.OnRep_CurrentStates
	// (Final, Native, Private)
	void OnRep_CurrentStates(int prevStates);// sub_BA4CE0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.OnRep_CurrentReticleShapeIndex
	// (Final, Native, Private)
	void OnRep_CurrentReticleShapeIndex();// sub_3170E0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.OnRep_CurrentReticleBrightness
	// (Final, Native, Private)
	void OnRep_CurrentReticleBrightness();// sub_BA4CC0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.OnRep_ChangeHoldingAngled
	// (Final, Native, Public)
	void OnRep_ChangeHoldingAngled(unsigned char PrevHoldingAngled);// sub_BA4C30()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.OnRep_BreathAmmountChange
	// (Final, Native, Public)
	void OnRep_BreathAmmountChange();// sub_BA4C10()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.OnRep_AKEventNotify
	// (Final, Native, Public)
	void OnRep_AKEventNotify();// sub_BA4B60()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.OnRep_AimOffsets
	// (Final, Native, Protected)
	void OnRep_AimOffsets(const struct FVector_NetQuantizeNormal& PrevAimOffsets);// sub_BA4B80()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.OnReconnect
	// (Final, Native, Public, BlueprintCallable)
	void OnReconnect();// sub_BA4B40()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.OnPoseStateChange
	// (Event, Public, BlueprintEvent)
	void OnPoseStateChange(TEnumAsByte<ESTEPoseState> LastStateTEnumAsByte<ESTEPoseState> CurState);// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.OnParachutingLeaderChange
	// (Final, Native, Public)
	void OnParachutingLeaderChange();// sub_BA4B20()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.OnOffHitState
	// (Final, Native, Public)
	void OnOffHitState();// sub_BA4B00()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.OnOffAttackState
	// (Final, Native, Public)
	void OnOffAttackState();// sub_BA4AE0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.OnNotifyHurt
	// (Event, Public, BlueprintEvent)
	void OnNotifyHurt();// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.OnNotifyDeath
	// (Final, Native, Public, HasOutParms, HasDefaults)
	void OnNotifyDeath(class ASTExtraBaseCharacter* DeadCharacterclass AController* Killerclass AActor* DamageCauserconst struct FHitResult& KillingHitInfoconst struct FVector& KillingHitImpulseDirclass UDamageType* KillingHitDamageType);// sub_BA48E0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.OnMatchHasEnded
	// (Final, Native, Private)
	void OnMatchHasEnded(const struct FName& NewMatchState);// sub_BA4860()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.OnHoldAngledReleased
	// (Final, Native, Public)
	void OnHoldAngledReleased();// sub_BA4840()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.OnHoldAngledPressed
	// (Final, Native, Public)
	void OnHoldAngledPressed();// sub_BA4820()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.OnFollowStateChange
	// (Final, Native, Public)
	void OnFollowStateChange();// sub_BA4800()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.OnEquipWeapon
	// (Event, Public, BlueprintEvent)
	void OnEquipWeapon();// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.OnCurEquipedShootWeaponChangeState
	// (Final, Native, Public)
	void OnCurEquipedShootWeaponChangeState(TEnumAsByte<EFreshWeaponStateType> State);// sub_BA4780()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.OnBPMoneyChange
	// (Event, Protected, BlueprintEvent)
	void OnBPMoneyChange();// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.OnBPHealthChange
	// (Event, Protected, BlueprintEvent)
	void OnBPHealthChange();// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.OnBlockingWidgetOpened
	// (Final, Native, Public)
	void OnBlockingWidgetOpened(class UWidget* Widget);// sub_BA4700()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.OnBeforeGetUp
	// (Event, Public, BlueprintEvent)
	void OnBeforeGetUp();// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.OnAimingStateChange
	// (Final, Native, Public)
	void OnAimingStateChange(EAimingType AimingType);// sub_BA4680()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.OnActorHitHandle
	// (Final, Native, Private, HasOutParms, HasDefaults)
	void OnActorHitHandle(class AActor* SelfActorclass AActor* OtherActorconst struct FVector& NormalImpulseconst struct FHitResult& Hit);// sub_BA44E0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.NM_SetPeekState
	// (Net, NetReliable, Native, Event, NetMulticast, Public)
	void NM_SetPeekState(unsigned char Enableunsigned char IsLeft);// sub_BA4120()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.NetMulticastSetLeaveVehicleLocation
	// (Net, NetReliable, Native, Event, NetMulticast, Public, HasDefaults)
	void NetMulticastSetLeaveVehicleLocation(const struct FVector& LeaveLocation);// sub_BA4450()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.NetMulti_StopWeaponInspection_CP
	// (Net, NetReliable, Native, Event, NetMulticast, Public)
	void NetMulti_StopWeaponInspection_CP();// sub_BA4430()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.NetMulti_StopVault
	// (Net, NetReliable, Native, Event, NetMulticast, Public)
	void NetMulti_StopVault(unsigned char bIsForward);// sub_390BB0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.NetMulti_StartWeaponInspection_CP
	// (Net, NetReliable, Native, Event, NetMulticast, Public)
	void NetMulti_StartWeaponInspection_CP();// sub_BA4410()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.NetMulti_HandleVault_CP
	// (Net, NetReliable, Native, Event, NetMulticast, Public, NetValidate)
	void NetMulti_HandleVault_CP(const struct FVaultingTask& InVaultTask);// sub_BA4310()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.NeedWeaponReplacement
	// (Final, Native, Public, BlueprintCallable, BlueprintPure)
	unsigned char NeedWeaponReplacement(TEnumAsByte<EWeaponSlotType> InSlotType);// sub_BA4280()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.NeedAvatarReplacement
	// (Final, Native, Public, BlueprintCallable, BlueprintPure)
	unsigned char NeedAvatarReplacement(EAvatarSlotType InSlotType);// sub_BA41F0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.MulticastStartPlayEmote
	// (Net, Native, Event, NetMulticast, Public, NetValidate)
	void MulticastStartPlayEmote(int EmoteID);// sub_BA4060()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.MulticastInteruptPlayEmoteOnServer
	// (Net, Native, Event, NetMulticast, Public, NetValidate)
	void MulticastInteruptPlayEmoteOnServer(int EmoteID);// sub_BA3FA0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.MulticastInteruptPlayEmote
	// (Net, Native, Event, NetMulticast, Public, NetValidate)
	void MulticastInteruptPlayEmote(int EmoteID);// sub_BA3EE0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.MeleeServer
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void MeleeServer();// sub_BA3E90()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.MeleeReleased
	// (Final, Native, Public, BlueprintCallable)
	void MeleeReleased();// sub_BA3E70()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.MeleeLocal
	// (Event, Public, BlueprintEvent)
	void MeleeLocal();// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.MeleeBroadcastOtherClients
	// (Net, NetReliable, Native, Event, NetMulticast, Public, NetValidate)
	void MeleeBroadcastOtherClients();// sub_BA3E20()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.Melee
	// (Final, Native, Public, BlueprintCallable)
	void Melee(unsigned char IsForCE);// sub_BA3D90()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.LogWeaponsDataInWeaponManagerAndBackpack
	// (Final, Native, Public, BlueprintCallable)
	void LogWeaponsDataInWeaponManagerAndBackpack();// sub_BA3D70()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.LocalUnEquipWeapon
	// (Final, Native, Public, BlueprintCallable)
	void LocalUnEquipWeapon(class ASTExtraWeapon* Weapon);// sub_BA3CF0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.LocalSwitchPersonPerspective
	// (Final, Native, Public, BlueprintCallable)
	unsigned char LocalSwitchPersonPerspective(unsigned char IsNewFPP);// sub_BA3C60()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.LocalStartPlayEmote
	// (Final, Native, Public)
	unsigned char LocalStartPlayEmote(int EmoteID);// sub_BA3BD0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.LocalMagazineDrop
	// (Final, Native, Public, BlueprintCallable)
	void LocalMagazineDrop(class USkeletalMeshComponent* PawnMesh);// sub_BA3B50()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.LocalInteruptPlayEmote
	// (Final, Native, Public)
	unsigned char LocalInteruptPlayEmote(int EmoteID);// sub_BA3AC0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.LocalEquipWeapon
	// (Final, Native, Public, BlueprintCallable)
	void LocalEquipWeapon(class ASTExtraWeapon* Weapon);// sub_BA3A40()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.LocalDoorInteraction
	// (Final, Native, Public, BlueprintCallable)
	void LocalDoorInteraction();// sub_BA3A20()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.LeaveState
	// (Final, Native, Public, BlueprintCallable)
	void LeaveState(EPawnState State);// sub_BA39A0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.LeaveServerState
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void LeaveServerState(EPawnState State);// sub_BA38F0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.IsVaultingDebugEnabled
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char IsVaultingDebugEnabled();// sub_3ADE80()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.IsVaulting
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char IsVaulting();// sub_BA38C0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.IsVaultCancelled
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char IsVaultCancelled();// sub_BA3890()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.IsUsingGrenade
	// (Final, Native, Public, BlueprintCallable, BlueprintPure)
	unsigned char IsUsingGrenade();// sub_BA3860()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.IsUsingFreeCamera
	// (Final, Native, Public, BlueprintCallable, BlueprintPure)
	unsigned char IsUsingFreeCamera();// sub_BA3830()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.IsUpperCollision
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char IsUpperCollision();// sub_BA3800()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.IsUnderwater
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char IsUnderwater();// sub_BA37D0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.IsTargeting
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char IsTargeting();// sub_BA37A0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.IsSkillFinalPhase
	// (Final, Native, Public, BlueprintCallable, BlueprintPure)
	unsigned char IsSkillFinalPhase();// sub_BA3770()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.IsScoping
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char IsScoping();// sub_BA3740()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.IsSameTeamWithPlayerState
	// (Final, Native, Public)
	unsigned char IsSameTeamWithPlayerState(class APlayerState* otherPS);// sub_BA36B0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.IsSameTeam
	// (Final, Native, Public)
	unsigned char IsSameTeam(class APawn* Other);// sub_BA3620()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.IsRecoilDebugEnabled
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char IsRecoilDebugEnabled();// sub_3ADE80()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.IsProneMove
	// (Final, Native, Public, BlueprintCallable, BlueprintPure)
	unsigned char IsProneMove();// sub_BA35F0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.IsPreesedWalking
	// (Final, Native, Public, BlueprintCallable)
	unsigned char IsPreesedWalking();// sub_BA35C0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.IsPreesedSprinting
	// (Final, Native, Public, BlueprintCallable)
	unsigned char IsPreesedSprinting();// sub_BA3590()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.IsOnVehicle
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char IsOnVehicle();// sub_BA3490()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.IsNowUpWater
	// (Final, Native, Public, BlueprintCallable, BlueprintPure)
	unsigned char IsNowUpWater();// sub_BA3460()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.IsNearDeath
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char IsNearDeath();// sub_BA3430()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.IsMagazineHandAttached
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char IsMagazineHandAttached(class USkeletalMeshComponent* PawnMesh);// sub_BA33A0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.IsMagazineGunAttached
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char IsMagazineGunAttached(class USkeletalMeshComponent* WeapMesh);// sub_BA33A0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.IsLookingThroughScope
	// (Final, Native, Public, BlueprintCallable, BlueprintPure)
	unsigned char IsLookingThroughScope();// sub_BA3370()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.IsLookingBrightAdjustableReticle
	// (Final, Native, Public, BlueprintCallable, BlueprintPure)
	unsigned char IsLookingBrightAdjustableReticle();// sub_BA3340()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.IsLocalViewed
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char IsLocalViewed();// sub_BA3310()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.IsInFlyingTeam
	// (Final, Native, Public, BlueprintCallable, BlueprintPure)
	unsigned char IsInFlyingTeam();// sub_BA32E0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.IsInEditor
	// (Final, Native, Public, BlueprintCallable, BlueprintPure)
	unsigned char IsInEditor();// sub_3ADE80()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.IsInConsumableUsingState
	// (Final, Native, Public, BlueprintCallable)
	unsigned char IsInConsumableUsingState();// sub_BA32B0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.IsHoldingAngled
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char IsHoldingAngled();// sub_BA3280()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.IsHealthyAlive
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char IsHealthyAlive();// sub_BA3250()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.IsHandleInFold
	// (Final, Native, Public, BlueprintCallable)
	unsigned char IsHandleInFold();// sub_BA3220()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.IsGroggying
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char IsGroggying();// sub_BA31F0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.IsForceRotation
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char IsForceRotation();// sub_BA31C0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.IsFloating
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char IsFloating();// sub_BA3190()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.IsFirstPerson
	// (Final, Native, Public, BlueprintCallable)
	unsigned char IsFirstPerson();// sub_BA3160()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.IsFallingFromHighAltitude
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char IsFallingFromHighAltitude();// sub_BA3130()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.IsDeathPlayViewTarget
	// (Final, Native, Public, BlueprintCallable)
	unsigned char IsDeathPlayViewTarget();// sub_BA3100()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.IsCharacterSprinting
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char IsCharacterSprinting();// sub_BA30D0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.IsCarePackageCommingForMe
	// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	void IsCarePackageCommingForMe(unsigned char* bCarePackageunsigned char* bCustomPackageItem);// sub_BA2FF0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.IsCanCrouchSwimController
	// (Event, Public, BlueprintEvent)
	unsigned char IsCanCrouchSwimController();// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.IsBoxItem
	// (Final, Native, Public, BlueprintCallable)
	unsigned char IsBoxItem(float InValidAngle);// sub_BA2F60()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.IsAllowScopeIn
	// (Final, Native, Public, BlueprintCallable)
	unsigned char IsAllowScopeIn();// sub_BA2F30()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.IsAlive
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char IsAlive();// sub_BA2F00()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.IsAbleGrenadeByType
	// (Final, Native, Public, BlueprintCallable, BlueprintPure)
	unsigned char IsAbleGrenadeByType(EGrenadeType grenadeType);// sub_BA2E70()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.IsAbleFragGrenade
	// (Final, Native, Public, BlueprintCallable, BlueprintPure)
	unsigned char IsAbleFragGrenade();// sub_BA2E40()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.InviteTeammate
	// (Final, Native, Public, BlueprintCallable)
	void InviteTeammate(TArray<struct FString> Names);// sub_BA2CE0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.InterruptCurrentEmote
	// (Final, Native, Public, BlueprintCallable)
	void InterruptCurrentEmote();// sub_BA2CC0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.InterruptConsumeableByVehicleAction
	// (Final, Native, Public)
	void InterruptConsumeableByVehicleAction();// sub_BA2CA0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.InsertDelayStateRelation
	// (Final, Native, Public, BlueprintCallable)
	void InsertDelayStateRelation(EPawnState OldStateEPawnState NewState);// sub_BA2BE0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.InitBodyBoneMap
	// (Native, Public, BlueprintCallable)
	void InitBodyBoneMap();// sub_BA2BC0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.HidePlayerMagOnGunReload
	// (Final, Native, Public, BlueprintCallable)
	void HidePlayerMagOnGunReload();// sub_BA2BA0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.HasState
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char HasState(EPawnState State);// sub_BA2B10()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.HasScopeAttachment
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char HasScopeAttachment(EScopeType ScopeType);// sub_BA2A80()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.HasFlaregun
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char HasFlaregun();// sub_BA2A50()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.HasBuff
	// (Native, Public, BlueprintCallable)
	unsigned char HasBuff(const struct FName& BuffName);// sub_BA29B0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.HasActiveScopeType
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char HasActiveScopeType(EScopeType ScopeType);// sub_BA2920()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.HandleWeaponOnShoot
	// (Final, Native, Public)
	void HandleWeaponOnShoot();// sub_BA2900()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.HandleVaultEnd_CP
	// (Native, Event, Public, HasDefaults, BlueprintEvent)
	void HandleVaultEnd_CP(const struct FVector& InVaultEndVelocity);// sub_BA2870()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.HandlePlayOperateItemSoundOnServer
	// (Final, Native, Public, BlueprintCallable)
	void HandlePlayOperateItemSoundOnServer(const struct FString& BankNameconst struct FString& SoundNameunsigned char Multicast);// sub_BA2530()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.HandlePlayerPoseChanged
	// (Final, Native, Public)
	void HandlePlayerPoseChanged(TEnumAsByte<ESTEPoseState> LastPoseTEnumAsByte<ESTEPoseState> NewPose);// sub_BA27B0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.HandlePlayerPickUpActor
	// (Final, Native, Public)
	void HandlePlayerPickUpActor(class AActor* WrapperActorfloat TargetZLoc);// sub_BA26E0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.HandleOnCharAnimLoadingFinished
	// (Final, Native, Public)
	void HandleOnCharAnimLoadingFinished();// sub_BA2510()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.HandleConsumeItemSkillBreak
	// (Final, Native, Public)
	void HandleConsumeItemSkillBreak();// sub_BA24F0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.HandleAutoSwitchWeaponDelay
	// (Final, Native, Public)
	void HandleAutoSwitchWeaponDelay();// sub_BA24D0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GrenadeBackToWeaponServerCall
	// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
	void GrenadeBackToWeaponServerCall();// sub_BA2480()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GMShowName
	// (Final, Native, Public, BlueprintCallable)
	void GMShowName();// sub_3170E0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetWeaponSlot
	// (Final, Native, Public, BlueprintCallable, BlueprintPure)
	ESurviveWeaponPropSlot GetWeaponSlot();// sub_BA2450()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetWeaponManager
	// (Final, Native, Public, BlueprintCallable)
	class UWeaponManagerComponent* GetWeaponManager();// sub_BA2420()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetWeaponInertiaRecoil
	// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	struct FRotator GetWeaponInertiaRecoil();// sub_BA23E0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetWeaponInertia
	// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	struct FRotator GetWeaponInertia();// sub_BA23A0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetWeaponGunCollisionAlpha
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetWeaponGunCollisionAlpha();// sub_BA2370()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetViewRotation
	// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	struct FRotator GetViewRotation();// sub_BA2330()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetVehicleSeatInteraction
	// (Final, Native, Public, BlueprintCallable)
	class UVehicleSeatInteractionComponent* GetVehicleSeatInteraction();// sub_BA2300()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetVehiclePawn
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	class APawn* GetVehiclePawn();// sub_BA22D0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetVaultTimer
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetVaultTimer();// sub_BA21E0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetVaultingDirection
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetVaultingDirection();// sub_BA22A0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetVaultingDebugType
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	int GetVaultingDebugType();// sub_442210()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetVaultingDataByEnum
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	class UVaultingData* GetVaultingDataByEnum(EVaultAnimType InVaultType);// sub_BA2210()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetValueLimitForHealthPredict
	// (Final, Native, Public, BlueprintCallable)
	float GetValueLimitForHealthPredict();// sub_BA21B0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetTslPlayerStateSafety
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	class ATslLPCPlayerState* GetTslPlayerStateSafety();// sub_BA2180()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetToggleFiringModeAnimTypeByFireMode
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	ECharacterAnimType GetToggleFiringModeAnimTypeByFireMode(EGunFireMode FireMode);// sub_BA20F0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetThrowGrenadeMode
	// (Final, Native, Public, BlueprintCallable)
	TEnumAsByte<EThrowGrenadeMode> GetThrowGrenadeMode();// sub_BA20D0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetThirdPersonSpringArm
	// (Event, Public, BlueprintEvent)
	class USpringArmComponent* GetThirdPersonSpringArm();// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetThirdPersonCamera
	// (Event, Public, BlueprintEvent)
	class UCameraComponent* GetThirdPersonCamera();// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetTeamMateIndex
	// (Final, Native, Public, BlueprintCallable)
	int GetTeamMateIndex(class ASTExtraBaseCharacter* Teammate);// sub_BA2040()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetSpectatedCount
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	int GetSpectatedCount();// sub_BA2020()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetShootWeaponNameByWeapon
	// (Event, Protected, BlueprintEvent)
	struct FString GetShootWeaponNameByWeapon(int ItemDefineID);// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetServerVaultFinished
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char GetServerVaultFinished();// sub_BA1FF0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetSeatSpecialType
	// (Final, Native, Public, BlueprintCallable)
	EVHSeatSpecialType GetSeatSpecialType();// sub_BA1FC0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetReloadingRemainAmmo
	// (Final, Native, Public, BlueprintCallable, BlueprintPure)
	int GetReloadingRemainAmmo();// sub_BA1F90()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetRandomPutDownLocation
	// (Final, Native, Public, HasDefaults, BlueprintCallable)
	struct FVector GetRandomPutDownLocation(float OverrideFindPutDownPointZThreshold);// sub_BA1EF0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetPlayerWeaponFireMode
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	EGunFireMode GetPlayerWeaponFireMode();// sub_BA1EC0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetPlayerWeaponEquipSlot
	// (Final, Native, Public)
	ESurviveWeaponPropSlot GetPlayerWeaponEquipSlot();// sub_BA1E90()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetPlayerVehAnimParam
	// (Native, Public, BlueprintCallable)
	struct FAnimVehParamList GetPlayerVehAnimParam(float DeltaTime);// sub_BA1DA0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetPlayerVehAnimation
	// (Final, Native, Public, BlueprintCallable)
	struct FPlayerVehAnimList GetPlayerVehAnimation();// sub_BA1E40()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetPlayerTeamIndex
	// (Final, Native, Public, BlueprintCallable)
	int GetPlayerTeamIndex();// sub_BA1D70()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetPlayerStateSafety
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	class ASTExtraPlayerState* GetPlayerStateSafety();// sub_BA1D40()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetPlayerNameSafety
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	struct FString GetPlayerNameSafety();// sub_BA1CC0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetPlayerJumpType
	// (Final, Native, Public)
	TEnumAsByte<ECharacterJumpType> GetPlayerJumpType();// sub_BA1C90()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetPlayerControllerSafety
	// (Native, Public, BlueprintCallable, BlueprintPure, Const)
	class ASTExtraPlayerController* GetPlayerControllerSafety();// sub_6D24E0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetPlayerControllerInDeathReplay
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	class ASTExtraPlayerController* GetPlayerControllerInDeathReplay();// sub_BA1C60()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetPlayerAnimParam
	// (Native, Public, BlueprintCallable)
	struct FAnimParamList GetPlayerAnimParam(float DeltaTime);// sub_BA1A50()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetPlayerAnimationByEventType
	// (Final, Native, Public, BlueprintCallable)
	struct FPlayerAnimData GetPlayerAnimationByEventType(TEnumAsByte<ECharAnimEventType> AnimEventType);// sub_BA1BD0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetPlayerAnimation
	// (Final, Native, Public, BlueprintCallable)
	struct FPlayerAnimList GetPlayerAnimation();// sub_BA1AF0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetObjectCanInteract
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	TScriptInterface<class UInteractionInterface> GetObjectCanInteract();// sub_BA1A10()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetNextGrenadeType
	// (Final, Native, Public, BlueprintCallable, BlueprintPure)
	EGrenadeType GetNextGrenadeType(EGrenadeType grenadeType);// sub_BA1980()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetLeanRightAlpha
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetLeanRightAlpha();// sub_BA1950()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetLeanLeftAlpha
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetLeanLeftAlpha();// sub_BA1920()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetLatestInviter
	// (Final, Native, Public, BlueprintCallable, BlueprintPure)
	class ASTExtraBaseCharacter* GetLatestInviter();// sub_BA18F0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetLastMoveRotation
	// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	struct FRotator GetLastMoveRotation();// sub_BA18B0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetIsPlayingEmote
	// (Final, Native, Public, BlueprintCallable)
	unsigned char GetIsPlayingEmote();// sub_BA1890()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetInteractionString
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	struct FString GetInteractionString();// sub_BA1810()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetInteractableGroundItem
	// (Final, Native, Public, BlueprintCallable)
	struct FSearchedPickUpItemResult GetInteractableGroundItem(float InValidAngle);// sub_BA16C0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetHitBoxByState
	// (Final, Native, Public, BlueprintCallable)
	class UPrimitiveComponent* GetHitBoxByState(EPawnState InPoseState);// sub_BA1630()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetHitBodyTypeByHitPos
	// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	EAvatarDamagePosition GetHitBodyTypeByHitPos(const struct FVector& InHitPos);// sub_BA1590()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetHitBodyTypeByBoneName
	// (Native, Public, BlueprintCallable)
	EAvatarDamagePosition GetHitBodyTypeByBoneName(const struct FString& InBoneName);// sub_BA14E0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetHitBodyType
	// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	EAvatarDamagePosition GetHitBodyType(const struct FVector& InHitPosconst struct FString& InBoneName);// sub_BA13E0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetHeadLocation
	// (Final, Native, Public, HasDefaults, BlueprintCallable)
	struct FVector GetHeadLocation(unsigned char bUseHeadBone);// sub_BA1330()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetGrenadeTypeByItemID
	// (Final, Native, Public, BlueprintCallable, BlueprintPure)
	EGrenadeType GetGrenadeTypeByItemID(int ItemID);// sub_BA12A0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetGrenadeNameByGrenadeType
	// (Event, Public, BlueprintEvent)
	struct FString GetGrenadeNameByGrenadeType(EGrenadeType grenadeType);// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetGrenadeList
	// (Final, Native, Public, BlueprintCallable, BlueprintPure)
	TArray<struct FBattleItemData> GetGrenadeList();// sub_BA11C0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetGrenadeBattleDataByGrenadeType
	// (Final, Native, Public, BlueprintCallable, BlueprintPure)
	struct FBattleItemData GetGrenadeBattleDataByGrenadeType(EGrenadeType grenadeType);// sub_BA1110()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetFollowerLocOffset
	// (Final, Native, Public, HasDefaults)
	struct FVector GetFollowerLocOffset(class ASTExtraBaseCharacter* follower);// sub_BA1070()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetFollowerLoc
	// (Final, Native, Public, HasDefaults)
	struct FVector GetFollowerLoc(class ASTExtraBaseCharacter* follower);// sub_BA0FD0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetFlaregunAmmoCount
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	int GetFlaregunAmmoCount();// sub_BA0FA0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetFirstPersonSpringArm
	// (Event, Public, BlueprintEvent)
	class USpringArmComponent* GetFirstPersonSpringArm();// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetFirstPersonCamera
	// (Event, Public, BlueprintEvent)
	class UCameraComponent* GetFirstPersonCamera();// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetDynamicCrosshairHidden
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char GetDynamicCrosshairHidden();// sub_BA0F70()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetDesiredInput
	// (Final, Native, Public, HasDefaults, Const)
	struct FVector2D GetDesiredInput();// sub_BA0F40()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetCurrentWeapon
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	class ASTExtraWeapon* GetCurrentWeapon();// sub_BA0F10()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetCurrentWaterSurfaceZ
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetCurrentWaterSurfaceZ();// sub_BA0EE0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetCurrentVehicle
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	class ASTExtraVehicleBase* GetCurrentVehicle();// sub_BA0EC0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetCurrentSway
	// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	struct FRotator GetCurrentSway();// sub_BA0E80()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetCurrentSkillName
	// (Final, Native, Public, BlueprintCallable)
	struct FString GetCurrentSkillName();// sub_BA0E00()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetCurrentShootWeapon
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	class ASTExtraShootWeapon* GetCurrentShootWeapon();// sub_BA0DD0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetCurrentReticleShapeIndex
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	int GetCurrentReticleShapeIndex(EScopeType ScopeType);// sub_BA0D40()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetCurrentReticleBrightness
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetCurrentReticleBrightness();// sub_BA0D10()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetCurrentNextGrenadeType
	// (Final, Native, Public, BlueprintCallable, BlueprintPure)
	EGrenadeType GetCurrentNextGrenadeType();// sub_BA0CE0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetCurrentMagazineMesh
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	class UStaticMesh* GetCurrentMagazineMesh();// sub_BA0CB0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetCurrentMagazineLocation
	// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	struct FTransform GetCurrentMagazineLocation();// sub_BA0C50()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetCurrentHeightFromWaterFloor
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetCurrentHeightFromWaterFloor();// sub_BA0C20()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetCurrentGrenadeType
	// (Final, Native, Public, BlueprintCallable, BlueprintPure)
	EGrenadeType GetCurrentGrenadeType();// sub_BA0BF0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetCurHitPartJugementType
	// (Final, Native, Public)
	TEnumAsByte<EHitPartJugementType> GetCurHitPartJugementType();// sub_BA0BC0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetComponentCanInteract
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	TScriptInterface<class UInteractionInterface> GetComponentCanInteract();// sub_BA0B80()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetCharacterXYPlaneVelocity
	// (Final, Native, Public, BlueprintCallable, BlueprintPure)
	float GetCharacterXYPlaneVelocity();// sub_BA0B50()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetCharacterEnergy
	// (Final, Native, Public, BlueprintCallable)
	struct FCharacterEnergyData GetCharacterEnergy();// sub_BA0A30()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetCharacterAttributeValue
	// (Final, Native, Public, BlueprintCallable)
	float GetCharacterAttributeValue(const struct FString& AttrName);// sub_BA0940()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetBreatheComponent
	// (Final, Native, Public, BlueprintCallable)
	class UTslBreatheComp* GetBreatheComponent();// sub_BA0910()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetAimStateAlpha
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetAimStateAlpha();// sub_BA08B0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetAimOffsets
	// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	struct FRotator GetAimOffsets();// sub_BA0870()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetAimingComponent
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	class UAimingComp* GetAimingComponent();// sub_BA08E0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetActorLocationInServer
	// (Final, Native, Public, HasDefaults, Const)
	struct FVector GetActorLocationInServer();// sub_BA0830()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetActorCanInteract
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	class AActor* GetActorCanInteract();// sub_BA0800()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.GetActiveSpringArm
	// (Native, Event, Public, BlueprintEvent)
	class USpringArmComponent* GetActiveSpringArm();// sub_BA07D0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.ForcePlayerUpdateAnimation
	// (Final, Native, Public, BlueprintCallable)
	void ForcePlayerUpdateAnimation();// sub_BA07B0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.FollowTeammate
	// (Final, Native, Public, BlueprintCallable)
	void FollowTeammate(const struct FString& Name);// sub_BA06D0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.FillPlayerAnimRate
	// (Final, Native, Public, HasOutParms, Const)
	void FillPlayerAnimRate(struct FPlayerAnimList* InAnimList);// sub_BA0610()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.ExtractDamageParams
	// (Final, Native, Public, HasOutParms)
	int ExtractDamageParams(const struct FDamageEvent& DamageEventclass AActor* DamagetCauserint* DamageType);// sub_BA04D0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.ExecFollowTeammate
	// (Final, Exec, Native, Public)
	void ExecFollowTeammate(const struct FString& Name);// sub_BA03F0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.EquipWeaponFinish
	// (Final, Native, Public)
	void EquipWeaponFinish();// sub_3170E0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.EquipWeapon
	// (Final, Native, Public)
	void EquipWeapon(ESurviveWeaponPropSlot Slotunsigned char bSwitchWeapon);// sub_BA0320()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.EnterState
	// (Final, Native, Public, BlueprintCallable)
	unsigned char EnterState(EPawnState State);// sub_BA0290()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.EnterServerState
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void EnterServerState(EPawnState State);// sub_BA01E0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.EndCurrentEmote
	// (Final, Native, Public, BlueprintCallable)
	void EndCurrentEmote(int EmoteIndex);// sub_BA0160()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.EnableCurrentWeaponInfiniteBullets
	// (Final, Native, Public, BlueprintCallable)
	void EnableCurrentWeaponInfiniteBullets(unsigned char bEnable);// sub_BA00D0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.DoDoorInteractNetwork
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void DoDoorInteractNetwork(class APUBGDoor* Doorunsigned char IsExtraDoor);// sub_B9FFD0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.DoDoorInteractAction
	// (Event, Public, BlueprintEvent)
	unsigned char DoDoorInteractAction();// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.DisappearOnDeath
	// (Final, Native, Private)
	void DisappearOnDeath();// sub_B9FFB0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.DisableSprintingAuto
	// (Final, Native, Public, BlueprintCallable)
	void DisableSprintingAuto();// sub_B9FF90()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.DettachWeapon
	// (Final, Native, Public)
	void DettachWeapon();// sub_3170E0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.DestroyWeaponOnServerByPropSlot
	// (Final, Native, Public, BlueprintCallable)
	unsigned char DestroyWeaponOnServerByPropSlot(ESurviveWeaponPropSlot Slotunsigned char bEnableBroadcast);// sub_B9FEC0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.DestroyWeaponOnServer
	// (Final, Native, Public, BlueprintCallable)
	unsigned char DestroyWeaponOnServer(const struct FName& LogicSocketunsigned char bEnableBroadcast);// sub_B9FE00()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.DestroyWeaponInventoryOnServer
	// (Final, Native, Public, BlueprintCallable)
	void DestroyWeaponInventoryOnServer();// sub_B9FDE0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.DestroyGrenadeAndSwitchBackToPreviousWeaponOnServer
	// (Final, Native, Public, BlueprintCallable)
	void DestroyGrenadeAndSwitchBackToPreviousWeaponOnServer();// sub_B9FDC0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.DelayMoveEnd
	// (Final, Native, Protected)
	void DelayMoveEnd();// sub_B9FDA0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.DelayMove
	// (Final, Native, Public, BlueprintCallable)
	void DelayMove(float Time);// sub_B9FD20()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.DelayCustomDepth
	// (Final, Native, Public, BlueprintCallable)
	void DelayCustomDepth(float Time);// sub_B9FCA0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.ConvertWeaponSlotToCharacterAnimType
	// (Final, Native, Public, Const)
	ECharacterAnimType ConvertWeaponSlotToCharacterAnimType(ESurviveWeaponPropSlot WeaponSlot);// sub_B9FC10()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.ConvertWeaponFireModeToWeaponAnimType
	// (Final, Native, Public, Const)
	ECharacterAnimType ConvertWeaponFireModeToWeaponAnimType(EGunFireMode FireMode);// sub_B9FB80()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.ConvertCharacterPoseStateToPoseType
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	ECharacterPoseType ConvertCharacterPoseStateToPoseType(TEnumAsByte<ESTEPoseState> InPoseState);// sub_B9FAF0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.ClientSoundPlayMulticast
	// (Net, Native, Event, NetMulticast, Public)
	void ClientSoundPlayMulticast(const struct FString& BankNameconst struct FString& SoundName);// sub_B9F840()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.ClientSomeOneResponseMe
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ClientSomeOneResponseMe(class ASTExtraBaseCharacter* BeInvitedPlayerEInviteResponceType res);// sub_B9F770()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.ClientSomeOneInviteMe
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ClientSomeOneInviteMe(class ASTExtraBaseCharacter* SomeOne);// sub_B9F6E0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.ClientOnPossessBy
	// (Net, NetReliable, Native, Event, Protected, NetClient, NetValidate)
	void ClientOnPossessBy(class AController* NewController);// sub_B9F620()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.ClientNotifyCrack
	// (Net, Native, Event, Public, NetClient)
	void ClientNotifyCrack(const struct FVector_NetQuantize& LocationRelativefloat BulletVelocity);// sub_B9F550()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.Client_StopVault
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void Client_StopVault(unsigned char bIsForward);// sub_390B20()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.Client_StopAllSound
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void Client_StopAllSound();// sub_391A70()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.Client_SetValueLimitForHealthPredict
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void Client_SetValueLimitForHealthPredict(float InValue);// sub_B9FA70()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.Client_SetHealthPredictData
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void Client_SetHealthPredictData(const struct FHealthPredictShowData& InData);// sub_B9F9D0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.Client_RemoveHealthPredictShowData
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void Client_RemoveHealthPredictShowData(const struct FString& InKey);// sub_B9F930()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.ClearOnDeath
	// (Final, Native, Protected, HasOutParms)
	void ClearOnDeath(class AController* EventInstigaterconst struct FDamageEvent& DamageEvent);// sub_B9F460()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.ClearHPUI
	// (Native, Public)
	void ClearHPUI();// sub_6CD830()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.CheckSprint
	// (Final, Native, Public, BlueprintCallable)
	void CheckSprint();// sub_B9F440()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.CheckPlayerNeedUpdateAnimation
	// (Final, Native, Public, BlueprintCallable)
	unsigned char CheckPlayerNeedUpdateAnimation();// sub_B9F410()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.CharacterMovementUpdatedCallback
	// (Final, Native, Protected, HasDefaults, BlueprintCallable)
	void CharacterMovementUpdatedCallback(float DeltaTimeconst struct FVector& OldLocationconst struct FVector& OldVelocity);// sub_B9F2F0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.ChangeReticleShapeToPrev
	// (Final, Native, Protected, BlueprintCallable)
	void ChangeReticleShapeToPrev();// sub_B9F2D0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.ChangeReticleShapeToNext
	// (Final, Native, Protected, BlueprintCallable)
	void ChangeReticleShapeToNext();// sub_B9F2B0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.CanUseItem
	// (Final, Native, Public, BlueprintCallable, BlueprintPure)
	unsigned char CanUseItem();// sub_B9F220()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.CanSwim
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char CanSwim();// sub_B9F1F0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.CanFireFlaregun
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char CanFireFlaregun();// sub_B9F1C0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.CanEnterState
	// (Final, Native, Public, BlueprintCallable)
	unsigned char CanEnterState(EPawnState NewState);// sub_B9F130()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.CancleVault
	// (Native, Event, Public, BlueprintEvent)
	void CancleVault();// sub_B9F290()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.CanChangeThrowModePC
	// (Final, Native, Public, BlueprintCallable, BlueprintPure)
	unsigned char CanChangeThrowModePC();// sub_B9F100()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.CanChangeThrowMode
	// (Final, Native, Public, BlueprintCallable)
	unsigned char CanChangeThrowMode();// sub_B9F0D0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.CancelRescue
	// (Final, Native, Public, BlueprintCallable)
	void CancelRescue();// sub_B9F270()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.CancelFollow
	// (Final, Native, Public, BlueprintCallable)
	void CancelFollow();// sub_B9F250()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.CanAimFromSeat
	// (Final, Native, Public, BlueprintCallable)
	unsigned char CanAimFromSeat();// sub_B9F0A0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.CanAdjustScopeZoomLevel
	// (Final, Native, Public, BlueprintCallable, BlueprintPure)
	unsigned char CanAdjustScopeZoomLevel();// sub_B9F070()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.BulletChange
	// (Net, NetReliable, Native, Event, NetMulticast, Public, NetValidate)
	void BulletChange();// sub_B9F020()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.BroadcastNotifyRespawnInvincible
	// (Net, NetReliable, Native, Event, NetMulticast, Public)
	void BroadcastNotifyRespawnInvincible(float DurationTime);// sub_B9EFA0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.BroadcastFatalDamageInfoWrapper
	// (Final, Native, Public)
	void BroadcastFatalDamageInfoWrapper(class AUAECharacter* causerclass AUAECharacter* VictimNameint DamageTypeint AdditionalParamunsigned char IsHeadshotint ResultHealthStatusint PreviousHealthStatusclass AUAECharacter* WhoKillMeint KillerKillCount);// sub_B9ED20()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.BroadcastFatalDamageInfo
	// (Net, Native, Event, NetMulticast, Public)
	void BroadcastFatalDamageInfo(class AUAECharacter* causerclass AUAECharacter* VictimNameint DamageTypeint AdditionalParamunsigned char IsHeadshotint ResultHealthStatusint PreviousHealthStatusclass AUAECharacter* WhoKillMeint KillerKillCount);// sub_B9EAB0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.BroadcastClientsSimulateVehicleDamage
	// (Net, Native, Event, NetMulticast, Public, NetValidate)
	void BroadcastClientsSimulateVehicleDamage(float BaseDamageconst struct FVehicleDamageEvent& VehicleDamageEventclass APawn* DamageInstigatorPawnfloat ServerCurHealthunsigned char _isFatalHealthCostunsigned char IsHeadShotDamage);// sub_B9E840()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.BroadcastClientsSimulateRadialDamage
	// (Net, NetReliable, Native, Event, NetMulticast, Public, NetValidate)
	void BroadcastClientsSimulateRadialDamage(float BaseDamageconst struct FRadialDamageEvent& PointDamageEventclass APawn* DamageInstigatorPawnfloat ServerCurHeathunsigned char _isFatalHealthCostunsigned char IsHeadShotDamage);// sub_B9E5F0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.BroadcastClientsSimulatePoisonDamage
	// (Net, Native, Event, NetMulticast, Public, NetValidate)
	void BroadcastClientsSimulatePoisonDamage(float BaseDamageconst struct FPoisonDamageEvent& PoisonDamageEventclass APawn* DamageInstigatorPawnfloat ServerCurHealthunsigned char _isFatalHealthCostunsigned char IsHeadShotDamage);// sub_B9E380()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.BroadcastClientsSimulatePointDamage
	// (Net, NetReliable, Native, Event, NetMulticast, Public, NetValidate)
	void BroadcastClientsSimulatePointDamage(float BaseDamageconst struct FSTPointDamageEvent& PointDamageEventclass APawn* DamageInstigatorPawnfloat ServerCurHeathunsigned char _isFatalHealthCostunsigned char IsHeadShotDamage);// sub_B9E110()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.BroadcastClientsSimulateMeleeDamage
	// (Net, Native, Event, NetMulticast, Public, NetValidate)
	void BroadcastClientsSimulateMeleeDamage(float BaseDamageconst struct FMeleeDamageEvent& MeleeDamageEventclass APawn* DamageInstigatorPawnfloat ServerCurHealthunsigned char _isFatalHealthCostunsigned char IsHeadShotDamage);// sub_B9DE90()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.BroadcastClientsSimulateFallingDamage
	// (Net, Native, Event, NetMulticast, Public, NetValidate)
	void BroadcastClientsSimulateFallingDamage(float BaseDamageconst struct FFallingDamageEvent& FallingDamageEventclass APawn* DamageInstigatorPawnfloat ServerCurHealthunsigned char _isFatalHealthCostunsigned char IsHeadShotDamage);// sub_B9DC10()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.BroadcastClientsSimulateDrowningDamage
	// (Net, Native, Event, NetMulticast, Public, NetValidate)
	void BroadcastClientsSimulateDrowningDamage(float BaseDamageconst struct FDrowningDamageEvent& DrowningDamageEventclass APawn* DamageInstigatorPawnfloat ServerCurHealthunsigned char _isFatalHealthCostunsigned char IsHeadShotDamage);// sub_B9D9A0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.BroadcastClientsSimulateBurningDamage
	// (Net, Native, Event, NetMulticast, Public, NetValidate)
	void BroadcastClientsSimulateBurningDamage(float BaseDamageconst struct FSTBurningDamageEvent& BurningDamageEventclass APawn* DamageInstigatorPawnfloat ServerCurHealthunsigned char _isFatalHealthCostunsigned char IsHeadShotDamage);// sub_B9D720()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.BroadcastClientsSimulateAirAttackDamage
	// (Net, Native, Event, NetMulticast, Public, NetValidate)
	void BroadcastClientsSimulateAirAttackDamage(float BaseDamageconst struct FSTAirAttackRadialDamageEvent& AirAttackDamageEventclass APawn* DamageInstigatorPawnfloat ServerCurHealthunsigned char _isFatalHealthCostunsigned char IsHeadShotDamage);// sub_B9D4D0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.BPTakeDamage
	// (Native, Event, Public, HasOutParms, BlueprintEvent)
	float BPTakeDamage(float Damageclass AController* EventInstigatorclass AActor* DamageCauserconst struct FDamageEvent& DamageEvent);// sub_B9D330()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.BPResetCharacter
	// (Event, Public, BlueprintEvent)
	void BPResetCharacter();// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.BPReceiveRadialDamage
	// (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
	void BPReceiveRadialDamage(float DamageReceivedclass UDamageType* DamageTypeconst struct FVector& Originfloat Radiusconst struct FHitResult& HitInfoclass AController* InstigatedByclass AActor* DamageCauser);// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.BPReceivePointDamage
	// (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
	void BPReceivePointDamage(float Damageclass UDamageType* DamageTypeconst struct FVector& HitLocationconst struct FVector& HitNormalclass UPrimitiveComponent* HitComponentconst struct FName& BoneNameconst struct FVector& ShotFromDirectionclass AController* InstigatedByclass AActor* DamageCauserconst struct FHitResult& HitInfo);// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.BPReceiveMeleeDamage
	// (Event, Public, BlueprintEvent)
	void BPReceiveMeleeDamage(float Damageclass UDamageType* DamageTypeclass AController* InstigatedByclass AActor* DamageCauser);// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.BPReceiveDamage
	// (Event, Public, BlueprintEvent)
	void BPReceiveDamage(float Damageclass UDamageType* DamageTypeclass AController* InstigatedByclass AActor* DamageCauser);// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.BPNotifyStartDying
	// (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
	void BPNotifyStartDying(class AController* Killerclass AActor* DamageCauserconst struct FHitResult& KillingHitInfoconst struct FVector& KillingHitImpulseDirclass UDamageType* KillingHitDamageType);// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.BPNotifyDeathEnd
	// (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
	void BPNotifyDeathEnd(class AController* Killerclass AActor* DamageCauserconst struct FHitResult& KillingHitInfoconst struct FVector& KillingHitImpulseDirclass UDamageType* KillingHitDamageType);// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.BPDie
	// (Native, Event, Public, HasOutParms, BlueprintEvent)
	void BPDie(float KillingDamageclass AController* EventInstigatorclass AActor* DamageCauserconst struct FDamageEvent& DamageEvent);// sub_B9D1C0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.BindCallbackToHUD
	// (Final, Native, Public)
	void BindCallbackToHUD();// sub_B9D4B0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.AutoScopeWhenPeek
	// (Final, Native, Public)
	void AutoScopeWhenPeek();// sub_B9D1A0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.AttachWeapon
	// (Final, Native, Public)
	void AttachWeapon();// sub_3170E0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.Anim_MagazineShow
	// (Final, Native, Public, BlueprintCallable)
	void Anim_MagazineShow(unsigned char bShowclass USkeletalMeshComponent* PawnMesh);// sub_B9D0E0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.Anim_MagazineHandAttach
	// (Final, Native, Public, BlueprintCallable)
	void Anim_MagazineHandAttach(unsigned char bAttachclass USkeletalMeshComponent* PawnMesh);// sub_B9D020()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.AllowStateCompare
	// (Final, Native, Public, BlueprintCallable)
	unsigned char AllowStateCompare(int ComparedStateEPawnState inStateunsigned char withLog);// sub_B9CF20()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.AllowState
	// (Final, Native, Public, BlueprintCallable)
	unsigned char AllowState(EPawnState Stateunsigned char withLog);// sub_B9CE50()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.AllowInteract
	// (Final, Native, Protected)
	unsigned char AllowInteract(class ASTExtraBaseCharacter* OtherCharacter);// sub_B9CDC0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.AIStartFireOnServer
	// (Native, Public, HasDefaults, BlueprintCallable)
	void AIStartFireOnServer(int BurstShootBulletsLimitfloat BurstShootTimeLimitTEnumAsByte<EShootWeaponShootMode> ShootModeconst struct FVector& SimpleShootTarget);// sub_B9C720()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.AddOneDamageCauserRecord
	// (Final, Native, Public, HasOutParms)
	void AddOneDamageCauserRecord(class AController* causerint HSChangeMarginconst struct FDamageEvent& DamageEventunsigned char IsHeadshotclass AActor* DamageCauser);// sub_B9CBF0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.AddMoveOffSet
	// (Final, Native, Public, BlueprintCallable)
	void AddMoveOffSet(float Forwardfloat Rightfloat Up);// sub_B9CAE0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.AddHealthSafety
	// (Final, Native, Public, BlueprintCallable)
	unsigned char AddHealthSafety(float AddValclass AController* DamageInstigatorunsigned char IsDamageFromVehicleExplode);// sub_B9C9D0()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.AddBuff
	// (Native, Public, BlueprintCallable)
	int AddBuff(const struct FName& BuffNameclass AController* BuffCauserint LayerCountclass AActor* BuffApplierActor);// sub_B9C890()

	// Function ShadowTrackerExtra.STExtraBaseCharacter.ActorHideAndDisableTick
	// (Final, Native, Private)
	void ActorHideAndDisableTick();// sub_B9C870()


}