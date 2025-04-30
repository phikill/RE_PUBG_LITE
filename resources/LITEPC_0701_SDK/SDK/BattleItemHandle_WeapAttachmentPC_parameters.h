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

// Function BattleItemHandle_WeapAttachmentPC.BattleItemHandle_WeapAttachmentPC_C.CurBackpackCapacity
struct UBattleItemHandle_WeapAttachmentPC_C_CurBackpackCapacity_Params
{
	class UBattleItemHandle_WeapAttachmentPC_C*        ItemHandle;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsDrop;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BattleItemHandle_WeapAttachmentPC.BattleItemHandle_WeapAttachmentPC_C.CanSwap
struct UBattleItemHandle_WeapAttachmentPC_C_CanSwap_Params
{
	class UBackpackWeaponAttachHandle*                 SpecificID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Can;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BattleItemHandle_WeapAttachmentPC.BattleItemHandle_WeapAttachmentPC_C.FilterWeaponItemHandle
struct UBattleItemHandle_WeapAttachmentPC_C_FilterWeaponItemHandle_Params
{
	class UBattleItemHandleBase_BP_C*                  InputItemHandle;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsPickupDirectlyEquip;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBattleItemPickupInfo                       PickupInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FBattleItemUseTarget                        Target;                                                   // (Parm, OutParm)
	bool                                               HasTarget;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UBattleItemHandle_MainWeaponPC_C*            TargetWeaponHandle;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class ASTExtraWeapon*                              WeaponActor;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BattleItemHandle_WeapAttachmentPC.BattleItemHandle_WeapAttachmentPC_C.ExtractItemData
struct UBattleItemHandle_WeapAttachmentPC_C_ExtractItemData_Params
{
	struct FBattleItemData                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BattleItemHandle_WeapAttachmentPC.BattleItemHandle_WeapAttachmentPC_C.GetWorldInternal
struct UBattleItemHandle_WeapAttachmentPC_C_GetWorldInternal_Params
{
	class UWorld*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleItemHandle_WeapAttachmentPC.BattleItemHandle_WeapAttachmentPC_C.CreateWrapperOnGround
struct UBattleItemHandle_WeapAttachmentPC_C_CreateWrapperOnGround_Params
{
	int                                                Count;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleItemHandle_WeapAttachmentPC.BattleItemHandle_WeapAttachmentPC_C.HandleDrop
struct UBattleItemHandle_WeapAttachmentPC_C_HandleDrop_Params
{
	int*                                               InCount;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBattleItemDropReason*                             Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleItemHandle_WeapAttachmentPC.BattleItemHandle_WeapAttachmentPC_C.HandlePickup
struct UBattleItemHandle_WeapAttachmentPC_C_HandlePickup_Params
{
	TScriptInterface<class UItemContainerInterface>    ItemContainer;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FBattleItemPickupInfo*                      PickupInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	EBattleItemPickupReason*                           Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleItemHandle_WeapAttachmentPC.BattleItemHandle_WeapAttachmentPC_C.HandleDisuse
struct UBattleItemHandle_WeapAttachmentPC_C_HandleDisuse_Params
{
	EBattleItemDisuseReason*                           Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleItemHandle_WeapAttachmentPC.BattleItemHandle_WeapAttachmentPC_C.HandleUse
struct UBattleItemHandle_WeapAttachmentPC_C_HandleUse_Params
{
	struct FBattleItemUseTarget*                       Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	EBattleItemUseReason*                              Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleItemHandle_WeapAttachmentPC.BattleItemHandle_WeapAttachmentPC_C.ReturnWeaponAdditionalBulletsToBackpack
struct UBattleItemHandle_WeapAttachmentPC_C_ReturnWeaponAdditionalBulletsToBackpack_Params
{
	class ASTExtraShootWeapon**                        Weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               BulletNum;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleItemHandle_WeapAttachmentPC.BattleItemHandle_WeapAttachmentPC_C.ExecuteUbergraph_BattleItemHandle_WeapAttachmentPC
struct UBattleItemHandle_WeapAttachmentPC_C_ExecuteUbergraph_BattleItemHandle_WeapAttachmentPC_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
