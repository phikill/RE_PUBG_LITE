
#include "../SDK.h"

// Name: LitePC_0701, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.UpdateExhaustFx
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent* PSCExhaust                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraWheeledVehicle_C::UpdateExhaustFx(class UParticleSystemComponent* PSCExhaust)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.UpdateExhaustFx");

	ABP_STExtraWheeledVehicle_C_UpdateExhaustFx_Params params;
	params.PSCExhaust = PSCExhaust;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.OnClientVehicleHealthStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESTExtraVehicleHealthState     VehicleHealthState             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraWheeledVehicle_C::OnClientVehicleHealthStateChanged(ESTExtraVehicleHealthState VehicleHealthState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.OnClientVehicleHealthStateChanged");

	ABP_STExtraWheeledVehicle_C_OnClientVehicleHealthStateChanged_Params params;
	params.VehicleHealthState = VehicleHealthState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.CreateDMI
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_STExtraWheeledVehicle_C::CreateDMI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.CreateDMI");

	ABP_STExtraWheeledVehicle_C_CreateDMI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_STExtraWheeledVehicle_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.UserConstructionScript");

	ABP_STExtraWheeledVehicle_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.InpActEvt_Horn_K2Node_InputActionEvent_12
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_STExtraWheeledVehicle_C::InpActEvt_Horn_K2Node_InputActionEvent_12(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.InpActEvt_Horn_K2Node_InputActionEvent_12");

	ABP_STExtraWheeledVehicle_C_InpActEvt_Horn_K2Node_InputActionEvent_12_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.InpActEvt_Horn_K2Node_InputActionEvent_11
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_STExtraWheeledVehicle_C::InpActEvt_Horn_K2Node_InputActionEvent_11(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.InpActEvt_Horn_K2Node_InputActionEvent_11");

	ABP_STExtraWheeledVehicle_C_InpActEvt_Horn_K2Node_InputActionEvent_11_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.InpActEvt_Handbrake_K2Node_InputActionEvent_10
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_STExtraWheeledVehicle_C::InpActEvt_Handbrake_K2Node_InputActionEvent_10(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.InpActEvt_Handbrake_K2Node_InputActionEvent_10");

	ABP_STExtraWheeledVehicle_C_InpActEvt_Handbrake_K2Node_InputActionEvent_10_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.InpActEvt_Handbrake_K2Node_InputActionEvent_9
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_STExtraWheeledVehicle_C::InpActEvt_Handbrake_K2Node_InputActionEvent_9(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.InpActEvt_Handbrake_K2Node_InputActionEvent_9");

	ABP_STExtraWheeledVehicle_C_InpActEvt_Handbrake_K2Node_InputActionEvent_9_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.InpActEvt_VehicleBoost_K2Node_InputActionEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_STExtraWheeledVehicle_C::InpActEvt_VehicleBoost_K2Node_InputActionEvent_8(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.InpActEvt_VehicleBoost_K2Node_InputActionEvent_8");

	ABP_STExtraWheeledVehicle_C_InpActEvt_VehicleBoost_K2Node_InputActionEvent_8_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.InpActEvt_VehicleBoost_K2Node_InputActionEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_STExtraWheeledVehicle_C::InpActEvt_VehicleBoost_K2Node_InputActionEvent_7(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.InpActEvt_VehicleBoost_K2Node_InputActionEvent_7");

	ABP_STExtraWheeledVehicle_C_InpActEvt_VehicleBoost_K2Node_InputActionEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.OnBoostingChanged
// (Event, Public, BlueprintEvent)

void ABP_STExtraWheeledVehicle_C::OnBoostingChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.OnBoostingChanged");

	ABP_STExtraWheeledVehicle_C_OnBoostingChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.OnSetTailLightValue
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         LightValue                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraWheeledVehicle_C::OnSetTailLightValue(float* LightValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.OnSetTailLightValue");

	ABP_STExtraWheeledVehicle_C_OnSetTailLightValue_Params params;
	params.LightValue = LightValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.BndEvt__VehicleSeats_K2Node_ComponentBoundEvent_0_SeatAttachDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ASTExtraPlayerCharacter* Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ESTExtraVehicleSeatType        SeatType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SeatIdx                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraWheeledVehicle_C::BndEvt__VehicleSeats_K2Node_ComponentBoundEvent_0_SeatAttachDelegate__DelegateSignature(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType, int SeatIdx)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.BndEvt__VehicleSeats_K2Node_ComponentBoundEvent_0_SeatAttachDelegate__DelegateSignature");

	ABP_STExtraWheeledVehicle_C_BndEvt__VehicleSeats_K2Node_ComponentBoundEvent_0_SeatAttachDelegate__DelegateSignature_Params params;
	params.Character = Character;
	params.SeatType = SeatType;
	params.SeatIdx = SeatIdx;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_STExtraWheeledVehicle_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.ReceiveBeginPlay");

	ABP_STExtraWheeledVehicle_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.ExecuteUbergraph_BP_STExtraWheeledVehicle
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraWheeledVehicle_C::ExecuteUbergraph_BP_STExtraWheeledVehicle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.ExecuteUbergraph_BP_STExtraWheeledVehicle");

	ABP_STExtraWheeledVehicle_C_ExecuteUbergraph_BP_STExtraWheeledVehicle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
