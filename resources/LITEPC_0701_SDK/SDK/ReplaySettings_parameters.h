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

// Function ReplaySettings.ReplaySettings_C.Get_KillcamComboBox_Visibility_1
struct UReplaySettings_C_Get_KillcamComboBox_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ReplaySettings.ReplaySettings_C.Get_ReplayComboBox_Visibility_1
struct UReplaySettings_C_Get_ReplayComboBox_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ReplaySettings.ReplaySettings_C.Get_ReplayOption_Editable
struct UReplaySettings_C_Get_ReplayOption_Editable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ReplaySettings.ReplaySettings_C.ApplyByCurrentSelectedSettings
struct UReplaySettings_C_ApplyByCurrentSelectedSettings_Params
{
};

// Function ReplaySettings.ReplaySettings_C.InitReplaySettings
struct UReplaySettings_C_InitReplaySettings_Params
{
};

// Function ReplaySettings.ReplaySettings_C.SetToDefault
struct UReplaySettings_C_SetToDefault_Params
{
};

// Function ReplaySettings.ReplaySettings_C.IsChanged
struct UReplaySettings_C_IsChanged_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ReplaySettings.ReplaySettings_C.IsEnableApply
struct UReplaySettings_C_IsEnableApply_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ReplaySettings.ReplaySettings_C.Construct
struct UReplaySettings_C_Construct_Params
{
};

// Function ReplaySettings.ReplaySettings_C.OnReset
struct UReplaySettings_C_OnReset_Params
{
};

// Function ReplaySettings.ReplaySettings_C.OnDefault
struct UReplaySettings_C_OnDefault_Params
{
};

// Function ReplaySettings.ReplaySettings_C.OnApply
struct UReplaySettings_C_OnApply_Params
{
};

// Function ReplaySettings.ReplaySettings_C.ExecuteUbergraph_ReplaySettings
struct UReplaySettings_C_ExecuteUbergraph_ReplaySettings_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
