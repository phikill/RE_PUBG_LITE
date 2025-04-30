
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

// Function LitePC_MainOptionUI.LitePC_MainOptionUI_C.PopupButtonClicked
// (Public, BlueprintCallable, BlueprintEvent)

void ULitePC_MainOptionUI_C::PopupButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function LitePC_MainOptionUI.LitePC_MainOptionUI_C.PopupButtonClicked");

	ULitePC_MainOptionUI_C_PopupButtonClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LitePC_MainOptionUI.LitePC_MainOptionUI_C.GetResetButton_bIsEnabled_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULitePC_MainOptionUI_C::GetResetButton_bIsEnabled_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function LitePC_MainOptionUI.LitePC_MainOptionUI_C.GetResetButton_bIsEnabled_1");

	ULitePC_MainOptionUI_C_GetResetButton_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LitePC_MainOptionUI.LitePC_MainOptionUI_C.Get_OkButton_bIsEnabled_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULitePC_MainOptionUI_C::Get_OkButton_bIsEnabled_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function LitePC_MainOptionUI.LitePC_MainOptionUI_C.Get_OkButton_bIsEnabled_1");

	ULitePC_MainOptionUI_C_Get_OkButton_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LitePC_MainOptionUI.LitePC_MainOptionUI_C.ShowMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Message                        (BlueprintVisible, BlueprintReadOnly, Parm)

