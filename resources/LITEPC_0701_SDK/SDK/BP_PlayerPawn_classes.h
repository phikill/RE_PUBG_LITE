#pragma once

// Name: LitePC_0701, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PlayerPawn.BP_PlayerPawn_C
// 0x042C (0x215C - 0x1D30)
class ABP_PlayerPawn_C : public ASTExtraPlayerCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1D30(0x0008) (Transient, DuplicateTransient)
	class USphereComponent*                            BulletEffect_Sphere;                                      // 0x1D38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UArrowComponent*                             AudioListener;                                            // 0x1D40(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UEmoteComponent_BP_C*                        EmoteComponent_BP;                                        // 0x1D48(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UObserverCameraComponent*                    ObserverCameraFPPMode;                                    // 0x1D50(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpringArmComponent*                         FPPModeSpringArm;                                         // 0x1D58(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPostProcessComponent*                       PostProcess;                                              // 0x1D60(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFPPComponent_C*                             FPPComponent;                                             // 0x1D68(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x1D70(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCameraComponent*                            CameraParachuteFreeFall;                                  // 0x1D78(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpringArmComponent*                         SpringArmParachuteFreeFall;                               // 0x1D80(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCameraComponent*                            CameraParachuteOpened;                                    // 0x1D88(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpringArmComponent*                         SpringArmParachuteOpened;                                 // 0x1D90(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCameraComponent*                            ScopingCamera;                                            // 0x1D98(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpringArmComponent*                         ScopingSpringArm;                                         // 0x1DA0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           HitBox_Prone;                                             // 0x1DA8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           HitBox_Stand;                                             // 0x1DB0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCharacterAvatarComp_BP_C*                   CharacterAvatarComp_BP;                                   // 0x1DB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVault_Controller_C*                         Vault_Controller;                                         // 0x1DC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_SwimController_C*                        BP_SwimController;                                        // 0x1DC8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SM_plane_01;                                              // 0x1DD0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_AutoAimingComponent_C*                   BP_AutoAimingComponent;                                   // 0x1DD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCharacterWeaponManagerComponent*            CharacterWeaponManager;                                   // 0x1DE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUAECharacterAnimListComponent*              CharacterAnimList_Skill;                                  // 0x1DE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUAESkillManagerComponent*                   UAESkillManager;                                          // 0x1DF0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCharacterAnimList_Base_C*                   CharacterAnimList_Base;                                   // 0x1DF8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPickupManagerComponent*                     PickupManager;                                            // 0x1E00(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             CameraRoot;                                               // 0x1E08(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomSpringArmComponent*                   CustomSpringArm;                                          // 0x1E10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCameraSettingComponent_C*                   CameraSettingComponent;                                   // 0x1E18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Scope;                                                    // 0x1E20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCameraComponent*                            Camera;                                                   // 0x1E28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScopeTimeline_ScopeOut_NewTrack_1_C8F985794051BBDD4D347CB349260EEE;// 0x1E30(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ScopeTimeline_ScopeOut__Direction_C8F985794051BBDD4D347CB349260EEE;// 0x1E34(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x1E35(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ScopeTimeline_ScopeOut;                                   // 0x1E38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScopeTimeline_ScopeIn_NewTrack_1_B69C842D41F5A870D5BE92AEBC22329A;// 0x1E40(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ScopeTimeline_ScopeIn__Direction_B69C842D41F5A870D5BE92AEBC22329A;// 0x1E44(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x1E45(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ScopeTimeline_ScopeIn;                                    // 0x1E48(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ParachuteCamBlend_Alpha_A00EF93A482E11D3825F6F8F58409606; // 0x1E50(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ParachuteCamBlend__Direction_A00EF93A482E11D3825F6F8F58409606;// 0x1E54(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x1E55(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ParachuteCamBlend;                                        // 0x1E58(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LerpAlpha_LerpAlpha_BBB653CA48682C1A42A33C890A409F07;     // 0x1E60(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    LerpAlpha__Direction_BBB653CA48682C1A42A33C890A409F07;    // 0x1E64(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x1E65(0x0003) MISSED OFFSET
	class UTimelineComponent*                          LerpAlpha;                                                // 0x1E68(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurnLerpAlpha_Alpha_E6EF8561406981075B2088A2D4185EA5;     // 0x1E70(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TurnLerpAlpha__Direction_E6EF8561406981075B2088A2D4185EA5;// 0x1E74(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x1E75(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TurnLerpAlpha;                                            // 0x1E78(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DamageSphereDMI;                                          // 0x1E80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCrouch;                                                  // 0x1E88(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsReloading;                                              // 0x1E89(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x1E8A(0x0002) MISSED OFFSET
	float                                              ReloadingCDMax;                                           // 0x1E8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LastInAirVelocityVector;                                  // 0x1E90(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     VelocityVector;                                           // 0x1E9C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              Speed;                                                    // 0x1EA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Moving;                                                   // 0x1EAC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x1EAD(0x0003) MISSED OFFSET
	struct FRotator                                    LastVelocityRotation;                                     // 0x1EB0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    TurnInPlaceRotation;                                      // 0x1EBC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    TurnInPlaceStart;                                         // 0x1EC8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    TurnInPlaceTarget;                                        // 0x1ED4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               TurningInPlace;                                           // 0x1EE0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      LocomotionState;                                          // 0x1EE1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Jumped;                                                   // 0x1EE2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x1];                                       // 0x1EE3(0x0001) MISSED OFFSET
	float                                              ProneCameraHeight;                                        // 0x1EE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraMoveSpeed;                                          // 0x1EE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseFirstPersonPerspective;                                // 0x1EEC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x1EED(0x0003) MISSED OFFSET
	float                                              MeleeAttackRange;                                         // 0x1EF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Melee_Attack_Location;                                    // 0x1EF4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              MeleeAttackDamage;                                        // 0x1F00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EPlayerCameraMode>                     CurCameraMode;                                            // 0x1F04(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x1F05(0x0003) MISSED OFFSET
	struct FSTR_CameraSetting                          StandCameraSetting;                                       // 0x1F08(0x0014) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRotator                                    TerreneNormal;                                            // 0x1F1C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Normal;                                                   // 0x1F28(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x1F34(0x0004) MISSED OFFSET
	class APickUpWrapperActor*                         PickUpTarget;                                             // 0x1F38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsPicking;                                               // 0x1F40(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x7];                                       // 0x1F41(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    EquipWeaponComplete;                                      // 0x1F48(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    UnequipWeaponComplete;                                    // 0x1F58(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              CrouchCameraHeight;                                       // 0x1F68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PickupDelayTime;                                          // 0x1F6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultCapsuleRadius;                                     // 0x1F70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsMoveForward_;                                           // 0x1F74(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsMoveRight_;                                             // 0x1F75(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x2];                                       // 0x1F76(0x0002) MISSED OFFSET
	float                                              ParachuteOpeningRoll;                                     // 0x1F78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ParachuteOpeningPitch;                                    // 0x1F7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DownSpeedLerpSpeed;                                       // 0x1F80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeightToGround;                                           // 0x1F84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PitchRotateSpeed;                                         // 0x1F88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              YawRotateSpeed;                                           // 0x1F8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RollRotateSpeed;                                          // 0x1F90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x1F94(0x0004) MISSED OFFSET
	class USkeletalMeshComponent*                      ParachuteComponent_1;                                     // 0x1F98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SwimCameraHeight;                                         // 0x1FA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ResetYawAngle;                                            // 0x1FA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SwimTargetRoll;                                           // 0x1FA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SwimUpRateFix;                                            // 0x1FAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SwimRotateSpeed;                                          // 0x1FB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x4];                                       // 0x1FB4(0x0004) MISSED OFFSET
	TMap<TEnumAsByte<EGrenadeType>, struct FString>    GrenadeToSlotIndexDict;                                   // 0x1FB8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              RollAngleLimit;                                           // 0x2008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PitchAngleLimit;                                          // 0x200C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SpringArmOffset;                                          // 0x2010(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               VaultEnter;                                               // 0x201C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x201D(0x0003) MISSED OFFSET
	struct FItemDefineID                               putoffItem;                                               // 0x2020(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FBattleItemAdditionalData>           AdditionalData;                                           // 0x2038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               autoEquip;                                                // 0x2048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x7];                                       // 0x2049(0x0007) MISSED OFFSET
	TArray<class USpringArmComponent*>                 SpringArms;                                               // 0x2050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UCameraComponent*>                    Cameras;                                                  // 0x2060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UParticleSystemComponent*                    PS_CloudSlow;                                             // 0x2070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    PS_CloudFast;                                             // 0x2078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USpringArmComponent*                         CurActiveSpringArm;                                       // 0x2080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                CamShakeTimerHandler;                                     // 0x2088(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               UseTurniinPlace;                                          // 0x2090(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x7];                                       // 0x2091(0x0007) MISSED OFFSET
	TMap<int, struct FName>                            GrenadeIDToNameDict;                                      // 0x2098(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        GrenadeIDsOrder;                                          // 0x20E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              ElapseTime;                                               // 0x20F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SwimRotateX;                                              // 0x20FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OpenParachuteStartCamLength;                              // 0x2100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     OpenParachuteStartCamSocketOffset;                        // 0x2104(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     OpenParachuteStartCamTargetOffset;                        // 0x2110(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     OpenParachuteStartCamLocation;                            // 0x211C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              OpenParachuteStartCamFOV;                                 // 0x2128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0x4];                                       // 0x212C(0x0004) MISSED OFFSET
	class USpringArmComponent*                         NewVar_1;                                                 // 0x2130(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ESTEPoseState>                         CurPoseState;                                             // 0x2138(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData19[0x7];                                       // 0x2139(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    NewEventDispatcher_1;                                     // 0x2140(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class ABP_STExtraPlayerController_C*               PC;                                                       // 0x2150(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                ID;                                                       // 0x2158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerPawn.BP_PlayerPawn_C");
		return ptr;
	}


	void UpdateAudioListener();
	void UpdateOverlaps(bool Flag);
	struct FString GetShootWeaponNameByWeapon(int* ItemDefineID);
	class UCameraComponent* GetThirdPersonCamera();
	class USpringArmComponent* GetThirdPersonSpringArm();
	class UCameraComponent* GetFPPCamera();
	class USpringArmComponent* GetFPPSpringArm();
	class UCameraComponent* GetFirstPersonCamera();
	class USpringArmComponent* GetFirstPersonSpringArm();
	class UCameraComponent* GetScopeCamera();
	class USpringArmComponent* GetScopeSpringArm();
	TArray<class UActorComponent*> GetNonSimulatedComponents_OnFighting();
	bool ShouldAutoScopeWhenPeek();
	struct FString GetGrenadeNameByGrenadeType(TEnumAsByte<EGrenadeType>* grenadeType);
	void SetPitchViewAngle(float MinPitch, float MaxPitch);
	TArray<class UActorComponent*> GetNonSimulatedComponents_NonTeammates();
	void GetControllerViewCamera(class UCameraComponent** Camera);
	void CheckAutoMove();
	void IsLocalControlOrView(bool* Ret);
	TArray<class UActorComponent*> GetNonSimulatedComponents();
	TArray<class UActorComponent*> GetNonDedicatedComponents();
	void HandleOnDetachedVehicle();
	void HandleOnAttachedVehicle(class ASTExtraVehicleBase* InVehicle);
	class USpringArmComponent* GetActiveSpringArm();
	void FreeFallShakeCam();
	void ParachutePlaySound(class UAkAudioEvent* LocalAkEvent, class UAkAudioEvent* RemoteAkEvent);
	void UpdatePoseCollision(TEnumAsByte<ESTEPoseState> PlayerState, TEnumAsByte<ESTEPoseState> PreState);
	void AimInterupted();
	void ClampAngleTo180d(float InputAngle, float* OutputAngle);
	void TestShowMesh();
	void GetWeapon(struct FVector* NewParam, struct FRotator* NewParam1, bool* bHaveWeapon);
	void ClientHandlePreOnPlane();
	void ResetBPCameraSetting();
	void ShowDebugArrow(class USceneComponent* self2, const struct FRotator& InRot, const struct FLinearColor& Color);
	void isAutonomous(bool* NewParam);
	void PickUp(class APickUpWrapperActor* NewParam);
	void DoPickUpTarget();
	void RotateMesh(const struct FRotator& NewParam);
	void OnRep_AvatarConfig();
	void SetAllCollisionEnabled(bool bEnable);
	void MoveOutScope();
	void MoveInScope();
	void OnPostSwitchCameraMode(TEnumAsByte<EPlayerCameraMode> Mode);
	void Reload();
	void SwitchCrouch(TEnumAsByte<ESTEPoseState> NewParam, TEnumAsByte<ESTEPoseState> PreState);
	void UserConstructionScript();
	void ParachuteCamBlend__FinishedFunc();
	void ParachuteCamBlend__UpdateFunc();
	void LerpAlpha__FinishedFunc();
	void LerpAlpha__UpdateFunc();
	void ScopeTimeline_ScopeIn__FinishedFunc();
	void ScopeTimeline_ScopeIn__UpdateFunc();
	void ScopeTimeline_ScopeOut__FinishedFunc();
	void ScopeTimeline_ScopeOut__UpdateFunc();
	void TurnLerpAlpha__FinishedFunc();
	void TurnLerpAlpha__UpdateFunc();
	void InpActEvt_Fire_K2Node_InputActionEvent_8(const struct FKey& Key);
	void InpActEvt_Fire_K2Node_InputActionEvent_7(const struct FKey& Key);
	void InpActEvt_Vault_K2Node_InputActionEvent_6(const struct FKey& Key);
	void InpActEvt_ToggleCamera_K2Node_InputActionEvent_5(const struct FKey& Key);
	void DoMoveForward(float* Rate);
	void DoMoveRight(float* Rate);
	void StartCamShake();
	void StopCamShake();
	void TickParachute();
	void ReceiveBeginPlay();
	void BPNotifyStartDying(class AController** Killer, class AActor** DamageCauser, struct FHitResult* KillingHitInfo, struct FVector* KillingHitImpulseDir, class UClass** KillingHitDamageType);
	void ReloadEvent();
	void ReceiveTick(float* DeltaSeconds);
	void OnEquipWeapon();
	void SwitchCameraEvent(TEnumAsByte<EPlayerCameraMode> Mode);
	void SwitchCamera(const struct FSTR_CameraSetting& CameraSetting);
	void OnNotifyHurt();
	void NotifyPickup(bool bIsAvailable);
	void OnLanded(struct FHitResult* Hit);
	void OnPoseStateChange(TEnumAsByte<ESTEPoseState>* LastState, TEnumAsByte<ESTEPoseState>* CurState);
	void K2_UpdateCustomMovement(float* DeltaTime);
	void K2_OnMovementModeChanged(TEnumAsByte<EMovementMode>* PrevMovementMode, TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* PrevCustomMode, unsigned char* NewCustomMode);
	void BPReceiveDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void ParachuteOnWater();
	void NotifyTombBox(bool bIsAvailable);
	void DoAutoReloadCurrentWeapon();
	void SwitchCameraToNormal();
	void Scoping(bool NewParam);
	void OnScopeInterrupt(bool* bTeleport);
	void ScopeOut();
	void OnScopeIn(bool* bTeleport);
	void OnUnEquipWeapon();
	void BPResetCharacter();
	void OnInitGrenadeData();
	void OnScopeTempTransformFromFPP();
	void OnScopeTempTransformToFPP();
	void VaultFailPawnBluePrint(struct FString* Content);
	void PawnVaultServerBluePrint(float* dis, float* Height, float* Length, struct FString* VaultKey, struct FVector* startPos, class AActor** checkActor, float* crossblockMaxFall, float* crossblockMaxDis, struct FVector* hitpoint, class AActor** WindowActor, struct FRotator* MoveDir, float* ArrivalHeight);
	void PawnVaultAllBluePrint(float* dis, float* Height, float* Length, struct FString* VaultKey, struct FVector* startPos, class AActor** checkActor, float* crossblockMaxFall, float* crossblockMaxDis, struct FVector* hitpoint, struct FRotator* MoveDir, float* ArrivalHeight);
	void PlayScopeInTimeline(float Rate);
	void ScopeInStop();
	void ScopeOutStop();
	void SpawnBulletPassByEffect(struct FVector* Location, float* BulletVelocity);
	void SwitchCameraToParachuteFalling();
	void SwitchCameraToParachuteOpening();
	void HandleParachuteStateChanged(TEnumAsByte<EParachuteState>* NewState);
	void StopTurningInPlace();
	void TurnInPlace(const struct FRotator& TurnInPlaceStart, const struct FRotator& TurnInPlaceTarget, class UCurveFloat* Curve, class UAnimMontage* TurnAnimation);
	void ExecuteUbergraph_BP_PlayerPawn(int EntryPoint);
	void NewEventDispatcher_0__DelegateSignature();
	void UnequipWeaponComplete__DelegateSignature();
	void EquipWeaponComplete__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
