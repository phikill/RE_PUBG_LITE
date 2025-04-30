
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

// Function OB_MapPlayerList_BP.OB_MapPlayerList_BP_C.RefreahOBPlayerChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*            PanelWidget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOB_MapPlayerList_BP_C::RefreahOBPlayerChange(class UPanelWidget* PanelWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_MapPlayerList_BP.OB_MapPlayerList_BP_C.RefreahOBPlayerChange");

	UOB_MapPlayerList_BP_C_RefreahOBPlayerChange_Params params;
	params.PanelWidget = PanelWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_MapPlayerList_BP.OB_MapPlayerList_BP_C.OnOBPlayerChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FObservedData           CrtOBPlayer                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UOB_MapPlayerList_BP_C::OnOBPlayerChange(const struct FObservedData& CrtOBPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_MapPlayerList_BP.OB_MapPlayerList_BP_C.OnOBPlayerChange");

	UOB_MapPlayerList_BP_C_OnOBPlayerChange_Params params;
	params.CrtOBPlayer = CrtOBPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_MapPlayerList_BP.OB_MapPlayerList_BP_C.RefreshTotalListData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FPlayerInfoInOB> DataList                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FObservedData           CrtOBPlayer                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UOB_MapPlayerList_BP_C::RefreshTotalListData(const struct FObservedData& CrtOBPlayer, TArray<struct FPlayerInfoInOB>* DataList)
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_MapPlayerList_BP.OB_MapPlayerList_BP_C.RefreshTotalListData");

	UOB_MapPlayerList_BP_C_RefreshTotalListData_Params params;
	params.CrtOBPlayer = CrtOBPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DataList != nullptr)
		*DataList = params.DataList;
}


// Function OB_MapPlayerList_BP.OB_MapPlayerList_BP_C.RefreshNearListData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FPlayerInfoInOB> DataList                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FObservedData           CrtOBPlayer                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UOB_MapPlayerList_BP_C::RefreshNearListData(const struct FObservedData& CrtOBPlayer, TArray<struct FPlayerInfoInOB>* DataList)
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_MapPlayerList_BP.OB_MapPlayerList_BP_C.RefreshNearListData");

	UOB_MapPlayerList_BP_C_RefreshNearListData_Params params;
	params.CrtOBPlayer = CrtOBPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DataList != nullptr)
		*DataList = params.DataList;
}


// Function OB_MapPlayerList_BP.OB_MapPlayerList_BP_C.RefreshListData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FPlayerInfoInOB> DataList                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UCustomScrollBox*        CustomScrollBox                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOB_MapPlayerList_BP_C::RefreshListData(class UCustomScrollBox* CustomScrollBox, TArray<struct FPlayerInfoInOB>* DataList)
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_MapPlayerList_BP.OB_MapPlayerList_BP_C.RefreshListData");

	UOB_MapPlayerList_BP_C_RefreshListData_Params params;
	params.CustomScrollBox = CustomScrollBox;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DataList != nullptr)
		*DataList = params.DataList;
}


// Function OB_MapPlayerList_BP.OB_MapPlayerList_BP_C.GetChildByIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*            PanelWidget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UOB_PlayerListGroup_BP_C* TeamItem                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOB_MapPlayerList_BP_C::GetChildByIndex(class UPanelWidget* PanelWidget, int Index, class UOB_PlayerListGroup_BP_C** TeamItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_MapPlayerList_BP.OB_MapPlayerList_BP_C.GetChildByIndex");

	UOB_MapPlayerList_BP_C_GetChildByIndex_Params params;
	params.PanelWidget = PanelWidget;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TeamItem != nullptr)
		*TeamItem = params.TeamItem;
}


// Function OB_MapPlayerList_BP.OB_MapPlayerList_BP_C.BndEvt__Button_Nearby_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOB_MapPlayerList_BP_C::BndEvt__Button_Nearby_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_MapPlayerList_BP.OB_MapPlayerList_BP_C.BndEvt__Button_Nearby_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature");

	UOB_MapPlayerList_BP_C_BndEvt__Button_Nearby_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_MapPlayerList_BP.OB_MapPlayerList_BP_C.BndEvt__Button_ALL_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOB_MapPlayerList_BP_C::BndEvt__Button_ALL_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_MapPlayerList_BP.OB_MapPlayerList_BP_C.BndEvt__Button_ALL_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature");

	UOB_MapPlayerList_BP_C_BndEvt__Button_ALL_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_MapPlayerList_BP.OB_MapPlayerList_BP_C.ExecuteUbergraph_OB_MapPlayerList_BP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOB_MapPlayerList_BP_C::ExecuteUbergraph_OB_MapPlayerList_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_MapPlayerList_BP.OB_MapPlayerList_BP_C.ExecuteUbergraph_OB_MapPlayerList_BP");

	UOB_MapPlayerList_BP_C_ExecuteUbergraph_OB_MapPlayerList_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
