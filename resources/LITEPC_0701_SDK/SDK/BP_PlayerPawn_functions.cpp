
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

// Function BP_PlayerPawn.BP_PlayerPawn_C.UpdateAudioListener
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PlayerPawn_C::UpdateAudioListener()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.UpdateAudioListener");

	ABP_PlayerPawn_C_UpdateAudioListener_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.UpdateOverlaps
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Flag                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::UpdateOverlaps(bool Flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.UpdateOverlaps");

	ABP_PlayerPawn_C_UpdateOverlaps_Params params;
	params.Flag = Flag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.GetShootWeaponNameByWeapon
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ItemDefineID                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ABP_PlayerPawn_C::GetShootWeaponNameByWeapon(int* ItemDefineID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.GetShootWeaponNameByWeapon");

	ABP_PlayerPawn_C_GetShootWeaponNameByWeapon_Params params;
	params.ItemDefineID = ItemDefineID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.GetThirdPersonCamera
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCameraComponent*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCameraComponent* ABP_PlayerPawn_C::GetThirdPersonCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.GetThirdPersonCamera");

	ABP_PlayerPawn_C_GetThirdPersonCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.GetThirdPersonSpringArm
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USpringArmComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USpringArmComponent* ABP_PlayerPawn_C::GetThirdPersonSpringArm()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.GetThirdPersonSpringArm");

	ABP_PlayerPawn_C_GetThirdPersonSpringArm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.GetFPPCamera
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCameraComponent*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCameraComponent* ABP_PlayerPawn_C::GetFPPCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.GetFPPCamera");

	ABP_PlayerPawn_C_GetFPPCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.GetFPPSpringArm
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USpringArmComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USpringArmComponent* ABP_PlayerPawn_C::GetFPPSpringArm()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.GetFPPSpringArm");

	ABP_PlayerPawn_C_GetFPPSpringArm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.GetFirstPersonCamera
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCameraComponent*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCameraComponent* ABP_PlayerPawn_C::GetFirstPersonCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.GetFirstPersonCamera");

	ABP_PlayerPawn_C_GetFirstPersonCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.GetFirstPersonSpringArm
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USpringArmComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USpringArmComponent* ABP_PlayerPawn_C::GetFirstPersonSpringArm()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.GetFirstPersonSpringArm");

	ABP_PlayerPawn_C_GetFirstPersonSpringArm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.GetScopeCamera
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCameraComponent*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCameraComponent* ABP_PlayerPawn_C::GetScopeCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.GetScopeCamera");

	ABP_PlayerPawn_C_GetScopeCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.GetScopeSpringArm
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USpringArmComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USpringArmComponent* ABP_PlayerPawn_C::GetScopeSpringArm()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.GetScopeSpringArm");

	ABP_PlayerPawn_C_GetScopeSpringArm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.GetNonSimulatedComponents_OnFighting
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<class UActorComponent*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UActorComponent*> ABP_PlayerPawn_C::GetNonSimulatedComponents_OnFighting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.GetNonSimulatedComponents_OnFighting");

	ABP_PlayerPawn_C_GetNonSimulatedComponents_OnFighting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.ShouldAutoScopeWhenPeek
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_PlayerPawn_C::ShouldAutoScopeWhenPeek()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.ShouldAutoScopeWhenPeek");

	ABP_PlayerPawn_C_ShouldAutoScopeWhenPeek_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.GetGrenadeNameByGrenadeType
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGrenadeType>*     grenadeType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ABP_PlayerPawn_C::GetGrenadeNameByGrenadeType(TEnumAsByte<EGrenadeType>* grenadeType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.GetGrenadeNameByGrenadeType");

	ABP_PlayerPawn_C_GetGrenadeNameByGrenadeType_Params params;
	params.grenadeType = grenadeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.SetPitchViewAngle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          MinPitch                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxPitch                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::SetPitchViewAngle(float MinPitch, float MaxPitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.SetPitchViewAngle");

	ABP_PlayerPawn_C_SetPitchViewAngle_Params params;
	params.MinPitch = MinPitch;
	params.MaxPitch = MaxPitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.GetNonSimulatedComponents_NonTeammates
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<class UActorComponent*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UActorComponent*> ABP_PlayerPawn_C::GetNonSimulatedComponents_NonTeammates()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.GetNonSimulatedComponents_NonTeammates");

	ABP_PlayerPawn_C_GetNonSimulatedComponents_NonTeammates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.GetControllerViewCamera
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCameraComponent*        Camera                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::GetControllerViewCamera(class UCameraComponent** Camera)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.GetControllerViewCamera");

	ABP_PlayerPawn_C_GetControllerViewCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Camera != nullptr)
		*Camera = params.Camera;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.CheckAutoMove
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerPawn_C::CheckAutoMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.CheckAutoMove");

	ABP_PlayerPawn_C_CheckAutoMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.IsLocalControlOrView
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::IsLocalControlOrView(bool* Ret)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.IsLocalControlOrView");

	ABP_PlayerPawn_C_IsLocalControlOrView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.GetNonSimulatedComponents
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<class UActorComponent*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UActorComponent*> ABP_PlayerPawn_C::GetNonSimulatedComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.GetNonSimulatedComponents");

	ABP_PlayerPawn_C_GetNonSimulatedComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.GetNonDedicatedComponents
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<class UActorComponent*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UActorComponent*> ABP_PlayerPawn_C::GetNonDedicatedComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.GetNonDedicatedComponents");

	ABP_PlayerPawn_C_GetNonDedicatedComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.HandleOnDetachedVehicle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PlayerPawn_C::HandleOnDetachedVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.HandleOnDetachedVehicle");

	ABP_PlayerPawn_C_HandleOnDetachedVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.HandleOnAttachedVehicle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASTExtraVehicleBase*     InVehicle                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::HandleOnAttachedVehicle(class ASTExtraVehicleBase* InVehicle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.HandleOnAttachedVehicle");

	ABP_PlayerPawn_C_HandleOnAttachedVehicle_Params params;
	params.InVehicle = InVehicle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.GetActiveSpringArm
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USpringArmComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USpringArmComponent* ABP_PlayerPawn_C::GetActiveSpringArm()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.GetActiveSpringArm");

	ABP_PlayerPawn_C_GetActiveSpringArm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.FreeFallShakeCam
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerPawn_C::FreeFallShakeCam()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.FreeFallShakeCam");

	ABP_PlayerPawn_C_FreeFallShakeCam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.ParachutePlaySound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*           LocalAkEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAkAudioEvent*           RemoteAkEvent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::ParachutePlaySound(class UAkAudioEvent* LocalAkEvent, class UAkAudioEvent* RemoteAkEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.ParachutePlaySound");

	ABP_PlayerPawn_C_ParachutePlaySound_Params params;
	params.LocalAkEvent = LocalAkEvent;
	params.RemoteAkEvent = RemoteAkEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.UpdatePoseCollision
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESTEPoseState>     PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESTEPoseState>     PreState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::UpdatePoseCollision(TEnumAsByte<ESTEPoseState> PlayerState, TEnumAsByte<ESTEPoseState> PreState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.UpdatePoseCollision");

	ABP_PlayerPawn_C_UpdatePoseCollision_Params params;
	params.PlayerState = PlayerState;
	params.PreState = PreState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.AimInterupted
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerPawn_C::AimInterupted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.AimInterupted");

	ABP_PlayerPawn_C_AimInterupted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.ClampAngleTo180d
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InputAngle                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OutputAngle                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::ClampAngleTo180d(float InputAngle, float* OutputAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.ClampAngleTo180d");

	ABP_PlayerPawn_C_ClampAngleTo180d_Params params;
	params.InputAngle = InputAngle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutputAngle != nullptr)
		*OutputAngle = params.OutputAngle;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.TestShowMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PlayerPawn_C::TestShowMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.TestShowMesh");

	ABP_PlayerPawn_C_TestShowMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.GetWeapon
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 NewParam                       (Parm, OutParm, IsPlainOldData)
// struct FRotator                NewParam1                      (Parm, OutParm, IsPlainOldData)
// bool                           bHaveWeapon                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::GetWeapon(struct FVector* NewParam, struct FRotator* NewParam1, bool* bHaveWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.GetWeapon");

	ABP_PlayerPawn_C_GetWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
	if (NewParam1 != nullptr)
		*NewParam1 = params.NewParam1;
	if (bHaveWeapon != nullptr)
		*bHaveWeapon = params.bHaveWeapon;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.ClientHandlePreOnPlane
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerPawn_C::ClientHandlePreOnPlane()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.ClientHandlePreOnPlane");

	ABP_PlayerPawn_C_ClientHandlePreOnPlane_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.ResetBPCameraSetting
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerPawn_C::ResetBPCameraSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.ResetBPCameraSetting");

	ABP_PlayerPawn_C_ResetBPCameraSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.ShowDebugArrow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         self2                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                InRot                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_PlayerPawn_C::ShowDebugArrow(class USceneComponent* self2, const struct FRotator& InRot, const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.ShowDebugArrow");

	ABP_PlayerPawn_C_ShowDebugArrow_Params params;
	params.self2 = self2;
	params.InRot = InRot;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.isAutonomous
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::isAutonomous(bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.isAutonomous");

	ABP_PlayerPawn_C_isAutonomous_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.PickUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APickUpWrapperActor*     NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::PickUp(class APickUpWrapperActor* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.PickUp");

	ABP_PlayerPawn_C_PickUp_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.DoPickUpTarget
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerPawn_C::DoPickUpTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.DoPickUpTarget");

	ABP_PlayerPawn_C_DoPickUpTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.RotateMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_PlayerPawn_C::RotateMesh(const struct FRotator& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.RotateMesh");

	ABP_PlayerPawn_C_RotateMesh_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.OnRep_AvatarConfig
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerPawn_C::OnRep_AvatarConfig()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.OnRep_AvatarConfig");

	ABP_PlayerPawn_C_OnRep_AvatarConfig_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.SetAllCollisionEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnable                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::SetAllCollisionEnabled(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.SetAllCollisionEnabled");

	ABP_PlayerPawn_C_SetAllCollisionEnabled_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.MoveOutScope
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerPawn_C::MoveOutScope()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.MoveOutScope");

	ABP_PlayerPawn_C_MoveOutScope_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.MoveInScope
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerPawn_C::MoveInScope()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.MoveInScope");

	ABP_PlayerPawn_C_MoveInScope_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.OnPostSwitchCameraMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPlayerCameraMode> Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::OnPostSwitchCameraMode(TEnumAsByte<EPlayerCameraMode> Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.OnPostSwitchCameraMode");

	ABP_PlayerPawn_C_OnPostSwitchCameraMode_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.Reload
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerPawn_C::Reload()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.Reload");

	ABP_PlayerPawn_C_Reload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.SwitchCrouch
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESTEPoseState>     NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESTEPoseState>     PreState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::SwitchCrouch(TEnumAsByte<ESTEPoseState> NewParam, TEnumAsByte<ESTEPoseState> PreState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.SwitchCrouch");

	ABP_PlayerPawn_C_SwitchCrouch_Params params;
	params.NewParam = NewParam;
	params.PreState = PreState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerPawn_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.UserConstructionScript");

	ABP_PlayerPawn_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.ParachuteCamBlend__FinishedFunc
// (BlueprintEvent)

void ABP_PlayerPawn_C::ParachuteCamBlend__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.ParachuteCamBlend__FinishedFunc");

	ABP_PlayerPawn_C_ParachuteCamBlend__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.ParachuteCamBlend__UpdateFunc
// (BlueprintEvent)

void ABP_PlayerPawn_C::ParachuteCamBlend__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.ParachuteCamBlend__UpdateFunc");

	ABP_PlayerPawn_C_ParachuteCamBlend__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.LerpAlpha__FinishedFunc
// (BlueprintEvent)

void ABP_PlayerPawn_C::LerpAlpha__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.LerpAlpha__FinishedFunc");

	ABP_PlayerPawn_C_LerpAlpha__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.LerpAlpha__UpdateFunc
// (BlueprintEvent)

void ABP_PlayerPawn_C::LerpAlpha__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.LerpAlpha__UpdateFunc");

	ABP_PlayerPawn_C_LerpAlpha__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.ScopeTimeline_ScopeIn__FinishedFunc
// (BlueprintEvent)

void ABP_PlayerPawn_C::ScopeTimeline_ScopeIn__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.ScopeTimeline_ScopeIn__FinishedFunc");

	ABP_PlayerPawn_C_ScopeTimeline_ScopeIn__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.ScopeTimeline_ScopeIn__UpdateFunc
// (BlueprintEvent)

void ABP_PlayerPawn_C::ScopeTimeline_ScopeIn__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.ScopeTimeline_ScopeIn__UpdateFunc");

	ABP_PlayerPawn_C_ScopeTimeline_ScopeIn__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.ScopeTimeline_ScopeOut__FinishedFunc
// (BlueprintEvent)

void ABP_PlayerPawn_C::ScopeTimeline_ScopeOut__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.ScopeTimeline_ScopeOut__FinishedFunc");

	ABP_PlayerPawn_C_ScopeTimeline_ScopeOut__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.ScopeTimeline_ScopeOut__UpdateFunc
// (BlueprintEvent)

void ABP_PlayerPawn_C::ScopeTimeline_ScopeOut__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.ScopeTimeline_ScopeOut__UpdateFunc");

	ABP_PlayerPawn_C_ScopeTimeline_ScopeOut__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.TurnLerpAlpha__FinishedFunc
// (BlueprintEvent)

void ABP_PlayerPawn_C::TurnLerpAlpha__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.TurnLerpAlpha__FinishedFunc");

	ABP_PlayerPawn_C_TurnLerpAlpha__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.TurnLerpAlpha__UpdateFunc
// (BlueprintEvent)

void ABP_PlayerPawn_C::TurnLerpAlpha__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.TurnLerpAlpha__UpdateFunc");

	ABP_PlayerPawn_C_TurnLerpAlpha__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_Fire_K2Node_InputActionEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerPawn_C::InpActEvt_Fire_K2Node_InputActionEvent_8(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_Fire_K2Node_InputActionEvent_8");

	ABP_PlayerPawn_C_InpActEvt_Fire_K2Node_InputActionEvent_8_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_Fire_K2Node_InputActionEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerPawn_C::InpActEvt_Fire_K2Node_InputActionEvent_7(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_Fire_K2Node_InputActionEvent_7");

	ABP_PlayerPawn_C_InpActEvt_Fire_K2Node_InputActionEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_Vault_K2Node_InputActionEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerPawn_C::InpActEvt_Vault_K2Node_InputActionEvent_6(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_Vault_K2Node_InputActionEvent_6");

	ABP_PlayerPawn_C_InpActEvt_Vault_K2Node_InputActionEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_ToggleCamera_K2Node_InputActionEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerPawn_C::InpActEvt_ToggleCamera_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_ToggleCamera_K2Node_InputActionEvent_5");

	ABP_PlayerPawn_C_InpActEvt_ToggleCamera_K2Node_InputActionEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.DoMoveForward
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Rate                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::DoMoveForward(float* Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.DoMoveForward");

	ABP_PlayerPawn_C_DoMoveForward_Params params;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.DoMoveRight
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Rate                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::DoMoveRight(float* Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.DoMoveRight");

	ABP_PlayerPawn_C_DoMoveRight_Params params;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.StartCamShake
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerPawn_C::StartCamShake()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.StartCamShake");

	ABP_PlayerPawn_C_StartCamShake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.StopCamShake
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerPawn_C::StopCamShake()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.StopCamShake");

	ABP_PlayerPawn_C_StopCamShake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.TickParachute
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerPawn_C::TickParachute()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.TickParachute");

	ABP_PlayerPawn_C_TickParachute_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PlayerPawn_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.ReceiveBeginPlay");

	ABP_PlayerPawn_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.BPNotifyStartDying
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AController**            Killer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             KillingHitInfo                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector*                KillingHitImpulseDir           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UClass**                 KillingHitDamageType           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::BPNotifyStartDying(class AController** Killer, class AActor** DamageCauser, struct FHitResult* KillingHitInfo, struct FVector* KillingHitImpulseDir, class UClass** KillingHitDamageType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.BPNotifyStartDying");

	ABP_PlayerPawn_C_BPNotifyStartDying_Params params;
	params.Killer = Killer;
	params.DamageCauser = DamageCauser;
	params.KillingHitInfo = KillingHitInfo;
	params.KillingHitImpulseDir = KillingHitImpulseDir;
	params.KillingHitDamageType = KillingHitDamageType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.ReloadEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerPawn_C::ReloadEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.ReloadEvent");

	ABP_PlayerPawn_C_ReloadEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.ReceiveTick");

	ABP_PlayerPawn_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.OnEquipWeapon
// (Event, Public, BlueprintEvent)

void ABP_PlayerPawn_C::OnEquipWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.OnEquipWeapon");

	ABP_PlayerPawn_C_OnEquipWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.SwitchCameraEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPlayerCameraMode> Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::SwitchCameraEvent(TEnumAsByte<EPlayerCameraMode> Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.SwitchCameraEvent");

	ABP_PlayerPawn_C_SwitchCameraEvent_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.SwitchCamera
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSTR_CameraSetting      CameraSetting                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerPawn_C::SwitchCamera(const struct FSTR_CameraSetting& CameraSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.SwitchCamera");

	ABP_PlayerPawn_C_SwitchCamera_Params params;
	params.CameraSetting = CameraSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.OnNotifyHurt
// (Event, Public, BlueprintEvent)

void ABP_PlayerPawn_C::OnNotifyHurt()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.OnNotifyHurt");

	ABP_PlayerPawn_C_OnNotifyHurt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.NotifyPickup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsAvailable                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::NotifyPickup(bool bIsAvailable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.NotifyPickup");

	ABP_PlayerPawn_C_NotifyPickup_Params params;
	params.bIsAvailable = bIsAvailable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.OnLanded
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_PlayerPawn_C::OnLanded(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.OnLanded");

	ABP_PlayerPawn_C_OnLanded_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.OnPoseStateChange
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESTEPoseState>*    LastState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESTEPoseState>*    CurState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::OnPoseStateChange(TEnumAsByte<ESTEPoseState>* LastState, TEnumAsByte<ESTEPoseState>* CurState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.OnPoseStateChange");

	ABP_PlayerPawn_C_OnPoseStateChange_Params params;
	params.LastState = LastState;
	params.CurState = CurState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.K2_UpdateCustomMovement
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::K2_UpdateCustomMovement(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.K2_UpdateCustomMovement");

	ABP_PlayerPawn_C_K2_UpdateCustomMovement_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.K2_OnMovementModeChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMovementMode>*    PrevMovementMode               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMovementMode>*    NewMovementMode                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PrevCustomMode                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 NewCustomMode                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::K2_OnMovementModeChanged(TEnumAsByte<EMovementMode>* PrevMovementMode, TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* PrevCustomMode, unsigned char* NewCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.K2_OnMovementModeChanged");

	ABP_PlayerPawn_C_K2_OnMovementModeChanged_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.NewMovementMode = NewMovementMode;
	params.PrevCustomMode = PrevCustomMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.BPReceiveDamage
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::BPReceiveDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.BPReceiveDamage");

	ABP_PlayerPawn_C_BPReceiveDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.ParachuteOnWater
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerPawn_C::ParachuteOnWater()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.ParachuteOnWater");

	ABP_PlayerPawn_C_ParachuteOnWater_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.NotifyTombBox
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsAvailable                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::NotifyTombBox(bool bIsAvailable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.NotifyTombBox");

	ABP_PlayerPawn_C_NotifyTombBox_Params params;
	params.bIsAvailable = bIsAvailable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.DoAutoReloadCurrentWeapon
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerPawn_C::DoAutoReloadCurrentWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.DoAutoReloadCurrentWeapon");

	ABP_PlayerPawn_C_DoAutoReloadCurrentWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.SwitchCameraToNormal
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerPawn_C::SwitchCameraToNormal()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.SwitchCameraToNormal");

	ABP_PlayerPawn_C_SwitchCameraToNormal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.Scoping
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::Scoping(bool NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.Scoping");

	ABP_PlayerPawn_C_Scoping_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.OnScopeInterrupt
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bTeleport                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::OnScopeInterrupt(bool* bTeleport)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.OnScopeInterrupt");

	ABP_PlayerPawn_C_OnScopeInterrupt_Params params;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.ScopeOut
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerPawn_C::ScopeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.ScopeOut");

	ABP_PlayerPawn_C_ScopeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.OnScopeIn
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bTeleport                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::OnScopeIn(bool* bTeleport)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.OnScopeIn");

	ABP_PlayerPawn_C_OnScopeIn_Params params;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.OnUnEquipWeapon
// (Event, Public, BlueprintEvent)

void ABP_PlayerPawn_C::OnUnEquipWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.OnUnEquipWeapon");

	ABP_PlayerPawn_C_OnUnEquipWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.BPResetCharacter
// (Event, Public, BlueprintEvent)

void ABP_PlayerPawn_C::BPResetCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.BPResetCharacter");

	ABP_PlayerPawn_C_BPResetCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.OnInitGrenadeData
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerPawn_C::OnInitGrenadeData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.OnInitGrenadeData");

	ABP_PlayerPawn_C_OnInitGrenadeData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.OnScopeTempTransformFromFPP
// (Event, Public, BlueprintEvent)

void ABP_PlayerPawn_C::OnScopeTempTransformFromFPP()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.OnScopeTempTransformFromFPP");

	ABP_PlayerPawn_C_OnScopeTempTransformFromFPP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.OnScopeTempTransformToFPP
// (Event, Public, BlueprintEvent)

void ABP_PlayerPawn_C::OnScopeTempTransformToFPP()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.OnScopeTempTransformToFPP");

	ABP_PlayerPawn_C_OnScopeTempTransformToFPP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.VaultFailPawnBluePrint
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FString*                Content                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_PlayerPawn_C::VaultFailPawnBluePrint(struct FString* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.VaultFailPawnBluePrint");

	ABP_PlayerPawn_C_VaultFailPawnBluePrint_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.PawnVaultServerBluePrint
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         dis                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Height                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Length                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                VaultKey                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector*                startPos                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor**                 checkActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         crossblockMaxFall              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         crossblockMaxDis               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                hitpoint                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor**                 WindowActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               MoveDir                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         ArrivalHeight                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::PawnVaultServerBluePrint(float* dis, float* Height, float* Length, struct FString* VaultKey, struct FVector* startPos, class AActor** checkActor, float* crossblockMaxFall, float* crossblockMaxDis, struct FVector* hitpoint, class AActor** WindowActor, struct FRotator* MoveDir, float* ArrivalHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.PawnVaultServerBluePrint");

	ABP_PlayerPawn_C_PawnVaultServerBluePrint_Params params;
	params.dis = dis;
	params.Height = Height;
	params.Length = Length;
	params.VaultKey = VaultKey;
	params.startPos = startPos;
	params.checkActor = checkActor;
	params.crossblockMaxFall = crossblockMaxFall;
	params.crossblockMaxDis = crossblockMaxDis;
	params.hitpoint = hitpoint;
	params.WindowActor = WindowActor;
	params.MoveDir = MoveDir;
	params.ArrivalHeight = ArrivalHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.PawnVaultAllBluePrint
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         dis                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Height                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Length                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                VaultKey                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector*                startPos                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor**                 checkActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         crossblockMaxFall              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         crossblockMaxDis               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                hitpoint                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator*               MoveDir                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         ArrivalHeight                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::PawnVaultAllBluePrint(float* dis, float* Height, float* Length, struct FString* VaultKey, struct FVector* startPos, class AActor** checkActor, float* crossblockMaxFall, float* crossblockMaxDis, struct FVector* hitpoint, struct FRotator* MoveDir, float* ArrivalHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.PawnVaultAllBluePrint");

	ABP_PlayerPawn_C_PawnVaultAllBluePrint_Params params;
	params.dis = dis;
	params.Height = Height;
	params.Length = Length;
	params.VaultKey = VaultKey;
	params.startPos = startPos;
	params.checkActor = checkActor;
	params.crossblockMaxFall = crossblockMaxFall;
	params.crossblockMaxDis = crossblockMaxDis;
	params.hitpoint = hitpoint;
	params.MoveDir = MoveDir;
	params.ArrivalHeight = ArrivalHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.PlayScopeInTimeline
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Rate                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::PlayScopeInTimeline(float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.PlayScopeInTimeline");

	ABP_PlayerPawn_C_PlayScopeInTimeline_Params params;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.ScopeInStop
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerPawn_C::ScopeInStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.ScopeInStop");

	ABP_PlayerPawn_C_ScopeInStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.ScopeOutStop
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerPawn_C::ScopeOutStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.ScopeOutStop");

	ABP_PlayerPawn_C_ScopeOutStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.SpawnBulletPassByEffect
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FVector*                Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         BulletVelocity                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::SpawnBulletPassByEffect(struct FVector* Location, float* BulletVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.SpawnBulletPassByEffect");

	ABP_PlayerPawn_C_SpawnBulletPassByEffect_Params params;
	params.Location = Location;
	params.BulletVelocity = BulletVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.SwitchCameraToParachuteFalling
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerPawn_C::SwitchCameraToParachuteFalling()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.SwitchCameraToParachuteFalling");

	ABP_PlayerPawn_C_SwitchCameraToParachuteFalling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.SwitchCameraToParachuteOpening
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerPawn_C::SwitchCameraToParachuteOpening()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.SwitchCameraToParachuteOpening");

	ABP_PlayerPawn_C_SwitchCameraToParachuteOpening_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.HandleParachuteStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EParachuteState>*  NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::HandleParachuteStateChanged(TEnumAsByte<EParachuteState>* NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.HandleParachuteStateChanged");

	ABP_PlayerPawn_C_HandleParachuteStateChanged_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.StopTurningInPlace
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerPawn_C::StopTurningInPlace()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.StopTurningInPlace");

	ABP_PlayerPawn_C_StopTurningInPlace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.TurnInPlace
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                TurnInPlaceStart               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                TurnInPlaceTarget              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UCurveFloat*             Curve                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            TurnAnimation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::TurnInPlace(const struct FRotator& TurnInPlaceStart, const struct FRotator& TurnInPlaceTarget, class UCurveFloat* Curve, class UAnimMontage* TurnAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.TurnInPlace");

	ABP_PlayerPawn_C_TurnInPlace_Params params;
	params.TurnInPlaceStart = TurnInPlaceStart;
	params.TurnInPlaceTarget = TurnInPlaceTarget;
	params.Curve = Curve;
	params.TurnAnimation = TurnAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.ExecuteUbergraph_BP_PlayerPawn
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::ExecuteUbergraph_BP_PlayerPawn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.ExecuteUbergraph_BP_PlayerPawn");

	ABP_PlayerPawn_C_ExecuteUbergraph_BP_PlayerPawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.NewEventDispatcher_0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_PlayerPawn_C::NewEventDispatcher_0__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.NewEventDispatcher_0__DelegateSignature");

	ABP_PlayerPawn_C_NewEventDispatcher_0__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.UnequipWeaponComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_PlayerPawn_C::UnequipWeaponComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.UnequipWeaponComplete__DelegateSignature");

	ABP_PlayerPawn_C_UnequipWeaponComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn.BP_PlayerPawn_C.EquipWeaponComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_PlayerPawn_C::EquipWeaponComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.EquipWeaponComplete__DelegateSignature");

	ABP_PlayerPawn_C_EquipWeaponComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
