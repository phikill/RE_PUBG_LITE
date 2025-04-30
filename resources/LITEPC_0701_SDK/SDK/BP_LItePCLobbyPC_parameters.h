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

// Function BP_LItePCLobbyPC.BP_LitePCLobbyPC_C.ToggleInGameMenu
struct ABP_LitePCLobbyPC_C_ToggleInGameMenu_Params
{
};

// Function BP_LItePCLobbyPC.BP_LitePCLobbyPC_C.NewFunction_1
struct ABP_LitePCLobbyPC_C_NewFunction_1_Params
{
	TArray<class AActor*>                              Array;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class AActor*>                              NewParam;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function BP_LItePCLobbyPC.BP_LitePCLobbyPC_C.ModifyCharacterCostume
struct ABP_LitePCLobbyPC_C_ModifyCharacterCostume_Params
{
	class ABP_PlayerLobbyPawn_C*                       Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_SpawnPlayerData                  CostumeData;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_LItePCLobbyPC.BP_LitePCLobbyPC_C.SpawnPlayerCharacter
struct ABP_LitePCLobbyPC_C_SpawnPlayerCharacter_Params
{
	struct FBP_STRUCT_SpawnPlayerData                  PlayerCostumeData;                                        // (BlueprintVisible, BlueprintReadOnly, Parm)
	class AActor*                                      Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_PlayerLobbyPawn_C*                       OutPlayerCharacter;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LItePCLobbyPC.BP_LitePCLobbyPC_C.UserConstructionScript
struct ABP_LitePCLobbyPC_C_UserConstructionScript_Params
{
};

// Function BP_LItePCLobbyPC.BP_LitePCLobbyPC_C.InpActEvt_PushToTalk_K2Node_InputActionEvent_12
struct ABP_LitePCLobbyPC_C_InpActEvt_PushToTalk_K2Node_InputActionEvent_12_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_LItePCLobbyPC.BP_LitePCLobbyPC_C.InpActEvt_PushToTalk_K2Node_InputActionEvent_11
struct ABP_LitePCLobbyPC_C_InpActEvt_PushToTalk_K2Node_InputActionEvent_11_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_LItePCLobbyPC.BP_LitePCLobbyPC_C.InpActEvt_SwitchVoiceChannel_K2Node_InputActionEvent_10
struct ABP_LitePCLobbyPC_C_InpActEvt_SwitchVoiceChannel_K2Node_InputActionEvent_10_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_LItePCLobbyPC.BP_LitePCLobbyPC_C.InpActEvt_ToggleMuteVoiceChat_K2Node_InputActionEvent_9
struct ABP_LitePCLobbyPC_C_InpActEvt_ToggleMuteVoiceChat_K2Node_InputActionEvent_9_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_LItePCLobbyPC.BP_LitePCLobbyPC_C.InpActEvt_ToggleMuteMasterVolume_K2Node_InputActionEvent_8
struct ABP_LitePCLobbyPC_C_InpActEvt_ToggleMuteMasterVolume_K2Node_InputActionEvent_8_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_LItePCLobbyPC.BP_LitePCLobbyPC_C.InpActEvt_ToggleInGameMenu_K2Node_InputActionEvent_7
struct ABP_LitePCLobbyPC_C_InpActEvt_ToggleInGameMenu_K2Node_InputActionEvent_7_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_LItePCLobbyPC.BP_LitePCLobbyPC_C.ReceiveBeginPlay
struct ABP_LitePCLobbyPC_C_ReceiveBeginPlay_Params
{
};

// Function BP_LItePCLobbyPC.BP_LitePCLobbyPC_C.ExecuteUbergraph_BP_LitePCLobbyPC
struct ABP_LitePCLobbyPC_C_ExecuteUbergraph_BP_LitePCLobbyPC_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
