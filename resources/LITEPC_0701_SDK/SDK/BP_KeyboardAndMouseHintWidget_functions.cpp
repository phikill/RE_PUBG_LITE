
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

// Function BP_KeyboardAndMouseHintWidget.BP_KeyboardAndMouseHintWidget_C.ShowHideKeyHintWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           inventoryOpened                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_KeyboardAndMouseHintWidget_C::ShowHideKeyHintWidget(bool inventoryOpened)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyboardAndMouseHintWidget.BP_KeyboardAndMouseHintWidget_C.ShowHideKeyHintWidget");

	UBP_KeyboardAndMouseHintWidget_C_ShowHideKeyHintWidget_Params params;
	params.inventoryOpened = inventoryOpened;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KeyboardAndMouseHintWidget.BP_KeyboardAndMouseHintWidget_C.SetPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsExtendMinimap                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_KeyboardAndMouseHintWidget_C::SetPosition(bool IsExtendMinimap)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyboardAndMouseHintWidget.BP_KeyboardAndMouseHintWidget_C.SetPosition");

	UBP_KeyboardAndMouseHintWidget_C_SetPosition_Params params;
	params.IsExtendMinimap = IsExtendMinimap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KeyboardAndMouseHintWidget.BP_KeyboardAndMouseHintWidget_C.On_KeyboardAndMouseHintSizeBox_Prepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_KeyboardAndMouseHintWidget_C::On_KeyboardAndMouseHintSizeBox_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyboardAndMouseHintWidget.BP_KeyboardAndMouseHintWidget_C.On_KeyboardAndMouseHintSizeBox_Prepass_1");

	UBP_KeyboardAndMouseHintWidget_C_On_KeyboardAndMouseHintSizeBox_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KeyboardAndMouseHintWidget.BP_KeyboardAndMouseHintWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_KeyboardAndMouseHintWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyboardAndMouseHintWidget.BP_KeyboardAndMouseHintWidget_C.Construct");

	UBP_KeyboardAndMouseHintWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KeyboardAndMouseHintWidget.BP_KeyboardAndMouseHintWidget_C.ExecuteUbergraph_BP_KeyboardAndMouseHintWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_KeyboardAndMouseHintWidget_C::ExecuteUbergraph_BP_KeyboardAndMouseHintWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyboardAndMouseHintWidget.BP_KeyboardAndMouseHintWidget_C.ExecuteUbergraph_BP_KeyboardAndMouseHintWidget");

	UBP_KeyboardAndMouseHintWidget_C_ExecuteUbergraph_BP_KeyboardAndMouseHintWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
