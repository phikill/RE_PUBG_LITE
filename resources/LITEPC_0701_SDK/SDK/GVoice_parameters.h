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

// Function GVoice.GVoice_C.GetTeamID
struct UGVoice_C_GetTeamID_Params
{
	int                                                TeamID;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GVoice.GVoice_C.GetSessionID
struct UGVoice_C_GetSessionID_Params
{
	struct FString                                     SessionID;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function GVoice.GVoice_C.EnsureJoinTeam
struct UGVoice_C_EnsureJoinTeam_Params
{
};

// Function GVoice.GVoice_C.EnsureJoinRange
struct UGVoice_C_EnsureJoinRange_Params
{
};

// Function GVoice.GVoice_C.VoiceMute
struct UGVoice_C_VoiceMute_Params
{
};

// Function GVoice.GVoice_C.VoiceTeam
struct UGVoice_C_VoiceTeam_Params
{
};

// Function GVoice.GVoice_C.VoiceRange
struct UGVoice_C_VoiceRange_Params
{
};

// Function GVoice.GVoice_C.VoiceQuit
struct UGVoice_C_VoiceQuit_Params
{
};

// Function GVoice.GVoice_C.VoicePttOn
struct UGVoice_C_VoicePttOn_Params
{
};

// Function GVoice.GVoice_C.VoicePttOff
struct UGVoice_C_VoicePttOff_Params
{
};

// Function GVoice.GVoice_C.VoiceBySettings
struct UGVoice_C_VoiceBySettings_Params
{
};

// Function GVoice.GVoice_C.OnSessionIdReplicated
struct UGVoice_C_OnSessionIdReplicated_Params
{
	struct FString                                     SessionID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function GVoice.GVoice_C.OnTeamIdReplicated
struct UGVoice_C_OnTeamIdReplicated_Params
{
	int                                                TeamID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GVoice.GVoice_C.ReceivedInitWidget
struct UGVoice_C_ReceivedInitWidget_Params
{
};

// Function GVoice.GVoice_C.Destruct
struct UGVoice_C_Destruct_Params
{
};

// Function GVoice.GVoice_C.ReceiveHide
struct UGVoice_C_ReceiveHide_Params
{
};

// Function GVoice.GVoice_C.ExecuteUbergraph_GVoice
struct UGVoice_C_ExecuteUbergraph_GVoice_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
