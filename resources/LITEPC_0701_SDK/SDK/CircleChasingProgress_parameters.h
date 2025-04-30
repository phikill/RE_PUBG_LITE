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

// Function CircleChasingProgress.CircleChasingProgress_C.RecoverBlueCircleRunProgress
struct UCircleChasingProgress_C_RecoverBlueCircleRunProgress_Params
{
};

// Function CircleChasingProgress.CircleChasingProgress_C.GetLocalTimeOfCircleStatusStart
struct UCircleChasingProgress_C_GetLocalTimeOfCircleStatusStart_Params
{
	float                                              CircleStatusStartServerWorldSeconds;                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LocalStartTimeSecond;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CircleChasingProgress.CircleChasingProgress_C.ShowCircleDistance
struct UCircleChasingProgress_C_ShowCircleDistance_Params
{
};

// Function CircleChasingProgress.CircleChasingProgress_C.HandleReconnectInfo
struct UCircleChasingProgress_C_HandleReconnectInfo_Params
{
	struct FReConnectGameStateInfo                     Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function CircleChasingProgress.CircleChasingProgress_C.FlashCautionIcon
struct UCircleChasingProgress_C_FlashCautionIcon_Params
{
};

// Function CircleChasingProgress.CircleChasingProgress_C.GetPlayerPawn
struct UCircleChasingProgress_C_GetPlayerPawn_Params
{
	class APawn*                                       PlayerPawn;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CircleChasingProgress.CircleChasingProgress_C.PlayerEscapePercent
struct UCircleChasingProgress_C_PlayerEscapePercent_Params
{
};

// Function CircleChasingProgress.CircleChasingProgress_C.Tick
struct UCircleChasingProgress_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CircleChasingProgress.CircleChasingProgress_C.OnWhiteCircleAppear
struct UCircleChasingProgress_C_OnWhiteCircleAppear_Params
{
	float                                              SafeZoneTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CircleChasingProgress.CircleChasingProgress_C.OnBlueCircleRun
struct UCircleChasingProgress_C_OnBlueCircleRun_Params
{
	float                                              BlueCircleRunTime;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CircleChasingProgress.CircleChasingProgress_C.OnCountDownTextInvisible
struct UCircleChasingProgress_C_OnCountDownTextInvisible_Params
{
};

// Function CircleChasingProgress.CircleChasingProgress_C.OnPlayerEnterExitBlueCircle
struct UCircleChasingProgress_C_OnPlayerEnterExitBlueCircle_Params
{
};

// Function CircleChasingProgress.CircleChasingProgress_C.CleanTheProgressBar
struct UCircleChasingProgress_C_CleanTheProgressBar_Params
{
};

// Function CircleChasingProgress.CircleChasingProgress_C.UpdateCountDownText
struct UCircleChasingProgress_C_UpdateCountDownText_Params
{
};

// Function CircleChasingProgress.CircleChasingProgress_C.PreWarning
struct UCircleChasingProgress_C_PreWarning_Params
{
	float                                              BlueCirclePreWarningTime;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CircleChasingProgress.CircleChasingProgress_C.ReceivedInitWidget
struct UCircleChasingProgress_C_ReceivedInitWidget_Params
{
};

// Function CircleChasingProgress.CircleChasingProgress_C.ReConnectGameStateInfoNotify
struct UCircleChasingProgress_C_ReConnectGameStateInfoNotify_Params
{
	struct FReConnectGameStateInfo                     ReConnectInfo;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function CircleChasingProgress.CircleChasingProgress_C.DelayReconverBlueProgressAgain
struct UCircleChasingProgress_C_DelayReconverBlueProgressAgain_Params
{
};

// Function CircleChasingProgress.CircleChasingProgress_C.ExecuteUbergraph_CircleChasingProgress
struct UCircleChasingProgress_C_ExecuteUbergraph_CircleChasingProgress_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
