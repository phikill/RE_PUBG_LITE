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

// Function GeneralSettingWidget.GeneralSettingWidget_C.IsChangedVideoCapture
struct UGeneralSettingWidget_C_IsChangedVideoCapture_Params
{
	bool                                               IsChange;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GeneralSettingWidget.GeneralSettingWidget_C.IsEnable_VideoCapture
struct UGeneralSettingWidget_C_IsEnable_VideoCapture_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GeneralSettingWidget.GeneralSettingWidget_C.ApplyMiniMapType
struct UGeneralSettingWidget_C_ApplyMiniMapType_Params
{
};

// Function GeneralSettingWidget.GeneralSettingWidget_C.SettingDefault
struct UGeneralSettingWidget_C_SettingDefault_Params
{
};

// Function GeneralSettingWidget.GeneralSettingWidget_C.GetLanguageCultureName
struct UGeneralSettingWidget_C_GetLanguageCultureName_Params
{
	struct FString                                     CultureName;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function GeneralSettingWidget.GeneralSettingWidget_C.InitializeResolutionWidget
struct UGeneralSettingWidget_C_InitializeResolutionWidget_Params
{
	bool                                               Construct;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GeneralSettingWidget.GeneralSettingWidget_C.IsChanged
struct UGeneralSettingWidget_C_IsChanged_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GeneralSettingWidget.GeneralSettingWidget_C.OnReset
struct UGeneralSettingWidget_C_OnReset_Params
{
};

// Function GeneralSettingWidget.GeneralSettingWidget_C.OnDefault
struct UGeneralSettingWidget_C_OnDefault_Params
{
};

// Function GeneralSettingWidget.GeneralSettingWidget_C.OnApply
struct UGeneralSettingWidget_C_OnApply_Params
{
};

// Function GeneralSettingWidget.GeneralSettingWidget_C.Construct
struct UGeneralSettingWidget_C_Construct_Params
{
};

// Function GeneralSettingWidget.GeneralSettingWidget_C.ExecuteUbergraph_GeneralSettingWidget
struct UGeneralSettingWidget_C_ExecuteUbergraph_GeneralSettingWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
