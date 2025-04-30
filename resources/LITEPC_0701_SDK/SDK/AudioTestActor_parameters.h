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

// Function AudioTestActor.AudioTestActor_C.PrintDistnace
struct AAudioTestActor_C_PrintDistnace_Params
{
	float                                              DistanceInMeters;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioTestActor.AudioTestActor_C.PlayAudioRetrigger
struct AAudioTestActor_C_PlayAudioRetrigger_Params
{
};

// Function AudioTestActor.AudioTestActor_C.Retrigger
struct AAudioTestActor_C_Retrigger_Params
{
};

// Function AudioTestActor.AudioTestActor_C.PrintText
struct AAudioTestActor_C_PrintText_Params
{
	struct FString                                     InText;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function AudioTestActor.AudioTestActor_C.SetSwitch
struct AAudioTestActor_C_SetSwitch_Params
{
	struct FString                                     Group;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     Param;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function AudioTestActor.AudioTestActor_C.SetNextSound
struct AAudioTestActor_C_SetNextSound_Params
{
	bool                                               Forward;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioTestActor.AudioTestActor_C.Destroy
struct AAudioTestActor_C_Destroy_Params
{
};

// Function AudioTestActor.AudioTestActor_C.PlayAudio
struct AAudioTestActor_C_PlayAudio_Params
{
};

// Function AudioTestActor.AudioTestActor_C.Initialize
struct AAudioTestActor_C_Initialize_Params
{
	class ABP_PlayerPawnPC_C*                          Parent;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioTestActor.AudioTestActor_C.UserConstructionScript
struct AAudioTestActor_C_UserConstructionScript_Params
{
};

// Function AudioTestActor.AudioTestActor_C.ReceiveTick
struct AAudioTestActor_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioTestActor.AudioTestActor_C.ExecuteUbergraph_AudioTestActor
struct AAudioTestActor_C_ExecuteUbergraph_AudioTestActor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
