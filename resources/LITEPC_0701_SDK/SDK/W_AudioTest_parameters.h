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

// Function W_AudioTest.W_AudioTest_C.SetDistance
struct UW_AudioTest_C_SetDistance_Params
{
	float                                              DistanceInMeters;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_AudioTest.W_AudioTest_C.SetText
struct UW_AudioTest_C_SetText_Params
{
	struct FString                                     InText;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
