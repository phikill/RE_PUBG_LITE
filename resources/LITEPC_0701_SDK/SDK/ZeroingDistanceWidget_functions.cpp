
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

// Function ZeroingDistanceWidget.ZeroingDistanceWidget_C.UpdateZeroingDistance
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UZeroingDistanceWidget_C::UpdateZeroingDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function ZeroingDistanceWidget.ZeroingDistanceWidget_C.UpdateZeroingDistance");

	UZeroingDistanceWidget_C_UpdateZeroingDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZeroingDistanceWidget.ZeroingDistanceWidget_C.GetText_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UZeroingDistanceWidget_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ZeroingDistanceWidget.ZeroingDistanceWidget_C.GetText_1");

	UZeroingDistanceWidget_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ZeroingDistanceWidget.ZeroingDistanceWidget_C.ShowZeroingDistance
// (BlueprintCallable, BlueprintEvent)

void UZeroingDistanceWidget_C::ShowZeroingDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function ZeroingDistanceWidget.ZeroingDistanceWidget_C.ShowZeroingDistance");

	UZeroingDistanceWidget_C_ShowZeroingDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZeroingDistanceWidget.ZeroingDistanceWidget_C.HideZeroingDistance
// (BlueprintCallable, BlueprintEvent)

void UZeroingDistanceWidget_C::HideZeroingDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function ZeroingDistanceWidget.ZeroingDistanceWidget_C.HideZeroingDistance");

	UZeroingDistanceWidget_C_HideZeroingDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZeroingDistanceWidget.ZeroingDistanceWidget_C.OnChangeZeroingDistance
// (BlueprintCallable, BlueprintEvent)

void UZeroingDistanceWidget_C::OnChangeZeroingDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function ZeroingDistanceWidget.ZeroingDistanceWidget_C.OnChangeZeroingDistance");

	UZeroingDistanceWidget_C_OnChangeZeroingDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZeroingDistanceWidget.ZeroingDistanceWidget_C.ExecuteUbergraph_ZeroingDistanceWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UZeroingDistanceWidget_C::ExecuteUbergraph_ZeroingDistanceWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZeroingDistanceWidget.ZeroingDistanceWidget_C.ExecuteUbergraph_ZeroingDistanceWidget");

	UZeroingDistanceWidget_C_ExecuteUbergraph_ZeroingDistanceWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
