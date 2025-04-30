
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

// Function BP_KeyboardAndMouseHintContent.BP_KeyboardAndMouseHintContent_C.On_HorizontalBox_Prepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_KeyboardAndMouseHintContent_C::On_HorizontalBox_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyboardAndMouseHintContent.BP_KeyboardAndMouseHintContent_C.On_HorizontalBox_Prepass_1");

	UBP_KeyboardAndMouseHintContent_C_On_HorizontalBox_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KeyboardAndMouseHintContent.BP_KeyboardAndMouseHintContent_C.ScopeZoomHandler
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_KeyboardAndMouseHintContent_C::ScopeZoomHandler()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyboardAndMouseHintContent.BP_KeyboardAndMouseHintContent_C.ScopeZoomHandler");

	UBP_KeyboardAndMouseHintContent_C_ScopeZoomHandler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KeyboardAndMouseHintContent.BP_KeyboardAndMouseHintContent_C.ADSHandler
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_KeyboardAndMouseHintContent_C::ADSHandler()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyboardAndMouseHintContent.BP_KeyboardAndMouseHintContent_C.ADSHandler");

	UBP_KeyboardAndMouseHintContent_C_ADSHandler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KeyboardAndMouseHintContent.BP_KeyboardAndMouseHintContent_C.AimingHandler
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_KeyboardAndMouseHintContent_C::AimingHandler()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyboardAndMouseHintContent.BP_KeyboardAndMouseHintContent_C.AimingHandler");

	UBP_KeyboardAndMouseHintContent_C_AimingHandler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KeyboardAndMouseHintContent.BP_KeyboardAndMouseHintContent_C.PrimaryWeaponsHandler
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_KeyboardAndMouseHintContent_C::PrimaryWeaponsHandler()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyboardAndMouseHintContent.BP_KeyboardAndMouseHintContent_C.PrimaryWeaponsHandler");

	UBP_KeyboardAndMouseHintContent_C_PrimaryWeaponsHandler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KeyboardAndMouseHintContent.BP_KeyboardAndMouseHintContent_C.ActionAndAxisHandler
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ActionName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AxisName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          AxisScale                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_KeyboardAndMouseHintContent_C::ActionAndAxisHandler(const struct FName& ActionName, const struct FName& AxisName, float AxisScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyboardAndMouseHintContent.BP_KeyboardAndMouseHintContent_C.ActionAndAxisHandler");

	UBP_KeyboardAndMouseHintContent_C_ActionAndAxisHandler_Params params;
	params.ActionName = ActionName;
	params.AxisName = AxisName;
	params.AxisScale = AxisScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KeyboardAndMouseHintContent.BP_KeyboardAndMouseHintContent_C.AxisMoveHandler
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ForwardAxisName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   RightwardAxisName              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_KeyboardAndMouseHintContent_C::AxisMoveHandler(const struct FName& ForwardAxisName, const struct FName& RightwardAxisName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyboardAndMouseHintContent.BP_KeyboardAndMouseHintContent_C.AxisMoveHandler");

	UBP_KeyboardAndMouseHintContent_C_AxisMoveHandler_Params params;
	params.ForwardAxisName = ForwardAxisName;
	params.RightwardAxisName = RightwardAxisName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KeyboardAndMouseHintContent.BP_KeyboardAndMouseHintContent_C.DecorateDummyBinding
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_KeyboardAndMouseHintContent_C::DecorateDummyBinding()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyboardAndMouseHintContent.BP_KeyboardAndMouseHintContent_C.DecorateDummyBinding");

	UBP_KeyboardAndMouseHintContent_C_DecorateDummyBinding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KeyboardAndMouseHintContent.BP_KeyboardAndMouseHintContent_C.DecorateActionBinding
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTslInputKey            Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_KeyboardAndMouseHintContent_C::DecorateActionBinding(const struct FTslInputKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyboardAndMouseHintContent.BP_KeyboardAndMouseHintContent_C.DecorateActionBinding");

	UBP_KeyboardAndMouseHintContent_C_DecorateActionBinding_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KeyboardAndMouseHintContent.BP_KeyboardAndMouseHintContent_C.AxisKeyToIcon
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   AxisName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bValid                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              FuncKeyIcon                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              MainKeyIcon                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_KeyboardAndMouseHintContent_C::AxisKeyToIcon(const struct FName& AxisName, float Scale, bool* bValid, class UTexture2D** FuncKeyIcon, class UTexture2D** MainKeyIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyboardAndMouseHintContent.BP_KeyboardAndMouseHintContent_C.AxisKeyToIcon");

	UBP_KeyboardAndMouseHintContent_C_AxisKeyToIcon_Params params;
	params.AxisName = AxisName;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bValid != nullptr)
		*bValid = params.bValid;
	if (FuncKeyIcon != nullptr)
		*FuncKeyIcon = params.FuncKeyIcon;
	if (MainKeyIcon != nullptr)
		*MainKeyIcon = params.MainKeyIcon;
}


// Function BP_KeyboardAndMouseHintContent.BP_KeyboardAndMouseHintContent_C.TslInputKeyToIconSet
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTslInputKey            TslInputKey                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bValid                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              FuncKeyIcon                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              MainKeyIcon                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_KeyboardAndMouseHintContent_C::TslInputKeyToIconSet(const struct FTslInputKey& TslInputKey, bool* bValid, class UTexture2D** FuncKeyIcon, class UTexture2D** MainKeyIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyboardAndMouseHintContent.BP_KeyboardAndMouseHintContent_C.TslInputKeyToIconSet");

	UBP_KeyboardAndMouseHintContent_C_TslInputKeyToIconSet_Params params;
	params.TslInputKey = TslInputKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bValid != nullptr)
		*bValid = params.bValid;
	if (FuncKeyIcon != nullptr)
		*FuncKeyIcon = params.FuncKeyIcon;
	if (MainKeyIcon != nullptr)
		*MainKeyIcon = params.MainKeyIcon;
}


// Function BP_KeyboardAndMouseHintContent.BP_KeyboardAndMouseHintContent_C.FunctionKeyToIcon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bCtrl                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAlt                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bShift                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Icon                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_KeyboardAndMouseHintContent_C::FunctionKeyToIcon(bool bCtrl, bool bAlt, bool bShift, class UTexture2D** Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyboardAndMouseHintContent.BP_KeyboardAndMouseHintContent_C.FunctionKeyToIcon");

	UBP_KeyboardAndMouseHintContent_C_FunctionKeyToIcon_Params params;
	params.bCtrl = bCtrl;
	params.bAlt = bAlt;
	params.bShift = bShift;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Icon != nullptr)
		*Icon = params.Icon;
}


