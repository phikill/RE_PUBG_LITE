
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

// Function BP_CrosshairColorPaletteWidget.BP_CrosshairColorPaletteWidget_C.OnCrosshairComboBoxChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CrosshairColorPaletteWidget_C::OnCrosshairComboBoxChanged(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrosshairColorPaletteWidget.BP_CrosshairColorPaletteWidget_C.OnCrosshairComboBoxChanged");

	UBP_CrosshairColorPaletteWidget_C_OnCrosshairComboBoxChanged_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CrosshairColorPaletteWidget.BP_CrosshairColorPaletteWidget_C.SetColorToComboBox
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            NextComboBoxColor              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBP_CrosshairColorPaletteWidget_C::SetColorToComboBox(const struct FLinearColor& NextComboBoxColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrosshairColorPaletteWidget.BP_CrosshairColorPaletteWidget_C.SetColorToComboBox");

	UBP_CrosshairColorPaletteWidget_C_SetColorToComboBox_Params params;
	params.NextComboBoxColor = NextComboBoxColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CrosshairColorPaletteWidget.BP_CrosshairColorPaletteWidget_C.UpdateCrosshairColorUI
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_CrosshairColorPaletteWidget_C::UpdateCrosshairColorUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrosshairColorPaletteWidget.BP_CrosshairColorPaletteWidget_C.UpdateCrosshairColorUI");

	UBP_CrosshairColorPaletteWidget_C_UpdateCrosshairColorUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CrosshairColorPaletteWidget.BP_CrosshairColorPaletteWidget_C.APPLY
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_CrosshairColorPaletteWidget_C::APPLY()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrosshairColorPaletteWidget.BP_CrosshairColorPaletteWidget_C.APPLY");

	UBP_CrosshairColorPaletteWidget_C_APPLY_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CrosshairColorPaletteWidget.BP_CrosshairColorPaletteWidget_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPresetColorComboBoxWidget_C* PresetColorComboBox            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CrosshairColorPaletteWidget_C::Init(class UPresetColorComboBoxWidget_C* PresetColorComboBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrosshairColorPaletteWidget.BP_CrosshairColorPaletteWidget_C.Init");

	UBP_CrosshairColorPaletteWidget_C_Init_Params params;
	params.PresetColorComboBox = PresetColorComboBox;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CrosshairColorPaletteWidget.BP_CrosshairColorPaletteWidget_C.SetToDefault
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_CrosshairColorPaletteWidget_C::SetToDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrosshairColorPaletteWidget.BP_CrosshairColorPaletteWidget_C.SetToDefault");

	UBP_CrosshairColorPaletteWidget_C_SetToDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CrosshairColorPaletteWidget.BP_CrosshairColorPaletteWidget_C.IsChanged
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_CrosshairColorPaletteWidget_C::IsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrosshairColorPaletteWidget.BP_CrosshairColorPaletteWidget_C.IsChanged");

	UBP_CrosshairColorPaletteWidget_C_IsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CrosshairColorPaletteWidget.BP_CrosshairColorPaletteWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_CrosshairColorPaletteWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrosshairColorPaletteWidget.BP_CrosshairColorPaletteWidget_C.Construct");

	UBP_CrosshairColorPaletteWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CrosshairColorPaletteWidget.BP_CrosshairColorPaletteWidget_C.BndEvt__R_K2Node_ComponentBoundEvent_0_OnSliderValueChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          ChangedValue                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CrosshairColorPaletteWidget_C::BndEvt__R_K2Node_ComponentBoundEvent_0_OnSliderValueChange__DelegateSignature(float ChangedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrosshairColorPaletteWidget.BP_CrosshairColorPaletteWidget_C.BndEvt__R_K2Node_ComponentBoundEvent_0_OnSliderValueChange__DelegateSignature");

	UBP_CrosshairColorPaletteWidget_C_BndEvt__R_K2Node_ComponentBoundEvent_0_OnSliderValueChange__DelegateSignature_Params params;
	params.ChangedValue = ChangedValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CrosshairColorPaletteWidget.BP_CrosshairColorPaletteWidget_C.BndEvt__G_K2Node_ComponentBoundEvent_1_OnSliderValueChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          ChangedValue                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CrosshairColorPaletteWidget_C::BndEvt__G_K2Node_ComponentBoundEvent_1_OnSliderValueChange__DelegateSignature(float ChangedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrosshairColorPaletteWidget.BP_CrosshairColorPaletteWidget_C.BndEvt__G_K2Node_ComponentBoundEvent_1_OnSliderValueChange__DelegateSignature");

	UBP_CrosshairColorPaletteWidget_C_BndEvt__G_K2Node_ComponentBoundEvent_1_OnSliderValueChange__DelegateSignature_Params params;
	params.ChangedValue = ChangedValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CrosshairColorPaletteWidget.BP_CrosshairColorPaletteWidget_C.BndEvt__B_K2Node_ComponentBoundEvent_2_OnSliderValueChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          ChangedValue                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CrosshairColorPaletteWidget_C::BndEvt__B_K2Node_ComponentBoundEvent_2_OnSliderValueChange__DelegateSignature(float ChangedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrosshairColorPaletteWidget.BP_CrosshairColorPaletteWidget_C.BndEvt__B_K2Node_ComponentBoundEvent_2_OnSliderValueChange__DelegateSignature");

	UBP_CrosshairColorPaletteWidget_C_BndEvt__B_K2Node_ComponentBoundEvent_2_OnSliderValueChange__DelegateSignature_Params params;
	params.ChangedValue = ChangedValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CrosshairColorPaletteWidget.BP_CrosshairColorPaletteWidget_C.BndEvt__A_K2Node_ComponentBoundEvent_3_OnSliderValueChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          ChangedValue                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CrosshairColorPaletteWidget_C::BndEvt__A_K2Node_ComponentBoundEvent_3_OnSliderValueChange__DelegateSignature(float ChangedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrosshairColorPaletteWidget.BP_CrosshairColorPaletteWidget_C.BndEvt__A_K2Node_ComponentBoundEvent_3_OnSliderValueChange__DelegateSignature");

	UBP_CrosshairColorPaletteWidget_C_BndEvt__A_K2Node_ComponentBoundEvent_3_OnSliderValueChange__DelegateSignature_Params params;
	params.ChangedValue = ChangedValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CrosshairColorPaletteWidget.BP_CrosshairColorPaletteWidget_C.ExecuteUbergraph_BP_CrosshairColorPaletteWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CrosshairColorPaletteWidget_C::ExecuteUbergraph_BP_CrosshairColorPaletteWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrosshairColorPaletteWidget.BP_CrosshairColorPaletteWidget_C.ExecuteUbergraph_BP_CrosshairColorPaletteWidget");

	UBP_CrosshairColorPaletteWidget_C_ExecuteUbergraph_BP_CrosshairColorPaletteWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
