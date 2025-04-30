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

// Function BP_KeyboardAndMouseHintContent.BP_KeyboardAndMouseHintContent_C.On_HorizontalBox_Prepass_1
struct UBP_KeyboardAndMouseHintContent_C_On_HorizontalBox_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_KeyboardAndMouseHintContent.BP_KeyboardAndMouseHintContent_C.ScopeZoomHandler
struct UBP_KeyboardAndMouseHintContent_C_ScopeZoomHandler_Params
{
};

// Function BP_KeyboardAndMouseHintContent.BP_KeyboardAndMouseHintContent_C.ADSHandler
struct UBP_KeyboardAndMouseHintContent_C_ADSHandler_Params
{
};

// Function BP_KeyboardAndMouseHintContent.BP_KeyboardAndMouseHintContent_C.AimingHandler
struct UBP_KeyboardAndMouseHintContent_C_AimingHandler_Params
{
};

// Function BP_KeyboardAndMouseHintContent.BP_KeyboardAndMouseHintContent_C.PrimaryWeaponsHandler
struct UBP_KeyboardAndMouseHintContent_C_PrimaryWeaponsHandler_Params
{
};

// Function BP_KeyboardAndMouseHintContent.BP_KeyboardAndMouseHintContent_C.ActionAndAxisHandler
struct UBP_KeyboardAndMouseHintContent_C_ActionAndAxisHandler_Params
{
	struct FName                                       ActionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AxisName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              AxisScale;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_KeyboardAndMouseHintContent.BP_KeyboardAndMouseHintContent_C.AxisMoveHandler
struct UBP_KeyboardAndMouseHintContent_C_AxisMoveHandler_Params
{
	struct FName                                       ForwardAxisName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       RightwardAxisName;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_KeyboardAndMouseHintContent.BP_KeyboardAndMouseHintContent_C.DecorateDummyBinding
struct UBP_KeyboardAndMouseHintContent_C_DecorateDummyBinding_Params
{
};

// Function BP_KeyboardAndMouseHintContent.BP_KeyboardAndMouseHintContent_C.DecorateActionBinding
struct UBP_KeyboardAndMouseHintContent_C_DecorateActionBinding_Params
{
	struct FTslInputKey                                Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_KeyboardAndMouseHintContent.BP_KeyboardAndMouseHintContent_C.AxisKeyToIcon
struct UBP_KeyboardAndMouseHintContent_C_AxisKeyToIcon_Params
{
	struct FName                                       AxisName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bValid;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  FuncKeyIcon;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  MainKeyIcon;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_KeyboardAndMouseHintContent.BP_KeyboardAndMouseHintContent_C.TslInputKeyToIconSet
struct UBP_KeyboardAndMouseHintContent_C_TslInputKeyToIconSet_Params
{
	struct FTslInputKey                                TslInputKey;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bValid;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  FuncKeyIcon;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  MainKeyIcon;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_KeyboardAndMouseHintContent.BP_KeyboardAndMouseHintContent_C.FunctionKeyToIcon
struct UBP_KeyboardAndMouseHintContent_C_FunctionKeyToIcon_Params
{
	bool                                               bCtrl;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAlt;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShift;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Icon;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_KeyboardAndMouseHintContent.BP_KeyboardAndMouseHintContent_C.MainKeyToIcon
struct UBP_KeyboardAndMouseHintContent_C_MainKeyToIcon_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UTexture2D*                                  Icon;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_KeyboardAndMouseHintContent.BP_KeyboardAndMouseHintContent_C.UpdateDesign_Normal
struct UBP_KeyboardAndMouseHintContent_C_UpdateDesign_Normal_Params
{
};

// Function BP_KeyboardAndMouseHintContent.BP_KeyboardAndMouseHintContent_C.ExecuteUbergraph_BP_KeyboardAndMouseHintContent
struct UBP_KeyboardAndMouseHintContent_C_ExecuteUbergraph_BP_KeyboardAndMouseHintContent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
