
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

// Function BattleItemHandle_MainWeaponPC.BattleItemHandle_MainWeaponPC_C.AutoEquipAttachments
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBattleItemHandle_MainWeaponPC_C::AutoEquipAttachments()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleItemHandle_MainWeaponPC.BattleItemHandle_MainWeaponPC_C.AutoEquipAttachments");

	UBattleItemHandle_MainWeaponPC_C_AutoEquipAttachments_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleItemHandle_MainWeaponPC.BattleItemHandle_MainWeaponPC_C.ReturnBullets
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBattleItemHandle_MainWeaponPC_C::ReturnBullets(int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleItemHandle_MainWeaponPC.BattleItemHandle_MainWeaponPC_C.ReturnBullets");

	UBattleItemHandle_MainWeaponPC_C_ReturnBullets_Params params;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleItemHandle_MainWeaponPC.BattleItemHandle_MainWeaponPC_C.UpdateEquipedAttach
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EWeaponAttachmentSocketType    WeapAttachSockType             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBattleItemHandle_WeapAttachmentPC_C* WeapAttachItemHandle           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEquip                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBattleItemHandle_MainWeaponPC_C::UpdateEquipedAttach(EWeaponAttachmentSocketType WeapAttachSockType, class UBattleItemHandle_WeapAttachmentPC_C* WeapAttachItemHandle, bool IsEquip)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleItemHandle_MainWeaponPC.BattleItemHandle_MainWeaponPC_C.UpdateEquipedAttach");

	UBattleItemHandle_MainWeaponPC_C_UpdateEquipedAttach_Params params;
	params.WeapAttachSockType = WeapAttachSockType;
	params.WeapAttachItemHandle = WeapAttachItemHandle;
	params.IsEquip = IsEquip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleItemHandle_MainWeaponPC.BattleItemHandle_MainWeaponPC_C.LocalHandleDisuse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBattleItemDisuseReason        Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBattleItemHandle_MainWeaponPC_C::LocalHandleDisuse(EBattleItemDisuseReason Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleItemHandle_MainWeaponPC.BattleItemHandle_MainWeaponPC_C.LocalHandleDisuse");

	UBattleItemHandle_MainWeaponPC_C_LocalHandleDisuse_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleItemHandle_MainWeaponPC.BattleItemHandle_MainWeaponPC_C.CreateWrapperOnGround
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBattleItemHandle_MainWeaponPC_C::CreateWrapperOnGround()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleItemHandle_MainWeaponPC.BattleItemHandle_MainWeaponPC_C.CreateWrapperOnGround");

	UBattleItemHandle_MainWeaponPC_C_CreateWrapperOnGround_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleItemHandle_MainWeaponPC.BattleItemHandle_MainWeaponPC_C.GetAvailableTargetLogicSocketName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   TargetSocket                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bNeedPutDownOldWeapon          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoUse                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBattleItemHandle_MainWeaponPC_C::GetAvailableTargetLogicSocketName(const struct FName& TargetSocket, struct FName* Ret, bool* bNeedPutDownOldWeapon, bool* bAutoUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleItemHandle_MainWeaponPC.BattleItemHandle_MainWeaponPC_C.GetAvailableTargetLogicSocketName");

	UBattleItemHandle_MainWeaponPC_C_GetAvailableTargetLogicSocketName_Params params;
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


// Function BattleItemHandle_MainWeaponPC.BattleItemHandle_MainWeaponPC_C.GetAvailableInstantLogicSocketName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bNeedPutDownOldWeapon          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoUse                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBattleItemHandle_MainWeaponPC_C::GetAvailableInstantLogicSocketName(struct FName* Ret, bool* bNeedPutDownOldWeapon, bool* bAutoUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleItemHandle_MainWeaponPC.BattleItemHandle_MainWeaponPC_C.GetAvailableInstantLogicSocketName");

	UBattleItemHandle_MainWeaponPC_C_GetAvailableInstantLogicSocketName_Params params;

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


// Function BattleItemHandle_MainWeaponPC.BattleItemHandle_MainWeaponPC_C.JudgeHasTargetAttachmentSlot
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TypeSpecificID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EWeaponAttachmentSocketType    AttachType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanEquip                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           HasOcupied                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBattleItemHandle_MainWeaponPC_C::JudgeHasTargetAttachmentSlot(int TypeSpecificID, EWeaponAttachmentSocketType AttachType, bool* CanEquip, bool* HasOcupied)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleItemHandle_MainWeaponPC.BattleItemHandle_MainWeaponPC_C.JudgeHasTargetAttachmentSlot");

	UBattleItemHandle_MainWeaponPC_C_JudgeHasTargetAttachmentSlot_Params params;
	params.TypeSpecificID = TypeSpecificID;
	params.AttachType = AttachType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanEquip != nullptr)
		*CanEquip = params.CanEquip;
	if (HasOcupied != nullptr)
		*HasOcupied = params.HasOcupied;
}


// Function BattleItemHandle_MainWeaponPC.BattleItemHandle_MainWeaponPC_C.HandleDisuse
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBattleItemDisuseReason*       Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandle_MainWeaponPC_C::HandleDisuse(EBattleItemDisuseReason* Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleItemHandle_MainWeaponPC.BattleItemHandle_MainWeaponPC_C.HandleDisuse");

	UBattleItemHandle_MainWeaponPC_C_HandleDisuse_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleItemHandle_MainWeaponPC.BattleItemHandle_MainWeaponPC_C.HandleUse
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBattleItemUseTarget*   Target                         (BlueprintVisible, BlueprintReadOnly, Parm)
// EBattleItemUseReason*          Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandle_MainWeaponPC_C::HandleUse(struct FBattleItemUseTarget* Target, EBattleItemUseReason* Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleItemHandle_MainWeaponPC.BattleItemHandle_MainWeaponPC_C.HandleUse");

	UBattleItemHandle_MainWeaponPC_C_HandleUse_Params params;
	params.Target = Target;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleItemHandle_MainWeaponPC.BattleItemHandle_MainWeaponPC_C.HandleDrop
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           InCount                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBattleItemDropReason*         Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandle_MainWeaponPC_C::HandleDrop(int* InCount, EBattleItemDropReason* Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleItemHandle_MainWeaponPC.BattleItemHandle_MainWeaponPC_C.HandleDrop");

	UBattleItemHandle_MainWeaponPC_C_HandleDrop_Params params;
	params.InCount = InCount;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleItemHandle_MainWeaponPC.BattleItemHandle_MainWeaponPC_C.HandlePickup
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UItemContainerInterface> ItemContainer                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FBattleItemPickupInfo*  PickupInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)
// EBattleItemPickupReason*       Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandle_MainWeaponPC_C::HandlePickup(struct FBattleItemPickupInfo* PickupInfo, EBattleItemPickupReason* Reason, TScriptInterface<class UItemContainerInterface>* ItemContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleItemHandle_MainWeaponPC.BattleItemHandle_MainWeaponPC_C.HandlePickup");

	UBattleItemHandle_MainWeaponPC_C_HandlePickup_Params params;
	params.PickupInfo = PickupInfo;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemContainer != nullptr)
		*ItemContainer = params.ItemContainer;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
