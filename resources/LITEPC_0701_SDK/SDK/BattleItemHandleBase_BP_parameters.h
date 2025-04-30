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

// Function BattleItemHandleBase_BP.BattleItemHandleBase_BP_C.SpawnWrapperOnGround
struct UBattleItemHandleBase_BP_C_SpawnWrapperOnGround_Params
{
	class UClass*                                      WrapperClass;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseRandomLoc;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APickUpWrapperActor*                         TargetWrapper;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BattleItemHandleBase_BP.BattleItemHandleBase_BP_C.GetWorldInternal
struct UBattleItemHandleBase_BP_C_GetWorldInternal_Params
{
	class UWorld*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleItemHandleBase_BP.BattleItemHandleBase_BP_C.HandleDisuse
struct UBattleItemHandleBase_BP_C_HandleDisuse_Params
{
	EBattleItemDisuseReason*                           Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleItemHandleBase_BP.BattleItemHandleBase_BP_C.HandleUse
struct UBattleItemHandleBase_BP_C_HandleUse_Params
{
	struct FBattleItemUseTarget*                       Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	EBattleItemUseReason*                              Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleItemHandleBase_BP.BattleItemHandleBase_BP_C.HandleDrop
struct UBattleItemHandleBase_BP_C_HandleDrop_Params
{
	int*                                               InCount;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBattleItemDropReason*                             Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleItemHandleBase_BP.BattleItemHandleBase_BP_C.HandlePickup
struct UBattleItemHandleBase_BP_C_HandlePickup_Params
{
	TScriptInterface<class UItemContainerInterface>    ItemContainer;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FBattleItemPickupInfo*                      PickupInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	EBattleItemPickupReason*                           Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleItemHandleBase_BP.BattleItemHandleBase_BP_C.ExtractItemData
struct UBattleItemHandleBase_BP_C_ExtractItemData_Params
{
	struct FBattleItemData                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
