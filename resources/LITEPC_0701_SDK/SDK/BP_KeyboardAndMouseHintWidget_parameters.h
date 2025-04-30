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

// Function BP_KeyboardAndMouseHintWidget.BP_KeyboardAndMouseHintWidget_C.ShowHideKeyHintWidget
struct UBP_KeyboardAndMouseHintWidget_C_ShowHideKeyHintWidget_Params
{
	bool                                               inventoryOpened;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_KeyboardAndMouseHintWidget.BP_KeyboardAndMouseHintWidget_C.SetPosition
struct UBP_KeyboardAndMouseHintWidget_C_SetPosition_Params
{
	bool                                               IsExtendMinimap;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_KeyboardAndMouseHintWidget.BP_KeyboardAndMouseHintWidget_C.On_KeyboardAndMouseHintSizeBox_Prepass_1
struct UBP_KeyboardAndMouseHintWidget_C_On_KeyboardAndMouseHintSizeBox_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_KeyboardAndMouseHintWidget.BP_KeyboardAndMouseHintWidget_C.Construct
struct UBP_KeyboardAndMouseHintWidget_C_Construct_Params
{
};

// Function BP_KeyboardAndMouseHintWidget.BP_KeyboardAndMouseHintWidget_C.ExecuteUbergraph_BP_KeyboardAndMouseHintWidget
struct UBP_KeyboardAndMouseHintWidget_C_ExecuteUbergraph_BP_KeyboardAndMouseHintWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
