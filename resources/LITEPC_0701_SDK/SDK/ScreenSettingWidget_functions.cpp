
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

// Function ScreenSettingWidget.ScreenSettingWidget_C.IsChanged
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UScreenSettingWidget_C::IsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenSettingWidget.ScreenSettingWidget_C.IsChanged");

	UScreenSettingWidget_C_IsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ScreenSettingWidget.ScreenSettingWidget_C.IsEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UScreenSettingWidget_C::IsEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenSettingWidget.ScreenSettingWidget_C.IsEnabled");

	UScreenSettingWidget_C_IsEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ScreenSettingWidget.ScreenSettingWidget_C.GetSelectedFullScreenMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EWindowMode>       FullscreenMode                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UScreenSettingWidget_C::GetSelectedFullScreenMode(TEnumAsByte<EWindowMode>* FullscreenMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenSettingWidget.ScreenSettingWidget_C.GetSelectedFullScreenMode");

	UScreenSettingWidget_C_GetSelectedFullScreenMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FullscreenMode != nullptr)
		*FullscreenMode = params.FullscreenMode;
}


// Function ScreenSettingWidget.ScreenSettingWidget_C.SettingDefault
// (Public, BlueprintCallable, BlueprintEvent)

void UScreenSettingWidget_C::SettingDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenSettingWidget.ScreenSettingWidget_C.SettingDefault");

	UScreenSettingWidget_C_SettingDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScreenSettingWidget.ScreenSettingWidget_C.GetResolutionEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UScreenSettingWidget_C::GetResolutionEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenSettingWidget.ScreenSettingWidget_C.GetResolutionEnabled");

	UScreenSettingWidget_C_GetResolutionEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ScreenSettingWidget.ScreenSettingWidget_C.GetSelectedResolution
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FScreenResolution       SelectedResolution             (Parm, OutParm)

void UScreenSettingWidget_C::GetSelectedResolution(struct FScreenResolution* SelectedResolution)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenSettingWidget.ScreenSettingWidget_C.GetSelectedResolution");

	UScreenSettingWidget_C_GetSelectedResolution_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectedResolution != nullptr)
		*SelectedResolution = params.SelectedResolution;
}


// Function ScreenSettingWidget.ScreenSettingWidget_C.InitializeResolutionWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UScreenSettingWidget_C::InitializeResolutionWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenSettingWidget.ScreenSettingWidget_C.InitializeResolutionWidget");

	UScreenSettingWidget_C_InitializeResolutionWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScreenSettingWidget.ScreenSettingWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UScreenSettingWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenSettingWidget.ScreenSettingWidget_C.Construct");

	UScreenSettingWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScreenSettingWidget.ScreenSettingWidget_C.OnReset
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UScreenSettingWidget_C::OnReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenSettingWidget.ScreenSettingWidget_C.OnReset");

	UScreenSettingWidget_C_OnReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScreenSettingWidget.ScreenSettingWidget_C.OnDefault
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UScreenSettingWidget_C::OnDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenSettingWidget.ScreenSettingWidget_C.OnDefault");

	UScreenSettingWidget_C_OnDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScreenSettingWidget.ScreenSettingWidget_C.OnApply
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UScreenSettingWidget_C::OnApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenSettingWidget.ScreenSettingWidget_C.OnApply");

	UScreenSettingWidget_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScreenSettingWidget.ScreenSettingWidget_C.ExecuteUbergraph_ScreenSettingWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScreenSettingWidget_C::ExecuteUbergraph_ScreenSettingWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenSettingWidget.ScreenSettingWidget_C.ExecuteUbergraph_ScreenSettingWidget");

	UScreenSettingWidget_C_ExecuteUbergraph_ScreenSettingWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
