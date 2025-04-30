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

// Function MouseSettingWidget.MouseSettingWidget_C.SetDefaultMouseSettings
struct UMouseSettingWidget_C_SetDefaultMouseSettings_Params
{
};

// Function MouseSettingWidget.MouseSettingWidget_C.UpdateScopeSliders
struct UMouseSettingWidget_C_UpdateScopeSliders_Params
{
};

// Function MouseSettingWidget.MouseSettingWidget_C.FillSensitivities
struct UMouseSettingWidget_C_FillSensitivities_Params
{
	TArray<struct FCustomizableMouseSensitiveName>     Array;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               Condition;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPanelWidget*                                Container;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MouseSettingWidget.MouseSettingWidget_C.InitializeMouseSettingsWidget
struct UMouseSettingWidget_C_InitializeMouseSettingsWidget_Params
{
	bool                                               IsDefaultSetting;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MouseSettingWidget.MouseSettingWidget_C.IsEnableApply
struct UMouseSettingWidget_C_IsEnableApply_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MouseSettingWidget.MouseSettingWidget_C.IsChanged
struct UMouseSettingWidget_C_IsChanged_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MouseSettingWidget.MouseSettingWidget_C.Construct
struct UMouseSettingWidget_C_Construct_Params
{
};

// Function MouseSettingWidget.MouseSettingWidget_C.OnReset
struct UMouseSettingWidget_C_OnReset_Params
{
};

// Function MouseSettingWidget.MouseSettingWidget_C.O_1
struct UMouseSettingWidget_C_O_1_Params
{
};

// Function MouseSettingWidget.MouseSettingWidget_C.OnDefault
struct UMouseSettingWidget_C_OnDefault_Params
{
};

// Function MouseSettingWidget.MouseSettingWidget_C.OnApply
struct UMouseSettingWidget_C_OnApply_Params
{
};

// Function MouseSettingWidget.MouseSettingWidget_C.ExecuteUbergraph_MouseSettingWidget
struct UMouseSettingWidget_C_ExecuteUbergraph_MouseSettingWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
