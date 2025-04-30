
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

// Function CustomizePickUpPanel_BP.CustomizePickUpPanel_BP_C.IsPlayerCanSeeWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewParam1                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCustomizePickUpPanel_BP_C::IsPlayerCanSeeWidget(class UWidget* NewParam, bool* NewParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizePickUpPanel_BP.CustomizePickUpPanel_BP_C.IsPlayerCanSeeWidget");

	UCustomizePickUpPanel_BP_C_IsPlayerCanSeeWidget_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam1 != nullptr)
		*NewParam1 = params.NewParam1;
}


// Function CustomizePickUpPanel_BP.CustomizePickUpPanel_BP_C.HideExpandDeadBoxTips
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBP_STRUCT_GuideText_type NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UCustomizePickUpPanel_BP_C::HideExpandDeadBoxTips(bool isShow, const struct FBP_STRUCT_GuideText_type& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizePickUpPanel_BP.CustomizePickUpPanel_BP_C.HideExpandDeadBoxTips");

	UCustomizePickUpPanel_BP_C_HideExpandDeadBoxTips_Params params;
	params.isShow = isShow;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomizePickUpPanel_BP.CustomizePickUpPanel_BP_C.HideExpandPickUpTips
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBP_STRUCT_GuideText_type NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UCustomizePickUpPanel_BP_C::HideExpandPickUpTips(bool isShow, const struct FBP_STRUCT_GuideText_type& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizePickUpPanel_BP.CustomizePickUpPanel_BP_C.HideExpandPickUpTips");

	UCustomizePickUpPanel_BP_C_HideExpandPickUpTips_Params params;
	params.isShow = isShow;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomizePickUpPanel_BP.CustomizePickUpPanel_BP_C.BndEvt__Button_ClosePickUpListUI_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCustomizePickUpPanel_BP_C::BndEvt__Button_ClosePickUpListUI_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizePickUpPanel_BP.CustomizePickUpPanel_BP_C.BndEvt__Button_ClosePickUpListUI_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature");

	UCustomizePickUpPanel_BP_C_BndEvt__Button_ClosePickUpListUI_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomizePickUpPanel_BP.CustomizePickUpPanel_BP_C.ReceivedInitWidget
// (Event, Public, BlueprintEvent)

void UCustomizePickUpPanel_BP_C::ReceivedInitWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizePickUpPanel_BP.CustomizePickUpPanel_BP_C.ReceivedInitWidget");

	UCustomizePickUpPanel_BP_C_ReceivedInitWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomizePickUpPanel_BP.CustomizePickUpPanel_BP_C.EventCloseCustomPickupPanel
// (BlueprintCallable, BlueprintEvent)

void UCustomizePickUpPanel_BP_C::EventCloseCustomPickupPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizePickUpPanel_BP.CustomizePickUpPanel_BP_C.EventCloseCustomPickupPanel");

	UCustomizePickUpPanel_BP_C_EventCloseCustomPickupPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomizePickUpPanel_BP.CustomizePickUpPanel_BP_C.EventCloseCustomBoxPanel
// (BlueprintCallable, BlueprintEvent)

void UCustomizePickUpPanel_BP_C::EventCloseCustomBoxPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizePickUpPanel_BP.CustomizePickUpPanel_BP_C.EventCloseCustomBoxPanel");

	UCustomizePickUpPanel_BP_C_EventCloseCustomBoxPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomizePickUpPanel_BP.CustomizePickUpPanel_BP_C.ExecuteUbergraph_CustomizePickUpPanel_BP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCustomizePickUpPanel_BP_C::ExecuteUbergraph_CustomizePickUpPanel_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizePickUpPanel_BP.CustomizePickUpPanel_BP_C.ExecuteUbergraph_CustomizePickUpPanel_BP");

	UCustomizePickUpPanel_BP_C_ExecuteUbergraph_CustomizePickUpPanel_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomizePickUpPanel_BP.CustomizePickUpPanel_BP_C.CloseCustomBoxPanel__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCustomizePickUpPanel_BP_C::CloseCustomBoxPanel__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizePickUpPanel_BP.CustomizePickUpPanel_BP_C.CloseCustomBoxPanel__DelegateSignature");

	UCustomizePickUpPanel_BP_C_CloseCustomBoxPanel__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomizePickUpPanel_BP.CustomizePickUpPanel_BP_C.CloseCustomPickUpPanel__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCustomizePickUpPanel_BP_C::CloseCustomPickUpPanel__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizePickUpPanel_BP.CustomizePickUpPanel_BP_C.CloseCustomPickUpPanel__DelegateSignature");

	UCustomizePickUpPanel_BP_C_CloseCustomPickUpPanel__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
