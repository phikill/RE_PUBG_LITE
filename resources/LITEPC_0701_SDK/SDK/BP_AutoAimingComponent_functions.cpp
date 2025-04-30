
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

// Function BP_AutoAimingComponent.BP_AutoAimingComponent_C.CheckSmoke
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                startPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class ASTExtraPlayerCharacter** Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_AutoAimingComponent_C::CheckSmoke(struct FVector* startPoint, class ASTExtraPlayerCharacter** Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AutoAimingComponent.BP_AutoAimingComponent_C.CheckSmoke");

	UBP_AutoAimingComponent_C_CheckSmoke_Params params;
	params.startPoint = startPoint;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_AutoAimingComponent.BP_AutoAimingComponent_C.CanEnemeyRaycastReach
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                startPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class ASTExtraPlayerCharacter** Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_AutoAimingComponent_C::CanEnemeyRaycastReach(struct FVector* startPoint, class ASTExtraPlayerCharacter** Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AutoAimingComponent.BP_AutoAimingComponent_C.CanEnemeyRaycastReach");

	UBP_AutoAimingComponent_C_CanEnemeyRaycastReach_Params params;
	params.startPoint = startPoint;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
