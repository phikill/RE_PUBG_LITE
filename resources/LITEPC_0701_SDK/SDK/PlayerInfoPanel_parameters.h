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

// Function PlayerInfoPanel.PlayerInfoPanel_C.IsCustomUIDataValid
struct UPlayerInfoPanel_C_IsCustomUIDataValid_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   SaveDataSize;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerInfoPanel.PlayerInfoPanel_C.Playername_Versioninfo_Session
struct UPlayerInfoPanel_C_Playername_Versioninfo_Session_Params
{
	struct FString                                     PlayerName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function PlayerInfoPanel.PlayerInfoPanel_C.PredictStayOverLogic
struct UPlayerInfoPanel_C_PredictStayOverLogic_Params
{
};

// Function PlayerInfoPanel.PlayerInfoPanel_C.SetPreditTimerFunc
struct UPlayerInfoPanel_C_SetPreditTimerFunc_Params
{
	float                                              PredictValue;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerInfoPanel.PlayerInfoPanel_C.PlayerInfo_SpectatorChangeUpdateEnergy
struct UPlayerInfoPanel_C_PlayerInfo_SpectatorChangeUpdateEnergy_Params
{
};

// Function PlayerInfoPanel.PlayerInfoPanel_C.HidePredictNextFrame
struct UPlayerInfoPanel_C_HidePredictNextFrame_Params
{
};

// Function PlayerInfoPanel.PlayerInfoPanel_C.GetPlayerHealth
struct UPlayerInfoPanel_C_GetPlayerHealth_Params
{
	float                                              PredictValue;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerInfoPanel.PlayerInfoPanel_C.ForceUpdate_Health
struct UPlayerInfoPanel_C_ForceUpdate_Health_Params
{
};

// Function PlayerInfoPanel.PlayerInfoPanel_C.UpdatePlayerBuff
struct UPlayerInfoPanel_C_UpdatePlayerBuff_Params
{
	float                                              Energy;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerInfoPanel.PlayerInfoPanel_C.ClearHPUI
struct UPlayerInfoPanel_C_ClearHPUI_Params
{
};

// Function PlayerInfoPanel.PlayerInfoPanel_C.PlayerInfo_UpdateBreath
struct UPlayerInfoPanel_C_PlayerInfo_UpdateBreath_Params
{
	float                                              Breath;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Ratio;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ACharacter*                                  Who;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                HealthStatus;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerInfoPanel.PlayerInfoPanel_C.PlayerInfo_UpdatePredictHealth
struct UPlayerInfoPanel_C_PlayerInfo_UpdatePredictHealth_Params
{
};

// Function PlayerInfoPanel.PlayerInfoPanel_C.PlayerInfo_UpdateEnergy
struct UPlayerInfoPanel_C_PlayerInfo_UpdateEnergy_Params
{
};

// Function PlayerInfoPanel.PlayerInfoPanel_C.PlayerInfo_UpdateHealth
struct UPlayerInfoPanel_C_PlayerInfo_UpdateHealth_Params
{
};

// Function PlayerInfoPanel.PlayerInfoPanel_C.OnCanRescueOther
struct UPlayerInfoPanel_C_OnCanRescueOther_Params
{
	class ACharacter*                                  CanRescueWho;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ACharacter*                                  Owner;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsBecomeCan;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerInfoPanel.PlayerInfoPanel_C.OnUpdateBreath
struct UPlayerInfoPanel_C_OnUpdateBreath_Params
{
	float                                              Breath;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Ratio;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ACharacter*                                  Who;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                HealthStatus;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerInfoPanel.PlayerInfoPanel_C.OnUpdateHP
struct UPlayerInfoPanel_C_OnUpdateHP_Params
{
	float                                              currentHP;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ratioHP;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerInfoPanel.PlayerInfoPanel_C.OnPlayerNameChange
struct UPlayerInfoPanel_C_OnPlayerNameChange_Params
{
	struct FString                                     PlayerName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function PlayerInfoPanel.PlayerInfoPanel_C.SetCustomizeUIInfo
struct UPlayerInfoPanel_C_SetCustomizeUIInfo_Params
{
	class UBP_SAVEGAME_UIElemLayout_C*                 SaveGame;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                LayoutIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerInfoPanel.PlayerInfoPanel_C.SetSettingControlUI
struct UPlayerInfoPanel_C_SetSettingControlUI_Params
{
};

// Function PlayerInfoPanel.PlayerInfoPanel_C.Tick
struct UPlayerInfoPanel_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerInfoPanel.PlayerInfoPanel_C.Destruct
struct UPlayerInfoPanel_C_Destruct_Params
{
};

// Function PlayerInfoPanel.PlayerInfoPanel_C.ReceivedInitWidget
struct UPlayerInfoPanel_C_ReceivedInitWidget_Params
{
};

// Function PlayerInfoPanel.PlayerInfoPanel_C.UpdateBreath
struct UPlayerInfoPanel_C_UpdateBreath_Params
{
	float                                              currentBR;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ratioBR;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ACharacter*                                  OwnerCharacter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                HealthStatus;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerInfoPanel.PlayerInfoPanel_C.OnRecoveryStart
struct UPlayerInfoPanel_C_OnRecoveryStart_Params
{
};

// Function PlayerInfoPanel.PlayerInfoPanel_C.ResetUIStateAfterRespawn
struct UPlayerInfoPanel_C_ResetUIStateAfterRespawn_Params
{
};

// Function PlayerInfoPanel.PlayerInfoPanel_C.ExecuteUbergraph_PlayerInfoPanel
struct UPlayerInfoPanel_C_ExecuteUbergraph_PlayerInfoPanel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
