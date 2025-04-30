
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

// Function BP_SwimController.BP_SwimController_C.CalcPlayerWaterOffset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_SwimController_C::CalcPlayerWaterOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SwimController.BP_SwimController_C.CalcPlayerWaterOffset");

	UBP_SwimController_C_CalcPlayerWaterOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SwimController.BP_SwimController_C.CanCrouch
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_SwimController_C::CanCrouch(bool* Ret)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SwimController.BP_SwimController_C.CanCrouch");

	UBP_SwimController_C_CanCrouch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function BP_SwimController.BP_SwimController_C.GetWaterObject
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UBP_SwimController_C::GetWaterObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SwimController.BP_SwimController_C.GetWaterObject");

	UBP_SwimController_C_GetWaterObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SwimController.BP_SwimController_C.UpdateCheckWaterObject
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_SwimController_C::UpdateCheckWaterObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SwimController.BP_SwimController_C.UpdateCheckWaterObject");

	UBP_SwimController_C_UpdateCheckWaterObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SwimController.BP_SwimController_C.UpdateStateCheckDs
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_SwimController_C::UpdateStateCheckDs()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SwimController.BP_SwimController_C.UpdateStateCheckDs");

	UBP_SwimController_C_UpdateStateCheckDs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SwimController.BP_SwimController_C.GetAllWaterList
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_SwimController_C::GetAllWaterList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SwimController.BP_SwimController_C.GetAllWaterList");

	UBP_SwimController_C_GetAllWaterList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SwimController.BP_SwimController_C.SetWaterUpHeight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_SwimController_C::SetWaterUpHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SwimController.BP_SwimController_C.SetWaterUpHeight");

	UBP_SwimController_C_SetWaterUpHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SwimController.BP_SwimController_C.UpdateCameraState
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_SwimController_C::UpdateCameraState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SwimController.BP_SwimController_C.UpdateCameraState");

	UBP_SwimController_C_UpdateCameraState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SwimController.BP_SwimController_C.SetSwimStatePostion
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_SwimController_C::SetSwimStatePostion()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SwimController.BP_SwimController_C.SetSwimStatePostion");

	UBP_SwimController_C_SetSwimStatePostion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SwimController.BP_SwimController_C.RecConnected
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_SwimController_C::RecConnected()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SwimController.BP_SwimController_C.RecConnected");

	UBP_SwimController_C_RecConnected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SwimController.BP_SwimController_C.EnterNearDeadDear
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bparam                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SwimController_C::EnterNearDeadDear(bool bparam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SwimController.BP_SwimController_C.EnterNearDeadDear");

	UBP_SwimController_C_EnterNearDeadDear_Params params;
	params.bparam = bparam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SwimController.BP_SwimController_C.IsInbeingDead
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_SwimController_C::IsInbeingDead(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SwimController.BP_SwimController_C.IsInbeingDead");

	UBP_SwimController_C_IsInbeingDead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_SwimController.BP_SwimController_C.UpdateMove
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_SwimController_C::UpdateMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SwimController.BP_SwimController_C.UpdateMove");

	UBP_SwimController_C_UpdateMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SwimController.BP_SwimController_C.IsMainPlayer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_SwimController_C::IsMainPlayer(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SwimController.BP_SwimController_C.IsMainPlayer");

	UBP_SwimController_C_IsMainPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_SwimController.BP_SwimController_C.SetLeaveSwim
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_SwimController_C::SetLeaveSwim()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SwimController.BP_SwimController_C.SetLeaveSwim");

	UBP_SwimController_C_SetLeaveSwim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SwimController.BP_SwimController_C.SetEnterSwim
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_SwimController_C::SetEnterSwim()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SwimController.BP_SwimController_C.SetEnterSwim");

	UBP_SwimController_C_SetEnterSwim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SwimController.BP_SwimController_C.UpdateHitBox
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_SwimController_C::UpdateHitBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SwimController.BP_SwimController_C.UpdateHitBox");

	UBP_SwimController_C_UpdateHitBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SwimController.BP_SwimController_C.UpdateBreath
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_SwimController_C::UpdateBreath()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SwimController.BP_SwimController_C.UpdateBreath");

	UBP_SwimController_C_UpdateBreath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SwimController.BP_SwimController_C.SwimSprint
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_SwimController_C::SwimSprint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SwimController.BP_SwimController_C.SwimSprint");

	UBP_SwimController_C_SwimSprint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SwimController.BP_SwimController_C.UpdatePlayerState
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_SwimController_C::UpdatePlayerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SwimController.BP_SwimController_C.UpdatePlayerState");

	UBP_SwimController_C_UpdatePlayerState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SwimController.BP_SwimController_C.UpdateSwimCollisionHeight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_SwimController_C::UpdateSwimCollisionHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SwimController.BP_SwimController_C.UpdateSwimCollisionHeight");

	UBP_SwimController_C_UpdateSwimCollisionHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SwimController.BP_SwimController_C.LeaveSwimState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerPawn_C*        PlayerPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SwimController_C::LeaveSwimState(class ABP_PlayerPawn_C* PlayerPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SwimController.BP_SwimController_C.LeaveSwimState");

	UBP_SwimController_C_LeaveSwimState_Params params;
	params.PlayerPawn = PlayerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SwimController.BP_SwimController_C.EnterSwimState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerPawn_C*        PlayerPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SwimController_C::EnterSwimState(class ABP_PlayerPawn_C* PlayerPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SwimController.BP_SwimController_C.EnterSwimState");

	UBP_SwimController_C_EnterSwimState_Params params;
	params.PlayerPawn = PlayerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SwimController.BP_SwimController_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_SwimController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SwimController.BP_SwimController_C.ReceiveBeginPlay");

	UBP_SwimController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SwimController.BP_SwimController_C.AddOutOfBreathBuffOnce
// (BlueprintCallable, BlueprintEvent)

void UBP_SwimController_C::AddOutOfBreathBuffOnce()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SwimController.BP_SwimController_C.AddOutOfBreathBuffOnce");

	UBP_SwimController_C_AddOutOfBreathBuffOnce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SwimController.BP_SwimController_C.SetWater
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWaterSwimObject_C*      Water                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SwimController_C::SetWater(class AWaterSwimObject_C* Water)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SwimController.BP_SwimController_C.SetWater");

	UBP_SwimController_C_SetWater_Params params;
	params.Water = Water;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SwimController.BP_SwimController_C.SetWalking
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void UBP_SwimController_C::SetWalking()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SwimController.BP_SwimController_C.SetWalking");

	UBP_SwimController_C_SetWalking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SwimController.BP_SwimController_C.UpdatePlayerState_BluePrint
// (Event, Public, BlueprintEvent)

void UBP_SwimController_C::UpdatePlayerState_BluePrint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SwimController.BP_SwimController_C.UpdatePlayerState_BluePrint");

	UBP_SwimController_C_UpdatePlayerState_BluePrint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SwimController.BP_SwimController_C.UpdateBreath_BluePrint
// (Event, Public, BlueprintEvent)

void UBP_SwimController_C::UpdateBreath_BluePrint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SwimController.BP_SwimController_C.UpdateBreath_BluePrint");

	UBP_SwimController_C_UpdateBreath_BluePrint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SwimController.BP_SwimController_C.SetDeltTime_BluePrint
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SwimController_C::SetDeltTime_BluePrint(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SwimController.BP_SwimController_C.SetDeltTime_BluePrint");

	UBP_SwimController_C_SetDeltTime_BluePrint_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SwimController.BP_SwimController_C.UpdateSwimMove_BluePrint
// (Event, Public, BlueprintEvent)

void UBP_SwimController_C::UpdateSwimMove_BluePrint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SwimController.BP_SwimController_C.UpdateSwimMove_BluePrint");

	UBP_SwimController_C_UpdateSwimMove_BluePrint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SwimController.BP_SwimController_C.UpdateCameraState_BluePrint
// (Event, Public, BlueprintEvent)

void UBP_SwimController_C::UpdateCameraState_BluePrint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SwimController.BP_SwimController_C.UpdateCameraState_BluePrint");

	UBP_SwimController_C_UpdateCameraState_BluePrint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SwimController.BP_SwimController_C.OnPlayerEneterFlying
// (BlueprintCallable, BlueprintEvent)

void UBP_SwimController_C::OnPlayerEneterFlying()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SwimController.BP_SwimController_C.OnPlayerEneterFlying");

	UBP_SwimController_C_OnPlayerEneterFlying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SwimController.BP_SwimController_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SwimController_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SwimController.BP_SwimController_C.ReceiveTick");

	UBP_SwimController_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SwimController.BP_SwimController_C.ExecuteUbergraph_BP_SwimController
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SwimController_C::ExecuteUbergraph_BP_SwimController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SwimController.BP_SwimController_C.ExecuteUbergraph_BP_SwimController");

	UBP_SwimController_C_ExecuteUbergraph_BP_SwimController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
