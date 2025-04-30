
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

// Function PickUpListItem_Row_BPPC.PickUpListItem_Row_BPPC_C.UpdateGroundItemData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBattleSearchItemSortingInfo> sortInfoList                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UPickUpListItem_Row_BPPC_C::UpdateGroundItemData(TArray<struct FBattleSearchItemSortingInfo>* sortInfoList)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListItem_Row_BPPC.PickUpListItem_Row_BPPC_C.UpdateGroundItemData");

	UPickUpListItem_Row_BPPC_C_UpdateGroundItemData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (sortInfoList != nullptr)
		*sortInfoList = params.sortInfoList;
}


// Function PickUpListItem_Row_BPPC.PickUpListItem_Row_BPPC_C.UpdateTombBoxData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerTombBox*          Box                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FBattleSearchBoxSortingInfo> BoxList                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UPickUpListItem_Row_BPPC_C::UpdateTombBoxData(class APlayerTombBox* Box, TArray<struct FBattleSearchBoxSortingInfo>* BoxList)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListItem_Row_BPPC.PickUpListItem_Row_BPPC_C.UpdateTombBoxData");

	UPickUpListItem_Row_BPPC_C_UpdateTombBoxData_Params params;
	params.Box = Box;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BoxList != nullptr)
		*BoxList = params.BoxList;
}


// Function PickUpListItem_Row_BPPC.PickUpListItem_Row_BPPC_C.MakesureListEnough
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickUpListItem_Row_BPPC_C::MakesureListEnough(int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListItem_Row_BPPC.PickUpListItem_Row_BPPC_C.MakesureListEnough");

	UPickUpListItem_Row_BPPC_C_MakesureListEnough_Params params;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpListItem_Row_BPPC.PickUpListItem_Row_BPPC_C.HandleBtnsStateChangeEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPickUpItem_S_BP_C*      ItemBp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsHover                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickUpListItem_Row_BPPC_C::HandleBtnsStateChangeEvent(class UPickUpItem_S_BP_C* ItemBp, bool IsHover)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListItem_Row_BPPC.PickUpListItem_Row_BPPC_C.HandleBtnsStateChangeEvent");

	UPickUpListItem_Row_BPPC_C_HandleBtnsStateChangeEvent_Params params;
	params.ItemBp = ItemBp;
	params.IsHover = IsHover;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpListItem_Row_BPPC.PickUpListItem_Row_BPPC_C.ItemDragStartEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSearchedPickUpItemResult ItemData                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UPickUpListItem_Row_BPPC_C::ItemDragStartEvent(const struct FSearchedPickUpItemResult& ItemData)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListItem_Row_BPPC.PickUpListItem_Row_BPPC_C.ItemDragStartEvent");

	UPickUpListItem_Row_BPPC_C_ItemDragStartEvent_Params params;
	params.ItemData = ItemData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpListItem_Row_BPPC.PickUpListItem_Row_BPPC_C.ToolTipUpdateEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPickUpItem_S_BP_C*      ItemBp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickUpListItem_Row_BPPC_C::ToolTipUpdateEvent(class UPickUpItem_S_BP_C* ItemBp)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListItem_Row_BPPC.PickUpListItem_Row_BPPC_C.ToolTipUpdateEvent");

	UPickUpListItem_Row_BPPC_C_ToolTipUpdateEvent_Params params;
	params.ItemBp = ItemBp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpListItem_Row_BPPC.PickUpListItem_Row_BPPC_C.ItemBePickUpEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSearchedPickUpItemResult PickUpItemData                 (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           ForceDrop                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickUpListItem_Row_BPPC_C::ItemBePickUpEvent(const struct FSearchedPickUpItemResult& PickUpItemData, bool ForceDrop)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListItem_Row_BPPC.PickUpListItem_Row_BPPC_C.ItemBePickUpEvent");

	UPickUpListItem_Row_BPPC_C_ItemBePickUpEvent_Params params;
	params.PickUpItemData = PickUpItemData;
	params.ForceDrop = ForceDrop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpListItem_Row_BPPC.PickUpListItem_Row_BPPC_C.ExecuteUbergraph_PickUpListItem_Row_BPPC
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickUpListItem_Row_BPPC_C::ExecuteUbergraph_PickUpListItem_Row_BPPC(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListItem_Row_BPPC.PickUpListItem_Row_BPPC_C.ExecuteUbergraph_PickUpListItem_Row_BPPC");

	UPickUpListItem_Row_BPPC_C_ExecuteUbergraph_PickUpListItem_Row_BPPC_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpListItem_Row_BPPC.PickUpListItem_Row_BPPC_C.ItemBePickUp__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSearchedPickUpItemResult PickUpItemData                 (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           ForceDrop                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickUpListItem_Row_BPPC_C::ItemBePickUp__DelegateSignature(const struct FSearchedPickUpItemResult& PickUpItemData, bool ForceDrop)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListItem_Row_BPPC.PickUpListItem_Row_BPPC_C.ItemBePickUp__DelegateSignature");

	UPickUpListItem_Row_BPPC_C_ItemBePickUp__DelegateSignature_Params params;
	params.PickUpItemData = PickUpItemData;
	params.ForceDrop = ForceDrop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpListItem_Row_BPPC.PickUpListItem_Row_BPPC_C.ToolTipUpdate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPickUpItem_S_BP_C*      ItemBp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickUpListItem_Row_BPPC_C::ToolTipUpdate__DelegateSignature(class UPickUpItem_S_BP_C* ItemBp)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListItem_Row_BPPC.PickUpListItem_Row_BPPC_C.ToolTipUpdate__DelegateSignature");

	UPickUpListItem_Row_BPPC_C_ToolTipUpdate__DelegateSignature_Params params;
	params.ItemBp = ItemBp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpListItem_Row_BPPC.PickUpListItem_Row_BPPC_C.ItemDragStart__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSearchedPickUpItemResult ItemData                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UPickUpListItem_Row_BPPC_C::ItemDragStart__DelegateSignature(const struct FSearchedPickUpItemResult& ItemData)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListItem_Row_BPPC.PickUpListItem_Row_BPPC_C.ItemDragStart__DelegateSignature");

	UPickUpListItem_Row_BPPC_C_ItemDragStart__DelegateSignature_Params params;
	params.ItemData = ItemData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpListItem_Row_BPPC.PickUpListItem_Row_BPPC_C.HandleBtnsStateChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPickUpItem_S_BP_C*      ItemBp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsHover                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickUpListItem_Row_BPPC_C::HandleBtnsStateChange__DelegateSignature(class UPickUpItem_S_BP_C* ItemBp, bool IsHover)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListItem_Row_BPPC.PickUpListItem_Row_BPPC_C.HandleBtnsStateChange__DelegateSignature");

	UPickUpListItem_Row_BPPC_C_HandleBtnsStateChange__DelegateSignature_Params params;
	params.ItemBp = ItemBp;
	params.IsHover = IsHover;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
