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

// Function NewMiniMap.NewMiniMap_C.ReCalMapInfo
struct UNewMiniMap_C_ReCalMapInfo_Params
{
	struct FMapRealTimeInfo                            Result;                                                   // (Parm, OutParm)
};

// Function NewMiniMap.NewMiniMap_C.HideSelfInfoCanvas
struct UNewMiniMap_C_HideSelfInfoCanvas_Params
{
	bool                                               isShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewMiniMap.NewMiniMap_C.HidePlayerInfoCanvasByIndex
struct UNewMiniMap_C_HidePlayerInfoCanvasByIndex_Params
{
	bool                                               isShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewMiniMap.NewMiniMap_C.HideAirplaneImage
struct UNewMiniMap_C_HideAirplaneImage_Params
{
	bool                                               isShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewMiniMap.NewMiniMap_C.TickCircle
struct UNewMiniMap_C_TickCircle_Params
{
};

// Function NewMiniMap.NewMiniMap_C.RedrawAirAttackArea
struct UNewMiniMap_C_RedrawAirAttackArea_Params
{
};

// Function NewMiniMap.NewMiniMap_C.RedrawAllMapMark
struct UNewMiniMap_C_RedrawAllMapMark_Params
{
};

// Function NewMiniMap.NewMiniMap_C.Get4*4Scale
struct UNewMiniMap_C_Get4*4Scale_Params
{
	float                                              MiniMapShow4*4Scale;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function NewMiniMap.NewMiniMap_C.RepositionItemOnMap
struct UNewMiniMap_C_RepositionItemOnMap_Params
{
};

// Function NewMiniMap.NewMiniMap_C.ChangeDynamicScale
struct UNewMiniMap_C_ChangeDynamicScale_Params
{
	float                                              NewScale;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewMiniMap.NewMiniMap_C.FindScaleFactorByVelocity
struct UNewMiniMap_C_FindScaleFactorByVelocity_Params
{
	float                                              Velocity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScaleFactor;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function NewMiniMap.NewMiniMap_C.ReadDynamicScaleTable
struct UNewMiniMap_C_ReadDynamicScaleTable_Params
{
};

// Function NewMiniMap.NewMiniMap_C.LerpDynamicScale
struct UNewMiniMap_C_LerpDynamicScale_Params
{
	float                                              DeltaSec;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewMiniMap.NewMiniMap_C.TickDynamicScale
struct UNewMiniMap_C_TickDynamicScale_Params
{
	float                                              DeltaSec;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewMiniMap.NewMiniMap_C.HandleLastCircle
struct UNewMiniMap_C_HandleLastCircle_Params
{
	struct FVector                                     LastCircle;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function NewMiniMap.NewMiniMap_C.OnCharacterStateChange
struct UNewMiniMap_C_OnCharacterStateChange_Params
{
	class APawn*                                       self2;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ExtraPlayerLiveState                               InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewMiniMap.NewMiniMap_C.HideTeammateDeadIcon
struct UNewMiniMap_C_HideTeammateDeadIcon_Params
{
	int                                                TeammateIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsShow;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewMiniMap.NewMiniMap_C.HideSelfDeadIcon
struct UNewMiniMap_C_HideSelfDeadIcon_Params
{
	bool                                               bIsShow;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewMiniMap.NewMiniMap_C.HandleTeammateOutOfRange
struct UNewMiniMap_C_HandleTeammateOutOfRange_Params
{
	TArray<int>                                        InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function NewMiniMap.NewMiniMap_C.UpdateLastDriveVehicle
struct UNewMiniMap_C_UpdateLastDriveVehicle_Params
{
};

// Function NewMiniMap.NewMiniMap_C.UpdateAirplaneRoute
struct UNewMiniMap_C_UpdateAirplaneRoute_Params
{
	struct FVector                                     StartLoc;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     EndLoc;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               IsDraw;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewMiniMap.NewMiniMap_C.SetSpectatorInfoAndColor
struct UNewMiniMap_C_SetSpectatorInfoAndColor_Params
{
	class ASTExtraPlayerState*                         PS;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewMiniMap.NewMiniMap_C.RefreshLocalPlayer
struct UNewMiniMap_C_RefreshLocalPlayer_Params
{
};

// Function NewMiniMap.NewMiniMap_C.OnSpectatorChanged
struct UNewMiniMap_C_OnSpectatorChanged_Params
{
};

// Function NewMiniMap.NewMiniMap_C.RefreshTeammateIcon
struct UNewMiniMap_C_RefreshTeammateIcon_Params
{
};

// Function NewMiniMap.NewMiniMap_C.SetSelfInfoAndColor
struct UNewMiniMap_C_SetSelfInfoAndColor_Params
{
	class ASTExtraPlayerState*                         PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewMiniMap.NewMiniMap_C.ClearAllMark
struct UNewMiniMap_C_ClearAllMark_Params
{
};

// Function NewMiniMap.NewMiniMap_C.MiniMapAdjustLimtChange
struct UNewMiniMap_C_MiniMapAdjustLimtChange_Params
{
};

// Function NewMiniMap.NewMiniMap_C.RedrawSelfMark
struct UNewMiniMap_C_RedrawSelfMark_Params
{
};

// Function NewMiniMap.NewMiniMap_C.Reconnect_ResetUIByPlayerControllerState
struct UNewMiniMap_C_Reconnect_ResetUIByPlayerControllerState_Params
{
};

// Function NewMiniMap.NewMiniMap_C.SetMateColor
struct UNewMiniMap_C_SetMateColor_Params
{
	int                                                PlayerIdx;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UImage*                                      TargetImage;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewMiniMap.NewMiniMap_C.SetMateNum
struct UNewMiniMap_C_SetMateNum_Params
{
	class UImage*                                      NumImg;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayerIdx;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewMiniMap.NewMiniMap_C.ShowMateNum
struct UNewMiniMap_C_ShowMateNum_Params
{
};

// Function NewMiniMap.NewMiniMap_C.HandleReconnectInfo
struct UNewMiniMap_C_HandleReconnectInfo_Params
{
	struct FReConnectGameStateInfo                     Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function NewMiniMap.NewMiniMap_C.ShowEnterMap
struct UNewMiniMap_C_ShowEnterMap_Params
{
};

// Function NewMiniMap.NewMiniMap_C.HideEnterMap
struct UNewMiniMap_C_HideEnterMap_Params
{
};

// Function NewMiniMap.NewMiniMap_C.GetPlayerColorByIndex
struct UNewMiniMap_C_GetPlayerColorByIndex_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function NewMiniMap.NewMiniMap_C.GetTeamMateListFromPlayerState
struct UNewMiniMap_C_GetTeamMateListFromPlayerState_Params
{
	bool                                               ExcludeSelf;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class ASTExtraPlayerState*>                 TeammateList;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function NewMiniMap.NewMiniMap_C.ShowTeamMateInfoGrid
struct UNewMiniMap_C_ShowTeamMateInfoGrid_Params
{
	TArray<class ASTExtraPlayerState*>                 TargetArray;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function NewMiniMap.NewMiniMap_C.InitUIWidget
struct UNewMiniMap_C_InitUIWidget_Params
{
};

// Function NewMiniMap.NewMiniMap_C.RepositionMapMark
struct UNewMiniMap_C_RepositionMapMark_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewMiniMap.NewMiniMap_C.BindTeamMapMarkDelegate
struct UNewMiniMap_C_BindTeamMapMarkDelegate_Params
{
};

// Function NewMiniMap.NewMiniMap_C.LoadMapByLevelName
struct UNewMiniMap_C_LoadMapByLevelName_Params
{
};

// Function NewMiniMap.NewMiniMap_C.HandleAirAttackBroadcast
struct UNewMiniMap_C_HandleAirAttackBroadcast_Params
{
	TEnumAsByte<EAirAttackInfo>                        AttackMsg;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Wave;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewMiniMap.NewMiniMap_C.OnPaint
struct UNewMiniMap_C_OnPaint_Params
{
	struct FPaintContext                               Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function NewMiniMap.NewMiniMap_C.SetPlayerMarkerRotation
struct UNewMiniMap_C_SetPlayerMarkerRotation_Params
{
};

// Function NewMiniMap.NewMiniMap_C.UpdatePlayerState
struct UNewMiniMap_C_UpdatePlayerState_Params
{
	ExtraPlayerLiveState                               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ACharacter*                                  OwnerCharacter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewMiniMap.NewMiniMap_C.PreConstruct
struct UNewMiniMap_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewMiniMap.NewMiniMap_C.Tick
struct UNewMiniMap_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewMiniMap.NewMiniMap_C.HideEntireMap
struct UNewMiniMap_C_HideEntireMap_Params
{
};

// Function NewMiniMap.NewMiniMap_C.ReceiveAirAttackBroadcast
struct UNewMiniMap_C_ReceiveAirAttackBroadcast_Params
{
	TEnumAsByte<EAirAttackInfo>                        airattacktype;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                waveindex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewMiniMap.NewMiniMap_C.InitPlayerState
struct UNewMiniMap_C_InitPlayerState_Params
{
};

// Function NewMiniMap.NewMiniMap_C.ReceivedInitWidget
struct UNewMiniMap_C_ReceivedInitWidget_Params
{
};

// Function NewMiniMap.NewMiniMap_C.Construct
struct UNewMiniMap_C_Construct_Params
{
};

// Function NewMiniMap.NewMiniMap_C.ReConnectGameStateInfoNotify
struct UNewMiniMap_C_ReConnectGameStateInfoNotify_Params
{
	struct FReConnectGameStateInfo                     ReConnectInfo;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function NewMiniMap.NewMiniMap_C.PlayerEnterFlying
struct UNewMiniMap_C_PlayerEnterFlying_Params
{
};

// Function NewMiniMap.NewMiniMap_C.OnSpectatorChangeEvent
struct UNewMiniMap_C_OnSpectatorChangeEvent_Params
{
};

// Function NewMiniMap.NewMiniMap_C.PlayerEnterFighting
struct UNewMiniMap_C_PlayerEnterFighting_Params
{
};

// Function NewMiniMap.NewMiniMap_C.InitMapStandardPoint
struct UNewMiniMap_C_InitMapStandardPoint_Params
{
};

// Function NewMiniMap.NewMiniMap_C.OnTeamMateChange
struct UNewMiniMap_C_OnTeamMateChange_Params
{
};

// Function NewMiniMap.NewMiniMap_C.OnCharacterStateChangeDelegate
struct UNewMiniMap_C_OnCharacterStateChangeDelegate_Params
{
	ExtraPlayerLiveState                               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ACharacter*                                  OwnerCharacter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewMiniMap.NewMiniMap_C.MapResize
struct UNewMiniMap_C_MapResize_Params
{
};

// Function NewMiniMap.NewMiniMap_C.HideDeadIcon
struct UNewMiniMap_C_HideDeadIcon_Params
{
};

// Function NewMiniMap.NewMiniMap_C.ExecuteUbergraph_NewMiniMap
struct UNewMiniMap_C_ExecuteUbergraph_NewMiniMap_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
