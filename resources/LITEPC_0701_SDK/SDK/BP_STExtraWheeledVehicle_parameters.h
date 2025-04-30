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

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.UpdateExhaustFx
struct ABP_STExtraWheeledVehicle_C_UpdateExhaustFx_Params
{
	class UParticleSystemComponent*                    PSCExhaust;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.OnClientVehicleHealthStateChanged
struct ABP_STExtraWheeledVehicle_C_OnClientVehicleHealthStateChanged_Params
{
	ESTExtraVehicleHealthState                         VehicleHealthState;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.CreateDMI
struct ABP_STExtraWheeledVehicle_C_CreateDMI_Params
{
};

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.UserConstructionScript
struct ABP_STExtraWheeledVehicle_C_UserConstructionScript_Params
{
};

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.InpActEvt_Horn_K2Node_InputActionEvent_12
struct ABP_STExtraWheeledVehicle_C_InpActEvt_Horn_K2Node_InputActionEvent_12_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.InpActEvt_Horn_K2Node_InputActionEvent_11
struct ABP_STExtraWheeledVehicle_C_InpActEvt_Horn_K2Node_InputActionEvent_11_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.InpActEvt_Handbrake_K2Node_InputActionEvent_10
struct ABP_STExtraWheeledVehicle_C_InpActEvt_Handbrake_K2Node_InputActionEvent_10_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.InpActEvt_Handbrake_K2Node_InputActionEvent_9
struct ABP_STExtraWheeledVehicle_C_InpActEvt_Handbrake_K2Node_InputActionEvent_9_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.InpActEvt_VehicleBoost_K2Node_InputActionEvent_8
struct ABP_STExtraWheeledVehicle_C_InpActEvt_VehicleBoost_K2Node_InputActionEvent_8_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.InpActEvt_VehicleBoost_K2Node_InputActionEvent_7
struct ABP_STExtraWheeledVehicle_C_InpActEvt_VehicleBoost_K2Node_InputActionEvent_7_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.OnBoostingChanged
struct ABP_STExtraWheeledVehicle_C_OnBoostingChanged_Params
{
};

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.OnSetTailLightValue
struct ABP_STExtraWheeledVehicle_C_OnSetTailLightValue_Params
{
	float*                                             LightValue;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.BndEvt__VehicleSeats_K2Node_ComponentBoundEvent_0_SeatAttachDelegate__DelegateSignature
struct ABP_STExtraWheeledVehicle_C_BndEvt__VehicleSeats_K2Node_ComponentBoundEvent_0_SeatAttachDelegate__DelegateSignature_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ESTExtraVehicleSeatType                            SeatType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SeatIdx;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.ReceiveBeginPlay
struct ABP_STExtraWheeledVehicle_C_ReceiveBeginPlay_Params
{
};

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.ExecuteUbergraph_BP_STExtraWheeledVehicle
struct ABP_STExtraWheeledVehicle_C_ExecuteUbergraph_BP_STExtraWheeledVehicle_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
