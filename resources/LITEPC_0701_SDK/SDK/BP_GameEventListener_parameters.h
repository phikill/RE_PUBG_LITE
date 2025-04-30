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

// Function BP_GameEventListener.BP_GameEventListener_C.SetDefaultRendering
struct UBP_GameEventListener_C_SetDefaultRendering_Params
{
};

// Function BP_GameEventListener.BP_GameEventListener_C.EnableGrassLOD
struct UBP_GameEventListener_C_EnableGrassLOD_Params
{
	int                                                Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameEventListener.BP_GameEventListener_C.ChangeStreamingLevel
struct UBP_GameEventListener_C_ChangeStreamingLevel_Params
{
};

// Function BP_GameEventListener.BP_GameEventListener_C.InitIncaseReconnect
struct UBP_GameEventListener_C_InitIncaseReconnect_Params
{
};

// Function BP_GameEventListener.BP_GameEventListener_C.IsIOSPlatform
struct UBP_GameEventListener_C_IsIOSPlatform_Params
{
	bool                                               IsIOS;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameEventListener.BP_GameEventListener_C.InitNearClip
struct UBP_GameEventListener_C_InitNearClip_Params
{
};

// Function BP_GameEventListener.BP_GameEventListener_C.ReceiveBeginPlay
struct UBP_GameEventListener_C_ReceiveBeginPlay_Params
{
};

// Function BP_GameEventListener.BP_GameEventListener_C.CustomEvent_1
struct UBP_GameEventListener_C_CustomEvent_1_Params
{
	TEnumAsByte<EGamePawnEvent>                        gamePawnEvent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameEventListener.BP_GameEventListener_C.ReceiveEndPlay
struct UBP_GameEventListener_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameEventListener.BP_GameEventListener_C.UnloadTree
struct UBP_GameEventListener_C_UnloadTree_Params
{
};

// Function BP_GameEventListener.BP_GameEventListener_C.LoadTree
struct UBP_GameEventListener_C_LoadTree_Params
{
};

// Function BP_GameEventListener.BP_GameEventListener_C.ExecuteUbergraph_BP_GameEventListener
struct UBP_GameEventListener_C_ExecuteUbergraph_BP_GameEventListener_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
