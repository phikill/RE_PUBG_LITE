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

// Function BP_LitePCLobbyNameTag.BP_LitePCLobbyNameTag_C.SetVoiceIcon
struct UBP_LitePCLobbyNameTag_C_SetVoiceIcon_Params
{
	bool                                               bShow;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LitePCLobbyNameTag.BP_LitePCLobbyNameTag_C.SetStateIcon
struct UBP_LitePCLobbyNameTag_C_SetStateIcon_Params
{
	bool                                               bShow;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LitePCLobbyNameTag.BP_LitePCLobbyNameTag_C.SetLogout
struct UBP_LitePCLobbyNameTag_C_SetLogout_Params
{
	bool                                               bLogout;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LitePCLobbyNameTag.BP_LitePCLobbyNameTag_C.SetRankEmblem
struct UBP_LitePCLobbyNameTag_C_SetRankEmblem_Params
{
	ERatingRankType                                    NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LitePCLobbyNameTag.BP_LitePCLobbyNameTag_C.Hide
struct UBP_LitePCLobbyNameTag_C_Hide_Params
{
};

// Function BP_LitePCLobbyNameTag.BP_LitePCLobbyNameTag_C.Show
struct UBP_LitePCLobbyNameTag_C_Show_Params
{
};

// Function BP_LitePCLobbyNameTag.BP_LitePCLobbyNameTag_C.SetHost
struct UBP_LitePCLobbyNameTag_C_SetHost_Params
{
	bool                                               bHost;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LitePCLobbyNameTag.BP_LitePCLobbyNameTag_C.SetReady
struct UBP_LitePCLobbyNameTag_C_SetReady_Params
{
	bool                                               bReady;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LitePCLobbyNameTag.BP_LitePCLobbyNameTag_C.SetNickName
struct UBP_LitePCLobbyNameTag_C_SetNickName_Params
{
	struct FString                                     InNick;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_LitePCLobbyNameTag.BP_LitePCLobbyNameTag_C.InitWidget
struct UBP_LitePCLobbyNameTag_C_InitWidget_Params
{
	struct FString                                     InNickName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_LitePCLobbyNameTag.BP_LitePCLobbyNameTag_C.Construct
struct UBP_LitePCLobbyNameTag_C_Construct_Params
{
};

// Function BP_LitePCLobbyNameTag.BP_LitePCLobbyNameTag_C.ExecuteUbergraph_BP_LitePCLobbyNameTag
struct UBP_LitePCLobbyNameTag_C_ExecuteUbergraph_BP_LitePCLobbyNameTag_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
