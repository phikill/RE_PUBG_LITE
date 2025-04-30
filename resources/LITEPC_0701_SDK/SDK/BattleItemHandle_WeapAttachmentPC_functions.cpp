
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

// Function BattleItemHandle_WeapAttachmentPC.BattleItemHandle_WeapAttachmentPC_C.CurBackpackCapacity
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBattleItemHandle_WeapAttachmentPC_C* ItemHandle                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsDrop                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBattleItemHandle_WeapAttachmentPC_C::CurBackpackCapacity(class UBattleItemHandle_WeapAttachmentPC_C* ItemHandle, bool* IsDrop)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleItemHandle_WeapAttachmentPC.BattleItemHandle_WeapAttachmentPC_C.CurBackpackCapacity");

	UBattleItemHandle_WeapAttachmentPC_C_CurBackpackCapacity_Params params;
	params.ItemHandle = ItemHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsDrop != nullptr)
		*IsDrop = params.IsDrop;
}


// Function BattleItemHandle_WeapAttachmentPC.BattleItemHandle_WeapAttachmentPC_C.CanSwap
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBackpackWeaponAttachHandle* SpecificID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Can                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBattleItemHandle_WeapAttachmentPC_C::CanSwap(class UBackpackWeaponAttachHandle* SpecificID, bool* Can)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleItemHandle_WeapAttachmentPC.BattleItemHandle_WeapAttachmentPC_C.CanSwap");

	UBattleItemHandle_WeapAttachmentPC_C_CanSwap_Params params;
	params.SpecificID = SpecificID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Can != nullptr)
		*Can = params.Can;
}


// Function BattleItemHandle_WeapAttachmentPC.BattleItemHandle_WeapAttachmentPC_C.FilterWeaponItemHandle
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBattleItemHandleBase_BP_C* InputItemHandle                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsPickupDirectlyEquip          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBattleItemPickupInfo   PickupInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FBattleItemUseTarget    Target                         (Parm, OutParm)
// bool                           HasTarget                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UBattleItemHandle_MainWeaponPC_C* TargetWeaponHandle             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class ASTExtraWeapon*          WeaponActor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBattleItemHandle_WeapAttachmentPC_C::FilterWeaponItemHandle(class UBattleItemHandleBase_BP_C* InputItemHandle, bool IsPickupDirectlyEquip, const struct FBattleItemPickupInfo& PickupInfo, struct FBattleItemUseTarget* Target, bool* HasTarget, class UBattleItemHandle_MainWeaponPC_C** TargetWeaponHandle, class ASTExtraWeapon** WeaponActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleItemHandle_WeapAttachmentPC.BattleItemHandle_WeapAttachmentPC_C.FilterWeaponItemHandle");

	UBattleItemHandle_WeapAttachmentPC_C_FilterWeaponItemHandle_Params params;
	params.InputItemHandle = InputItemHandle;
	params.IsPickupDirectlyEquip = IsPickupDirectlyEquip;
	params.PickupInfo = PickupInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Target != nullptr)
		*Target = params.Target;
	if (HasTarget != nullptr)
		*HasTarget = params.HasTarget;
	if (TargetWeaponHandle != nullptr)
		*TargetWeaponHandle = params.TargetWeaponHandle;
	if (WeaponActor != nullptr)
		*WeaponActor = params.WeaponActor;
}


