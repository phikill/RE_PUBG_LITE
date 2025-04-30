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

// Function TickableDynamicAddItemInterface.TickableDynamicAddItemInterface_C.MapScaleChangeRedrawPos
struct UTickableDynamicAddItemInterface_C_MapScaleChangeRedrawPos_Params
{
	float                                              NewScale;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TickableDynamicAddItemInterface.TickableDynamicAddItemInterface_C.CustomTickFunc
struct UTickableDynamicAddItemInterface_C_CustomTickFunc_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
