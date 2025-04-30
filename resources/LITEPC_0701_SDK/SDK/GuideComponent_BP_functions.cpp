
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

// Function GuideComponent_BP.GuideComponent_BP_C.ShowGuideByStep
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGuideComponent_BP_C::ShowGuideByStep()
{
	static auto fn = UObject::FindObject<UFunction>("Function GuideComponent_BP.GuideComponent_BP_C.ShowGuideByStep");

	UGuideComponent_BP_C_ShowGuideByStep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GuideComponent_BP.GuideComponent_BP_C.AddUIGuide
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 widget1                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            guildUI1                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               offset1                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               size1                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// int                            childData1                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGuideComponent_BP_C::AddUIGuide(class UWidget* widget1, int guildUI1, const struct FVector2D& offset1, const struct FVector2D& size1, int childData1)
{
	static auto fn = UObject::FindObject<UFunction>("Function GuideComponent_BP.GuideComponent_BP_C.AddUIGuide");

	UGuideComponent_BP_C_AddUIGuide_Params params;
	params.widget1 = widget1;
	params.guildUI1 = guildUI1;
	params.offset1 = offset1;
	params.size1 = size1;
	params.childData1 = childData1;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GuideComponent_BP.GuideComponent_BP_C.InitUIGuide
// (Public, BlueprintCallable, BlueprintEvent)

void UGuideComponent_BP_C::InitUIGuide()
{
	static auto fn = UObject::FindObject<UFunction>("Function GuideComponent_BP.GuideComponent_BP_C.InitUIGuide");

	UGuideComponent_BP_C_InitUIGuide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GuideComponent_BP.GuideComponent_BP_C.CreateGuideUI
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UGuideComponent_BP_C::CreateGuideUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function GuideComponent_BP.GuideComponent_BP_C.CreateGuideUI");

	UGuideComponent_BP_C_CreateGuideUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GuideComponent_BP.GuideComponent_BP_C.ExecuteUbergraph_GuideComponent_BP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGuideComponent_BP_C::ExecuteUbergraph_GuideComponent_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GuideComponent_BP.GuideComponent_BP_C.ExecuteUbergraph_GuideComponent_BP");

	UGuideComponent_BP_C_ExecuteUbergraph_GuideComponent_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
