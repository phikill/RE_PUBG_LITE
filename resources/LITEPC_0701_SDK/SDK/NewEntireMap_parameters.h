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

// Function NewEntireMap.NewEntireMap_C.GetMapCenter
struct UNewEntireMap_C_GetMapCenter_Params
{
	float                                              InAligX;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InAligY;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutAligX;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutAligY;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function NewEntireMap.NewEntireMap_C.InterpolateZoomInOut
struct UNewEntireMap_C_InterpolateZoomInOut_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InterpSpeed;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewEntireMap.NewEntireMap_C.RemoveKeyFocus
struct UNewEntireMap_C_RemoveKeyFocus_Params
{
};

// Function NewEntireMap.NewEntireMap_C.SetKeyFocus
struct UNewEntireMap_C_SetKeyFocus_Params
{
};

// Function NewEntireMap.NewEntireMap_C.HideAirplane
struct UNewEntireMap_C_HideAirplane_Params
{
};

// Function NewEntireMap.NewEntireMap_C.ShowAirplane
struct UNewEntireMap_C_ShowAirplane_Params
{
};

// Function NewEntireMap.NewEntireMap_C.ReCalMapInfo
struct UNewEntireMap_C_ReCalMapInfo_Params
{
	struct FMapRealTimeInfo                            RealTimeInfo;                                             // (Parm, OutParm)
};

// Function NewEntireMap.NewEntireMap_C.HidePlaneImage
struct UNewEntireMap_C_HidePlaneImage_Params
{
	bool                                               isShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewEntireMap.NewEntireMap_C.HideSelfInfoCanvas
struct UNewEntireMap_C_HideSelfInfoCanvas_Params
{
	bool                                               isShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewEntireMap.NewEntireMap_C.HidePlayerInfoCanvasByIndex
struct UNewEntireMap_C_HidePlayerInfoCanvasByIndex_Params
{
	bool                                               isShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewEntireMap.NewEntireMap_C.TickCircle
struct UNewEntireMap_C_TickCircle_Params
{
};

// Function NewEntireMap.NewEntireMap_C.UpdateLastCircle
struct UNewEntireMap_C_UpdateLastCircle_Params
{
};

// Function NewEntireMap.NewEntireMap_C.HandleLastCircle
struct UNewEntireMap_C_HandleLastCircle_Params
{
	struct FVector                                     LastCircle;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function NewEntireMap.NewEntireMap_C.MapInfoUpdate
struct UNewEntireMap_C_MapInfoUpdate_Params
{
};

// Function NewEntireMap.NewEntireMap_C.WheelEvent
struct UNewEntireMap_C_WheelEvent_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function NewEntireMap.NewEntireMap_C.SetMapCenterPos
struct UNewEntireMap_C_SetMapCenterPos_Params
{
};

// Function NewEntireMap.NewEntireMap_C.MoveToSelfPosition
struct UNewEntireMap_C_MoveToSelfPosition_Params
{
};

// Function NewEntireMap.NewEntireMap_C.SetMarkerAtCurrentPosition
struct UNewEntireMap_C_SetMarkerAtCurrentPosition_Params
{
};

// Function NewEntireMap.NewEntireMap_C.IsLocalPlayerIndex
struct UNewEntireMap_C_IsLocalPlayerIndex_Params
{
	int                                                InIndex;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function NewEntireMap.NewEntireMap_C.HideMarker
struct UNewEntireMap_C_HideMarker_Params
{
};

// Function NewEntireMap.NewEntireMap_C.On_Button_Player01MarkInMap_MouseButtonDown_1
struct UNewEntireMap_C_On_Button_Player01MarkInMap_MouseButtonDown_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function NewEntireMap.NewEntireMap_C.ClearAllMark
struct UNewEntireMap_C_ClearAllMark_Params
{
};

// Function NewEntireMap.NewEntireMap_C.OnCharacterStateChange
struct UNewEntireMap_C_OnCharacterStateChange_Params
{
	class APawn*                                       Teammate;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ExtraPlayerLiveState                               LiveState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewEntireMap.NewEntireMap_C.HideTeammateDeadIcon
struct UNewEntireMap_C_HideTeammateDeadIcon_Params
{
	int                                                TeammateIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsShow;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewEntireMap.NewEntireMap_C.HideSelfDeadIcon
struct UNewEntireMap_C_HideSelfDeadIcon_Params
{
	bool                                               bIsShow;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewEntireMap.NewEntireMap_C.UpdateLastDriveVehicleIcon
struct UNewEntireMap_C_UpdateLastDriveVehicleIcon_Params
{
};

// Function NewEntireMap.NewEntireMap_C.UpdateAirplaneRoute
struct UNewEntireMap_C_UpdateAirplaneRoute_Params
{
	struct FVector                                     Start;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Stop;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               IsDraw;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewEntireMap.NewEntireMap_C.ShowFriendsDistance
struct UNewEntireMap_C_ShowFriendsDistance_Params
{
};

// Function NewEntireMap.NewEntireMap_C.MarkPoint2RealLocation
struct UNewEntireMap_C_MarkPoint2RealLocation_Params
{
	struct FVector2D                                   InVec;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function NewEntireMap.NewEntireMap_C.CaclMarkDir
struct UNewEntireMap_C_CaclMarkDir_Params
{
	struct FVector2D                                   MarkPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	int                                                Distance;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function NewEntireMap.NewEntireMap_C.ShowMarkerDistance
struct UNewEntireMap_C_ShowMarkerDistance_Params
{
};

// Function NewEntireMap.NewEntireMap_C.RefreshTeammateIcon
struct UNewEntireMap_C_RefreshTeammateIcon_Params
{
};

// Function NewEntireMap.NewEntireMap_C.SetSelfInfoAndColor
struct UNewEntireMap_C_SetSelfInfoAndColor_Params
{
	class ASTExtraPlayerState*                         playState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewEntireMap.NewEntireMap_C.MakeMarker
struct UNewEntireMap_C_MakeMarker_Params
{
	struct FVector2D                                   MarkAligment;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function NewEntireMap.NewEntireMap_C.ShowMarkerLocationText
struct UNewEntireMap_C_ShowMarkerLocationText_Params
{
	struct FVector2D                                   Vector;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function NewEntireMap.NewEntireMap_C.GMShowMarkerLocation
struct UNewEntireMap_C_GMShowMarkerLocation_Params
{
};

// Function NewEntireMap.NewEntireMap_C.Reconnect_ResetUIByPlayerControllerState
struct UNewEntireMap_C_Reconnect_ResetUIByPlayerControllerState_Params
{
};

// Function NewEntireMap.NewEntireMap_C.SetMateName
struct UNewEntireMap_C_SetMateName_Params
{
	struct FString                                     PlayerName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UTextBlock*                                  LabName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewEntireMap.NewEntireMap_C.SetMateColor
struct UNewEntireMap_C_SetMateColor_Params
{
	class UImage*                                      TargetImg;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayerIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewEntireMap.NewEntireMap_C.SetMateNum
struct UNewEntireMap_C_SetMateNum_Params
{
	class UImage*                                      PlayerImg;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayerIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewEntireMap.NewEntireMap_C.HandleReconnectInfo
struct UNewEntireMap_C_HandleReconnectInfo_Params
{
	struct FReConnectGameStateInfo                     ReConnectInfo;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function NewEntireMap.NewEntireMap_C.SetPlayerIdxAndColor
struct UNewEntireMap_C_SetPlayerIdxAndColor_Params
{
	int                                                idx;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewEntireMap.NewEntireMap_C.GetPlayerColorByIndex
struct UNewEntireMap_C_GetPlayerColorByIndex_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function NewEntireMap.NewEntireMap_C.GetTeamMateListFromPlayerState
struct UNewEntireMap_C_GetTeamMateListFromPlayerState_Params
{
	TArray<class ASTExtraPlayerState*>                 TeammateList;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function NewEntireMap.NewEntireMap_C.GetSelfMarkImageInRight
struct UNewEntireMap_C_GetSelfMarkImageInRight_Params
{
	class UImage*                                      NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function NewEntireMap.NewEntireMap_C.RepositionMapMark
struct UNewEntireMap_C_RepositionMapMark_Params
{
	int                                                ChangeIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewEntireMap.NewEntireMap_C.BindTeamMapMarkDelegate
struct UNewEntireMap_C_BindTeamMapMarkDelegate_Params
{
};

// Function NewEntireMap.NewEntireMap_C.SetTeamMateNameInMap
struct UNewEntireMap_C_SetTeamMateNameInMap_Params
{
};

// Function NewEntireMap.NewEntireMap_C.GetTeamMateBySerialNumber
struct UNewEntireMap_C_GetTeamMateBySerialNumber_Params
{
	int                                                TeammateIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function NewEntireMap.NewEntireMap_C.SetTeamLocAndRot
struct UNewEntireMap_C_SetTeamLocAndRot_Params
{
	TArray<class ASTExtraPlayerState*>                 Array;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function NewEntireMap.NewEntireMap_C.SetTeamInfoName
struct UNewEntireMap_C_SetTeamInfoName_Params
{
};

// Function NewEntireMap.NewEntireMap_C.InitTeamMateUIArray
struct UNewEntireMap_C_InitTeamMateUIArray_Params
{
};

// Function NewEntireMap.NewEntireMap_C.GetSelfMarkerGrid
struct UNewEntireMap_C_GetSelfMarkerGrid_Params
{
	class UCanvasPanel*                                SelfMarker2;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function NewEntireMap.NewEntireMap_C.GetSelfImage
struct UNewEntireMap_C_GetSelfImage_Params
{
	class UImage*                                      SelfMarker;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function NewEntireMap.NewEntireMap_C.RepositionSelfMarker
struct UNewEntireMap_C_RepositionSelfMarker_Params
{
};

// Function NewEntireMap.NewEntireMap_C.GetObjectAligInCurMapSize
struct UNewEntireMap_C_GetObjectAligInCurMapSize_Params
{
	struct FVector2D                                   Pos;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              AligX;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              AligY;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function NewEntireMap.NewEntireMap_C.ClampAlig
struct UNewEntireMap_C_ClampAlig_Params
{
	float                                              MaxAlig;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinAlig;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewEntireMap.NewEntireMap_C.GetMapMaxAligByMapSize
struct UNewEntireMap_C_GetMapMaxAligByMapSize_Params
{
	struct FVector2D                                   MapSize;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              MinAlig;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              MaxAlig;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function NewEntireMap.NewEntireMap_C.HandleMapMove
struct UNewEntireMap_C_HandleMapMove_Params
{
	struct FVector2D                                   MoveOffset;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function NewEntireMap.NewEntireMap_C.ChangeMapPivot
struct UNewEntireMap_C_ChangeMapPivot_Params
{
	float                                              AligX;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              AligY;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewEntireMap.NewEntireMap_C.RepositionMarkerAndPin
struct UNewEntireMap_C_RepositionMarkerAndPin_Params
{
};

// Function NewEntireMap.NewEntireMap_C.ChangeMapSize
struct UNewEntireMap_C_ChangeMapSize_Params
{
	struct FVector2D                                   Size;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function NewEntireMap.NewEntireMap_C.HandleAirAttackBroadcast
struct UNewEntireMap_C_HandleAirAttackBroadcast_Params
{
	TEnumAsByte<EAirAttackInfo>                        AttackMsg;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Wave;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewEntireMap.NewEntireMap_C.OnPaint
struct UNewEntireMap_C_OnPaint_Params
{
	struct FPaintContext                               Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function NewEntireMap.NewEntireMap_C.MapVectorToWorldVector
struct UNewEntireMap_C_MapVectorToWorldVector_Params
{
	struct FVector2D                                   MapVector;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   WORLDMAP;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function NewEntireMap.NewEntireMap_C.GetMarkerToWorldVector
struct UNewEntireMap_C_GetMarkerToWorldVector_Params
{
	struct FVector                                     NewParam;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function NewEntireMap.NewEntireMap_C.BndEvt__Slider_MapZoom_K2Node_ComponentBoundEvent_59_OnFloatValueChangedEvent__DelegateSignature
struct UNewEntireMap_C_BndEvt__Slider_MapZoom_K2Node_ComponentBoundEvent_59_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewEntireMap.NewEntireMap_C.BndEvt__MapCircleAndLineBlackboard_K2Node_ComponentBoundEvent_286_MoveMap__DelegateSignature
struct UNewEntireMap_C_BndEvt__MapCircleAndLineBlackboard_K2Node_ComponentBoundEvent_286_MoveMap__DelegateSignature_Params
{
	struct FVector2D                                   Offset;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function NewEntireMap.NewEntireMap_C.BndEvt__MapCircleAndLineBlackboard_K2Node_ComponentBoundEvent_54_SetMarker__DelegateSignature
struct UNewEntireMap_C_BndEvt__MapCircleAndLineBlackboard_K2Node_ComponentBoundEvent_54_SetMarker__DelegateSignature_Params
{
	struct FVector2D                                   Position;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function NewEntireMap.NewEntireMap_C.BndEvt__Button_SelfLock_K2Node_ComponentBoundEvent_350_OnButtonClickedEvent__DelegateSignature
struct UNewEntireMap_C_BndEvt__Button_SelfLock_K2Node_ComponentBoundEvent_350_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function NewEntireMap.NewEntireMap_C.BndEvt__Button_DelMarkIcon_K2Node_ComponentBoundEvent_440_OnButtonClickedEvent__DelegateSignature
struct UNewEntireMap_C_BndEvt__Button_DelMarkIcon_K2Node_ComponentBoundEvent_440_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function NewEntireMap.NewEntireMap_C.BndEvt__Button_SelfMark_K2Node_ComponentBoundEvent_491_OnButtonClickedEvent__DelegateSignature
struct UNewEntireMap_C_BndEvt__Button_SelfMark_K2Node_ComponentBoundEvent_491_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function NewEntireMap.NewEntireMap_C.BndEvt__Button_MyMark_K2Node_ComponentBoundEvent_908_OnButtonClickedEvent__DelegateSignature
struct UNewEntireMap_C_BndEvt__Button_MyMark_K2Node_ComponentBoundEvent_908_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function NewEntireMap.NewEntireMap_C.InitPlayerState
struct UNewEntireMap_C_InitPlayerState_Params
{
};

// Function NewEntireMap.NewEntireMap_C.BndEvt__MapCircleAndLineBlackboard_K2Node_ComponentBoundEvent_203_ScaleMap__DelegateSignature
struct UNewEntireMap_C_BndEvt__MapCircleAndLineBlackboard_K2Node_ComponentBoundEvent_203_ScaleMap__DelegateSignature_Params
{
	float                                              ScaleValue;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewEntireMap.NewEntireMap_C.BndEvt__Button_ZoomIn_K2Node_ComponentBoundEvent_52_OnButtonClickedEvent__DelegateSignature
struct UNewEntireMap_C_BndEvt__Button_ZoomIn_K2Node_ComponentBoundEvent_52_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function NewEntireMap.NewEntireMap_C.BndEvt__Button_ZoomOut_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature
struct UNewEntireMap_C_BndEvt__Button_ZoomOut_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function NewEntireMap.NewEntireMap_C.ReceiveAirAttackBroadcast
struct UNewEntireMap_C_ReceiveAirAttackBroadcast_Params
{
	TEnumAsByte<EAirAttackInfo>                        airattacktype;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                waveindex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewEntireMap.NewEntireMap_C.ReceivedInitWidget
struct UNewEntireMap_C_ReceivedInitWidget_Params
{
};

// Function NewEntireMap.NewEntireMap_C.RedrawMap
struct UNewEntireMap_C_RedrawMap_Params
{
};

// Function NewEntireMap.NewEntireMap_C.ReConnectGameStateInfoNotify
struct UNewEntireMap_C_ReConnectGameStateInfoNotify_Params
{
	struct FReConnectGameStateInfo                     ReConnectInfo;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function NewEntireMap.NewEntireMap_C.Tick
struct UNewEntireMap_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewEntireMap.NewEntireMap_C.BndEvt__Button_HideMap_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
struct UNewEntireMap_C_BndEvt__Button_HideMap_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function NewEntireMap.NewEntireMap_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_71_OnButtonPressedEvent__DelegateSignature
struct UNewEntireMap_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_71_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function NewEntireMap.NewEntireMap_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_98_OnButtonReleasedEvent__DelegateSignature
struct UNewEntireMap_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_98_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function NewEntireMap.NewEntireMap_C.BndEvt__MapCircleAndLineBlackboard_K2Node_ComponentBoundEvent_36_OperateEnd__DelegateSignature
struct UNewEntireMap_C_BndEvt__MapCircleAndLineBlackboard_K2Node_ComponentBoundEvent_36_OperateEnd__DelegateSignature_Params
{
};

// Function NewEntireMap.NewEntireMap_C.BndEvt__MapCircleAndLineBlackboard_K2Node_ComponentBoundEvent_60_OperateBegin__DelegateSignature
struct UNewEntireMap_C_BndEvt__MapCircleAndLineBlackboard_K2Node_ComponentBoundEvent_60_OperateBegin__DelegateSignature_Params
{
};

// Function NewEntireMap.NewEntireMap_C.OnPlayerTeammateStateChange
struct UNewEntireMap_C_OnPlayerTeammateStateChange_Params
{
};

// Function NewEntireMap.NewEntireMap_C.InitMapStandardPoint
struct UNewEntireMap_C_InitMapStandardPoint_Params
{
};

// Function NewEntireMap.NewEntireMap_C.OnCharacterStateChangeDelegate
struct UNewEntireMap_C_OnCharacterStateChangeDelegate_Params
{
	ExtraPlayerLiveState                               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ACharacter*                                  OwnerCharacter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewEntireMap.NewEntireMap_C.BndEvt__MinimizeHelpButton_K2Node_ComponentBoundEvent_54_OnButtonClickedEvent__DelegateSignature
struct UNewEntireMap_C_BndEvt__MinimizeHelpButton_K2Node_ComponentBoundEvent_54_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function NewEntireMap.NewEntireMap_C.BndEvt__RestoreHelpButton_K2Node_ComponentBoundEvent_113_OnButtonClickedEvent__DelegateSignature
struct UNewEntireMap_C_BndEvt__RestoreHelpButton_K2Node_ComponentBoundEvent_113_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function NewEntireMap.NewEntireMap_C.PreConstruct
struct UNewEntireMap_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewEntireMap.NewEntireMap_C.UpdatePlayerState
struct UNewEntireMap_C_UpdatePlayerState_Params
{
	ExtraPlayerLiveState                               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ACharacter*                                  OwnerCharacter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewEntireMap.NewEntireMap_C.BndEvt__MapCircleAndLineBlackboard_K2Node_ComponentBoundEvent_36_WheelEvent__DelegateSignature
struct UNewEntireMap_C_BndEvt__MapCircleAndLineBlackboard_K2Node_ComponentBoundEvent_36_WheelEvent__DelegateSignature_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function NewEntireMap.NewEntireMap_C.HideDeadIcon
struct UNewEntireMap_C_HideDeadIcon_Params
{
};

// Function NewEntireMap.NewEntireMap_C.OnPlayer04MarkerRightClicked
struct UNewEntireMap_C_OnPlayer04MarkerRightClicked_Params
{
};

// Function NewEntireMap.NewEntireMap_C.OnPlayer03MarkerRightClicked
struct UNewEntireMap_C_OnPlayer03MarkerRightClicked_Params
{
};

// Function NewEntireMap.NewEntireMap_C.OnPlayer02MarkerRightClicked
struct UNewEntireMap_C_OnPlayer02MarkerRightClicked_Params
{
};

// Function NewEntireMap.NewEntireMap_C.OnPlayer01MarkerRightClicked
struct UNewEntireMap_C_OnPlayer01MarkerRightClicked_Params
{
};

// Function NewEntireMap.NewEntireMap_C.ExecuteUbergraph_NewEntireMap
struct UNewEntireMap_C_ExecuteUbergraph_NewEntireMap_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewEntireMap.NewEntireMap_C.MarkerClick__DelegateSignature
struct UNewEntireMap_C_MarkerClick__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
