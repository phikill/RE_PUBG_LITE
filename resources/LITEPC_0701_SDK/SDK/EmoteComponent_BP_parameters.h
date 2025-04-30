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

// Function EmoteComponent_BP.EmoteComponent_BP_C.GetEmoteHandle
struct UEmoteComponent_BP_C_GetEmoteHandle_Params
{
	int*                                               ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBackpackEmoteHandle*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmoteComponent_BP.EmoteComponent_BP_C.ReadEmoteDataRowPC
struct UEmoteComponent_BP_C_ReadEmoteDataRowPC_Params
{
};

// Function EmoteComponent_BP.EmoteComponent_BP_C.IsAbleGetEmoteDataByName
struct UEmoteComponent_BP_C_IsAbleGetEmoteDataByName_Params
{
	struct FName*                                      EmoteName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmoteComponent_BP.EmoteComponent_BP_C.GetEmoteDataByName
struct UEmoteComponent_BP_C_GetEmoteDataByName_Params
{
	struct FName*                                      EmoteName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FEmoteDBDataRow                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmoteComponent_BP.EmoteComponent_BP_C.ReceiveBeginPlay
struct UEmoteComponent_BP_C_ReceiveBeginPlay_Params
{
};

// Function EmoteComponent_BP.EmoteComponent_BP_C.ExecuteUbergraph_EmoteComponent_BP
struct UEmoteComponent_BP_C_ExecuteUbergraph_EmoteComponent_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
