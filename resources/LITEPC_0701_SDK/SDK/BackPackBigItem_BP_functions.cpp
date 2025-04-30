
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

// Function BackPackBigItem_BP.BackPackBigItem_BP_C.Get_CheckBox_BatchSelection_CheckedState_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ECheckBoxState                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECheckBoxState UBackPackBigItem_BP_C::Get_CheckBox_BatchSelection_CheckedState_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackBigItem_BP.BackPackBigItem_BP_C.Get_CheckBox_BatchSelection_CheckedState_1");

	UBackPackBigItem_BP_C_Get_CheckBox_BatchSelection_CheckedState_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BackPackBigItem_BP.BackPackBigItem_BP_C.ChangeState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSelect                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBackPackBigItem_BP_C::ChangeState(bool IsSelect)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackBigItem_BP.BackPackBigItem_BP_C.ChangeState");

	UBackPackBigItem_BP_C_ChangeState_Params params;
	params.IsSelect = IsSelect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackPackBigItem_BP.BackPackBigItem_BP_C.InitData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBattleItemData         ItemData                       (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBackPackBigItem_BP_C::InitData(const struct FBattleItemData& ItemData, int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackBigItem_BP.BackPackBigItem_BP_C.InitData");

	UBackPackBigItem_BP_C_InitData_Params params;
	params.ItemData = ItemData;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackPackBigItem_BP.BackPackBigItem_BP_C.BndEvt__Button_ClickItem_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBackPackBigItem_BP_C::BndEvt__Button_ClickItem_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackBigItem_BP.BackPackBigItem_BP_C.BndEvt__Button_ClickItem_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature");

	UBackPackBigItem_BP_C_BndEvt__Button_ClickItem_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackPackBigItem_BP.BackPackBigItem_BP_C.ExecuteUbergraph_BackPackBigItem_BP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBackPackBigItem_BP_C::ExecuteUbergraph_BackPackBigItem_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackBigItem_BP.BackPackBigItem_BP_C.ExecuteUbergraph_BackPackBigItem_BP");

	UBackPackBigItem_BP_C_ExecuteUbergraph_BackPackBigItem_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackPackBigItem_BP.BackPackBigItem_BP_C.ItemBeClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBattleItemData         MyData                         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBackPackBigItem_BP_C::ItemBeClicked__DelegateSignature(const struct FBattleItemData& MyData, bool IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackBigItem_BP.BackPackBigItem_BP_C.ItemBeClicked__DelegateSignature");

	UBackPackBigItem_BP_C_ItemBeClicked__DelegateSignature_Params params;
	params.MyData = MyData;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