// Function BattleItemHandle_WeapAttachmentPC.BattleItemHandle_WeapAttachmentPC_C.ExtractItemData
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FBattleItemData         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBattleItemData UBattleItemHandle_WeapAttachmentPC_C::ExtractItemData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleItemHandle_WeapAttachmentPC.BattleItemHandle_WeapAttachmentPC_C.ExtractItemData");

	UBattleItemHandle_WeapAttachmentPC_C_ExtractItemData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleItemHandle_WeapAttachmentPC.BattleItemHandle_WeapAttachmentPC_C.GetWorldInternal
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWorld*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWorld* UBattleItemHandle_WeapAttachmentPC_C::GetWorldInternal()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleItemHandle_WeapAttachmentPC.BattleItemHandle_WeapAttachmentPC_C.GetWorldInternal");

	UBattleItemHandle_WeapAttachmentPC_C_GetWorldInternal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleItemHandle_WeapAttachmentPC.BattleItemHandle_WeapAttachmentPC_C.CreateWrapperOnGround
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBattleItemHandle_WeapAttachmentPC_C::CreateWrapperOnGround(int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleItemHandle_WeapAttachmentPC.BattleItemHandle_WeapAttachmentPC_C.CreateWrapperOnGround");

	UBattleItemHandle_WeapAttachmentPC_C_CreateWrapperOnGround_Params params;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleItemHandle_WeapAttachmentPC.BattleItemHandle_WeapAttachmentPC_C.HandleDrop
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           InCount                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBattleItemDropReason*         Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandle_WeapAttachmentPC_C::HandleDrop(int* InCount, EBattleItemDropReason* Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleItemHandle_WeapAttachmentPC.BattleItemHandle_WeapAttachmentPC_C.HandleDrop");

	UBattleItemHandle_WeapAttachmentPC_C_HandleDrop_Params params;
	params.InCount = InCount;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleItemHandle_WeapAttachmentPC.BattleItemHandle_WeapAttachmentPC_C.HandlePickup
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UItemContainerInterface> ItemContainer                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FBattleItemPickupInfo*  PickupInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)
// EBattleItemPickupReason*       Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandle_WeapAttachmentPC_C::HandlePickup(struct FBattleItemPickupInfo* PickupInfo, EBattleItemPickupReason* Reason, TScriptInterface<class UItemContainerInterface>* ItemContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleItemHandle_WeapAttachmentPC.BattleItemHandle_WeapAttachmentPC_C.HandlePickup");

	UBattleItemHandle_WeapAttachmentPC_C_HandlePickup_Params params;
	params.PickupInfo = PickupInfo;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemContainer != nullptr)
		*ItemContainer = params.ItemContainer;

	return params.ReturnValue;
}


// Function BattleItemHandle_WeapAttachmentPC.BattleItemHandle_WeapAttachmentPC_C.HandleDisuse
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBattleItemDisuseReason*       Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandle_WeapAttachmentPC_C::HandleDisuse(EBattleItemDisuseReason* Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleItemHandle_WeapAttachmentPC.BattleItemHandle_WeapAttachmentPC_C.HandleDisuse");

	UBattleItemHandle_WeapAttachmentPC_C_HandleDisuse_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleItemHandle_WeapAttachmentPC.BattleItemHandle_WeapAttachmentPC_C.HandleUse
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBattleItemUseTarget*   Target                         (BlueprintVisible, BlueprintReadOnly, Parm)
// EBattleItemUseReason*          Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandle_WeapAttachmentPC_C::HandleUse(struct FBattleItemUseTarget* Target, EBattleItemUseReason* Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleItemHandle_WeapAttachmentPC.BattleItemHandle_WeapAttachmentPC_C.HandleUse");

	UBattleItemHandle_WeapAttachmentPC_C_HandleUse_Params params;
	params.Target = Target;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleItemHandle_WeapAttachmentPC.BattleItemHandle_WeapAttachmentPC_C.ReturnWeaponAdditionalBulletsToBackpack
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASTExtraShootWeapon**    Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           BulletNum                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBattleItemHandle_WeapAttachmentPC_C::ReturnWeaponAdditionalBulletsToBackpack(class ASTExtraShootWeapon** Weapon, int* BulletNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleItemHandle_WeapAttachmentPC.BattleItemHandle_WeapAttachmentPC_C.ReturnWeaponAdditionalBulletsToBackpack");

	UBattleItemHandle_WeapAttachmentPC_C_ReturnWeaponAdditionalBulletsToBackpack_Params params;
	params.Weapon = Weapon;
	params.BulletNum = BulletNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleItemHandle_WeapAttachmentPC.BattleItemHandle_WeapAttachmentPC_C.ExecuteUbergraph_BattleItemHandle_WeapAttachmentPC
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBattleItemHandle_WeapAttachmentPC_C::ExecuteUbergraph_BattleItemHandle_WeapAttachmentPC(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleItemHandle_WeapAttachmentPC.BattleItemHandle_WeapAttachmentPC_C.ExecuteUbergraph_BattleItemHandle_WeapAttachmentPC");

	UBattleItemHandle_WeapAttachmentPC_C_ExecuteUbergraph_BattleItemHandle_WeapAttachmentPC_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
