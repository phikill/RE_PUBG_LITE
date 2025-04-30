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

// Function BP_PlaneCharacter.BP_PlaneCharacter_C.UserConstructionScript
struct ABP_PlaneCharacter_C_UserConstructionScript_Params
{
};

// Function BP_PlaneCharacter.BP_PlaneCharacter_C.ReceiveBeginPlay
struct ABP_PlaneCharacter_C_ReceiveBeginPlay_Params
{
};

// Function BP_PlaneCharacter.BP_PlaneCharacter_C.ReceiveActorBeginOverlap
struct ABP_PlaneCharacter_C_ReceiveActorBeginOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlaneCharacter.BP_PlaneCharacter_C.ExecuteUbergraph_BP_PlaneCharacter
struct ABP_PlaneCharacter_C_ExecuteUbergraph_BP_PlaneCharacter_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
