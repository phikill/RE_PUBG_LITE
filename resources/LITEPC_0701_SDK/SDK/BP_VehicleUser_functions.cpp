
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

// Function BP_VehicleUser.BP_VehicleUser_C.SetDrivingViewMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            int_mode                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_VehicleUser_C::SetDrivingViewMode(int int_mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleUser.BP_VehicleUser_C.SetDrivingViewMode");

	UBP_VehicleUser_C_SetDrivingViewMode_Params params;
	params.int_mode = int_mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleUser.BP_VehicleUser_C.ResetInputs
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_VehicleUser_C::ResetInputs()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleUser.BP_VehicleUser_C.ResetInputs");

	UBP_VehicleUser_C_ResetInputs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleUser.BP_VehicleUser_C.OnMotorcycleContactChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_VehicleUser_C::OnMotorcycleContactChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleUser.BP_VehicleUser_C.OnMotorcycleContactChanged");

	UBP_VehicleUser_C_OnMotorcycleContactChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleUser.BP_VehicleUser_C.FixGoStraight
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InMoveRightRate                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          GoStraightThreshold            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OutMoveRightRate               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_VehicleUser_C::FixGoStraight(float InMoveRightRate, float GoStraightThreshold, float* OutMoveRightRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleUser.BP_VehicleUser_C.FixGoStraight");

	UBP_VehicleUser_C_FixGoStraight_Params params;
	params.InMoveRightRate = InMoveRightRate;
	params.GoStraightThreshold = GoStraightThreshold;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutMoveRightRate != nullptr)
		*OutMoveRightRate = params.OutMoveRightRate;
}


