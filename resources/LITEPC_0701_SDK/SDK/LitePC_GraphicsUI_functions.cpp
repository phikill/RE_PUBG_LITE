
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

// Function LitePC_GraphicsUI.LitePC_GraphicsUI_C.IsEnableApply
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULitePC_GraphicsUI_C::IsEnableApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function LitePC_GraphicsUI.LitePC_GraphicsUI_C.IsEnableApply");

	ULitePC_GraphicsUI_C_IsEnableApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LitePC_GraphicsUI.LitePC_GraphicsUI_C.IsKeyUp
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULitePC_GraphicsUI_C::IsKeyUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function LitePC_GraphicsUI.LitePC_GraphicsUI_C.IsKeyUp");

	ULitePC_GraphicsUI_C_IsKeyUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LitePC_GraphicsUI.LitePC_GraphicsUI_C.IsChanged
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULitePC_GraphicsUI_C::IsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function LitePC_GraphicsUI.LitePC_GraphicsUI_C.IsChanged");

	ULitePC_GraphicsUI_C_IsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LitePC_GraphicsUI.LitePC_GraphicsUI_C.OnDefault
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ULitePC_GraphicsUI_C::OnDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function LitePC_GraphicsUI.LitePC_GraphicsUI_C.OnDefault");

	ULitePC_GraphicsUI_C_OnDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LitePC_GraphicsUI.LitePC_GraphicsUI_C.OnApply
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ULitePC_GraphicsUI_C::OnApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function LitePC_GraphicsUI.LitePC_GraphicsUI_C.OnApply");

	ULitePC_GraphicsUI_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LitePC_GraphicsUI.LitePC_GraphicsUI_C.OnReset
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ULitePC_GraphicsUI_C::OnReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function LitePC_GraphicsUI.LitePC_GraphicsUI_C.OnReset");

	ULitePC_GraphicsUI_C_OnReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LitePC_GraphicsUI.LitePC_GraphicsUI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULitePC_GraphicsUI_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LitePC_GraphicsUI.LitePC_GraphicsUI_C.Construct");

	ULitePC_GraphicsUI_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LitePC_GraphicsUI.LitePC_GraphicsUI_C.ExecuteUbergraph_LitePC_GraphicsUI
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULitePC_GraphicsUI_C::ExecuteUbergraph_LitePC_GraphicsUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LitePC_GraphicsUI.LitePC_GraphicsUI_C.ExecuteUbergraph_LitePC_GraphicsUI");

	ULitePC_GraphicsUI_C_ExecuteUbergraph_LitePC_GraphicsUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
