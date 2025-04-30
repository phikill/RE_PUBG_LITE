
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

// Function QualityComboBox.QualityComboBox_C.Get_ComboBox_bIsEnabled_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UQualityComboBox_C::Get_ComboBox_bIsEnabled_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function QualityComboBox.QualityComboBox_C.Get_ComboBox_bIsEnabled_1");

	UQualityComboBox_C_Get_ComboBox_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function QualityComboBox.QualityComboBox_C.GetDisplayTextByOption
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   DisplayText                    (Parm, OutParm)

void UQualityComboBox_C::GetDisplayTextByOption(struct FText* DisplayText)
{
	static auto fn = UObject::FindObject<UFunction>("Function QualityComboBox.QualityComboBox_C.GetDisplayTextByOption");

	UQualityComboBox_C_GetDisplayTextByOption_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DisplayText != nullptr)
		*DisplayText = params.DisplayText;
}


// Function QualityComboBox.QualityComboBox_C.On_ComboBox_GenerateWidget_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* UQualityComboBox_C::On_ComboBox_GenerateWidget_1(const struct FString& Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function QualityComboBox.QualityComboBox_C.On_ComboBox_GenerateWidget_1");

	UQualityComboBox_C_On_ComboBox_GenerateWidget_1_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function QualityComboBox.QualityComboBox_C.RemoveOption
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Option                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UQualityComboBox_C::RemoveOption(const struct FString& Option)
{
	static auto fn = UObject::FindObject<UFunction>("Function QualityComboBox.QualityComboBox_C.RemoveOption");

	UQualityComboBox_C_RemoveOption_Params params;
	params.Option = Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QualityComboBox.QualityComboBox_C.GetSelectedOption
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 SelectedOption                 (Parm, OutParm, ZeroConstructor)

void UQualityComboBox_C::GetSelectedOption(struct FString* SelectedOption)
{
	static auto fn = UObject::FindObject<UFunction>("Function QualityComboBox.QualityComboBox_C.GetSelectedOption");

	UQualityComboBox_C_GetSelectedOption_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectedOption != nullptr)
		*SelectedOption = params.SelectedOption;
}


// Function QualityComboBox.QualityComboBox_C.SetSelectedOption
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Option                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UQualityComboBox_C::SetSelectedOption(const struct FString& Option)
{
	static auto fn = UObject::FindObject<UFunction>("Function QualityComboBox.QualityComboBox_C.SetSelectedOption");

	UQualityComboBox_C_SetSelectedOption_Params params;
	params.Option = Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QualityComboBox.QualityComboBox_C.ClearOptions
// (Public, BlueprintCallable, BlueprintEvent)

void UQualityComboBox_C::ClearOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function QualityComboBox.QualityComboBox_C.ClearOptions");

	UQualityComboBox_C_ClearOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QualityComboBox.QualityComboBox_C.AddOption
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 OptionName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FText                   DisplayOptionName              (BlueprintVisible, BlueprintReadOnly, Parm)

void UQualityComboBox_C::AddOption(const struct FString& OptionName, const struct FText& DisplayOptionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function QualityComboBox.QualityComboBox_C.AddOption");

	UQualityComboBox_C_AddOption_Params params;
	params.OptionName = OptionName;
	params.DisplayOptionName = DisplayOptionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QualityComboBox.QualityComboBox_C.BndEvt__ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQualityComboBox_C::BndEvt__ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function QualityComboBox.QualityComboBox_C.BndEvt__ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");

	UQualityComboBox_C_BndEvt__ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QualityComboBox.QualityComboBox_C.ExecuteUbergraph_QualityComboBox
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQualityComboBox_C::ExecuteUbergraph_QualityComboBox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function QualityComboBox.QualityComboBox_C.ExecuteUbergraph_QualityComboBox");

	UQualityComboBox_C_ExecuteUbergraph_QualityComboBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QualityComboBox.QualityComboBox_C.OnSelectionChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQualityComboBox_C::OnSelectionChanged__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function QualityComboBox.QualityComboBox_C.OnSelectionChanged__DelegateSignature");

	UQualityComboBox_C_OnSelectionChanged__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
