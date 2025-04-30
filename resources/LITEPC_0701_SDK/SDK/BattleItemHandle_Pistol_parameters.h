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

// Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.LocalHandleDisuse
struct UBattleItemHandle_Pistol_C_LocalHandleDisuse_Params
{
};

// Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.GetAvailableTargetLogicSocketName
struct UBattleItemHandle_Pistol_C_GetAvailableTargetLogicSocketName_Params
{
	struct FName                                       TargetSocket;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bNeedPutDownOldWeapon;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoUse;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.GetAvailableInstantLogicSocketName
struct UBattleItemHandle_Pistol_C_GetAvailableInstantLogicSocketName_Params
{
	struct FName                                       Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bNeedPutDownOldWeapon;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoUse;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.CreateWrapperOnGround
struct UBattleItemHandle_Pistol_C_CreateWrapperOnGround_Params
{
};

// Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.JudgeHasTargetAttachmentSlot
struct UBattleItemHandle_Pistol_C_JudgeHasTargetAttachmentSlot_Params
{
	int                                                TypeSpecificID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.HandlePickup
struct UBattleItemHandle_Pistol_C_HandlePickup_Params
{
	TScriptInterface<class UItemContainerInterface>    ItemContainer;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FBattleItemPickupInfo*                      PickupInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	EBattleItemPickupReason*                           Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.HandleUse
struct UBattleItemHandle_Pistol_C_HandleUse_Params
{
	struct FBattleItemUseTarget*                       Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	EBattleItemUseReason*                              Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.HandleDrop
struct UBattleItemHandle_Pistol_C_HandleDrop_Params
{
	int*                                               InCount;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBattleItemDropReason*                             Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.HandleDisuse
struct UBattleItemHandle_Pistol_C_HandleDisuse_Params
{
	EBattleItemDisuseReason*                           Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
