#pragma once

#include "../SDK.h"

// Name: LitePC_0701, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.SetActionByJumpOrVaultInput
struct ABP_PlayerPawnPC_C_SetActionByJumpOrVaultInput_Params
{
	bool                                               bIsVaultInput;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.FindEquipmentAvatarIDFromEquipmentAvatarList
struct ABP_PlayerPawnPC_C_FindEquipmentAvatarIDFromEquipmentAvatarList_Params
{
	int*                                               equipmentItemID;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.FindWeaponAvatarIDFromWeaponAvatarList
struct ABP_PlayerPawnPC_C_FindWeaponAvatarIDFromWeaponAvatarList_Params
{
	int*                                               weaponItemID;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.ZoomOut
struct ABP_PlayerPawnPC_C_ZoomOut_Params
{
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.DoDoorInteractAction
struct ABP_PlayerPawnPC_C_DoDoorInteractAction_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.DoPlayerDoorAction
struct ABP_PlayerPawnPC_C_DoPlayerDoorAction_Params
{
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.OnlyUseFlashBang
struct ABP_PlayerPawnPC_C_OnlyUseFlashBang_Params
{
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.OnlyUseSmokeBomb
struct ABP_PlayerPawnPC_C_OnlyUseSmokeBomb_Params
{
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.OnlyUseMolotov
struct ABP_PlayerPawnPC_C_OnlyUseMolotov_Params
{
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.ReleaseAiming
struct ABP_PlayerPawnPC_C_ReleaseAiming_Params
{
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.StartAiming
struct ABP_PlayerPawnPC_C_StartAiming_Params
{
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.IsAbleMouseEvent
struct ABP_PlayerPawnPC_C_IsAbleMouseEvent_Params
{
	bool                                               IsAble;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.OnlyFragGrenade
struct ABP_PlayerPawnPC_C_OnlyFragGrenade_Params
{
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.GrenadeThrow
struct ABP_PlayerPawnPC_C_GrenadeThrow_Params
{
	TEnumAsByte<EGrenadeType>                          grenadeType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.GrenadePrepareToThrow
struct ABP_PlayerPawnPC_C_GrenadePrepareToThrow_Params
{
	TEnumAsByte<EGrenadeType>                          grenadeType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.ShouldThrowGrenadeFunc
struct ABP_PlayerPawnPC_C_ShouldThrowGrenadeFunc_Params
{
	EUTSkillEntry                                      SkillEntryEvent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.GetMainControllPanelTouchButton
struct ABP_PlayerPawnPC_C_GetMainControllPanelTouchButton_Params
{
	class UMainControlPanelTochButton_C*               UIPanel;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.EquipGrenade
struct ABP_PlayerPawnPC_C_EquipGrenade_Params
{
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.IsGrenadeWeapon
struct ABP_PlayerPawnPC_C_IsGrenadeWeapon_Params
{
	class ASTExtraWeapon*                              InWeapon;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsGrenade;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGrenadeType>                          grenadeType;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.IsMeleeWeapon
struct ABP_PlayerPawnPC_C_IsMeleeWeapon_Params
{
	class ASTExtraWeapon*                              InWeapon;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsMelee;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.ReleaseFire
struct ABP_PlayerPawnPC_C_ReleaseFire_Params
{
	bool                                               Throw;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.DisableAutoSprint
struct ABP_PlayerPawnPC_C_DisableAutoSprint_Params
{
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.GetOwningPlayerPawnOrVehicleDriver
struct ABP_PlayerPawnPC_C_GetOwningPlayerPawnOrVehicleDriver_Params
{
	class ASTExtraPlayerCharacter*                     ResultCharacter;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.CanPlayerAutoSprintOrSwim
struct ABP_PlayerPawnPC_C_CanPlayerAutoSprintOrSwim_Params
{
	bool                                               CanAutoSprintOrSwim;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.ToggleSprint
struct ABP_PlayerPawnPC_C_ToggleSprint_Params
{
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.ToggleTarget
struct ABP_PlayerPawnPC_C_ToggleTarget_Params
{
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.ToggleProne
struct ABP_PlayerPawnPC_C_ToggleProne_Params
{
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.GetPoseState
struct ABP_PlayerPawnPC_C_GetPoseState_Params
{
	TEnumAsByte<ESTEPoseState>                         Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.ToggleCrouch
struct ABP_PlayerPawnPC_C_ToggleCrouch_Params
{
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.ToggleWeaponSlot
struct ABP_PlayerPawnPC_C_ToggleWeaponSlot_Params
{
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.ChangeWeaponBySlot
struct ABP_PlayerPawnPC_C_ChangeWeaponBySlot_Params
{
	ESurviveWeaponPropSlot                             targetSlot;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.IsWeaponSwitching
struct ABP_PlayerPawnPC_C_IsWeaponSwitching_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.IsUsingByWeaponSlot
struct ABP_PlayerPawnPC_C_IsUsingByWeaponSlot_Params
{
	ESurviveWeaponPropSlot                             InputSlot;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsUsing;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.StopSprint
struct ABP_PlayerPawnPC_C_StopSprint_Params
{
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.StartSprint
struct ABP_PlayerPawnPC_C_StartSprint_Params
{
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.GetNextFireMode
struct ABP_PlayerPawnPC_C_GetNextFireMode_Params
{
	class ASTExtraShootWeapon*                         InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EGunFireMode                                       FireMode;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.IsNeedReleaseFire
struct ABP_PlayerPawnPC_C_IsNeedReleaseFire_Params
{
	class ASTExtraShootWeapon*                         shootWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	EReleaseToFireType                                 ReleaseFireType;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.DealSwimForce
struct ABP_PlayerPawnPC_C_DealSwimForce_Params
{
	float                                              upoffset;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               unswing;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.UserConstructionScript
struct ABP_PlayerPawnPC_C_UserConstructionScript_Params
{
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.InpActEvt_Fire_K2Node_InputActionEvent_96
struct ABP_PlayerPawnPC_C_InpActEvt_Fire_K2Node_InputActionEvent_96_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.InpActEvt_Fire_K2Node_InputActionEvent_95
struct ABP_PlayerPawnPC_C_InpActEvt_Fire_K2Node_InputActionEvent_95_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.InpActEvt_ToggleFiringMode_K2Node_InputActionEvent_94
struct ABP_PlayerPawnPC_C_InpActEvt_ToggleFiringMode_K2Node_InputActionEvent_94_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.InpActEvt_Sprint_K2Node_InputActionEvent_93
struct ABP_PlayerPawnPC_C_InpActEvt_Sprint_K2Node_InputActionEvent_93_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.InpActEvt_Sprint_K2Node_InputActionEvent_92
struct ABP_PlayerPawnPC_C_InpActEvt_Sprint_K2Node_InputActionEvent_92_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.InpActEvt_Reload_K2Node_InputActionEvent_91
struct ABP_PlayerPawnPC_C_InpActEvt_Reload_K2Node_InputActionEvent_91_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.InpActEvt_Weapon_1_K2Node_InputActionEvent_90
struct ABP_PlayerPawnPC_C_InpActEvt_Weapon_1_K2Node_InputActionEvent_90_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.InpActEvt_Weapon_2_K2Node_InputActionEvent_89
struct ABP_PlayerPawnPC_C_InpActEvt_Weapon_2_K2Node_InputActionEvent_89_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.InpActEvt_Weapon_3_K2Node_InputActionEvent_88
struct ABP_PlayerPawnPC_C_InpActEvt_Weapon_3_K2Node_InputActionEvent_88_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.InpActEvt_Weapon_4_K2Node_InputActionEvent_87
struct ABP_PlayerPawnPC_C_InpActEvt_Weapon_4_K2Node_InputActionEvent_87_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.InpActEvt_Weapon_5_K2Node_InputActionEvent_86
struct ABP_PlayerPawnPC_C_InpActEvt_Weapon_5_K2Node_InputActionEvent_86_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.InpActEvt_UnArm_K2Node_InputActionEvent_85
struct ABP_PlayerPawnPC_C_InpActEvt_UnArm_K2Node_InputActionEvent_85_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.InpActEvt_ToggleCrouch_K2Node_InputActionEvent_84
struct ABP_PlayerPawnPC_C_InpActEvt_ToggleCrouch_K2Node_InputActionEvent_84_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.InpActEvt_ToggleProne_K2Node_InputActionEvent_83
struct ABP_PlayerPawnPC_C_InpActEvt_ToggleProne_K2Node_InputActionEvent_83_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.InpActEvt_Target_K2Node_InputActionEvent_82
struct ABP_PlayerPawnPC_C_InpActEvt_Target_K2Node_InputActionEvent_82_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.InpActEvt_Target_K2Node_InputActionEvent_81
struct ABP_PlayerPawnPC_C_InpActEvt_Target_K2Node_InputActionEvent_81_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.InpActEvt_ToggleAutoRuns_K2Node_InputActionEvent_80
struct ABP_PlayerPawnPC_C_InpActEvt_ToggleAutoRuns_K2Node_InputActionEvent_80_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.InpActEvt_NextWeapon_K2Node_InputActionEvent_79
struct ABP_PlayerPawnPC_C_InpActEvt_NextWeapon_K2Node_InputActionEvent_79_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.InpActEvt_PrevWeapon_K2Node_InputActionEvent_78
struct ABP_PlayerPawnPC_C_InpActEvt_PrevWeapon_K2Node_InputActionEvent_78_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.InpActEvt_ToggleThrowMode_K2Node_InputActionEvent_77
struct ABP_PlayerPawnPC_C_InpActEvt_ToggleThrowMode_K2Node_InputActionEvent_77_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.InpActEvt_OnlyFragGrenade_K2Node_InputActionEvent_76
struct ABP_PlayerPawnPC_C_InpActEvt_OnlyFragGrenade_K2Node_InputActionEvent_76_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.InpActEvt_PeekLeft_K2Node_InputActionEvent_75
struct ABP_PlayerPawnPC_C_InpActEvt_PeekLeft_K2Node_InputActionEvent_75_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.InpActEvt_PeekLeft_K2Node_InputActionEvent_74
struct ABP_PlayerPawnPC_C_InpActEvt_PeekLeft_K2Node_InputActionEvent_74_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.InpActEvt_PeekRight_K2Node_InputActionEvent_73
struct ABP_PlayerPawnPC_C_InpActEvt_PeekRight_K2Node_InputActionEvent_73_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.InpActEvt_PeekRight_K2Node_InputActionEvent_72
struct ABP_PlayerPawnPC_C_InpActEvt_PeekRight_K2Node_InputActionEvent_72_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.InpActEvt_Walk_K2Node_InputActionEvent_71
struct ABP_PlayerPawnPC_C_InpActEvt_Walk_K2Node_InputActionEvent_71_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.InpActEvt_Walk_K2Node_InputActionEvent_70
struct ABP_PlayerPawnPC_C_InpActEvt_Walk_K2Node_InputActionEvent_70_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.InpActEvt_ZeroingLevelUp_K2Node_InputActionEvent_69
struct ABP_PlayerPawnPC_C_InpActEvt_ZeroingLevelUp_K2Node_InputActionEvent_69_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.InpActEvt_ZeroingLevelDown_K2Node_InputActionEvent_68
struct ABP_PlayerPawnPC_C_InpActEvt_ZeroingLevelDown_K2Node_InputActionEvent_68_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.InpActEvt_UseMolotov_K2Node_InputActionEvent_67
struct ABP_PlayerPawnPC_C_InpActEvt_UseMolotov_K2Node_InputActionEvent_67_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.InpActEvt_UseSmokeBomb_K2Node_InputActionEvent_66
struct ABP_PlayerPawnPC_C_InpActEvt_UseSmokeBomb_K2Node_InputActionEvent_66_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.InpActEvt_UseFlashBang_K2Node_InputActionEvent_65
struct ABP_PlayerPawnPC_C_InpActEvt_UseFlashBang_K2Node_InputActionEvent_65_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.InpActEvt_Aim_K2Node_InputActionEvent_64
struct ABP_PlayerPawnPC_C_InpActEvt_Aim_K2Node_InputActionEvent_64_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.InpActEvt_Aim_K2Node_InputActionEvent_63
struct ABP_PlayerPawnPC_C_InpActEvt_Aim_K2Node_InputActionEvent_63_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.InpActEvt_ADS_K2Node_InputActionEvent_62
struct ABP_PlayerPawnPC_C_InpActEvt_ADS_K2Node_InputActionEvent_62_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.InpActEvt_NumPadZero_K2Node_InputKeyEvent_16
struct ABP_PlayerPawnPC_C_InpActEvt_NumPadZero_K2Node_InputKeyEvent_16_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.InpActEvt_NumPadEight_K2Node_InputKeyEvent_15
struct ABP_PlayerPawnPC_C_InpActEvt_NumPadEight_K2Node_InputKeyEvent_15_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.InpActEvt_NumPadTwo_K2Node_InputKeyEvent_14
struct ABP_PlayerPawnPC_C_InpActEvt_NumPadTwo_K2Node_InputKeyEvent_14_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.InpActEvt_NumPadSeven_K2Node_InputKeyEvent_13
struct ABP_PlayerPawnPC_C_InpActEvt_NumPadSeven_K2Node_InputKeyEvent_13_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.InpActEvt_NumPadNine_K2Node_InputKeyEvent_12
struct ABP_PlayerPawnPC_C_InpActEvt_NumPadNine_K2Node_InputKeyEvent_12_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.InpActEvt_NumPadOne_K2Node_InputKeyEvent_11
struct ABP_PlayerPawnPC_C_InpActEvt_NumPadOne_K2Node_InputKeyEvent_11_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.InpActEvt_Decimal_K2Node_InputKeyEvent_10
struct ABP_PlayerPawnPC_C_InpActEvt_Decimal_K2Node_InputKeyEvent_10_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.InpActEvt_NumPadFive_K2Node_InputKeyEvent_9
struct ABP_PlayerPawnPC_C_InpActEvt_NumPadFive_K2Node_InputKeyEvent_9_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.InpActEvt_HoldingBreathe_K2Node_InputActionEvent_61
struct ABP_PlayerPawnPC_C_InpActEvt_HoldingBreathe_K2Node_InputActionEvent_61_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.InpActEvt_HoldingBreathe_K2Node_InputActionEvent_60
struct ABP_PlayerPawnPC_C_InpActEvt_HoldingBreathe_K2Node_InputActionEvent_60_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.InpActEvt_ReticleBrightnessUp_K2Node_InputActionEvent_59
struct ABP_PlayerPawnPC_C_InpActEvt_ReticleBrightnessUp_K2Node_InputActionEvent_59_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.InpActEvt_ReticleBrightnessDown_K2Node_InputActionEvent_58
struct ABP_PlayerPawnPC_C_InpActEvt_ReticleBrightnessDown_K2Node_InputActionEvent_58_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.InpActEvt_ChangeReticleShapeToPrev_K2Node_InputActionEvent_57
struct ABP_PlayerPawnPC_C_InpActEvt_ChangeReticleShapeToPrev_K2Node_InputActionEvent_57_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.InpActEvt_ChangeReticleShapeToNext_K2Node_InputActionEvent_56
struct ABP_PlayerPawnPC_C_InpActEvt_ChangeReticleShapeToNext_K2Node_InputActionEvent_56_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.InpActEvt_ResetGunAimingParameters_K2Node_InputActionEvent_55
struct ABP_PlayerPawnPC_C_InpActEvt_ResetGunAimingParameters_K2Node_InputActionEvent_55_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.InpActEvt_JumpOnly_K2Node_InputActionEvent_54
struct ABP_PlayerPawnPC_C_InpActEvt_JumpOnly_K2Node_InputActionEvent_54_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.InpActEvt_JumpOnly_K2Node_InputActionEvent_53
struct ABP_PlayerPawnPC_C_InpActEvt_JumpOnly_K2Node_InputActionEvent_53_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.InpActEvt_VaultOnly_K2Node_InputActionEvent_52
struct ABP_PlayerPawnPC_C_InpActEvt_VaultOnly_K2Node_InputActionEvent_52_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.InpActEvt_Vault_K2Node_InputActionEvent_51
struct ABP_PlayerPawnPC_C_InpActEvt_Vault_K2Node_InputActionEvent_51_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.InpActEvt_Vault_K2Node_InputActionEvent_50
struct ABP_PlayerPawnPC_C_InpActEvt_Vault_K2Node_InputActionEvent_50_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.InpActEvt_ResetZeroing_K2Node_InputActionEvent_49
struct ABP_PlayerPawnPC_C_InpActEvt_ResetZeroing_K2Node_InputActionEvent_49_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.ReceiveBeginPlay
struct ABP_PlayerPawnPC_C_ReceiveBeginPlay_Params
{
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.C_1
struct ABP_PlayerPawnPC_C_C_1_Params
{
	class ASTExtraVehicleBase*                         ClosestVechile;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanEnterDriverSeat;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanEnterPassengerSeat;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.InpAxisEvt_SinkAndFloat_K2Node_InputAxisEvent_22
struct ABP_PlayerPawnPC_C_InpAxisEvt_SinkAndFloat_K2Node_InputAxisEvent_22_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.DoorInteract
struct ABP_PlayerPawnPC_C_DoorInteract_Params
{
	class APUBGDoor*                                   Door;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AimingExtraDoor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.OnStartFreeCamera
struct ABP_PlayerPawnPC_C_OnStartFreeCamera_Params
{
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.OnStopFreeCamera
struct ABP_PlayerPawnPC_C_OnStopFreeCamera_Params
{
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.BroadCastPlayerDoorAction
struct ABP_PlayerPawnPC_C_BroadCastPlayerDoorAction_Params
{
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.VaultFailFromDS
struct ABP_PlayerPawnPC_C_VaultFailFromDS_Params
{
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.CancleVault
struct ABP_PlayerPawnPC_C_CancleVault_Params
{
};

// Function BP_PlayerPawnPC.BP_PlayerPawnPC_C.ExecuteUbergraph_BP_PlayerPawnPC
struct ABP_PlayerPawnPC_C_ExecuteUbergraph_BP_PlayerPawnPC_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
