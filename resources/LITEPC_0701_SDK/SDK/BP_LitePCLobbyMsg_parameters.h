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

// Function BP_LitePCLobbyMsg.BP_LitePCLobbyMsg_C.SetMasterSoundMute
struct UBP_LitePCLobbyMsg_C_SetMasterSoundMute_Params
{
};

// Function BP_LitePCLobbyMsg.BP_LitePCLobbyMsg_C.SetChangeVoiceChannel
struct UBP_LitePCLobbyMsg_C_SetChangeVoiceChannel_Params
{
};

// Function BP_LitePCLobbyMsg.BP_LitePCLobbyMsg_C.SetVoiceMute
struct UBP_LitePCLobbyMsg_C_SetVoiceMute_Params
{
};

// Function BP_LitePCLobbyMsg.BP_LitePCLobbyMsg_C.ShowFeedBackInfo
struct UBP_LitePCLobbyMsg_C_ShowFeedBackInfo_Params
{
	struct FText                                       InfoText;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_LitePCLobbyMsg.BP_LitePCLobbyMsg_C.ShowFeedBackInfoFinished
struct UBP_LitePCLobbyMsg_C_ShowFeedBackInfoFinished_Params
{
};

// Function BP_LitePCLobbyMsg.BP_LitePCLobbyMsg_C.ExecuteUbergraph_BP_LitePCLobbyMsg
struct UBP_LitePCLobbyMsg_C_ExecuteUbergraph_BP_LitePCLobbyMsg_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
