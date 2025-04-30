
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

// Function OptionSettingsButotn.OptionSettingsButotn_C.GetText_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UOptionSettingsButotn_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionSettingsButotn.OptionSettingsButotn_C.GetText_1");

	UOptionSettingsButotn_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OptionSettingsButotn.OptionSettingsButotn_C.GetColorAndOpacity_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UOptionSettingsButotn_C::GetColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionSettingsButotn.OptionSettingsButotn_C.GetColorAndOpacity_1");

	UOptionSettingsButotn_C_GetColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OptionSettingsButotn.OptionSettingsButotn_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOptionSettingsButotn_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionSettingsButotn.OptionSettingsButotn_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UOptionSettingsButotn_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionSettingsButotn.OptionSettingsButotn_C.ExecuteUbergraph_OptionSettingsButotn
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionSettingsButotn_C::ExecuteUbergraph_OptionSettingsButotn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionSettingsButotn.OptionSettingsButotn_C.ExecuteUbergraph_OptionSettingsButotn");

	UOptionSettingsButotn_C_ExecuteUbergraph_OptionSettingsButotn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionSettingsButotn.OptionSettingsButotn_C.OnButtonDown__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UOptionSettingsButotn_C::OnButtonDown__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionSettingsButotn.OptionSettingsButotn_C.OnButtonDown__DelegateSignature");

	UOptionSettingsButotn_C_OnButtonDown__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
