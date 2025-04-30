
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

// Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.LocalHandleDisuse
// (Public, BlueprintCallable, BlueprintEvent)

void UBattleItemHandle_Pistol_C::LocalHandleDisuse()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.LocalHandleDisuse");

	UBattleItemHandle_Pistol_C_LocalHandleDisuse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.GetAvailableTargetLogicSocketName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   TargetSocket                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bNeedPutDownOldWeapon          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoUse                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBattleItemHandle_Pistol_C::GetAvailableTargetLogicSocketName(const struct FName& TargetSocket, struct FName* Ret, bool* bNeedPutDownOldWeapon, bool* bAutoUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.GetAvailableTargetLogicSocketName");

	UBattleItemHandle_Pistol_C_GetAvailableTargetLogicSocketName_Params params;
	params.TargetSocket = TargetSocket;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
	if (bNeedPutDownOldWeapon != nullptr)
		*bNeedPutDownOldWeapon = params.bNeedPutDownOldWeapon;
	if (bAutoUse != nullptr)
		*bAutoUse = params.bAutoUse;
}


// Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.GetAvailableInstantLogicSocketName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bNeedPutDownOldWeapon          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoUse                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBattleItemHandle_Pistol_C::GetAvailableInstantLogicSocketName(struct FName* Ret, bool* bNeedPutDownOldWeapon, bool* bAutoUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.GetAvailableInstantLogicSocketName");

	UBattleItemHandle_Pistol_C_GetAvailableInstantLogicSocketName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
	if (bNeedPutDownOldWeapon != nullptr)
		*bNeedPutDownOldWeapon = params.bNeedPutDownOldWeapon;
	if (bAutoUse != nullptr)
		*bAutoUse = params.bAutoUse;
}


// Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.CreateWrapperOnGround
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBattleItemHandle_Pistol_C::CreateWrapperOnGround()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.CreateWrapperOnGround");

	UBattleItemHandle_Pistol_C_CreateWrapperOnGround_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.JudgeHasTargetAttachmentSlot
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TypeSpecificID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBattleItemHandle_Pistol_C::JudgeHasTargetAttachmentSlot(int TypeSpecificID, bool* Ret)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.JudgeHasTargetAttachmentSlot");

	UBattleItemHandle_Pistol_C_JudgeHasTargetAttachmentSlot_Params params;
	params.TypeSpecificID = TypeSpecificID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.HandlePickup
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UItemContainerInterface> ItemContainer                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FBattleItemPickupInfo*  PickupInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)
// EBattleItemPickupReason*       Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandle_Pistol_C::HandlePickup(struct FBattleItemPickupInfo* PickupInfo, EBattleItemPickupReason* Reason, TScriptInterface<class UItemContainerInterface>* ItemContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.HandlePickup");

	UBattleItemHandle_Pistol_C_HandlePickup_Params params;
	params.PickupInfo = PickupInfo;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemContainer != nullptr)
		*ItemContainer = params.ItemContainer;

	return params.ReturnValue;
}


// Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.HandleUse
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBattleItemUseTarget*   Target                         (BlueprintVisible, BlueprintReadOnly, Parm)
// EBattleItemUseReason*          Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandle_Pistol_C::HandleUse(struct FBattleItemUseTarget* Target, EBattleItemUseReason* Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.HandleUse");

	UBattleItemHandle_Pistol_C_HandleUse_Params params;
	params.Target = Target;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.HandleDrop
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           InCount                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBattleItemDropReason*         Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandle_Pistol_C::HandleDrop(int* InCount, EBattleItemDropReason* Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.HandleDrop");

	UBattleItemHandle_Pistol_C_HandleDrop_Params params;
	params.InCount = InCount;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.HandleDisuse
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBattleItemDisuseReason*       Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandle_Pistol_C::HandleDisuse(EBattleItemDisuseReason* Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.HandleDisuse");

	UBattleItemHandle_Pistol_C_HandleDisuse_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
