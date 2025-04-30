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

// Function CDBarUI_BP.CDBarUI_BP_C.FirstPlayerCancelRescue
struct UCDBarUI_BP_C_FirstPlayerCancelRescue_Params
{
};

// Function CDBarUI_BP.CDBarUI_BP_C.FirstPlayerStopRescue
struct UCDBarUI_BP_C_FirstPlayerStopRescue_Params
{
};

// Function CDBarUI_BP.CDBarUI_BP_C.FirstPlayerStartBeingRescue
struct UCDBarUI_BP_C_FirstPlayerStartBeingRescue_Params
{
};

// Function CDBarUI_BP.CDBarUI_BP_C.FirstPlayerStartRescueOther
struct UCDBarUI_BP_C_FirstPlayerStartRescueOther_Params
{
};

// Function CDBarUI_BP.CDBarUI_BP_C.IsShowingRescueingUI
struct UCDBarUI_BP_C_IsShowingRescueingUI_Params
{
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CDBarUI_BP.CDBarUI_BP_C.EndShowRescueTips
struct UCDBarUI_BP_C_EndShowRescueTips_Params
{
};

// Function CDBarUI_BP.CDBarUI_BP_C.OnIsRescueing
struct UCDBarUI_BP_C_OnIsRescueing_Params
{
	class ACharacter*                                  HelpWho;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ACharacter*                                  Owner;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsBecomeCan;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CDBarUI_BP.CDBarUI_BP_C.ItemCDBar
struct UCDBarUI_BP_C_ItemCDBar_Params
{
	float                                              ItemCDtime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CDBarUI_BP.CDBarUI_BP_C.ThrowCDbar
struct UCDBarUI_BP_C_ThrowCDbar_Params
{
	float                                              CDTime;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CDBarUI_BP.CDBarUI_BP_C.CDTimer
struct UCDBarUI_BP_C_CDTimer_Params
{
};

// Function CDBarUI_BP.CDBarUI_BP_C.StartRescueOtherEvent
struct UCDBarUI_BP_C_StartRescueOtherEvent_Params
{
};

// Function CDBarUI_BP.CDBarUI_BP_C.StartBeingRescueEvent
struct UCDBarUI_BP_C_StartBeingRescueEvent_Params
{
};

// Function CDBarUI_BP.CDBarUI_BP_C.EndRescueEvent
struct UCDBarUI_BP_C_EndRescueEvent_Params
{
};

// Function CDBarUI_BP.CDBarUI_BP_C.BeginShow
struct UCDBarUI_BP_C_BeginShow_Params
{
};

// Function CDBarUI_BP.CDBarUI_BP_C.Destruct
struct UCDBarUI_BP_C_Destruct_Params
{
};

// Function CDBarUI_BP.CDBarUI_BP_C.Construct
struct UCDBarUI_BP_C_Construct_Params
{
};

// Function CDBarUI_BP.CDBarUI_BP_C.ExecuteUbergraph_CDBarUI_BP
struct UCDBarUI_BP_C_ExecuteUbergraph_CDBarUI_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CDBarUI_BP.CDBarUI_BP_C.UserCancelUse__DelegateSignature
struct UCDBarUI_BP_C_UserCancelUse__DelegateSignature_Params
{
	bool                                               ShouldShow_;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Tips;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
