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

// Function BP_VehicleUser.BP_VehicleUser_C.SetDrivingViewMode
struct UBP_VehicleUser_C_SetDrivingViewMode_Params
{
	int                                                int_mode;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VehicleUser.BP_VehicleUser_C.ResetInputs
struct UBP_VehicleUser_C_ResetInputs_Params
{
};

// Function BP_VehicleUser.BP_VehicleUser_C.OnMotorcycleContactChanged
struct UBP_VehicleUser_C_OnMotorcycleContactChanged_Params
{
};

// Function BP_VehicleUser.BP_VehicleUser_C.FixGoStraight
struct UBP_VehicleUser_C_FixGoStraight_Params
{
	float                                              InMoveRightRate;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              GoStraightThreshold;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutMoveRightRate;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VehicleUser.BP_VehicleUser_C.OnUpdateSeatGUI
struct UBP_VehicleUser_C_OnUpdateSeatGUI_Params
{
};

// Function BP_VehicleUser.BP_VehicleUser_C.OnVehicleWheelsHPChanged
struct UBP_VehicleUser_C_OnVehicleWheelsHPChanged_Params
{
};

// Function BP_VehicleUser.BP_VehicleUser_C.StopPlayerAutoSprint
struct UBP_VehicleUser_C_StopPlayerAutoSprint_Params
{
};

// Function BP_VehicleUser.BP_VehicleUser_C.OnVehicleFuelChanged
struct UBP_VehicleUser_C_OnVehicleFuelChanged_Params
{
	float                                              Fuel;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              FuelMax;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VehicleUser.BP_VehicleUser_C.OnVehicleHPChanged
struct UBP_VehicleUser_C_OnVehicleHPChanged_Params
{
	float                                              HP;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              HPMax;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VehicleUser.BP_VehicleUser_C.GetPlayerController
struct UBP_VehicleUser_C_GetPlayerController_Params
{
	class ABP_STExtraPlayerController_C*               PlayerController;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VehicleUser.BP_VehicleUser_C.OnInputAxisMoveRight
struct UBP_VehicleUser_C_OnInputAxisMoveRight_Params
{
	float                                              Rate;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VehicleUser.BP_VehicleUser_C.OnInputAxisMoveForward
struct UBP_VehicleUser_C_OnInputAxisMoveForward_Params
{
	float                                              Rate;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VehicleUser.BP_VehicleUser_C.ExitVehicle
struct UBP_VehicleUser_C_ExitVehicle_Params
{
};

// Function BP_VehicleUser.BP_VehicleUser_C.EnterVehicle
struct UBP_VehicleUser_C_EnterVehicle_Params
{
	bool                                               IsDriver;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VehicleUser.BP_VehicleUser_C.OnEnterVehicleCompleted
struct UBP_VehicleUser_C_OnEnterVehicleCompleted_Params
{
	ESTExtraVehicleSeatType*                           SeatType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VehicleUser.BP_VehicleUser_C.OnExitVehicleCompleted
struct UBP_VehicleUser_C_OnExitVehicleCompleted_Params
{
};

// Function BP_VehicleUser.BP_VehicleUser_C.ReceiveBeginPlay
struct UBP_VehicleUser_C_ReceiveBeginPlay_Params
{
};

// Function BP_VehicleUser.BP_VehicleUser_C.OnChangeVehicleSeatCompleted
struct UBP_VehicleUser_C_OnChangeVehicleSeatCompleted_Params
{
	ESTExtraVehicleSeatType*                           SeatType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VehicleUser.BP_VehicleUser_C.OnUpdateVehicleSpeedGUI
struct UBP_VehicleUser_C_OnUpdateVehicleSpeedGUI_Params
{
	float*                                             RawSpeed;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VehicleUser.BP_VehicleUser_C.OnCurrrentClosestVehicleChanged
struct UBP_VehicleUser_C_OnCurrrentClosestVehicleChanged_Params
{
};

// Function BP_VehicleUser.BP_VehicleUser_C.CustomEvent_1
struct UBP_VehicleUser_C_CustomEvent_1_Params
{
	int                                                IntValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VehicleUser.BP_VehicleUser_C.ExecuteUbergraph_BP_VehicleUser
struct UBP_VehicleUser_C_ExecuteUbergraph_BP_VehicleUser_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
