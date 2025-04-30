#pragma once

#include "../SDK.h"

// Name: LitePC_0701, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_AutoAimingComponent.BP_AutoAimingComponent_C.CheckSmoke
struct UBP_AutoAimingComponent_C_CheckSmoke_Params
{
	struct FVector*                                    startPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class ASTExtraPlayerCharacter**                    Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_AutoAimingComponent.BP_AutoAimingComponent_C.CanEnemeyRaycastReach
struct UBP_AutoAimingComponent_C_CanEnemeyRaycastReach_Params
{
	struct FVector*                                    startPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class ASTExtraPlayerCharacter**                    Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
