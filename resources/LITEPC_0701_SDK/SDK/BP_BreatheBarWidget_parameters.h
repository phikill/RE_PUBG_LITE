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

// Function BP_BreatheBarWidget.BP_BreatheBarWidget_C.PlayOutOfBreathAnimation
struct UBP_BreatheBarWidget_C_PlayOutOfBreathAnimation_Params
{
};

// Function BP_BreatheBarWidget.BP_BreatheBarWidget_C.UpdateBreatheRatio
struct UBP_BreatheBarWidget_C_UpdateBreatheRatio_Params
{
};

// Function BP_BreatheBarWidget.BP_BreatheBarWidget_C.Construct
struct UBP_BreatheBarWidget_C_Construct_Params
{
};

// Function BP_BreatheBarWidget.BP_BreatheBarWidget_C.OnChangeBreatheRatio
struct UBP_BreatheBarWidget_C_OnChangeBreatheRatio_Params
{
};

// Function BP_BreatheBarWidget.BP_BreatheBarWidget_C.OnAnimationFinished
struct UBP_BreatheBarWidget_C_OnAnimationFinished_Params
{
	class UWidgetAnimation**                           Animation;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BreatheBarWidget.BP_BreatheBarWidget_C.ExecuteUbergraph_BP_BreatheBarWidget
struct UBP_BreatheBarWidget_C_ExecuteUbergraph_BP_BreatheBarWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