void ULitePC_MainOptionUI_C::ShowMessage(const struct FText& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function LitePC_MainOptionUI.LitePC_MainOptionUI_C.ShowMessage");

	ULitePC_MainOptionUI_C_ShowMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LitePC_MainOptionUI.LitePC_MainOptionUI_C.OnReset
// (Public, BlueprintCallable, BlueprintEvent)

void ULitePC_MainOptionUI_C::OnReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function LitePC_MainOptionUI.LitePC_MainOptionUI_C.OnReset");

	ULitePC_MainOptionUI_C_OnReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LitePC_MainOptionUI.LitePC_MainOptionUI_C.OnDefault
// (Public, BlueprintCallable, BlueprintEvent)

void ULitePC_MainOptionUI_C::OnDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function LitePC_MainOptionUI.LitePC_MainOptionUI_C.OnDefault");

	ULitePC_MainOptionUI_C_OnDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LitePC_MainOptionUI.LitePC_MainOptionUI_C.ChangeOption
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULitePC_MainOptionUI_C::ChangeOption(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function LitePC_MainOptionUI.LitePC_MainOptionUI_C.ChangeOption");

	ULitePC_MainOptionUI_C_ChangeOption_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LitePC_MainOptionUI.LitePC_MainOptionUI_C.OnApply
// (Public, BlueprintCallable, BlueprintEvent)

void ULitePC_MainOptionUI_C::OnApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function LitePC_MainOptionUI.LitePC_MainOptionUI_C.OnApply");

	ULitePC_MainOptionUI_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LitePC_MainOptionUI.LitePC_MainOptionUI_C.CloseMainOption
// (Public, BlueprintCallable, BlueprintEvent)

void ULitePC_MainOptionUI_C::CloseMainOption()
{
	static auto fn = UObject::FindObject<UFunction>("Function LitePC_MainOptionUI.LitePC_MainOptionUI_C.CloseMainOption");

	ULitePC_MainOptionUI_C_CloseMainOption_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LitePC_MainOptionUI.LitePC_MainOptionUI_C.IsApplyButtonEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULitePC_MainOptionUI_C::IsApplyButtonEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function LitePC_MainOptionUI.LitePC_MainOptionUI_C.IsApplyButtonEnabled");

	ULitePC_MainOptionUI_C_IsApplyButtonEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LitePC_MainOptionUI.LitePC_MainOptionUI_C.ClearOptionButtonsColors
// (Public, BlueprintCallable, BlueprintEvent)

void ULitePC_MainOptionUI_C::ClearOptionButtonsColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function LitePC_MainOptionUI.LitePC_MainOptionUI_C.ClearOptionButtonsColors");

	ULitePC_MainOptionUI_C_ClearOptionButtonsColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LitePC_MainOptionUI.LitePC_MainOptionUI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULitePC_MainOptionUI_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LitePC_MainOptionUI.LitePC_MainOptionUI_C.Construct");

	ULitePC_MainOptionUI_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LitePC_MainOptionUI.LitePC_MainOptionUI_C.OnHiddenWidget
// (BlueprintCallable, BlueprintEvent)

void ULitePC_MainOptionUI_C::OnHiddenWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function LitePC_MainOptionUI.LitePC_MainOptionUI_C.OnHiddenWidget");

	ULitePC_MainOptionUI_C_OnHiddenWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LitePC_MainOptionUI.LitePC_MainOptionUI_C.XBoxOnOk
// (BlueprintCallable, BlueprintEvent)

void ULitePC_MainOptionUI_C::XBoxOnOk()
{
	static auto fn = UObject::FindObject<UFunction>("Function LitePC_MainOptionUI.LitePC_MainOptionUI_C.XBoxOnOk");

	ULitePC_MainOptionUI_C_XBoxOnOk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LitePC_MainOptionUI.LitePC_MainOptionUI_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULitePC_MainOptionUI_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LitePC_MainOptionUI.LitePC_MainOptionUI_C.Destruct");

	ULitePC_MainOptionUI_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LitePC_MainOptionUI.LitePC_MainOptionUI_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_5_OnButtonDown__DelegateSignature
// (BlueprintEvent)

void ULitePC_MainOptionUI_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_5_OnButtonDown__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function LitePC_MainOptionUI.LitePC_MainOptionUI_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_5_OnButtonDown__DelegateSignature");

	ULitePC_MainOptionUI_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_5_OnButtonDown__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LitePC_MainOptionUI.LitePC_MainOptionUI_C.BndEvt__DefaultButton_K2Node_ComponentBoundEvent_6_OnButtonDown__DelegateSignature
// (BlueprintEvent)

void ULitePC_MainOptionUI_C::BndEvt__DefaultButton_K2Node_ComponentBoundEvent_6_OnButtonDown__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function LitePC_MainOptionUI.LitePC_MainOptionUI_C.BndEvt__DefaultButton_K2Node_ComponentBoundEvent_6_OnButtonDown__DelegateSignature");

	ULitePC_MainOptionUI_C_BndEvt__DefaultButton_K2Node_ComponentBoundEvent_6_OnButtonDown__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LitePC_MainOptionUI.LitePC_MainOptionUI_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_8_OnButtonDown__DelegateSignature
// (BlueprintEvent)

void ULitePC_MainOptionUI_C::BndEvt__ResetButton_K2Node_ComponentBoundEvent_8_OnButtonDown__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function LitePC_MainOptionUI.LitePC_MainOptionUI_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_8_OnButtonDown__DelegateSignature");

	ULitePC_MainOptionUI_C_BndEvt__ResetButton_K2Node_ComponentBoundEvent_8_OnButtonDown__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LitePC_MainOptionUI.LitePC_MainOptionUI_C.BndEvt__ApplyButton_K2Node_ComponentBoundEvent_11_OnButtonDown__DelegateSignature
// (BlueprintEvent)

void ULitePC_MainOptionUI_C::BndEvt__ApplyButton_K2Node_ComponentBoundEvent_11_OnButtonDown__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function LitePC_MainOptionUI.LitePC_MainOptionUI_C.BndEvt__ApplyButton_K2Node_ComponentBoundEvent_11_OnButtonDown__DelegateSignature");

	ULitePC_MainOptionUI_C_BndEvt__ApplyButton_K2Node_ComponentBoundEvent_11_OnButtonDown__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LitePC_MainOptionUI.LitePC_MainOptionUI_C.BndEvt__OptionButton0_K2Node_ComponentBoundEvent_28_OnClicked__DelegateSignature
// (BlueprintEvent)

void ULitePC_MainOptionUI_C::BndEvt__OptionButton0_K2Node_ComponentBoundEvent_28_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function LitePC_MainOptionUI.LitePC_MainOptionUI_C.BndEvt__OptionButton0_K2Node_ComponentBoundEvent_28_OnClicked__DelegateSignature");

	ULitePC_MainOptionUI_C_BndEvt__OptionButton0_K2Node_ComponentBoundEvent_28_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LitePC_MainOptionUI.LitePC_MainOptionUI_C.BndEvt__OptionButton1_K2Node_ComponentBoundEvent_33_OnClicked__DelegateSignature
// (BlueprintEvent)

void ULitePC_MainOptionUI_C::BndEvt__OptionButton1_K2Node_ComponentBoundEvent_33_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function LitePC_MainOptionUI.LitePC_MainOptionUI_C.BndEvt__OptionButton1_K2Node_ComponentBoundEvent_33_OnClicked__DelegateSignature");

	ULitePC_MainOptionUI_C_BndEvt__OptionButton1_K2Node_ComponentBoundEvent_33_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LitePC_MainOptionUI.LitePC_MainOptionUI_C.BndEvt__OptionButton2_K2Node_ComponentBoundEvent_39_OnClicked__DelegateSignature
// (BlueprintEvent)

void ULitePC_MainOptionUI_C::BndEvt__OptionButton2_K2Node_ComponentBoundEvent_39_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function LitePC_MainOptionUI.LitePC_MainOptionUI_C.BndEvt__OptionButton2_K2Node_ComponentBoundEvent_39_OnClicked__DelegateSignature");

	ULitePC_MainOptionUI_C_BndEvt__OptionButton2_K2Node_ComponentBoundEvent_39_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LitePC_MainOptionUI.LitePC_MainOptionUI_C.BndEvt__OptionButton3_K2Node_ComponentBoundEvent_46_OnClicked__DelegateSignature
// (BlueprintEvent)

void ULitePC_MainOptionUI_C::BndEvt__OptionButton3_K2Node_ComponentBoundEvent_46_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function LitePC_MainOptionUI.LitePC_MainOptionUI_C.BndEvt__OptionButton3_K2Node_ComponentBoundEvent_46_OnClicked__DelegateSignature");

	ULitePC_MainOptionUI_C_BndEvt__OptionButton3_K2Node_ComponentBoundEvent_46_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LitePC_MainOptionUI.LitePC_MainOptionUI_C.ReceiveShow
// (Event, Protected, BlueprintEvent)

void ULitePC_MainOptionUI_C::ReceiveShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function LitePC_MainOptionUI.LitePC_MainOptionUI_C.ReceiveShow");

	ULitePC_MainOptionUI_C_ReceiveShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LitePC_MainOptionUI.LitePC_MainOptionUI_C.ReceiveHide
// (Event, Protected, BlueprintEvent)

void ULitePC_MainOptionUI_C::ReceiveHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function LitePC_MainOptionUI.LitePC_MainOptionUI_C.ReceiveHide");

	ULitePC_MainOptionUI_C_ReceiveHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LitePC_MainOptionUI.LitePC_MainOptionUI_C.ResetAll
// (BlueprintCallable, BlueprintEvent)

void ULitePC_MainOptionUI_C::ResetAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function LitePC_MainOptionUI.LitePC_MainOptionUI_C.ResetAll");

	ULitePC_MainOptionUI_C_ResetAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LitePC_MainOptionUI.LitePC_MainOptionUI_C.ExecuteUbergraph_LitePC_MainOptionUI
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULitePC_MainOptionUI_C::ExecuteUbergraph_LitePC_MainOptionUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LitePC_MainOptionUI.LitePC_MainOptionUI_C.ExecuteUbergraph_LitePC_MainOptionUI");

	ULitePC_MainOptionUI_C_ExecuteUbergraph_LitePC_MainOptionUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
