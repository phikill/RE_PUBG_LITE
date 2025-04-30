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

// Function NavigatorPanel.NavigatorPanel_C.SetSpecialBigTipsText
struct UNavigatorPanel_C_SetSpecialBigTipsText_Params
{
	int                                                Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NavigatorPanel.NavigatorPanel_C.HideAllMarks
struct UNavigatorPanel_C_HideAllMarks_Params
{
};

// Function NavigatorPanel.NavigatorPanel_C.TestPlayerController
struct UNavigatorPanel_C_TestPlayerController_Params
{
	bool                                               NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function NavigatorPanel.NavigatorPanel_C.Reconnect_ResetUIByPlayerControllerState
struct UNavigatorPanel_C_Reconnect_ResetUIByPlayerControllerState_Params
{
};

// Function NavigatorPanel.NavigatorPanel_C.RemoveSameActorShow
struct UNavigatorPanel_C_RemoveSameActorShow_Params
{
	class UBP_VoiceUIObject_C*                         UIObject;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NavigatorPanel.NavigatorPanel_C.GetFinalX
struct UNavigatorPanel_C_GetFinalX_Params
{
	float                                              middlsX;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              playerX;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function NavigatorPanel.NavigatorPanel_C.UpdateDirection
struct UNavigatorPanel_C_UpdateDirection_Params
{
};

// Function NavigatorPanel.NavigatorPanel_C.ConvertAngleToUV
struct UNavigatorPanel_C_ConvertAngleToUV_Params
{
	float                                              Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              RetrunValue;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function NavigatorPanel.NavigatorPanel_C.GetPlayerRotation
struct UNavigatorPanel_C_GetPlayerRotation_Params
{
	struct FRotator                                    RetrunValue;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function NavigatorPanel.NavigatorPanel_C.InitCompassWidget
struct UNavigatorPanel_C_InitCompassWidget_Params
{
};

// Function NavigatorPanel.NavigatorPanel_C.SetVoiceChekImageZorder
struct UNavigatorPanel_C_SetVoiceChekImageZorder_Params
{
};

// Function NavigatorPanel.NavigatorPanel_C.SetOneData
struct UNavigatorPanel_C_SetOneData_Params
{
	class UBP_VoiceUIObject_C*                         UIObject;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBP_VoiceDataSubObject_C*                    SubObject;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NavigatorPanel.NavigatorPanel_C.ShowTrigerVoiceIcom
struct UNavigatorPanel_C_ShowTrigerVoiceIcom_Params
{
	class UBP_VoiceDataSubObject_C*                    nowObject;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NavigatorPanel.NavigatorPanel_C.IsSamVoiceObject
struct UNavigatorPanel_C_IsSamVoiceObject_Params
{
	class UBP_VoiceDataSubObject_C*                    SubObject;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBP_VoiceUIObject_C*                         NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function NavigatorPanel.NavigatorPanel_C.UpdateVoiceStateOneType
struct UNavigatorPanel_C_UpdateVoiceStateOneType_Params
{
	class UBP_VoiceDataObject_C*                       nowObject;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NavigatorPanel.NavigatorPanel_C.GetMinShowTimeObject
struct UNavigatorPanel_C_GetMinShowTimeObject_Params
{
	class UBP_VoiceDataSubObject_C*                    nowSubObject;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBP_VoiceUIObject_C*                         Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function NavigatorPanel.NavigatorPanel_C.UpdateNewVocieState
struct UNavigatorPanel_C_UpdateNewVocieState_Params
{
};

// Function NavigatorPanel.NavigatorPanel_C.UpdateShowVoiceIcon
struct UNavigatorPanel_C_UpdateShowVoiceIcon_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NavigatorPanel.NavigatorPanel_C.GetVoicePostion
struct UNavigatorPanel_C_GetVoicePostion_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              resultposx;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              resultposy;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function NavigatorPanel.NavigatorPanel_C.CreateVoiceCheckObject
struct UNavigatorPanel_C_CreateVoiceCheckObject_Params
{
	TEnumAsByte<EBP_VoiceCheckType>                    checkType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBP_VoiceUIObject_C*                         NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function NavigatorPanel.NavigatorPanel_C.InitVoiceImageList
struct UNavigatorPanel_C_InitVoiceImageList_Params
{
};

// Function NavigatorPanel.NavigatorPanel_C.CreateTipsImage
struct UNavigatorPanel_C_CreateTipsImage_Params
{
	TEnumAsByte<EBP_VoiceCheckType>                    NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function NavigatorPanel.NavigatorPanel_C.GetPlayerColorByIndex
struct UNavigatorPanel_C_GetPlayerColorByIndex_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function NavigatorPanel.NavigatorPanel_C.InitPlayerMarkerArray
struct UNavigatorPanel_C_InitPlayerMarkerArray_Params
{
};

// Function NavigatorPanel.NavigatorPanel_C.RepositionMapMark
struct UNavigatorPanel_C_RepositionMapMark_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NavigatorPanel.NavigatorPanel_C.BindTeamMapMarkDelegate
struct UNavigatorPanel_C_BindTeamMapMarkDelegate_Params
{
};

// Function NavigatorPanel.NavigatorPanel_C.InitPlayerState
struct UNavigatorPanel_C_InitPlayerState_Params
{
};

// Function NavigatorPanel.NavigatorPanel_C.ReceivedInitWidget
struct UNavigatorPanel_C_ReceivedInitWidget_Params
{
};

// Function NavigatorPanel.NavigatorPanel_C.Tick
struct UNavigatorPanel_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NavigatorPanel.NavigatorPanel_C.Construct
struct UNavigatorPanel_C_Construct_Params
{
};

// Function NavigatorPanel.NavigatorPanel_C.ExecuteUbergraph_NavigatorPanel
struct UNavigatorPanel_C_ExecuteUbergraph_NavigatorPanel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
