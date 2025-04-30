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

// Function BP_KeyboardAndMouseCombination_General.BP_KeyboardAndMouseCombination_General_C.SetBrushAndAdjustSize
struct UBP_KeyboardAndMouseCombination_General_C_SetBrushAndAdjustSize_Params
{
	class USizeBox*                                    SizeBoxWidget;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UImage*                                      ImageWidget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  IconTexture;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_KeyboardAndMouseCombination_General.BP_KeyboardAndMouseCombination_General_C.DecorateResponseType
struct UBP_KeyboardAndMouseCombination_General_C_DecorateResponseType_Params
{
	bool                                               bHold;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRelease;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_KeyboardAndMouseCombination_General.BP_KeyboardAndMouseCombination_General_C.DecorateMainKey
struct UBP_KeyboardAndMouseCombination_General_C_DecorateMainKey_Params
{
	class UTexture2D*                                  MainKeyIcon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_KeyboardAndMouseCombination_General.BP_KeyboardAndMouseCombination_General_C.DecorateFunctionKey
struct UBP_KeyboardAndMouseCombination_General_C_DecorateFunctionKey_Params
{
	class UTexture2D*                                  FunctionKeyIcon;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_KeyboardAndMouseCombination_General.BP_KeyboardAndMouseCombination_General_C.UpdateWidget
struct UBP_KeyboardAndMouseCombination_General_C_UpdateWidget_Params
{
	class UTexture2D*                                  FunctionIcon;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  MainIcon;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHold;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRelease;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
