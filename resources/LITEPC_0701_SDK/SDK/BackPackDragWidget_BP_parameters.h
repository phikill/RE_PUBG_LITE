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

// Function BackPackDragWidget_BP.BackPackDragWidget_BP_C.ShowDisableMark
struct UBackPackDragWidget_BP_C_ShowDisableMark_Params
{
	bool                                               isShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BackPackDragWidget_BP.BackPackDragWidget_BP_C.SetPic
struct UBackPackDragWidget_BP_C_SetPic_Params
{
	struct FSlateBrush                                 InBrush;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
