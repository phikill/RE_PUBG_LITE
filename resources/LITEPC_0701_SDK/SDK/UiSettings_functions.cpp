
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

// Function UiSettings.UiSettings_C.ResetCrosshairColorComboBoxElements
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUiSettings_C::ResetCrosshairColorComboBoxElements()
{
	static auto fn = UObject::FindObject<UFunction>("Function UiSettings.UiSettings_C.ResetCrosshairColorComboBoxElements");

	UUiSettings_C_ResetCrosshairColorComboBoxElements_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiSettings.UiSettings_C.Get_CrosshairPalette_Visibility_2
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUiSettings_C::Get_CrosshairPalette_Visibility_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function UiSettings.UiSettings_C.Get_CrosshairPalette_Visibility_2");

	UUiSettings_C_Get_CrosshairPalette_Visibility_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UiSettings.UiSettings_C.GetSelectUseCharacterCapture
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           UseCharacterCapture            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUiSettings_C::GetSelectUseCharacterCapture(bool* UseCharacterCapture)
{
	static auto fn = UObject::FindObject<UFunction>("Function UiSettings.UiSettings_C.GetSelectUseCharacterCapture");

	UUiSettings_C_GetSelectUseCharacterCapture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UseCharacterCapture != nullptr)
		*UseCharacterCapture = params.UseCharacterCapture;
}


// Function UiSettings.UiSettings_C.ApplyByCurrentSelectedSettings
// (Public, BlueprintCallable, BlueprintEvent)

void UUiSettings_C::ApplyByCurrentSelectedSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function UiSettings.UiSettings_C.ApplyByCurrentSelectedSettings");

	UUiSettings_C_ApplyByCurrentSelectedSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiSettings.UiSettings_C.SetToDefault
// (Public, BlueprintCallable, BlueprintEvent)

void UUiSettings_C::SetToDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function UiSettings.UiSettings_C.SetToDefault");

	UUiSettings_C_SetToDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiSettings.UiSettings_C.InitUiSetting
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUiSettings_C::InitUiSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function UiSettings.UiSettings_C.InitUiSetting");

	UUiSettings_C_InitUiSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiSettings.UiSettings_C.IsChanged
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUiSettings_C::IsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function UiSettings.UiSettings_C.IsChanged");

	UUiSettings_C_IsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UiSettings.UiSettings_C.IsEnableApply
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUiSettings_C::IsEnableApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function UiSettings.UiSettings_C.IsEnableApply");

	UUiSettings_C_IsEnableApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UiSettings.UiSettings_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUiSettings_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UiSettings.UiSettings_C.Construct");

	UUiSettings_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiSettings.UiSettings_C.OnDefault
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUiSettings_C::OnDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function UiSettings.UiSettings_C.OnDefault");

	UUiSettings_C_OnDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiSettings.UiSettings_C.OnApply
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUiSettings_C::OnApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function UiSettings.UiSettings_C.OnApply");

	UUiSettings_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiSettings.UiSettings_C.BndEvt__CrosshairColorComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUiSettings_C::BndEvt__CrosshairColorComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UiSettings.UiSettings_C.BndEvt__CrosshairColorComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature");

	UUiSettings_C_BndEvt__CrosshairColorComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiSettings.UiSettings_C.ExecuteUbergraph_UiSettings
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUiSettings_C::ExecuteUbergraph_UiSettings(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UiSettings.UiSettings_C.ExecuteUbergraph_UiSettings");

	UUiSettings_C_ExecuteUbergraph_UiSettings_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
