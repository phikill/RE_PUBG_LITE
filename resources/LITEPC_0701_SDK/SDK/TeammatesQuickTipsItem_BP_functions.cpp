
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

// Function TeammatesQuickTipsItem_BP.TeammatesQuickTipsItem_BP_C.StartShow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 worldLoc                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UTeammatesQuickTipsItem_BP_C::StartShow(int Index, const struct FVector& worldLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeammatesQuickTipsItem_BP.TeammatesQuickTipsItem_BP_C.StartShow");

	UTeammatesQuickTipsItem_BP_C_StartShow_Params params;
	params.Index = Index;
	params.worldLoc = worldLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeammatesQuickTipsItem_BP.TeammatesQuickTipsItem_BP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTeammatesQuickTipsItem_BP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeammatesQuickTipsItem_BP.TeammatesQuickTipsItem_BP_C.Construct");

	UTeammatesQuickTipsItem_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeammatesQuickTipsItem_BP.TeammatesQuickTipsItem_BP_C.HideFlag
// (BlueprintCallable, BlueprintEvent)

void UTeammatesQuickTipsItem_BP_C::HideFlag()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeammatesQuickTipsItem_BP.TeammatesQuickTipsItem_BP_C.HideFlag");

	UTeammatesQuickTipsItem_BP_C_HideFlag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeammatesQuickTipsItem_BP.TeammatesQuickTipsItem_BP_C.ExecuteUbergraph_TeammatesQuickTipsItem_BP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTeammatesQuickTipsItem_BP_C::ExecuteUbergraph_TeammatesQuickTipsItem_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeammatesQuickTipsItem_BP.TeammatesQuickTipsItem_BP_C.ExecuteUbergraph_TeammatesQuickTipsItem_BP");

	UTeammatesQuickTipsItem_BP_C_ExecuteUbergraph_TeammatesQuickTipsItem_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
