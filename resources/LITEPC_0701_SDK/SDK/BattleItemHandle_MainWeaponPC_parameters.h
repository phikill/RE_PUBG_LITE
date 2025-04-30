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

// Function BattleItemHandle_MainWeaponPC.BattleItemHandle_MainWeaponPC_C.AutoEquipAttachments
struct UBattleItemHandle_MainWeaponPC_C_AutoEquipAttachments_Params
{
};

// Function BattleItemHandle_MainWeaponPC.BattleItemHandle_MainWeaponPC_C.ReturnBullets
struct UBattleItemHandle_MainWeaponPC_C_ReturnBullets_Params
{
	int                                                Count;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleItemHandle_MainWeaponPC.BattleItemHandle_MainWeaponPC_C.UpdateEquipedAttach
struct UBattleItemHandle_MainWeaponPC_C_UpdateEquipedAttach_Params
{
	EWeaponAttachmentSocketType                        WeapAttachSockType;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBattleItemHandle_WeapAttachmentPC_C*        WeapAttachItemHandle;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsEquip;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleItemHandle_MainWeaponPC.BattleItemHandle_MainWeaponPC_C.LocalHandleDisuse
struct UBattleItemHandle_MainWeaponPC_C_LocalHandleDisuse_Params
{
	EBattleItemDisuseReason                            Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleItemHandle_MainWeaponPC.BattleItemHandle_MainWeaponPC_C.CreateWrapperOnGround
struct UBattleItemHandle_MainWeaponPC_C_CreateWrapperOnGround_Params
{
};

// Function BattleItemHandle_MainWeaponPC.BattleItemHandle_MainWeaponPC_C.GetAvailableTargetLogicSocketName
struct UBattleItemHandle_MainWeaponPC_C_GetAvailableTargetLogicSocketName_Params
{
	struct FName                                       TargetSocket;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bNeedPutDownOldWeapon;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoUse;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BattleItemHandle_MainWeaponPC.BattleItemHandle_MainWeaponPC_C.GetAvailableInstantLogicSocketName
struct UBattleItemHandle_MainWeaponPC_C_GetAvailableInstantLogicSocketName_Params
{
	struct FName                                       Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bNeedPutDownOldWeapon;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoUse;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BattleItemHandle_MainWeaponPC.BattleItemHandle_MainWeaponPC_C.JudgeHasTargetAttachmentSlot
struct UBattleItemHandle_MainWeaponPC_C_JudgeHasTargetAttachmentSlot_Params
{
	int                                                TypeSpecificID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EWeaponAttachmentSocketType                        AttachType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanEquip;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               HasOcupied;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BattleItemHandle_MainWeaponPC.BattleItemHandle_MainWeaponPC_C.HandleDisuse
struct UBattleItemHandle_MainWeaponPC_C_HandleDisuse_Params
{
	EBattleItemDisuseReason*                           Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleItemHandle_MainWeaponPC.BattleItemHandle_MainWeaponPC_C.HandleUse
struct UBattleItemHandle_MainWeaponPC_C_HandleUse_Params
{
	struct FBattleItemUseTarget*                       Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	EBattleItemUseReason*                              Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleItemHandle_MainWeaponPC.BattleItemHandle_MainWeaponPC_C.HandleDrop
struct UBattleItemHandle_MainWeaponPC_C_HandleDrop_Params
{
	int*                                               InCount;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBattleItemDropReason*                             Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleItemHandle_MainWeaponPC.BattleItemHandle_MainWeaponPC_C.HandlePickup
struct UBattleItemHandle_MainWeaponPC_C_HandlePickup_Params
{
	TScriptInterface<class UItemContainerInterface>    ItemContainer;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FBattleItemPickupInfo*                      PickupInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	EBattleItemPickupReason*                           Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
