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

// Function BP_VoiceUIObject.BP_VoiceUIObject_C.HideAll
struct UBP_VoiceUIObject_C_HideAll_Params
{
};

// Function BP_VoiceUIObject.BP_VoiceUIObject_C.GetNowOwnPlayer
struct UBP_VoiceUIObject_C_GetNowOwnPlayer_Params
{
	class ASTExtraBaseCharacter*                       Player;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VoiceUIObject.BP_VoiceUIObject_C.GetPosIndex
struct UBP_VoiceUIObject_C_GetPosIndex_Params
{
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VoiceUIObject.BP_VoiceUIObject_C.UpdateState
struct UBP_VoiceUIObject_C_UpdateState_Params
{
	float                                              detaTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isShow;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
