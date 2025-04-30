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

// Function UpdatePlayerStateInterface.UpdatePlayerStateInterface_C.UpdatePlayerState
struct UUpdatePlayerStateInterface_C_UpdatePlayerState_Params
{
	ExtraPlayerLiveState                               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ACharacter*                                  OwnerCharacter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UpdatePlayerStateInterface.UpdatePlayerStateInterface_C.InitPlayerState
struct UUpdatePlayerStateInterface_C_InitPlayerState_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
