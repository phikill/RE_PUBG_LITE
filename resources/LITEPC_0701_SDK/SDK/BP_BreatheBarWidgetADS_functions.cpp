
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

// Function BP_BreatheBarWidgetADS.BP_BreatheBarWidgetADS_C.UpdateVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_BreatheBarWidgetADS_C::UpdateVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreatheBarWidgetADS.BP_BreatheBarWidgetADS_C.UpdateVisibility");

	UBP_BreatheBarWidgetADS_C_UpdateVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BreatheBarWidgetADS.BP_BreatheBarWidgetADS_C.PlayOutOfBreath
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_BreatheBarWidgetADS_C::PlayOutOfBreath()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreatheBarWidgetADS.BP_BreatheBarWidgetADS_C.PlayOutOfBreath");

	UBP_BreatheBarWidgetADS_C_PlayOutOfBreath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BreatheBarWidgetADS.BP_BreatheBarWidgetADS_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_BreatheBarWidgetADS_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreatheBarWidgetADS.BP_BreatheBarWidgetADS_C.Construct");

	UBP_BreatheBarWidgetADS_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BreatheBarWidgetADS.BP_BreatheBarWidgetADS_C.OnChangeBreatheRatio
// (BlueprintCallable, BlueprintEvent)

void UBP_BreatheBarWidgetADS_C::OnChangeBreatheRatio()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreatheBarWidgetADS.BP_BreatheBarWidgetADS_C.OnChangeBreatheRatio");

	UBP_BreatheBarWidgetADS_C_OnChangeBreatheRatio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BreatheBarWidgetADS.BP_BreatheBarWidgetADS_C.ExecuteUbergraph_BP_BreatheBarWidgetADS
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BreatheBarWidgetADS_C::ExecuteUbergraph_BP_BreatheBarWidgetADS(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreatheBarWidgetADS.BP_BreatheBarWidgetADS_C.ExecuteUbergraph_BP_BreatheBarWidgetADS");

	UBP_BreatheBarWidgetADS_C_ExecuteUbergraph_BP_BreatheBarWidgetADS_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