// Function BP_KeyboardAndMouseHintContent.BP_KeyboardAndMouseHintContent_C.MainKeyToIcon
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D*              Icon                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_KeyboardAndMouseHintContent_C::MainKeyToIcon(const struct FKey& Key, class UTexture2D** Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyboardAndMouseHintContent.BP_KeyboardAndMouseHintContent_C.MainKeyToIcon");

	UBP_KeyboardAndMouseHintContent_C_MainKeyToIcon_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Icon != nullptr)
		*Icon = params.Icon;
}


// Function BP_KeyboardAndMouseHintContent.BP_KeyboardAndMouseHintContent_C.UpdateDesign_Normal
// (Event, Public, BlueprintEvent)

void UBP_KeyboardAndMouseHintContent_C::UpdateDesign_Normal()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyboardAndMouseHintContent.BP_KeyboardAndMouseHintContent_C.UpdateDesign_Normal");

	UBP_KeyboardAndMouseHintContent_C_UpdateDesign_Normal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KeyboardAndMouseHintContent.BP_KeyboardAndMouseHintContent_C.ExecuteUbergraph_BP_KeyboardAndMouseHintContent
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_KeyboardAndMouseHintContent_C::ExecuteUbergraph_BP_KeyboardAndMouseHintContent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyboardAndMouseHintContent.BP_KeyboardAndMouseHintContent_C.ExecuteUbergraph_BP_KeyboardAndMouseHintContent");

	UBP_KeyboardAndMouseHintContent_C_ExecuteUbergraph_BP_KeyboardAndMouseHintContent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
