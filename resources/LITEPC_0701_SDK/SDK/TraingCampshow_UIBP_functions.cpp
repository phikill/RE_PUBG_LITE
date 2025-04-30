
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

// Function TraingCampshow_UIBP.TraingCampshow_UIBP_C.SetUIPos
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Pos                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               Size                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UTraingCampshow_UIBP_C::SetUIPos(int Index, const struct FVector2D& Pos, const struct FVector2D& Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function TraingCampshow_UIBP.TraingCampshow_UIBP_C.SetUIPos");

	UTraingCampshow_UIBP_C_SetUIPos_Params params;
	params.Index = Index;
	params.Pos = Pos;
	params.Size = Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TraingCampshow_UIBP.TraingCampshow_UIBP_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void UTraingCampshow_UIBP_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function TraingCampshow_UIBP.TraingCampshow_UIBP_C.Init");

	UTraingCampshow_UIBP_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