// Function BP_VehicleUser.BP_VehicleUser_C.OnUpdateSeatGUI
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_VehicleUser_C::OnUpdateSeatGUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleUser.BP_VehicleUser_C.OnUpdateSeatGUI");

	UBP_VehicleUser_C_OnUpdateSeatGUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleUser.BP_VehicleUser_C.OnVehicleWheelsHPChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_VehicleUser_C::OnVehicleWheelsHPChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleUser.BP_VehicleUser_C.OnVehicleWheelsHPChanged");

	UBP_VehicleUser_C_OnVehicleWheelsHPChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleUser.BP_VehicleUser_C.StopPlayerAutoSprint
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_VehicleUser_C::StopPlayerAutoSprint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleUser.BP_VehicleUser_C.StopPlayerAutoSprint");

	UBP_VehicleUser_C_StopPlayerAutoSprint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleUser.BP_VehicleUser_C.OnVehicleFuelChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Fuel                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          FuelMax                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_VehicleUser_C::OnVehicleFuelChanged(float Fuel, float FuelMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleUser.BP_VehicleUser_C.OnVehicleFuelChanged");

	UBP_VehicleUser_C_OnVehicleFuelChanged_Params params;
	params.Fuel = Fuel;
	params.FuelMax = FuelMax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleUser.BP_VehicleUser_C.OnVehicleHPChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          HP                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          HPMax                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_VehicleUser_C::OnVehicleHPChanged(float HP, float HPMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleUser.BP_VehicleUser_C.OnVehicleHPChanged");

	UBP_VehicleUser_C_OnVehicleHPChanged_Params params;
	params.HP = HP;
	params.HPMax = HPMax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleUser.BP_VehicleUser_C.GetPlayerController
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_STExtraPlayerController_C* PlayerController               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_VehicleUser_C::GetPlayerController(class ABP_STExtraPlayerController_C** PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleUser.BP_VehicleUser_C.GetPlayerController");

	UBP_VehicleUser_C_GetPlayerController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerController != nullptr)
		*PlayerController = params.PlayerController;
}


// Function BP_VehicleUser.BP_VehicleUser_C.OnInputAxisMoveRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Rate                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_VehicleUser_C::OnInputAxisMoveRight(float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleUser.BP_VehicleUser_C.OnInputAxisMoveRight");

	UBP_VehicleUser_C_OnInputAxisMoveRight_Params params;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleUser.BP_VehicleUser_C.OnInputAxisMoveForward
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Rate                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_VehicleUser_C::OnInputAxisMoveForward(float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleUser.BP_VehicleUser_C.OnInputAxisMoveForward");

	UBP_VehicleUser_C_OnInputAxisMoveForward_Params params;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleUser.BP_VehicleUser_C.ExitVehicle
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_VehicleUser_C::ExitVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleUser.BP_VehicleUser_C.ExitVehicle");

	UBP_VehicleUser_C_ExitVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleUser.BP_VehicleUser_C.EnterVehicle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsDriver                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_VehicleUser_C::EnterVehicle(bool IsDriver)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleUser.BP_VehicleUser_C.EnterVehicle");

	UBP_VehicleUser_C_EnterVehicle_Params params;
	params.IsDriver = IsDriver;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleUser.BP_VehicleUser_C.OnEnterVehicleCompleted
// (Event, Protected, BlueprintEvent)
// Parameters:
// ESTExtraVehicleSeatType*       SeatType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_VehicleUser_C::OnEnterVehicleCompleted(ESTExtraVehicleSeatType* SeatType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleUser.BP_VehicleUser_C.OnEnterVehicleCompleted");

	UBP_VehicleUser_C_OnEnterVehicleCompleted_Params params;
	params.SeatType = SeatType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleUser.BP_VehicleUser_C.OnExitVehicleCompleted
// (Event, Protected, BlueprintEvent)

void UBP_VehicleUser_C::OnExitVehicleCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleUser.BP_VehicleUser_C.OnExitVehicleCompleted");

	UBP_VehicleUser_C_OnExitVehicleCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleUser.BP_VehicleUser_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_VehicleUser_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleUser.BP_VehicleUser_C.ReceiveBeginPlay");

	UBP_VehicleUser_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleUser.BP_VehicleUser_C.OnChangeVehicleSeatCompleted
// (Event, Protected, BlueprintEvent)
// Parameters:
// ESTExtraVehicleSeatType*       SeatType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_VehicleUser_C::OnChangeVehicleSeatCompleted(ESTExtraVehicleSeatType* SeatType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleUser.BP_VehicleUser_C.OnChangeVehicleSeatCompleted");

	UBP_VehicleUser_C_OnChangeVehicleSeatCompleted_Params params;
	params.SeatType = SeatType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleUser.BP_VehicleUser_C.OnUpdateVehicleSpeedGUI
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         RawSpeed                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_VehicleUser_C::OnUpdateVehicleSpeedGUI(float* RawSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleUser.BP_VehicleUser_C.OnUpdateVehicleSpeedGUI");

	UBP_VehicleUser_C_OnUpdateVehicleSpeedGUI_Params params;
	params.RawSpeed = RawSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleUser.BP_VehicleUser_C.OnCurrrentClosestVehicleChanged
// (Event, Protected, BlueprintEvent)

void UBP_VehicleUser_C::OnCurrrentClosestVehicleChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleUser.BP_VehicleUser_C.OnCurrrentClosestVehicleChanged");

	UBP_VehicleUser_C_OnCurrrentClosestVehicleChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleUser.BP_VehicleUser_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            IntValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_VehicleUser_C::CustomEvent_1(int IntValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleUser.BP_VehicleUser_C.CustomEvent_1");

	UBP_VehicleUser_C_CustomEvent_1_Params params;
	params.IntValue = IntValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleUser.BP_VehicleUser_C.ExecuteUbergraph_BP_VehicleUser
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_VehicleUser_C::ExecuteUbergraph_BP_VehicleUser(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleUser.BP_VehicleUser_C.ExecuteUbergraph_BP_VehicleUser");

	UBP_VehicleUser_C_ExecuteUbergraph_BP_VehicleUser_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
