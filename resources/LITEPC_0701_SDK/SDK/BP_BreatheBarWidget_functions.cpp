
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

// Function BP_BreatheBarWidget.BP_BreatheBarWidget_C.PlayOutOfBreathAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_BreatheBarWidget_C::PlayOutOfBreathAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreatheBarWidget.BP_BreatheBarWidget_C.PlayOutOfBreathAnimation");

	UBP_BreatheBarWidget_C_PlayOutOfBreathAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BreatheBarWidget.BP_BreatheBarWidget_C.UpdateBreatheRatio
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_BreatheBarWidget_C::UpdateBreatheRatio()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreatheBarWidget.BP_BreatheBarWidget_C.UpdateBreatheRatio");

	UBP_BreatheBarWidget_C_UpdateBreatheRatio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BreatheBarWidget.BP_BreatheBarWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_BreatheBarWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreatheBarWidget.BP_BreatheBarWidget_C.Construct");

	UBP_BreatheBarWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BreatheBarWidget.BP_BreatheBarWidget_C.OnChangeBreatheRatio
// (BlueprintCallable, BlueprintEvent)

void UBP_BreatheBarWidget_C::OnChangeBreatheRatio()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreatheBarWidget.BP_BreatheBarWidget_C.OnChangeBreatheRatio");

	UBP_BreatheBarWidget_C_OnChangeBreatheRatio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BreatheBarWidget.BP_BreatheBarWidget_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation**       Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BreatheBarWidget_C::OnAnimationFinished(class UWidgetAnimation** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreatheBarWidget.BP_BreatheBarWidget_C.OnAnimationFinished");

	UBP_BreatheBarWidget_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BreatheBarWidget.BP_BreatheBarWidget_C.ExecuteUbergraph_BP_BreatheBarWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BreatheBarWidget_C::ExecuteUbergraph_BP_BreatheBarWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreatheBarWidget.BP_BreatheBarWidget_C.ExecuteUbergraph_BP_BreatheBarWidget");

	UBP_BreatheBarWidget_C_ExecuteUbergraph_BP_BreatheBarWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
