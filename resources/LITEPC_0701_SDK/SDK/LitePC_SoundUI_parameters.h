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

// Function LitePC_SoundUI.LitePC_SoundUI_C.IsEnableApply
struct ULitePC_SoundUI_C_IsEnableApply_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LitePC_SoundUI.LitePC_SoundUI_C.IsEnable_VoiceSetting
struct ULitePC_SoundUI_C_IsEnable_VoiceSetting_Params
{
	bool                                               ResturnValue;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LitePC_SoundUI.LitePC_SoundUI_C.Construct
struct ULitePC_SoundUI_C_Construct_Params
{
};

// Function LitePC_SoundUI.LitePC_SoundUI_C.OnDefault
struct ULitePC_SoundUI_C_OnDefault_Params
{
};

// Function LitePC_SoundUI.LitePC_SoundUI_C.OnApply
struct ULitePC_SoundUI_C_OnApply_Params
{
};

// Function LitePC_SoundUI.LitePC_SoundUI_C.OnReset
struct ULitePC_SoundUI_C_OnReset_Params
{
};

// Function LitePC_SoundUI.LitePC_SoundUI_C.ExecuteUbergraph_LitePC_SoundUI
struct ULitePC_SoundUI_C_ExecuteUbergraph_LitePC_SoundUI_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
