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

// BlueprintGeneratedClass BP_PlayerPawnPC.BP_PlayerPawnPC_C
// 0x00AD (0x2209 - 0x215C)
class ABP_PlayerPawnPC_C : public ABP_PlayerPawn_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x215C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2160(0x0008) (Transient, DuplicateTransient)
	class UTslBreatheComp*                             TslBreatheComp;                                           // 0x2168(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAimingComp*                                 AimingComp;                                               // 0x2170(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               unswing;                                                  // 0x2178(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x2179(0x0003) MISSED OFFSET
	int                                                ShotGunReleaseFireType;                                   // 0x217C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SniperReleaseFireType;                                    // 0x2180(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x2184(0x0004) MISSED OFFSET
	class ASTExtraShootWeapon*                         ReleaseFireWeaponCache;                                   // 0x2188(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                ItemIndex;                                                // 0x2190(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ESurviveWeaponPropSlot                             prevUsingWeaponSlot;                                      // 0x2194(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanUseFreeCam;                                            // 0x2195(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x2196(0x0002) MISSED OFFSET
	struct FRotator                                    SaveRotator;                                              // 0x2198(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               isFreeCameraReversing;                                    // 0x21A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x21A5(0x0003) MISSED OFFSET
	TMap<struct FName, TEnumAsByte<EGrenadeType>>      SlotNameToGrenadeType;                                    // 0x21A8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               CanFire;                                                  // 0x21F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x21F9(0x0003) MISSED OFFSET
	float                                              TestNormalMouseSens;                                      // 0x21FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AAudioTestActor_C*                           AudioActorRef;                                            // 0x2200(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EGrenadeType>                          PrevGrenade;                                              // 0x2208(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerPawnPC.BP_PlayerPawnPC_C");
		return ptr;
	}


	void SetActionByJumpOrVaultInput(bool bIsVaultInput);
	int FindEquipmentAvatarIDFromEquipmentAvatarList(int* equipmentItemID);
	int FindWeaponAvatarIDFromWeaponAvatarList(int* weaponItemID);
	void ZoomOut();
	bool DoDoorInteractAction();
	void DoPlayerDoorAction();
	void OnlyUseFlashBang();
	void OnlyUseSmokeBomb();
	void OnlyUseMolotov();
	void ReleaseAiming();
	void StartAiming();
	void IsAbleMouseEvent(bool* IsAble);
	void OnlyFragGrenade();
	void GrenadeThrow(TEnumAsByte<EGrenadeType> grenadeType);
	void GrenadePrepareToThrow(TEnumAsByte<EGrenadeType> grenadeType);
	void ShouldThrowGrenadeFunc(EUTSkillEntry SkillEntryEvent);
	void GetMainControllPanelTouchButton(class UMainControlPanelTochButton_C** UIPanel);
	void EquipGrenade();
	void IsGrenadeWeapon(class ASTExtraWeapon* InWeapon, bool* IsGrenade, TEnumAsByte<EGrenadeType>* grenadeType);
	void IsMeleeWeapon(class ASTExtraWeapon* InWeapon, bool* IsMelee);
	void ReleaseFire(bool Throw);
	void DisableAutoSprint();
	void GetOwningPlayerPawnOrVehicleDriver(class ASTExtraPlayerCharacter** ResultCharacter);
	void CanPlayerAutoSprintOrSwim(bool* CanAutoSprintOrSwim);
	void ToggleSprint();
	void ToggleTarget();
	void ToggleProne();
	void GetPoseState(TEnumAsByte<ESTEPoseState>* Result);
	void ToggleCrouch();
	void ToggleWeaponSlot();
	void ChangeWeaponBySlot(ESurviveWeaponPropSlot targetSlot);
	void IsWeaponSwitching(bool* Result);
	void IsUsingByWeaponSlot(ESurviveWeaponPropSlot InputSlot, bool* IsUsing);
	void StopSprint();
	void StartSprint();
	void GetNextFireMode(class ASTExtraShootWeapon* InputPin, EGunFireMode* FireMode);
	void IsNeedReleaseFire(class ASTExtraShootWeapon* shootWeapon, bool* Result, EReleaseToFireType* ReleaseFireType);
	void DealSwimForce(float upoffset, bool* unswing);
	void UserConstructionScript();
	void InpActEvt_Fire_K2Node_InputActionEvent_96(const struct FKey& Key);
	void InpActEvt_Fire_K2Node_InputActionEvent_95(const struct FKey& Key);
	void InpActEvt_ToggleFiringMode_K2Node_InputActionEvent_94(const struct FKey& Key);
	void InpActEvt_Sprint_K2Node_InputActionEvent_93(const struct FKey& Key);
	void InpActEvt_Sprint_K2Node_InputActionEvent_92(const struct FKey& Key);
	void InpActEvt_Reload_K2Node_InputActionEvent_91(const struct FKey& Key);
	void InpActEvt_Weapon_1_K2Node_InputActionEvent_90(const struct FKey& Key);
	void InpActEvt_Weapon_2_K2Node_InputActionEvent_89(const struct FKey& Key);
	void InpActEvt_Weapon_3_K2Node_InputActionEvent_88(const struct FKey& Key);
	void InpActEvt_Weapon_4_K2Node_InputActionEvent_87(const struct FKey& Key);
	void InpActEvt_Weapon_5_K2Node_InputActionEvent_86(const struct FKey& Key);
	void InpActEvt_UnArm_K2Node_InputActionEvent_85(const struct FKey& Key);
	void InpActEvt_ToggleCrouch_K2Node_InputActionEvent_84(const struct FKey& Key);
	void InpActEvt_ToggleProne_K2Node_InputActionEvent_83(const struct FKey& Key);
	void InpActEvt_Target_K2Node_InputActionEvent_82(const struct FKey& Key);
	void InpActEvt_Target_K2Node_InputActionEvent_81(const struct FKey& Key);
	void InpActEvt_ToggleAutoRuns_K2Node_InputActionEvent_80(const struct FKey& Key);
	void InpActEvt_NextWeapon_K2Node_InputActionEvent_79(const struct FKey& Key);
	void InpActEvt_PrevWeapon_K2Node_InputActionEvent_78(const struct FKey& Key);
	void InpActEvt_ToggleThrowMode_K2Node_InputActionEvent_77(const struct FKey& Key);
	void InpActEvt_OnlyFragGrenade_K2Node_InputActionEvent_76(const struct FKey& Key);
	void InpActEvt_PeekLeft_K2Node_InputActionEvent_75(const struct FKey& Key);
	void InpActEvt_PeekLeft_K2Node_InputActionEvent_74(const struct FKey& Key);
	void InpActEvt_PeekRight_K2Node_InputActionEvent_73(const struct FKey& Key);
	void InpActEvt_PeekRight_K2Node_InputActionEvent_72(const struct FKey& Key);
	void InpActEvt_Walk_K2Node_InputActionEvent_71(const struct FKey& Key);
	void InpActEvt_Walk_K2Node_InputActionEvent_70(const struct FKey& Key);
	void InpActEvt_ZeroingLevelUp_K2Node_InputActionEvent_69(const struct FKey& Key);
	void InpActEvt_ZeroingLevelDown_K2Node_InputActionEvent_68(const struct FKey& Key);
	void InpActEvt_UseMolotov_K2Node_InputActionEvent_67(const struct FKey& Key);
	void InpActEvt_UseSmokeBomb_K2Node_InputActionEvent_66(const struct FKey& Key);
	void InpActEvt_UseFlashBang_K2Node_InputActionEvent_65(const struct FKey& Key);
	void InpActEvt_Aim_K2Node_InputActionEvent_64(const struct FKey& Key);
	void InpActEvt_Aim_K2Node_InputActionEvent_63(const struct FKey& Key);
	void InpActEvt_ADS_K2Node_InputActionEvent_62(const struct FKey& Key);
	void InpActEvt_NumPadZero_K2Node_InputKeyEvent_16(const struct FKey& Key);
	void InpActEvt_NumPadEight_K2Node_InputKeyEvent_15(const struct FKey& Key);
	void InpActEvt_NumPadTwo_K2Node_InputKeyEvent_14(const struct FKey& Key);
	void InpActEvt_NumPadSeven_K2Node_InputKeyEvent_13(const struct FKey& Key);
	void InpActEvt_NumPadNine_K2Node_InputKeyEvent_12(const struct FKey& Key);
	void InpActEvt_NumPadOne_K2Node_InputKeyEvent_11(const struct FKey& Key);
	void InpActEvt_Decimal_K2Node_InputKeyEvent_10(const struct FKey& Key);
	void InpActEvt_NumPadFive_K2Node_InputKeyEvent_9(const struct FKey& Key);
	void InpActEvt_HoldingBreathe_K2Node_InputActionEvent_61(const struct FKey& Key);
	void InpActEvt_HoldingBreathe_K2Node_InputActionEvent_60(const struct FKey& Key);
	void InpActEvt_ReticleBrightnessUp_K2Node_InputActionEvent_59(const struct FKey& Key);
	void InpActEvt_ReticleBrightnessDown_K2Node_InputActionEvent_58(const struct FKey& Key);
	void InpActEvt_ChangeReticleShapeToPrev_K2Node_InputActionEvent_57(const struct FKey& Key);
	void InpActEvt_ChangeReticleShapeToNext_K2Node_InputActionEvent_56(const struct FKey& Key);
	void InpActEvt_ResetGunAimingParameters_K2Node_InputActionEvent_55(const struct FKey& Key);
	void InpActEvt_JumpOnly_K2Node_InputActionEvent_54(const struct FKey& Key);
	void InpActEvt_JumpOnly_K2Node_InputActionEvent_53(const struct FKey& Key);
	void InpActEvt_VaultOnly_K2Node_InputActionEvent_52(const struct FKey& Key);
	void InpActEvt_Vault_K2Node_InputActionEvent_51(const struct FKey& Key);
	void InpActEvt_Vault_K2Node_InputActionEvent_50(const struct FKey& Key);
	void InpActEvt_ResetZeroing_K2Node_InputActionEvent_49(const struct FKey& Key);
	void ReceiveBeginPlay();
	void C_1(class ASTExtraVehicleBase* ClosestVechile, bool CanEnterDriverSeat, bool CanEnterPassengerSeat);
	void InpAxisEvt_SinkAndFloat_K2Node_InputAxisEvent_22(float AxisValue);
	void DoorInteract(class APUBGDoor* Door, bool AimingExtraDoor);
	void OnStartFreeCamera();
	void OnStopFreeCamera();
	void BroadCastPlayerDoorAction();
	void VaultFailFromDS();
	void CancleVault();
	void ExecuteUbergraph_BP_PlayerPawnPC(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
