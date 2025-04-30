
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

// Function KeySettingWidget_BP.KeySettingWidget_BP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UKeySettingWidget_BP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeySettingWidget_BP.KeySettingWidget_BP_C.Construct");

	UKeySettingWidget_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeySettingWidget_BP.KeySettingWidget_BP_C.OnReset
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UKeySettingWidget_BP_C::OnReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeySettingWidget_BP.KeySettingWidget_BP_C.OnReset");

	UKeySettingWidget_BP_C_OnReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeySettingWidget_BP.KeySettingWidget_BP_C.OnDefault
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UKeySettingWidget_BP_C::OnDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeySettingWidget_BP.KeySettingWidget_BP_C.OnDefault");

	UKeySettingWidget_BP_C_OnDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeySettingWidget_BP.KeySettingWidget_BP_C.ExecuteUbergraph_KeySettingWidget_BP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKeySettingWidget_BP_C::ExecuteUbergraph_KeySettingWidget_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeySettingWidget_BP.KeySettingWidget_BP_C.ExecuteUbergraph_KeySettingWidget_BP");

	UKeySettingWidget_BP_C_ExecuteUbergraph_KeySettingWidget_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
