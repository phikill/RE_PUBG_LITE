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

// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.IsCustomUIDataValid
struct UIngame_TeamPanel_BP_C_IsCustomUIDataValid_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   SaveDataSize;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.GetValidTeammateStateNum
struct UIngame_TeamPanel_BP_C_GetValidTeammateStateNum_Params
{
	int                                                ValidNum;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.HideAllTeammateMicFX
struct UIngame_TeamPanel_BP_C_HideAllTeammateMicFX_Params
{
};

// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.UIMsg_ShowGroundFlag
struct UIngame_TeamPanel_BP_C_UIMsg_ShowGroundFlag_Params
{
};

// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.UIMSG_HideFollowPanelAndBtn
struct UIngame_TeamPanel_BP_C_UIMSG_HideFollowPanelAndBtn_Params
{
};

// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.UpdateTeamPFList
struct UIngame_TeamPanel_BP_C_UpdateTeamPFList_Params
{
};

// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.SetWomenPrompt
struct UIngame_TeamPanel_BP_C_SetWomenPrompt_Params
{
	unsigned char                                      GenderType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UIngame_TeamItem_BP_C*                       NewParam1;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.HideTeamMateDistance
struct UIngame_TeamPanel_BP_C_HideTeamMateDistance_Params
{
};

// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.Reconnect_ResetUIByPlayerControllerState
struct UIngame_TeamPanel_BP_C_Reconnect_ResetUIByPlayerControllerState_Params
{
};

// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.OnMemberVoice
struct UIngame_TeamPanel_BP_C_OnMemberVoice_Params
{
	int                                                PlayerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                status;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.ClearAllMark
struct UIngame_TeamPanel_BP_C_ClearAllMark_Params
{
};

// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.IngameTeam_ShowHideSelfMark
struct UIngame_TeamPanel_BP_C_IngameTeam_ShowHideSelfMark_Params
{
};

// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.ClearAllPlayerItems
struct UIngame_TeamPanel_BP_C_ClearAllPlayerItems_Params
{
};

// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.OnPlayerExitGame
struct UIngame_TeamPanel_BP_C_OnPlayerExitGame_Params
{
	class APlayerState*                                PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.UpdateTeamMateMapMark
struct UIngame_TeamPanel_BP_C_UpdateTeamMateMapMark_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.UpdateTeamMateBreath
struct UIngame_TeamPanel_BP_C_UpdateTeamMateBreath_Params
{
	int                                                status;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Ratio;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ACharacter*                                  Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.OnReconnected
struct UIngame_TeamPanel_BP_C_OnReconnected_Params
{
	class APlayerState*                                PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.OnLostDelegate
struct UIngame_TeamPanel_BP_C_OnLostDelegate_Params
{
	class APlayerState*                                PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.ResetTeamPosImage
struct UIngame_TeamPanel_BP_C_ResetTeamPosImage_Params
{
};

// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.UpdateTeamMateState
struct UIngame_TeamPanel_BP_C_UpdateTeamMateState_Params
{
	class ACharacter*                                  TargetCharacter;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ExtraPlayerLiveState                               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.UpdateTeamMateHP
struct UIngame_TeamPanel_BP_C_UpdateTeamMateHP_Params
{
};

// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.CollectWidgets
struct UIngame_TeamPanel_BP_C_CollectWidgets_Params
{
};

// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.Init
struct UIngame_TeamPanel_BP_C_Init_Params
{
};

// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.SetSettingControlUI
struct UIngame_TeamPanel_BP_C_SetSettingControlUI_Params
{
};

// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.Event_UpdatePlayerState
struct UIngame_TeamPanel_BP_C_Event_UpdatePlayerState_Params
{
	ExtraPlayerLiveState                               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ACharacter*                                  OwnerCharacter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.ReceivePlayerStateData
struct UIngame_TeamPanel_BP_C_ReceivePlayerStateData_Params
{
};

// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.ReceivedInitWidget
struct UIngame_TeamPanel_BP_C_ReceivedInitWidget_Params
{
};

// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.Event_OnLostDelegate
struct UIngame_TeamPanel_BP_C_Event_OnLostDelegate_Params
{
};

// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.Event_OnReconnected
struct UIngame_TeamPanel_BP_C_Event_OnReconnected_Params
{
};

// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.UpdateMapMark
struct UIngame_TeamPanel_BP_C_UpdateMapMark_Params
{
	int                                                TeamMateSerialNumber;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.Event_OnTeammateHPChange
struct UIngame_TeamPanel_BP_C_Event_OnTeammateHPChange_Params
{
};

// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.Event_OnExitGame
struct UIngame_TeamPanel_BP_C_Event_OnExitGame_Params
{
};

// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.OnPlayerEnterFlying
struct UIngame_TeamPanel_BP_C_OnPlayerEnterFlying_Params
{
};

// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.BndEvt__Button_ParachuteFollow_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
struct UIngame_TeamPanel_BP_C_BndEvt__Button_ParachuteFollow_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.BndEvt__Button_HideFollowList_K2Node_ComponentBoundEvent_84_OnButtonClickedEvent__DelegateSignature
struct UIngame_TeamPanel_BP_C_BndEvt__Button_HideFollowList_K2Node_ComponentBoundEvent_84_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.Event_PlayerOutPlane
struct UIngame_TeamPanel_BP_C_Event_PlayerOutPlane_Params
{
};

// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.SetCustomizeUIInfo
struct UIngame_TeamPanel_BP_C_SetCustomizeUIInfo_Params
{
	class UBP_SAVEGAME_UIElemLayout_C*                 SaveGame;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                LayoutIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.ExecuteUbergraph_Ingame_TeamPanel_BP
struct UIngame_TeamPanel_BP_C_ExecuteUbergraph_Ingame_TeamPanel_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
