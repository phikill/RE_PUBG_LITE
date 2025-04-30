
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

// Function OB_PlayerHeadList_BP.OB_PlayerHeadList_BP_C.RefreshOBData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FPlayerInfoInOB> MapPlayerList                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FObservedData           ObservedPlayer                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UOB_PlayerHeadList_BP_C::RefreshOBData(const struct FObservedData& ObservedPlayer, TArray<struct FPlayerInfoInOB>* MapPlayerList)
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_PlayerHeadList_BP.OB_PlayerHeadList_BP_C.RefreshOBData");

	UOB_PlayerHeadList_BP_C_RefreshOBData_Params params;
	params.ObservedPlayer = ObservedPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MapPlayerList != nullptr)
		*MapPlayerList = params.MapPlayerList;
}


// Function OB_PlayerHeadList_BP.OB_PlayerHeadList_BP_C.SetChildrenVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPanelWidget*            Panel                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOB_PlayerHeadList_BP_C::SetChildrenVisible(bool IsVisible, class UPanelWidget* Panel)
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_PlayerHeadList_BP.OB_PlayerHeadList_BP_C.SetChildrenVisible");

	UOB_PlayerHeadList_BP_C_SetChildrenVisible_Params params;
	params.IsVisible = IsVisible;
	params.Panel = Panel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_PlayerHeadList_BP.OB_PlayerHeadList_BP_C.GetChildByIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*            PanelWidget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UOB_PlayerHeadHPItem_UIBP_C* Item                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOB_PlayerHeadList_BP_C::GetChildByIndex(class UPanelWidget* PanelWidget, int Index, class UOB_PlayerHeadHPItem_UIBP_C** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_PlayerHeadList_BP.OB_PlayerHeadList_BP_C.GetChildByIndex");

	UOB_PlayerHeadList_BP_C_GetChildByIndex_Params params;
	params.PanelWidget = PanelWidget;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;
}


// Function OB_PlayerHeadList_BP.OB_PlayerHeadList_BP_C.RefreshData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FPlayerInfoInOB> MapPlayerList                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FObservedData           ObservedPlayer                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UOB_PlayerHeadList_BP_C::RefreshData(const struct FObservedData& ObservedPlayer, TArray<struct FPlayerInfoInOB>* MapPlayerList)
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_PlayerHeadList_BP.OB_PlayerHeadList_BP_C.RefreshData");

	UOB_PlayerHeadList_BP_C_RefreshData_Params params;
	params.ObservedPlayer = ObservedPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MapPlayerList != nullptr)
		*MapPlayerList = params.MapPlayerList;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
