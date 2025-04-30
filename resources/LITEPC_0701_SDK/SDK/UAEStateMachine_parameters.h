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

// Function UAEStateMachine.UAEState.Update
struct UUAEState_Update_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UAEStateMachine.UAEState.OnLeave
struct UUAEState_OnLeave_Params
{
	class UUAEState*                                   TranitToState;                                            // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UAEStateMachine.UAEState.OnEnter
struct UUAEState_OnEnter_Params
{
	class UUAEState*                                   PrevState;                                                // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
