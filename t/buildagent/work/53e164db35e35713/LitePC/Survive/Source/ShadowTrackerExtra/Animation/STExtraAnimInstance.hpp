

// Class ShadowTrackerExtra.STExtraAnimInstance
// //Class ShadowTrackerExtra.STExtraAnimInstance
//0x08D0 (0x0C90 - 0x03C0)
class USTExtraAnimInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03C0(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    ThrowCooking;                                             // 0x03C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ThrowStart;                                               // 0x03D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ThrowDrop;                                                // 0x03E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x8];                                       // 0x03F8(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    LandHeavy;                                                // 0x0400(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    LandExtreme;                                              // 0x0410(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FRotator                                    OwnerAimRotation;                                         // 0x0420(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	int                                                AnimInstanceIndex;                                        // 0x042C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PeekFrameRate;                                            // 0x0430(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0434(0x0008) MISSED OFFSET
	float                                              PeekSpeed;                                                // 0x043C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      C_NoAimOffset : 1;                                        // 0x0440(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03 : 8;                                        // 0x0441(0x0001)
	unsigned char                                      C_Move : 1;                                               // 0x0441(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04 : 8;                                        // 0x0442(0x0001)
	unsigned char                                      C_IsSwimUp : 1;                                           // 0x0442(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05 : 8;                                        // 0x0443(0x0001)
	unsigned char                                      C_MovementChanged : 1;                                    // 0x0443(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06 : 8;                                        // 0x0444(0x0001)
	unsigned char                                      C_UseHairAnimDynamics : 1;                                // 0x0444(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07 : 8;                                        // 0x0445(0x0001)
	unsigned char                                      C_Scoping : 1;                                            // 0x0445(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08 : 8;                                        // 0x0446(0x0001)
	unsigned char                                      C_ShoulderFiring : 1;                                     // 0x0446(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09 : 8;                                        // 0x0447(0x0001)
	unsigned char                                      C_ReloadProne : 1;                                        // 0x0447(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10 : 8;                                        // 0x0448(0x0001)
	unsigned char                                      C_IsObstructed : 1;                                       // 0x0448(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11 : 8;                                        // 0x0449(0x0001)
	unsigned char                                      C_IsPeeking : 1;                                          // 0x0449(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12 : 8;                                        // 0x044A(0x0001)
	unsigned char                                      C_SightSlow : 1;                                          // 0x044A(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13 : 8;                                        // 0x044B(0x0001)
	unsigned char                                      C_IsPistolPeekAim : 1;                                    // 0x044B(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14 : 8;                                        // 0x044C(0x0001)
	unsigned char                                      bIsInAircraft_CP : 1;                                     // 0x044C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15 : 8;                                        // 0x044D(0x0001)
	unsigned char                                      bIsDriver_CP : 1;                                         // 0x044D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData16 : 8;                                        // 0x044E(0x0001)
	unsigned char                                      bIsSitting_CP : 1;                                        // 0x044E(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData17 : 8;                                        // 0x044F(0x0001)
	unsigned char                                      bIsInVehicle_CP : 1;                                      // 0x044F(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LocalSteerInput_CP;                                       // 0x0450(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LocalSteerInputMoto_CP;                                   // 0x0454(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LocalStopMoto_CP;                                         // 0x0458(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LocalThrottleInput_CP;                                    // 0x045C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LocalMotoFPPSpine_CP;                                     // 0x0460(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocalMotoFPPSpine01Scale_CP;                              // 0x0464(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     LocalMotoFPPSpine03Scale_CP;                              // 0x0470(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    GasThighRot_CP;                                           // 0x047C(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    GasAnkleRot_CP;                                           // 0x0488(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData18[0xC];                                       // 0x0494(0x000C) MISSED OFFSET
	struct FTransform                                  GasKneeTransformX_CP;                                     // 0x04A0(0x0030) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              LocalBrakeInput_CP;                                       // 0x04D0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData19[0xC];                                       // 0x04D4(0x000C) MISSED OFFSET
	struct FTransform                                  BrakeKneeTransform_CP;                                    // 0x04E0(0x0030) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    BrakeAnkleRot_CP;                                         // 0x0510(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              BackwardAOAlpha_CP;                                       // 0x051C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AimBlendAlpha_CP;                                         // 0x0520(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bHasContact_CP : 1;                                       // 0x0524(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData20[0x3];                                       // 0x0525(0x0003) MISSED OFFSET
	float                                              GroundContactMoto_CP;                                     // 0x0528(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AirControlPitchInput_CP;                                  // 0x052C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  DriverIK_CP;                                              // 0x0530(0x0030) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              PassengerIKAlpha_CP;                                      // 0x0560(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DriverSpineLocWS_CP;                                      // 0x0564(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	EVehicleAnimType                                   VehicleSeatType_CP;                                       // 0x0570(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EVHSeatSpecialType                                 VehicleSeatSpecialType_CP;                                // 0x0571(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bMotoHasDriver_CP : 1;                                    // 0x0572(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData21 : 8;                                        // 0x0573(0x0001)
	unsigned char                                      C_IsOnVehicle : 1;                                        // 0x0573(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData22[0x4];                                       // 0x0574(0x0004) MISSED OFFSET
	class ASTExtraWheeledVehicle*                      CachedWheeledVehicle_CP;                                  // 0x0578(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class ASTExtraFloatingVehicle*                     CachedFloatingVehicle_CP;                                 // 0x0580(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             PassengerAimBS_CP;                                        // 0x0588(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             PassengerTransitionOut_CP;                                // 0x0590(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             PassengerTransitionIn_CP;                                 // 0x0598(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           PassengerIdle_Rifle_CP;                                   // 0x05A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           PassengerIdle_Unarmed_CP;                                 // 0x05A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           PassengerIdle_Grenade_CP;                                 // 0x05B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           PassengerIdle_Melee_CP;                                   // 0x05B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LocalFPPAlphaVehicleAimAO_CP;                             // 0x05C0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData23[0x4];                                       // 0x05C4(0x0004) MISSED OFFSET
	class UAnimSequenceBase*                           DriverMain;                                               // 0x05C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           DriverLeanHorizontalMeshSpaceAdditive;                    // 0x05D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           DriverLeanVerticalMeshSpaceAdditive;                      // 0x05D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           DriverAirControl_FrontBack;                               // 0x05E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           DriverAirControl_LeftRight;                               // 0x05E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           DriverStopBase;                                           // 0x05F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           DriverStopMeshSpaceAdditive;                              // 0x05F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      CharacterMesh_CP;                                         // 0x0600(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              SwimRotateX;                                              // 0x0608(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      C_IsCastingGenerate : 1;                                  // 0x060C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData24 : 8;                                        // 0x060D(0x0001)
	unsigned char                                      C_Hurting : 1;                                            // 0x060D(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData25 : 8;                                        // 0x060E(0x0001)
	unsigned char                                      C_IsNearDeathStatus : 1;                                  // 0x060E(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData26 : 8;                                        // 0x060F(0x0001)
	unsigned char                                      C_ShouldPauseAnim : 1;                                    // 0x060F(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData27 : 8;                                        // 0x0610(0x0001)
	unsigned char                                      C_IsJumping : 1;                                          // 0x0610(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData28 : 8;                                        // 0x0611(0x0001)
	unsigned char                                      C_JumpForward : 1;                                        // 0x0611(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData29 : 8;                                        // 0x0612(0x0001)
	unsigned char                                      C_IsTurning : 1;                                          // 0x0612(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData30 : 8;                                        // 0x0613(0x0001)
	unsigned char                                      C_IsHealing : 1;                                          // 0x0613(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData31 : 8;                                        // 0x0614(0x0001)
	unsigned char                                      C_IdleAddtiveValid : 1;                                   // 0x0614(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData32 : 8;                                        // 0x0615(0x0001)
	unsigned char                                      C_ForegripAnimValid : 1;                                  // 0x0615(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData33 : 8;                                        // 0x0616(0x0001)
	unsigned char                                      C_LHGripBlendSpaceValid : 1;                              // 0x0616(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData34[0x1];                                       // 0x0617(0x0001) MISSED OFFSET
	float                                              C_FireAlpha;                                              // 0x0618(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              C_SwimSpeed;                                              // 0x061C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              C_ProneHandleAlpha;                                       // 0x0620(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              C_MaxFallingSpeed;                                        // 0x0624(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              C_HandleFolderFactor;                                     // 0x0628(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              C_CharacterYawRotateRate;                                 // 0x062C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              C_ForegripAnimParam;                                      // 0x0630(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              C_RecoilPlayStartTime;                                    // 0x0634(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              C_RecoilBlendInTime;                                      // 0x0638(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              KickModifierHip;                                          // 0x063C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              KickModifierShoulderFiring;                               // 0x0640(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              KickModifierIronsight;                                    // 0x0644(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      C_UsingBoltAction : 1;                                    // 0x0648(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData35 : 8;                                        // 0x0649(0x0001)
	unsigned char                                      C_PlayIdle : 1;                                           // 0x0649(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData36[0x6];                                       // 0x064A(0x0006) MISSED OFFSET
	TEnumAsByte<EMovementMode>                         C_LastMovementMode;                                       // 0x0650(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ECharacterPoseType                                 C_PoseType;                                               // 0x0651(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EWeaponType                                        C_WeaponType;                                             // 0x0652(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      C_UseShootWeapon : 1;                                     // 0x0653(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFreshWeaponStateType>                 C_WeaponState;                                            // 0x0654(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EParachuteState>                       C_ParachuteState;                                         // 0x0655(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWeaponHoldType>                       C_WeaponHoldType;                                         // 0x0656(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData37[0x1];                                       // 0x0657(0x0001) MISSED OFFSET
	struct FVector                                     HandWeaponOffset_CP;                                      // 0x0658(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     HandWeaponOffsetTarget;                                   // 0x0664(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              HandWeaponOffsetInterpSpeed;                              // 0x0670(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HandWeaponOffsetInterpSpeedReturn;                        // 0x0674(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SprintWeaponLoweringAlpha_CP;                             // 0x0678(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SprintWeaponLoweringScalar_CP;                            // 0x067C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HandWeaponOffsetAlpha_CP;                                 // 0x0680(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData38[0x4];                                       // 0x0684(0x0004) MISSED OFFSET
	class UCurveFloat*                                 ADSSocketByFOV_CP;                                        // 0x0688(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bIsArmedWithGun_CP : 1;                                   // 0x0690(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData39 : 8;                                        // 0x0691(0x0001)
	unsigned char                                      bIsArmedWithThrown_CP : 1;                                // 0x0691(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData40[0x2];                                       // 0x0692(0x0002) MISSED OFFSET
	float                                              RecoilRollValue_CP;                                       // 0x0694(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RecoilTimer_CP;                                           // 0x0698(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RecoilRollRand_CP;                                        // 0x069C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RecoilPlayStartTime_CP;                                   // 0x06A0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RecoilBlendInTime_CP;                                     // 0x06A4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RecoilADSRotation_CP;                                     // 0x06A8(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              RecoilTimerScale_CP;                                      // 0x06B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 RecoilRollCurve_CP;                                       // 0x06B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeaponStabilityAlpha_CP;                                  // 0x06C0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WeaponStabilityRefSpeed_CP;                               // 0x06C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   WeaponStabilityRefMapIn_CP;                               // 0x06C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   WeaponStabilityRefMapOut_CP;                              // 0x06D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	float                                              WeaponStabilityInterpSpeed_CP;                            // 0x06D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData41[0x4];                                       // 0x06DC(0x0004) MISSED OFFSET
	struct FTransform                                  WeaponInertia_CP;                                         // 0x06E0(0x0030) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              WeaponInertia_Yaw_CP;                                     // 0x0710(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WeaponInertia_Pitch_CP;                                   // 0x0714(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WeaponInertia_Roll_CP;                                    // 0x0718(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WeaponInertia_InerpSpeed_YawScalar_CP;                    // 0x071C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeaponInertiaX_Scalar_CP;                                 // 0x0720(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeaponInertiaY_Scalar_CP;                                 // 0x0724(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeaponInertia_YawToRollScalar_CP;                         // 0x0728(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeaponInertiaX_Clamp_CP;                                  // 0x072C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeaponInertiaY_Clamp_CP;                                  // 0x0730(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeaponInertiaRoll_Clamp_CP;                               // 0x0734(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeaponInertia_InerpSpeed_CP;                              // 0x0738(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeaponInertia_InerpSpeed_ADS_CP;                          // 0x073C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeaponInertia_YawToRollScalar_ADS_CP;                     // 0x0740(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeaponInertiaRoll_Clamp_ADS_CP;                           // 0x0744(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeaponInertiaX_Scalar_ADS_CP;                             // 0x0748(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeaponInertiaY_Scalar_ADS_CP;                             // 0x074C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeaponInertiaX_Clamp_ADS_CP;                              // 0x0750(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeaponInertiaY_Clamp_ADS_CP;                              // 0x0754(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    C_OwnerRotation;                                          // 0x0758(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    C_ControlRotation;                                        // 0x0764(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    C_ViewRotation;                                           // 0x0770(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    C_ScopeAimOffsetStand;                                    // 0x077C(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    C_FPPStandOffsetRotation;                                 // 0x0788(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    C_FPPCrouchOffsetRotation;                                // 0x0794(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    C_FPPProneOffsetRotation;                                 // 0x07A0(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     C_MoveVelocity;                                           // 0x07AC(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     C_MoveVelocityInWorldSpace;                               // 0x07B8(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     C_MoveDir;                                                // 0x07C4(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     C_HurtDir;                                                // 0x07D0(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     C_FPPStandOffsetLocation;                                 // 0x07DC(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     C_FPPCrouchOffsetLocation;                                // 0x07E8(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     C_FPPProneOffsetLocation;                                 // 0x07F4(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     C_MagOffsetLocation;                                      // 0x0800(0x000C) (BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData42[0x4];                                       // 0x080C(0x0004) MISSED OFFSET
	class ASTExtraPlayerCharacter*                     C_OwnerCharacter;                                         // 0x0810(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAimOffsetBlendSpace*                        C_AimBlendSpace;                                          // 0x0818(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 C_MovementBSCache;                                        // 0x0820(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 C_HitBlendSpace;                                          // 0x0828(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 C_MovementBSCache_Dest;                                   // 0x0830(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 C_MovementBSStand;                                        // 0x0838(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 C_MovementBSCrouch;                                       // 0x0840(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 C_MovementBSProne;                                        // 0x0848(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 C_ObstructedAnim;                                         // 0x0850(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpace1D*                               C_FallingBS;                                              // 0x0858(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpace1D*                               C_PeekAnim;                                               // 0x0860(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpace1D*                               C_ForegripAnim;                                           // 0x0868(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             C_LHGripBlendSpace;                                       // 0x0870(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpace1D*                               C_GripBlendSpace;                                         // 0x0878(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAimOffsetBlendSpace*                        C_PeekAnimLeftRight;                                      // 0x0880(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               C_TurnAnim;                                               // 0x0888(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               C_JumpStart;                                              // 0x0890(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               C_LandLight;                                              // 0x0898(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               C_LandHeavy;                                              // 0x08A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               C_IdleAddtive;                                            // 0x08A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData43[0x4];                                       // 0x08B0(0x0004) MISSED OFFSET
	unsigned char                                      bLocalFPP_CP : 1;                                         // 0x08B4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData44[0x3];                                       // 0x08B5(0x0003) MISSED OFFSET
	float                                              LocalFPPAlpha_CP;                                         // 0x08B8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsLocalPlayer : 1;                                       // 0x08BC(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData45[0x3];                                       // 0x08BD(0x0003) MISSED OFFSET
	float                                              SprintLocoAlpha_CP;                                       // 0x08C0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SprintLocoTimeMultiplier;                                 // 0x08C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SprintLocoTimeMultiplier_FPP;                             // 0x08C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Yaw_CP;                                                   // 0x08CC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RotationYaw_CP;                                           // 0x08D0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Pitch_CP;                                                 // 0x08D4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              YawNormalized_CP;                                         // 0x08D8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              YawInterpolationSpeed;                                    // 0x08DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              YawNormalizedInterpolated_CP;                             // 0x08E0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              YawNormalizedCombat_CP;                                   // 0x08E4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DesiredPitch_CP;                                          // 0x08E8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      AimDirectionCardinal_CP;                                  // 0x08EC(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData46[0x3];                                       // 0x08ED(0x0003) MISSED OFFSET
	struct FRotator                                    AORot_CP;                                                 // 0x08F0(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    AORotBackwards_CP;                                        // 0x08FC(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              SwimmingPitch_CP;                                         // 0x0908(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ForceAddAimOffset_CP;                                     // 0x090C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RiderLookLeft;                                            // 0x0910(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RiderLookRight;                                           // 0x0914(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bLocalForceRotationHipLeft_CP : 1;                        // 0x0918(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData47 : 8;                                        // 0x0919(0x0001)
	unsigned char                                      bLocalForceRotationHipRight_CP : 1;                       // 0x0919(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData48 : 8;                                        // 0x091A(0x0001)
	unsigned char                                      bLocalForceRotationAimed_CP : 1;                          // 0x091A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData49[0x1];                                       // 0x091B(0x0001) MISSED OFFSET
	float                                              RotationPlayrateAimed_CP;                                 // 0x091C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RotationPlayrateAimedAdditiveSpine_CP;                    // 0x0920(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    LastRotation_CP;                                          // 0x0924(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    Freelook_Body_CP;                                         // 0x0930(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    Freelook_Delta_CP;                                        // 0x093C(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              LocomotionSpeed_CP;                                       // 0x0948(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LocomotionSpeed2D_CP;                                     // 0x094C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsMoving_CP : 1;                                         // 0x0950(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData50[0x3];                                       // 0x0951(0x0003) MISSED OFFSET
	float                                              LocomotionDirection_CP;                                   // 0x0954(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LocomotionDirectionClamped_CP;                            // 0x0958(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LocomotionJumpDirection_CP;                               // 0x095C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LeanYaw_CP;                                               // 0x0960(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    LastAbsoluteDirection_CP;                                 // 0x0964(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    ControlRotation_CP;                                       // 0x0970(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    ControlRotationFPP_CP;                                    // 0x097C(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    CameraFPPRotation_CP;                                     // 0x0988(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    ControlRotationLastMovement_CP;                           // 0x0994(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    CharacterRotation_CP;                                     // 0x09A0(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      bIsAimingBackward_CP : 1;                                 // 0x09AC(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData51 : 8;                                        // 0x09AD(0x0001)
	unsigned char                                      bIsAffectedByStatus_CP : 1;                               // 0x09AD(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData52 : 8;                                        // 0x09AE(0x0001)
	unsigned char                                      bIsFreelooking_CP : 1;                                    // 0x09AE(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData53[0x1];                                       // 0x09AF(0x0001) MISSED OFFSET
	float                                              PickingUpAlpha_CP;                                        // 0x09B0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData54[0x4];                                       // 0x09B4(0x0004) MISSED OFFSET
	class UAnimMontage*                                PickupMontage_CP;                                         // 0x09B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       EmoteMontageSlotName_CP;                                  // 0x09C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ReloadAlpha_CP;                                           // 0x09C8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsReloading_CP : 1;                                      // 0x09CC(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData55 : 8;                                        // 0x09CD(0x0001)
	unsigned char                                      bIsJumping_CP : 1;                                        // 0x09CD(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData56 : 8;                                        // 0x09CE(0x0001)
	unsigned char                                      bIsFalling_CP : 1;                                        // 0x09CE(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData57 : 8;                                        // 0x09CF(0x0001)
	unsigned char                                      bWasFalling_CP : 1;                                       // 0x09CF(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FallingAlpha_CP;                                          // 0x09D0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   FallingMap2D;                                             // 0x09D4(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   FallingMapZ;                                              // 0x09DC(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData58[0x4];                                       // 0x09E4(0x0004) MISSED OFFSET
	class UAnimMontage*                                MontageFallingRifle_CP;                                   // 0x09E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                MontageFallingUnarmed_CP;                                 // 0x09F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FPPSprintAnimScalar;                                      // 0x09F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bIsUpperbody_CP : 1;                                      // 0x09FC(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData59[0x3];                                       // 0x09FD(0x0003) MISSED OFFSET
	float                                              LocomotionDirectionInterp;                                // 0x0A00(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LeanYawGlobalMultiplier;                                  // 0x0A04(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LeanYawClamp;                                             // 0x0A08(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LeanYawInterpSpeedMin;                                    // 0x0A0C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LeanYawInterpSpeedMax;                                    // 0x0A10(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      IsRescueingOther : 1;                                     // 0x0A14(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData60 : 8;                                        // 0x0A15(0x0001)
	unsigned char                                      bIsEquippingPistol_CP : 1;                                // 0x0A15(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData61[0x2];                                       // 0x0A16(0x0002) MISSED OFFSET
	class UAnimMontage*                                PistolEquipMontageRefCP;                                  // 0x0A18(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SprintLocoStandLimit_High;                                // 0x0A20(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SprintLocoCrouchLimit_High;                               // 0x0A24(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SprintLocoStandLimit_Low;                                 // 0x0A28(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SprintLocoCrouchLimit_Low;                                // 0x0A2C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SprintAlphaSprintLimit_High;                              // 0x0A30(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SprintAlphaSprintLimit_Low;                               // 0x0A34(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SprintLocoLimitInterpSpeed;                               // 0x0A38(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SprintAlpha_CP;                                           // 0x0A3C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SprintAlphaPitchComponent_CP;                             // 0x0A40(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsTransitioning_CP : 1;                                  // 0x0A44(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData62[0x3];                                       // 0x0A45(0x0003) MISSED OFFSET
	float                                              WeaponIKLH_CP;                                            // 0x0A48(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WeaponIKRH_CP;                                            // 0x0A4C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TargetIKRH_CP;                                            // 0x0A50(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TargetIKLH_CP;                                            // 0x0A54(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MontageIKLH_CP;                                           // 0x0A58(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MontageIKRH_CP;                                           // 0x0A5C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WeaponCollisionReloadAlpha_CP;                            // 0x0A60(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              IgnoreWeaponTransform_CP;                                 // 0x0A64(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsPreparingThrow_CP : 1;                                 // 0x0A68(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData63[0x3];                                       // 0x0A69(0x0003) MISSED OFFSET
	float                                              ThrowableAdditionalAimYaw_CP;                             // 0x0A6C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bLocalQuickThrowHigh_CP : 1;                              // 0x0A70(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData64[0x3];                                       // 0x0A71(0x0003) MISSED OFFSET
	float                                              ThrowStateSwitchInterpSpeed;                              // 0x0A74(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LocalThrowModeSwitchAlpha_CP;                             // 0x0A78(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ECharacterPoseType                                 Stance_CP;                                                // 0x0A7C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ECharacterPoseType                                 LastStance_CP;                                            // 0x0A7D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bWeaponObstructedHigh_CP : 1;                             // 0x0A7E(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData65[0x1];                                       // 0x0A7F(0x0001) MISSED OFFSET
	float                                              WeaponCollisionAlpha_CP;                                  // 0x0A80(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ForceBasePose_CP;                                         // 0x0A84(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 CurveAimState_CP;                                         // 0x0A88(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bIsSprintingFast_CP : 1;                                  // 0x0A90(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData66[0x3];                                       // 0x0A91(0x0003) MISSED OFFSET
	float                                              WeaponGripType_CP;                                        // 0x0A94(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LHGripIndex_CP;                                           // 0x0A98(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DBNOAdjustment_CP;                                        // 0x0A9C(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              DBNOAdjustMax_CP;                                         // 0x0AA8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DBNOAdjustMin_CP;                                         // 0x0AAC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DBNOSpeedSlowDown_CP;                                     // 0x0AB0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DBNOAdjustAlpha_CP;                                       // 0x0AB4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DBNOAnimSpeed_CP;                                         // 0x0AB8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData67[0x4];                                       // 0x0ABC(0x0004) MISSED OFFSET
	float                                              WeaponAimState_CP;                                        // 0x0AC0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WeaponAimStateInterpolated_CP;                            // 0x0AC4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              UseProceduralAimOffset_CP;                                // 0x0AC8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PickupIKAlpha_CP;                                         // 0x0ACC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsAiming_CP : 1;                                         // 0x0AD0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData68 : 8;                                        // 0x0AD1(0x0001)
	unsigned char                                      bIsScoping_CP : 1;                                        // 0x0AD1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData69[0x2];                                       // 0x0AD2(0x0002) MISSED OFFSET
	float                                              ScopingAlpha_CP;                                          // 0x0AD4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                IdleIndex_CP;                                             // 0x0AD8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                LastIdleIndex_CP;                                         // 0x0ADC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              IdleTimer_CP;                                             // 0x0AE0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              IdleTriggerRandom;                                        // 0x0AE4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              IdleTriggerTimeMin_CP;                                    // 0x0AE8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IdleTriggerTimeVariation_CP;                              // 0x0AEC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SprintAlphaModifier_CP;                                   // 0x0AF0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LeanLeftAlpha_CP;                                         // 0x0AF4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LeanRightAlpha_CP;                                        // 0x0AF8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LeanTwoSideAlpha_CP;                                      // 0x0AFC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LeanLeftApplyTranslation_CP;                              // 0x0B00(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LeanInterpSpeed_CP;                                       // 0x0B04(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LeanInterpSpeedCollisionClamp_CP;                         // 0x0B08(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bUseLinearLeanInterp : 1;                                 // 0x0B0C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData70[0xB];                                       // 0x0B0D(0x000B) MISSED OFFSET
	float                                              FreefallX_CP;                                             // 0x0B18(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FreefallY_CP;                                             // 0x0B1C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FreeFallAlpha_CP;                                         // 0x0B20(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsParachuteLanding_CP : 1;                               // 0x0B24(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData71 : 8;                                        // 0x0B25(0x0001)
	unsigned char                                      bIsParachuteMoving_CP : 1;                                // 0x0B25(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData72[0x2];                                       // 0x0B26(0x0002) MISSED OFFSET
	float                                              Freefall_Yaw_CP;                                          // 0x0B28(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Freefall_Pitch_CP;                                        // 0x0B2C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FreefallN_Accelerate_CP;                                  // 0x0B30(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FreefallN_Brake_CP;                                       // 0x0B34(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FreefallN_Lateral_CP;                                     // 0x0B38(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FreefallN_Pitch_CP;                                       // 0x0B3C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FreefallN_PitchAlpha_CP;                                  // 0x0B40(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FreefallN_TurnAlphaInstant_CP;                            // 0x0B44(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FreefallN_TurnAlphaInterpolated_CP;                       // 0x0B48(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FreefallN_TurnDelta_CP;                                   // 0x0B4C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FreefallN_VelocityAlpha_CP;                               // 0x0B50(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    FreefallN_TargetRotation;                                 // 0x0B54(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              FreefallN_TargetPitch;                                    // 0x0B60(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FreefallN_TargetYaw;                                      // 0x0B64(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FreefallN_TargetRoll;                                     // 0x0B68(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FreefallN_HorizontalStabilizationAlpha_CP;                // 0x0B6C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FreefallN_VerticalStabilizationAlpha_CP;                  // 0x0B70(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    FreefallN_LegMove;                                        // 0x0B74(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    FreefallN_BodyMove;                                       // 0x0B80(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    FreefallN_Strafing;                                       // 0x0B8C(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              FreefallN_PitchInterpolated_CP;                           // 0x0B98(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FreefallN_Yaw_Interpolated_CP;                            // 0x0B9C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    FreefallN_DeltaRotation_CP;                               // 0x0BA0(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              Parachute_Forward_CP;                                     // 0x0BAC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Parachute_Forward_Interpolated_CP;                        // 0x0BB0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Parachute_Lateral_CP;                                     // 0x0BB4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Parachute_Lateral_Interpolated_CP;                        // 0x0BB8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Parachute_RollTendency_CP;                                // 0x0BBC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Parachute_PitchTendency_CP;                               // 0x0BC0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Parachute_TendencyFrame_CP;                               // 0x0BC4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ParaAnimTimeSinceStart_CP;                                // 0x0BC8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData73[0x4];                                       // 0x0BCC(0x0004) MISSED OFFSET
	class UFreefallAnimData*                           Freefall_DataAsset;                                       // 0x0BD0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bInPlane : 1;                                             // 0x0BD8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData74 : 8;                                        // 0x0BD9(0x0001)
	unsigned char                                      bIsFlareReady : 1;                                        // 0x0BD9(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData75 : 8;                                        // 0x0BDA(0x0001)
	unsigned char                                      bHasFlareReady : 1;                                       // 0x0BDA(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData76[0x1];                                       // 0x0BDB(0x0001) MISSED OFFSET
	float                                              FlareReadyAlpha_CP;                                       // 0x0BDC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FlarePitchActivationLimit_Stand;                          // 0x0BE0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlarePitchActivationLimit_Prone;                          // 0x0BE4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlareReadyInterpSpeed;                                    // 0x0BE8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UseIK;                                                    // 0x0BEC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FallHeight_CP;                                            // 0x0BF0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LandingAlpha_CP;                                          // 0x0BF4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HeavyFallVerticalVelocityThreshold;                       // 0x0BF8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ExtremeFallVerticalVelocityThreshold;                     // 0x0BFC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HeavyFallMovementStopTime;                                // 0x0C00(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ExtremeFallMovementStopTime;                              // 0x0C04(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData77[0x8];                                       // 0x0C08(0x0008) MISSED OFFSET
	class UAnimMontage*                                WeaponInspectMontage_CP;                                  // 0x0C10(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CantedRotation;                                           // 0x0C18(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CantedRotationLeanMultiplier_CP;                          // 0x0C1C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData78[0x1];                                       // 0x0C20(0x0001) MISSED OFFSET
	unsigned char                                      bVaultCanceled : 1;                                       // 0x0C21(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData79 : 8;                                        // 0x0C22(0x0001)
	unsigned char                                      bIsVaulting_CP : 1;                                       // 0x0C22(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData80[0x1];                                       // 0x0C23(0x0001) MISSED OFFSET
	float                                              AnimHairAlpha;                                            // 0x0C24(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              VaultTimer_CP;                                            // 0x0C28(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              VaultTimerLast_CP;                                        // 0x0C2C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EVaultAnimType                                     LocalVaultType_CP;                                        // 0x0C30(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData81[0x7];                                       // 0x0C31(0x0007) MISSED OFFSET
	class UAnimSequenceBase*                           VaultAnimSequence_CP;                                     // 0x0C38(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              VaultAnimLength_CP;                                       // 0x0C40(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData82[0x4];                                       // 0x0C44(0x0004) MISSED OFFSET
	class UCurveFloat*                                 VaultCurve_CP;                                            // 0x0C48(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              VaultBlendInTime_CP;                                      // 0x0C50(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              VaultBlendOutTime_CP;                                     // 0x0C54(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEndVaultToFall_CP : 1;                                   // 0x0C58(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData83[0x3];                                       // 0x0C59(0x0003) MISSED OFFSET
	float                                              VaultBlendOutProgressTime_CP;                             // 0x0C5C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              VaultBlendOutExactTime_CP;                                // 0x0C60(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              VaultLastActionTimer_CP;                                  // 0x0C64(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              VaultAnimTime_CP;                                         // 0x0C68(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              VaultBlendOutTimeBuffer;                                  // 0x0C6C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              VaultingEvalTimeout;                                      // 0x0C70(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bIsAnticipatingLedgeGrab : 1;                             // 0x0C74(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData84[0x3];                                       // 0x0C75(0x0003) MISSED OFFSET
	float                                              AnticipationAlpha;                                        // 0x0C78(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData85[0x4];                                       // 0x0C7C(0x0004) MISSED OFFSET
	class UAnimSequenceBase*                           AnticipationAnim;                                         // 0x0C80(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData86[0x8];                                       // 0x0C88(0x0008) MISSED OFFSET

	// Function ShadowTrackerExtra.STExtraAnimInstance.TryToFireFlareGun
	// (Final, Native, Public, BlueprintCallable)
	void TryToFireFlareGun();// sub_2DC480()

	// Function ShadowTrackerExtra.STExtraAnimInstance.StanceSwitch
	// (Final, Native, Public, BlueprintCallable)
	void StanceSwitch();// sub_2DC390()

	// Function ShadowTrackerExtra.STExtraAnimInstance.SetUseFlareGun
	// (Event, Public, BlueprintEvent)
	void SetUseFlareGun(unsigned char IsCanFire);// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraAnimInstance.SetCharacterVehParamList
	// (Event, Public, BlueprintEvent)
	void SetCharacterVehParamList(const struct FAnimVehParamList& NewAnimVehParamList);// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraAnimInstance.SetC_ViewRotation
	// (Final, Native, Public, HasDefaults, BlueprintCallable)
	void SetC_ViewRotation(const struct FRotator& NewRotator);// sub_2DC300()

	// Function ShadowTrackerExtra.STExtraAnimInstance.SetC_PoseType
	// (Final, Native, Public, BlueprintCallable)
	void SetC_PoseType(ECharacterPoseType NewECharacterPoseType);// sub_2DC280()

	// Function ShadowTrackerExtra.STExtraAnimInstance.SetC_IsonVehicle
	// (Final, Native, Public, BlueprintCallable)
	void SetC_IsonVehicle(unsigned char NewIsonVehicle);// sub_2DC1F0()

	// Function ShadowTrackerExtra.STExtraAnimInstance.ResetRecoilRoll
	// (Final, Native, Public, BlueprintCallable)
	void ResetRecoilRoll();// sub_2DC070()

	// Function ShadowTrackerExtra.STExtraAnimInstance.ResetIdle
	// (Final, Native, Public, BlueprintCallable)
	void ResetIdle();// sub_2DC050()

	// Function ShadowTrackerExtra.STExtraAnimInstance.RandomizeIdleIndex_CP
	// (Final, Native, Public, BlueprintCallable)
	void RandomizeIdleIndex_CP(unsigned char ExludeLastIndex);// sub_2DBF40()

	// Function ShadowTrackerExtra.STExtraAnimInstance.PreEvaluatePawnState
	// (Final, Native, Public, BlueprintCallable)
	void PreEvaluatePawnState();// sub_2DBDD0()

	// Function ShadowTrackerExtra.STExtraAnimInstance.OnHitReaction
	// (Event, Public, HasDefaults, BlueprintEvent)
	void OnHitReaction(EAnimWeaponType WeaponTypeconst struct FName& BoneNameconst struct FVector& Direction);// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraAnimInstance.LpcPlayMontage
	// (Final, Native, Public, BlueprintCallable)
	void LpcPlayMontage(class UAnimMontage* MontageToPlayfloat InPlayRateEMontagePlayReturnType ReturnValueTypefloat InTimeToStartMontageAtfloat InBlendIn);// sub_2DB9C0()

	// Function ShadowTrackerExtra.STExtraAnimInstance.IsInspectingWeapon
	// (Final, Native, Public)
	unsigned char IsInspectingWeapon();// sub_2DB990()

	// Function ShadowTrackerExtra.STExtraAnimInstance.HandleWeaponOnShot
	// (Final, Native, Public)
	void HandleWeaponOnShot();// sub_2DB940()

	// Function ShadowTrackerExtra.STExtraAnimInstance.HandleOwnerAnimEvent
	// (Final, Native, Public)
	void HandleOwnerAnimEvent(const struct FName& EventMsg);// sub_2DB8C0()

	// Function ShadowTrackerExtra.STExtraAnimInstance.HandleAnimCurves
	// (Final, Native, Public, BlueprintCallable)
	void HandleAnimCurves();// sub_2DB8A0()

	// Function ShadowTrackerExtra.STExtraAnimInstance.HandleADSSocketOffset
	// (Final, Native, Public, BlueprintCallable)
	void HandleADSSocketOffset();// sub_2DB880()

	// Function ShadowTrackerExtra.STExtraAnimInstance.GetVehicleAO
	// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	void GetVehicleAO(float* Yawfloat* Pitch);// sub_2DB760()

	// Function ShadowTrackerExtra.STExtraAnimInstance.GetAnimSpeed_TS
	// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	float GetAnimSpeed_TS(TEnumAsByte<EAnimBluePrintType> BPTypeECharacterPoseType AnimStancefloat Directionfloat InSpeedfloat* PlayRatefloat* SprintAlphaunsigned char bIsSprinting);// sub_2DB530()

	// Function ShadowTrackerExtra.STExtraAnimInstance.GetAbsActorToBaseRotation
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char GetAbsActorToBaseRotation(unsigned char bInUseMinfloat InAngle);// sub_2DB380()

	// Function ShadowTrackerExtra.STExtraAnimInstance.FindPositionFromDistanceCurve
	// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	float FindPositionFromDistanceCurve(float Distanceclass UAnimSequenceBase* InAnimSequence);// sub_2DB290()

	// Function ShadowTrackerExtra.STExtraAnimInstance.EvaluateWeaponStates
	// (Final, Native, Public, BlueprintCallable)
	void EvaluateWeaponStates();// sub_2DB270()

	// Function ShadowTrackerExtra.STExtraAnimInstance.EvaluateWeaponStability
	// (Final, Native, Public, BlueprintCallable)
	void EvaluateWeaponStability();// sub_2DB250()

	// Function ShadowTrackerExtra.STExtraAnimInstance.EvaluateWeaponInertia
	// (Final, Native, Public, BlueprintCallable)
	void EvaluateWeaponInertia();// sub_2DB230()

	// Function ShadowTrackerExtra.STExtraAnimInstance.EvaluateWeaponCollision
	// (Final, Native, Public, BlueprintCallable)
	void EvaluateWeaponCollision();// sub_2DB210()

	// Function ShadowTrackerExtra.STExtraAnimInstance.EvaluateVehicle
	// (Final, Native, Public, BlueprintCallable)
	void EvaluateVehicle();// sub_2DB1F0()

	// Function ShadowTrackerExtra.STExtraAnimInstance.EvaluateVaulting
	// (Final, Native, Public, BlueprintCallable)
	void EvaluateVaulting();// sub_2DB1D0()

	// Function ShadowTrackerExtra.STExtraAnimInstance.EvaluateRecoilRoll
	// (Final, Native, Public, BlueprintCallable)
	void EvaluateRecoilRoll();// sub_2DB1B0()

	// Function ShadowTrackerExtra.STExtraAnimInstance.EvaluateLocalPawnStates
	// (Final, Native, Public, BlueprintCallable)
	void EvaluateLocalPawnStates();// sub_2DB190()

	// Function ShadowTrackerExtra.STExtraAnimInstance.EvaluateLeaning
	// (Final, Native, Public, BlueprintCallable)
	void EvaluateLeaning();// sub_2DB170()

	// Function ShadowTrackerExtra.STExtraAnimInstance.EvaluateJumpCamera
	// (Final, Native, Public, BlueprintCallable)
	void EvaluateJumpCamera();// sub_2DB150()

	// Function ShadowTrackerExtra.STExtraAnimInstance.EvaluateIdle
	// (Final, Native, Public, BlueprintCallable)
	void EvaluateIdle();// sub_2DB130()

	// Function ShadowTrackerExtra.STExtraAnimInstance.EvaluateFreefallAndParachute
	// (Final, Native, Public, BlueprintCallable)
	void EvaluateFreefallAndParachute();// sub_2DB110()

	// Function ShadowTrackerExtra.STExtraAnimInstance.EvaluateFPP
	// (Final, Native, Public, BlueprintCallable)
	void EvaluateFPP();// sub_2DB0D0()

	// Function ShadowTrackerExtra.STExtraAnimInstance.EvaluateFallingAndLanding
	// (Final, Native, Public, BlueprintCallable)
	void EvaluateFallingAndLanding();// sub_2DB0F0()

	// Function ShadowTrackerExtra.STExtraAnimInstance.EvaluateCharacterStates
	// (Final, Native, Public, BlueprintCallable)
	void EvaluateCharacterStates();// sub_2DB0B0()

	// Function ShadowTrackerExtra.STExtraAnimInstance.EvaluateCharacterState
	// (Final, Native, Public, BlueprintCallable)
	void EvaluateCharacterState();// sub_2DB090()

	// Function ShadowTrackerExtra.STExtraAnimInstance.EvaluateCasting
	// (Final, Native, Public, BlueprintCallable)
	void EvaluateCasting();// sub_2DB070()

	// Function ShadowTrackerExtra.STExtraAnimInstance.EvaluateAimStates
	// (Final, Native, Public, BlueprintCallable)
	void EvaluateAimStates();// sub_2DB050()

	// Function ShadowTrackerExtra.STExtraAnimInstance.EvaluateAimOffsets
	// (Final, Native, Public, BlueprintCallable)
	void EvaluateAimOffsets();// sub_2DB030()

	// Function ShadowTrackerExtra.STExtraAnimInstance.CacheParamList
	// (Native, Public)
	void CacheParamList(float DeltaSeconds);// sub_2DAF00()

	// Function ShadowTrackerExtra.STExtraAnimInstance.CacheCharacterReference
	// (Final, Native, Public, BlueprintCallable)
	void CacheCharacterReference(class ASTExtraPlayerCharacter* InCharacter);// sub_2DAE80()

	// Function ShadowTrackerExtra.STExtraAnimInstance.CacheAnimVarList
	// (Final, Native, Public)
	void CacheAnimVarList();// sub_2DAE60()


}