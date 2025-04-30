
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

// Function MouseSettingWidget.MouseSettingWidget_C.SetDefaultMouseSettings
// (Public, BlueprintCallable, BlueprintEvent)

void UMouseSettingWidget_C::SetDefaultMouseSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function MouseSettingWidget.MouseSettingWidget_C.SetDefaultMouseSettings");

	UMouseSettingWidget_C_SetDefaultMouseSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MouseSettingWidget.MouseSettingWidget_C.UpdateScopeSliders
// (Public, BlueprintCallable, BlueprintEvent)

void UMouseSettingWidget_C::UpdateScopeSliders()
{
	static auto fn = UObject::FindObject<UFunction>("Function MouseSettingWidget.MouseSettingWidget_C.UpdateScopeSliders");

	UMouseSettingWidget_C_UpdateScopeSliders_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MouseSettingWidget.MouseSettingWidget_C.FillSensitivities
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FCustomizableMouseSensitiveName> Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPanelWidget*            Container                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMouseSettingWidget_C::FillSensitivities(bool Condition, class UPanelWidget* Container, TArray<struct FCustomizableMouseSensitiveName>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function MouseSettingWidget.MouseSettingWidget_C.FillSensitivities");

	UMouseSettingWidget_C_FillSensitivities_Params params;
	params.Condition = Condition;
	params.Container = Container;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function MouseSettingWidget.MouseSettingWidget_C.InitializeMouseSettingsWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsDefaultSetting               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMouseSettingWidget_C::InitializeMouseSettingsWidget(bool IsDefaultSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function MouseSettingWidget.MouseSettingWidget_C.InitializeMouseSettingsWidget");

	UMouseSettingWidget_C_InitializeMouseSettingsWidget_Params params;
	params.IsDefaultSetting = IsDefaultSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MouseSettingWidget.MouseSettingWidget_C.IsEnableApply
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMouseSettingWidget_C::IsEnableApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function MouseSettingWidget.MouseSettingWidget_C.IsEnableApply");

	UMouseSettingWidget_C_IsEnableApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MouseSettingWidget.MouseSettingWidget_C.IsChanged
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMouseSettingWidget_C::IsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function MouseSettingWidget.MouseSettingWidget_C.IsChanged");

	UMouseSettingWidget_C_IsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MouseSettingWidget.MouseSettingWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMouseSettingWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MouseSettingWidget.MouseSettingWidget_C.Construct");

	UMouseSettingWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MouseSettingWidget.MouseSettingWidget_C.OnReset
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMouseSettingWidget_C::OnReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function MouseSettingWidget.MouseSettingWidget_C.OnReset");

	UMouseSettingWidget_C_OnReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MouseSettingWidget.MouseSettingWidget_C.O_1
// (BlueprintCallable, BlueprintEvent)

void UMouseSettingWidget_C::O_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function MouseSettingWidget.MouseSettingWidget_C.O_1");

	UMouseSettingWidget_C_O_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MouseSettingWidget.MouseSettingWidget_C.OnDefault
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMouseSettingWidget_C::OnDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function MouseSettingWidget.MouseSettingWidget_C.OnDefault");

	UMouseSettingWidget_C_OnDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MouseSettingWidget.MouseSettingWidget_C.OnApply
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMouseSettingWidget_C::OnApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function MouseSettingWidget.MouseSettingWidget_C.OnApply");

	UMouseSettingWidget_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MouseSettingWidget.MouseSettingWidget_C.ExecuteUbergraph_MouseSettingWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMouseSettingWidget_C::ExecuteUbergraph_MouseSettingWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MouseSettingWidget.MouseSettingWidget_C.ExecuteUbergraph_MouseSettingWidget");

	UMouseSettingWidget_C_ExecuteUbergraph_MouseSettingWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
