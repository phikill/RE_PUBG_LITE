
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

// Function LitePC_SoundUI.LitePC_SoundUI_C.IsEnableApply
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULitePC_SoundUI_C::IsEnableApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function LitePC_SoundUI.LitePC_SoundUI_C.IsEnableApply");

	ULitePC_SoundUI_C_IsEnableApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LitePC_SoundUI.LitePC_SoundUI_C.IsEnable_VoiceSetting
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ResturnValue                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULitePC_SoundUI_C::IsEnable_VoiceSetting(bool* ResturnValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function LitePC_SoundUI.LitePC_SoundUI_C.IsEnable_VoiceSetting");

	ULitePC_SoundUI_C_IsEnable_VoiceSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResturnValue != nullptr)
		*ResturnValue = params.ResturnValue;
}


// Function LitePC_SoundUI.LitePC_SoundUI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULitePC_SoundUI_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LitePC_SoundUI.LitePC_SoundUI_C.Construct");

	ULitePC_SoundUI_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LitePC_SoundUI.LitePC_SoundUI_C.OnDefault
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ULitePC_SoundUI_C::OnDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function LitePC_SoundUI.LitePC_SoundUI_C.OnDefault");

	ULitePC_SoundUI_C_OnDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LitePC_SoundUI.LitePC_SoundUI_C.OnApply
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ULitePC_SoundUI_C::OnApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function LitePC_SoundUI.LitePC_SoundUI_C.OnApply");

	ULitePC_SoundUI_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LitePC_SoundUI.LitePC_SoundUI_C.OnReset
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ULitePC_SoundUI_C::OnReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function LitePC_SoundUI.LitePC_SoundUI_C.OnReset");

	ULitePC_SoundUI_C_OnReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LitePC_SoundUI.LitePC_SoundUI_C.ExecuteUbergraph_LitePC_SoundUI
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULitePC_SoundUI_C::ExecuteUbergraph_LitePC_SoundUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LitePC_SoundUI.LitePC_SoundUI_C.ExecuteUbergraph_LitePC_SoundUI");

	ULitePC_SoundUI_C_ExecuteUbergraph_LitePC_SoundUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
