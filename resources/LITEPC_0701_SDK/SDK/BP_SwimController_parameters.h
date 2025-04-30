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

// Function BP_SwimController.BP_SwimController_C.CalcPlayerWaterOffset
struct UBP_SwimController_C_CalcPlayerWaterOffset_Params
{
};

// Function BP_SwimController.BP_SwimController_C.CanCrouch
struct UBP_SwimController_C_CanCrouch_Params
{
	bool                                               Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SwimController.BP_SwimController_C.GetWaterObject
struct UBP_SwimController_C_GetWaterObject_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SwimController.BP_SwimController_C.UpdateCheckWaterObject
struct UBP_SwimController_C_UpdateCheckWaterObject_Params
{
};

// Function BP_SwimController.BP_SwimController_C.UpdateStateCheckDs
struct UBP_SwimController_C_UpdateStateCheckDs_Params
{
};

// Function BP_SwimController.BP_SwimController_C.GetAllWaterList
struct UBP_SwimController_C_GetAllWaterList_Params
{
};

// Function BP_SwimController.BP_SwimController_C.SetWaterUpHeight
struct UBP_SwimController_C_SetWaterUpHeight_Params
{
};

// Function BP_SwimController.BP_SwimController_C.UpdateCameraState
struct UBP_SwimController_C_UpdateCameraState_Params
{
};

// Function BP_SwimController.BP_SwimController_C.SetSwimStatePostion
struct UBP_SwimController_C_SetSwimStatePostion_Params
{
};

// Function BP_SwimController.BP_SwimController_C.RecConnected
struct UBP_SwimController_C_RecConnected_Params
{
};

// Function BP_SwimController.BP_SwimController_C.EnterNearDeadDear
struct UBP_SwimController_C_EnterNearDeadDear_Params
{
	bool                                               bparam;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SwimController.BP_SwimController_C.IsInbeingDead
struct UBP_SwimController_C_IsInbeingDead_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SwimController.BP_SwimController_C.UpdateMove
struct UBP_SwimController_C_UpdateMove_Params
{
};

// Function BP_SwimController.BP_SwimController_C.IsMainPlayer
struct UBP_SwimController_C_IsMainPlayer_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SwimController.BP_SwimController_C.SetLeaveSwim
struct UBP_SwimController_C_SetLeaveSwim_Params
{
};

// Function BP_SwimController.BP_SwimController_C.SetEnterSwim
struct UBP_SwimController_C_SetEnterSwim_Params
{
};

// Function BP_SwimController.BP_SwimController_C.UpdateHitBox
struct UBP_SwimController_C_UpdateHitBox_Params
{
};

// Function BP_SwimController.BP_SwimController_C.UpdateBreath
struct UBP_SwimController_C_UpdateBreath_Params
{
};

// Function BP_SwimController.BP_SwimController_C.SwimSprint
struct UBP_SwimController_C_SwimSprint_Params
{
};

// Function BP_SwimController.BP_SwimController_C.UpdatePlayerState
struct UBP_SwimController_C_UpdatePlayerState_Params
{
};

// Function BP_SwimController.BP_SwimController_C.UpdateSwimCollisionHeight
struct UBP_SwimController_C_UpdateSwimCollisionHeight_Params
{
};

// Function BP_SwimController.BP_SwimController_C.LeaveSwimState
struct UBP_SwimController_C_LeaveSwimState_Params
{
	class ABP_PlayerPawn_C*                            PlayerPawn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SwimController.BP_SwimController_C.EnterSwimState
struct UBP_SwimController_C_EnterSwimState_Params
{
	class ABP_PlayerPawn_C*                            PlayerPawn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SwimController.BP_SwimController_C.ReceiveBeginPlay
struct UBP_SwimController_C_ReceiveBeginPlay_Params
{
};

// Function BP_SwimController.BP_SwimController_C.AddOutOfBreathBuffOnce
struct UBP_SwimController_C_AddOutOfBreathBuffOnce_Params
{
};

// Function BP_SwimController.BP_SwimController_C.SetWater
struct UBP_SwimController_C_SetWater_Params
{
	class AWaterSwimObject_C*                          Water;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SwimController.BP_SwimController_C.SetWalking
struct UBP_SwimController_C_SetWalking_Params
{
};

// Function BP_SwimController.BP_SwimController_C.UpdatePlayerState_BluePrint
struct UBP_SwimController_C_UpdatePlayerState_BluePrint_Params
{
};

// Function BP_SwimController.BP_SwimController_C.UpdateBreath_BluePrint
struct UBP_SwimController_C_UpdateBreath_BluePrint_Params
{
};

// Function BP_SwimController.BP_SwimController_C.SetDeltTime_BluePrint
struct UBP_SwimController_C_SetDeltTime_BluePrint_Params
{
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SwimController.BP_SwimController_C.UpdateSwimMove_BluePrint
struct UBP_SwimController_C_UpdateSwimMove_BluePrint_Params
{
};

// Function BP_SwimController.BP_SwimController_C.UpdateCameraState_BluePrint
struct UBP_SwimController_C_UpdateCameraState_BluePrint_Params
{
};

// Function BP_SwimController.BP_SwimController_C.OnPlayerEneterFlying
struct UBP_SwimController_C_OnPlayerEneterFlying_Params
{
};

// Function BP_SwimController.BP_SwimController_C.ReceiveTick
struct UBP_SwimController_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SwimController.BP_SwimController_C.ExecuteUbergraph_BP_SwimController
struct UBP_SwimController_C_ExecuteUbergraph_BP_SwimController_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
