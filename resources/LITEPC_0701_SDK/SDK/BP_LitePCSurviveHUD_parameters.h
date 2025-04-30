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

// Function BP_LitePCSurviveHUD.BP_LitePCSurviveHUD_C.FindWidget
struct ABP_LitePCSurviveHUD_C_FindWidget_Params
{
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UUserWidget*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_LitePCSurviveHUD.BP_LitePCSurviveHUD_C.BroadCastSettingChanged
struct ABP_LitePCSurviveHUD_C_BroadCastSettingChanged_Params
{
};

// Function BP_LitePCSurviveHUD.BP_LitePCSurviveHUD_C.CreateWidgetAndAddToContainer
struct ABP_LitePCSurviveHUD_C_CreateWidgetAndAddToContainer_Params
{
	class UClass*                                      Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ZOrder;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ESlateVisibility                                   InVisibility;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 Widget_Pin;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LitePCSurviveHUD.BP_LitePCSurviveHUD_C.RegisterWidgetList
struct ABP_LitePCSurviveHUD_C_RegisterWidgetList_Params
{
};

// Function BP_LitePCSurviveHUD.BP_LitePCSurviveHUD_C.UserConstructionScript
struct ABP_LitePCSurviveHUD_C_UserConstructionScript_Params
{
};

// Function BP_LitePCSurviveHUD.BP_LitePCSurviveHUD_C.OnSettingChanged
struct ABP_LitePCSurviveHUD_C_OnSettingChanged_Params
{
};

// Function BP_LitePCSurviveHUD.BP_LitePCSurviveHUD_C.ReceiveBeginPlay
struct ABP_LitePCSurviveHUD_C_ReceiveBeginPlay_Params
{
};

// Function BP_LitePCSurviveHUD.BP_LitePCSurviveHUD_C.ExecuteUbergraph_BP_LitePCSurviveHUD
struct ABP_LitePCSurviveHUD_C_ExecuteUbergraph_BP_LitePCSurviveHUD_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LitePCSurviveHUD.BP_LitePCSurviveHUD_C.SettingChangedDispatcher__DelegateSignature
struct ABP_LitePCSurviveHUD_C_SettingChangedDispatcher__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
