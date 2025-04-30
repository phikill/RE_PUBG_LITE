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

// Function OB_CircleChasingProgress_BP.OB_CircleChasingProgress_BP_C.RefreshWorldTime
struct UOB_CircleChasingProgress_BP_C_RefreshWorldTime_Params
{
};

// Function OB_CircleChasingProgress_BP.OB_CircleChasingProgress_BP_C.OnBlueCircleRunHandle
struct UOB_CircleChasingProgress_BP_C_OnBlueCircleRunHandle_Params
{
	float                                              BlueCircleRunDuration;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OB_CircleChasingProgress_BP.OB_CircleChasingProgress_BP_C.OnWhiteCircleAppearHandle
struct UOB_CircleChasingProgress_BP_C_OnWhiteCircleAppearHandle_Params
{
	float                                              BlueCircleMovingCountDownDuration;                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OB_CircleChasingProgress_BP.OB_CircleChasingProgress_BP_C.RecoverBlueCircleRunProgress
struct UOB_CircleChasingProgress_BP_C_RecoverBlueCircleRunProgress_Params
{
};

// Function OB_CircleChasingProgress_BP.OB_CircleChasingProgress_BP_C.RefreshCircleDistance
struct UOB_CircleChasingProgress_BP_C_RefreshCircleDistance_Params
{
};

// Function OB_CircleChasingProgress_BP.OB_CircleChasingProgress_BP_C.HandleReconnectInfo
struct UOB_CircleChasingProgress_BP_C_HandleReconnectInfo_Params
{
	struct FReConnectGameStateInfo                     Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function OB_CircleChasingProgress_BP.OB_CircleChasingProgress_BP_C.RefreshPlayerEscapePercent
struct UOB_CircleChasingProgress_BP_C_RefreshPlayerEscapePercent_Params
{
};

// Function OB_CircleChasingProgress_BP.OB_CircleChasingProgress_BP_C.OnCountDownTextInvisible
struct UOB_CircleChasingProgress_BP_C_OnCountDownTextInvisible_Params
{
};

// Function OB_CircleChasingProgress_BP.OB_CircleChasingProgress_BP_C.UpdateCountDownText
struct UOB_CircleChasingProgress_BP_C_UpdateCountDownText_Params
{
};

// Function OB_CircleChasingProgress_BP.OB_CircleChasingProgress_BP_C.Tick
struct UOB_CircleChasingProgress_BP_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OB_CircleChasingProgress_BP.OB_CircleChasingProgress_BP_C.OnPlayerEnterExitBlueCircle
struct UOB_CircleChasingProgress_BP_C_OnPlayerEnterExitBlueCircle_Params
{
};

// Function OB_CircleChasingProgress_BP.OB_CircleChasingProgress_BP_C.CleanTheProgressBar
struct UOB_CircleChasingProgress_BP_C_CleanTheProgressBar_Params
{
};

// Function OB_CircleChasingProgress_BP.OB_CircleChasingProgress_BP_C.ReceivedInitWidget
struct UOB_CircleChasingProgress_BP_C_ReceivedInitWidget_Params
{
};

// Function OB_CircleChasingProgress_BP.OB_CircleChasingProgress_BP_C.DelayReconverBlueProgressAgain
struct UOB_CircleChasingProgress_BP_C_DelayReconverBlueProgressAgain_Params
{
};

// Function OB_CircleChasingProgress_BP.OB_CircleChasingProgress_BP_C.ExecuteUbergraph_OB_CircleChasingProgress_BP
struct UOB_CircleChasingProgress_BP_C_ExecuteUbergraph_OB_CircleChasingProgress_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
