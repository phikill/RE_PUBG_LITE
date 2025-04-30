
#include "../SDK.h"

// Name: LitePC_0701, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BattleItemHandleBase_BP.BattleItemHandleBase_BP_C.SpawnWrapperOnGround
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  WrapperClass                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseRandomLoc                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APickUpWrapperActor*     TargetWrapper                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBattleItemHandleBase_BP_C::SpawnWrapperOnGround(class UClass* WrapperClass, bool bUseRandomLoc, class APickUpWrapperActor** TargetWrapper)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleItemHandleBase_BP.BattleItemHandleBase_BP_C.SpawnWrapperOnGround");

	UBattleItemHandleBase_BP_C_SpawnWrapperOnGround_Params params;
	params.WrapperClass = WrapperClass;
	params.bUseRandomLoc = bUseRandomLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetWrapper != nullptr)
		*TargetWrapper = params.TargetWrapper;
}


// Function BattleItemHandleBase_BP.BattleItemHandleBase_BP_C.GetWorldInternal
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWorld*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWorld* UBattleItemHandleBase_BP_C::GetWorldInternal()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleItemHandleBase_BP.BattleItemHandleBase_BP_C.GetWorldInternal");

	UBattleItemHandleBase_BP_C_GetWorldInternal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleItemHandleBase_BP.BattleItemHandleBase_BP_C.HandleDisuse
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBattleItemDisuseReason*       Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandleBase_BP_C::HandleDisuse(EBattleItemDisuseReason* Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleItemHandleBase_BP.BattleItemHandleBase_BP_C.HandleDisuse");

	UBattleItemHandleBase_BP_C_HandleDisuse_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleItemHandleBase_BP.BattleItemHandleBase_BP_C.HandleUse
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBattleItemUseTarget*   Target                         (BlueprintVisible, BlueprintReadOnly, Parm)
// EBattleItemUseReason*          Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandleBase_BP_C::HandleUse(struct FBattleItemUseTarget* Target, EBattleItemUseReason* Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleItemHandleBase_BP.BattleItemHandleBase_BP_C.HandleUse");

	UBattleItemHandleBase_BP_C_HandleUse_Params params;
	params.Target = Target;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleItemHandleBase_BP.BattleItemHandleBase_BP_C.HandleDrop
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           InCount                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBattleItemDropReason*         Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandleBase_BP_C::HandleDrop(int* InCount, EBattleItemDropReason* Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleItemHandleBase_BP.BattleItemHandleBase_BP_C.HandleDrop");

	UBattleItemHandleBase_BP_C_HandleDrop_Params params;
	params.InCount = InCount;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleItemHandleBase_BP.BattleItemHandleBase_BP_C.HandlePickup
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UItemContainerInterface> ItemContainer                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FBattleItemPickupInfo*  PickupInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)
// EBattleItemPickupReason*       Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandleBase_BP_C::HandlePickup(struct FBattleItemPickupInfo* PickupInfo, EBattleItemPickupReason* Reason, TScriptInterface<class UItemContainerInterface>* ItemContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleItemHandleBase_BP.BattleItemHandleBase_BP_C.HandlePickup");

	UBattleItemHandleBase_BP_C_HandlePickup_Params params;
	params.PickupInfo = PickupInfo;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemContainer != nullptr)
		*ItemContainer = params.ItemContainer;

	return params.ReturnValue;
}


// Function BattleItemHandleBase_BP.BattleItemHandleBase_BP_C.ExtractItemData
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FBattleItemData         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBattleItemData UBattleItemHandleBase_BP_C::ExtractItemData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleItemHandleBase_BP.BattleItemHandleBase_BP_C.ExtractItemData");

	UBattleItemHandleBase_BP_C_ExtractItemData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
