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

// Function WmodeUI_BP.WmodeUI_BP_C.HideWarModeInfoTips
struct UWmodeUI_BP_C_HideWarModeInfoTips_Params
{
};

// Function WmodeUI_BP.WmodeUI_BP_C.GetRespawnBattleTextByTeamAliveState
struct UWmodeUI_BP_C_GetRespawnBattleTextByTeamAliveState_Params
{
	bool                                               HasTeammateAlive;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       RespawnBattleText;                                        // (Parm, OutParm)
};

// Function WmodeUI_BP.WmodeUI_BP_C.SetMyTeamProgressBarColor
struct UWmodeUI_BP_C_SetMyTeamProgressBarColor_Params
{
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function WmodeUI_BP.WmodeUI_BP_C.SetEnemyTeamTextHeight
struct UWmodeUI_BP_C_SetEnemyTeamTextHeight_Params
{
	float                                              Height;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WmodeUI_BP.WmodeUI_BP_C.SetMyTeamTextHeight
struct UWmodeUI_BP_C_SetMyTeamTextHeight_Params
{
	float                                              Height;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WmodeUI_BP.WmodeUI_BP_C.SortTeamScorePercent
struct UWmodeUI_BP_C_SortTeamScorePercent_Params
{
	float                                              MyTeam;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              EnemyTeam;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              HightScore;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              LowScore;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WmodeUI_BP.WmodeUI_BP_C.SetLowScoreTeamPercent
struct UWmodeUI_BP_C_SetLowScoreTeamPercent_Params
{
	float                                              Percent;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WmodeUI_BP.WmodeUI_BP_C.SetHighScoreTeamPercent
struct UWmodeUI_BP_C_SetHighScoreTeamPercent_Params
{
	float                                              Percent;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WmodeUI_BP.WmodeUI_BP_C.Reconnect_ResetUIByPlayerControllerState
struct UWmodeUI_BP_C_Reconnect_ResetUIByPlayerControllerState_Params
{
};

// Function WmodeUI_BP.WmodeUI_BP_C.GetDisplayEnemyScore
struct UWmodeUI_BP_C_GetDisplayEnemyScore_Params
{
	int                                                MyScore;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                HightestScore;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                FollowScore;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                EnemyScore;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WmodeUI_BP.WmodeUI_BP_C.ClearUIData
struct UWmodeUI_BP_C_ClearUIData_Params
{
};

// Function WmodeUI_BP.WmodeUI_BP_C.WarMode_UpdatreWinScore
struct UWmodeUI_BP_C_WarMode_UpdatreWinScore_Params
{
};

// Function WmodeUI_BP.WmodeUI_BP_C.FormatTimeString
struct UWmodeUI_BP_C_FormatTimeString_Params
{
	float                                              TimeSecond;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       TimeText;                                                 // (Parm, OutParm)
	int                                                Minute;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Second;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WmodeUI_BP.WmodeUI_BP_C.WarMode_UpdateScoreProgress
struct UWmodeUI_BP_C_WarMode_UpdateScoreProgress_Params
{
};

// Function WmodeUI_BP.WmodeUI_BP_C.WarMode_UpdateScore
struct UWmodeUI_BP_C_WarMode_UpdateScore_Params
{
};

// Function WmodeUI_BP.WmodeUI_BP_C.WarMode_UpdateRank
struct UWmodeUI_BP_C_WarMode_UpdateRank_Params
{
};

// Function WmodeUI_BP.WmodeUI_BP_C.WarMode_UpdateRespawnCountDown
struct UWmodeUI_BP_C_WarMode_UpdateRespawnCountDown_Params
{
};

// Function WmodeUI_BP.WmodeUI_BP_C.WarMode_UpdateGameOverCountDown
struct UWmodeUI_BP_C_WarMode_UpdateGameOverCountDown_Params
{
};

// Function WmodeUI_BP.WmodeUI_BP_C.UpdateAllWarModeUI
struct UWmodeUI_BP_C_UpdateAllWarModeUI_Params
{
};

// Function WmodeUI_BP.WmodeUI_BP_C.ShowWarModeUI
struct UWmodeUI_BP_C_ShowWarModeUI_Params
{
};

// Function WmodeUI_BP.WmodeUI_BP_C.ReceivedInitWidget
struct UWmodeUI_BP_C_ReceivedInitWidget_Params
{
};

// Function WmodeUI_BP.WmodeUI_BP_C.PlayerControllerAboutToRespawnDelegate
struct UWmodeUI_BP_C_PlayerControllerAboutToRespawnDelegate_Params
{
	class AUAEPlayerController*                        PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WmodeUI_BP.WmodeUI_BP_C.EnterFlying
struct UWmodeUI_BP_C_EnterFlying_Params
{
};

// Function WmodeUI_BP.WmodeUI_BP_C.ExecuteUbergraph_WmodeUI_BP
struct UWmodeUI_BP_C_ExecuteUbergraph_WmodeUI_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
