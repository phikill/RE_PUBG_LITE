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

// Function BP_WindowCompBase.BP_WindowCompBase_C.callvoicecheck
struct UBP_WindowCompBase_C_callvoicecheck_Params
{
};

// Function BP_WindowCompBase.BP_WindowCompBase_C.NotifyServerBroken
struct UBP_WindowCompBase_C_NotifyServerBroken_Params
{
};

// Function BP_WindowCompBase.BP_WindowCompBase_C.LocalHandleWindowBrokenBP
struct UBP_WindowCompBase_C_LocalHandleWindowBrokenBP_Params
{
	bool*                                              bInitial;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bLocal;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WindowCompBase.BP_WindowCompBase_C.ExecuteUbergraph_BP_WindowCompBase
struct UBP_WindowCompBase_C_ExecuteUbergraph_BP_WindowCompBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
