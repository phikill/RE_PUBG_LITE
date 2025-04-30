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

// Function BP_PlayerPawn.BP_PlayerPawn_C.UpdateAudioListener
struct ABP_PlayerPawn_C_UpdateAudioListener_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.UpdateOverlaps
struct ABP_PlayerPawn_C_UpdateOverlaps_Params
{
	bool                                               Flag;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetShootWeaponNameByWeapon
struct ABP_PlayerPawn_C_GetShootWeaponNameByWeapon_Params
{
	int*                                               ItemDefineID;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetThirdPersonCamera
struct ABP_PlayerPawn_C_GetThirdPersonCamera_Params
{
	class UCameraComponent*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetThirdPersonSpringArm
struct ABP_PlayerPawn_C_GetThirdPersonSpringArm_Params
{
	class USpringArmComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetFPPCamera
struct ABP_PlayerPawn_C_GetFPPCamera_Params
{
	class UCameraComponent*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetFPPSpringArm
struct ABP_PlayerPawn_C_GetFPPSpringArm_Params
{
	class USpringArmComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetFirstPersonCamera
struct ABP_PlayerPawn_C_GetFirstPersonCamera_Params
{
	class UCameraComponent*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetFirstPersonSpringArm
struct ABP_PlayerPawn_C_GetFirstPersonSpringArm_Params
{
	class USpringArmComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetScopeCamera
struct ABP_PlayerPawn_C_GetScopeCamera_Params
{
	class UCameraComponent*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetScopeSpringArm
struct ABP_PlayerPawn_C_GetScopeSpringArm_Params
{
	class USpringArmComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetNonSimulatedComponents_OnFighting
struct ABP_PlayerPawn_C_GetNonSimulatedComponents_OnFighting_Params
{
	TArray<class UActorComponent*>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.ShouldAutoScopeWhenPeek
struct ABP_PlayerPawn_C_ShouldAutoScopeWhenPeek_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetGrenadeNameByGrenadeType
struct ABP_PlayerPawn_C_GetGrenadeNameByGrenadeType_Params
{
	TEnumAsByte<EGrenadeType>*                         grenadeType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.SetPitchViewAngle
struct ABP_PlayerPawn_C_SetPitchViewAngle_Params
{
	float                                              MinPitch;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxPitch;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetNonSimulatedComponents_NonTeammates
struct ABP_PlayerPawn_C_GetNonSimulatedComponents_NonTeammates_Params
{
	TArray<class UActorComponent*>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetControllerViewCamera
struct ABP_PlayerPawn_C_GetControllerViewCamera_Params
{
	class UCameraComponent*                            Camera;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.CheckAutoMove
struct ABP_PlayerPawn_C_CheckAutoMove_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.IsLocalControlOrView
struct ABP_PlayerPawn_C_IsLocalControlOrView_Params
{
	bool                                               Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetNonSimulatedComponents
struct ABP_PlayerPawn_C_GetNonSimulatedComponents_Params
{
	TArray<class UActorComponent*>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetNonDedicatedComponents
struct ABP_PlayerPawn_C_GetNonDedicatedComponents_Params
{
	TArray<class UActorComponent*>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.HandleOnDetachedVehicle
struct ABP_PlayerPawn_C_HandleOnDetachedVehicle_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.HandleOnAttachedVehicle
struct ABP_PlayerPawn_C_HandleOnAttachedVehicle_Params
{
	class ASTExtraVehicleBase*                         InVehicle;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetActiveSpringArm
struct ABP_PlayerPawn_C_GetActiveSpringArm_Params
{
	class USpringArmComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.FreeFallShakeCam
struct ABP_PlayerPawn_C_FreeFallShakeCam_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.ParachutePlaySound
struct ABP_PlayerPawn_C_ParachutePlaySound_Params
{
	class UAkAudioEvent*                               LocalAkEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               RemoteAkEvent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.UpdatePoseCollision
struct ABP_PlayerPawn_C_UpdatePoseCollision_Params
{
	TEnumAsByte<ESTEPoseState>                         PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESTEPoseState>                         PreState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.AimInterupted
struct ABP_PlayerPawn_C_AimInterupted_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.ClampAngleTo180d
struct ABP_PlayerPawn_C_ClampAngleTo180d_Params
{
	float                                              InputAngle;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutputAngle;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.TestShowMesh
struct ABP_PlayerPawn_C_TestShowMesh_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetWeapon
struct ABP_PlayerPawn_C_GetWeapon_Params
{
	struct FVector                                     NewParam;                                                 // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    NewParam1;                                                // (Parm, OutParm, IsPlainOldData)
	bool                                               bHaveWeapon;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.ClientHandlePreOnPlane
struct ABP_PlayerPawn_C_ClientHandlePreOnPlane_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.ResetBPCameraSetting
struct ABP_PlayerPawn_C_ResetBPCameraSetting_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.ShowDebugArrow
struct ABP_PlayerPawn_C_ShowDebugArrow_Params
{
	class USceneComponent*                             self2;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    InRot;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.isAutonomous
struct ABP_PlayerPawn_C_isAutonomous_Params
{
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.PickUp
struct ABP_PlayerPawn_C_PickUp_Params
{
	class APickUpWrapperActor*                         NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.DoPickUpTarget
struct ABP_PlayerPawn_C_DoPickUpTarget_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.RotateMesh
struct ABP_PlayerPawn_C_RotateMesh_Params
{
	struct FRotator                                    NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.OnRep_AvatarConfig
struct ABP_PlayerPawn_C_OnRep_AvatarConfig_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.SetAllCollisionEnabled
struct ABP_PlayerPawn_C_SetAllCollisionEnabled_Params
{
	bool                                               bEnable;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.MoveOutScope
struct ABP_PlayerPawn_C_MoveOutScope_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.MoveInScope
struct ABP_PlayerPawn_C_MoveInScope_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.OnPostSwitchCameraMode
struct ABP_PlayerPawn_C_OnPostSwitchCameraMode_Params
{
	TEnumAsByte<EPlayerCameraMode>                     Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.Reload
struct ABP_PlayerPawn_C_Reload_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.SwitchCrouch
struct ABP_PlayerPawn_C_SwitchCrouch_Params
{
	TEnumAsByte<ESTEPoseState>                         NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESTEPoseState>                         PreState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.UserConstructionScript
struct ABP_PlayerPawn_C_UserConstructionScript_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.ParachuteCamBlend__FinishedFunc
struct ABP_PlayerPawn_C_ParachuteCamBlend__FinishedFunc_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.ParachuteCamBlend__UpdateFunc
struct ABP_PlayerPawn_C_ParachuteCamBlend__UpdateFunc_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.LerpAlpha__FinishedFunc
struct ABP_PlayerPawn_C_LerpAlpha__FinishedFunc_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.LerpAlpha__UpdateFunc
struct ABP_PlayerPawn_C_LerpAlpha__UpdateFunc_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.ScopeTimeline_ScopeIn__FinishedFunc
struct ABP_PlayerPawn_C_ScopeTimeline_ScopeIn__FinishedFunc_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.ScopeTimeline_ScopeIn__UpdateFunc
struct ABP_PlayerPawn_C_ScopeTimeline_ScopeIn__UpdateFunc_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.ScopeTimeline_ScopeOut__FinishedFunc
struct ABP_PlayerPawn_C_ScopeTimeline_ScopeOut__FinishedFunc_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.ScopeTimeline_ScopeOut__UpdateFunc
struct ABP_PlayerPawn_C_ScopeTimeline_ScopeOut__UpdateFunc_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.TurnLerpAlpha__FinishedFunc
struct ABP_PlayerPawn_C_TurnLerpAlpha__FinishedFunc_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.TurnLerpAlpha__UpdateFunc
struct ABP_PlayerPawn_C_TurnLerpAlpha__UpdateFunc_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_Fire_K2Node_InputActionEvent_8
struct ABP_PlayerPawn_C_InpActEvt_Fire_K2Node_InputActionEvent_8_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_Fire_K2Node_InputActionEvent_7
struct ABP_PlayerPawn_C_InpActEvt_Fire_K2Node_InputActionEvent_7_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_Vault_K2Node_InputActionEvent_6
struct ABP_PlayerPawn_C_InpActEvt_Vault_K2Node_InputActionEvent_6_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_ToggleCamera_K2Node_InputActionEvent_5
struct ABP_PlayerPawn_C_InpActEvt_ToggleCamera_K2Node_InputActionEvent_5_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.DoMoveForward
struct ABP_PlayerPawn_C_DoMoveForward_Params
{
	float*                                             Rate;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.DoMoveRight
struct ABP_PlayerPawn_C_DoMoveRight_Params
{
	float*                                             Rate;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.StartCamShake
struct ABP_PlayerPawn_C_StartCamShake_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.StopCamShake
struct ABP_PlayerPawn_C_StopCamShake_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.TickParachute
struct ABP_PlayerPawn_C_TickParachute_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.ReceiveBeginPlay
struct ABP_PlayerPawn_C_ReceiveBeginPlay_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.BPNotifyStartDying
struct ABP_PlayerPawn_C_BPNotifyStartDying_Params
{
	class AController**                                Killer;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 KillingHitInfo;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector*                                    KillingHitImpulseDir;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UClass**                                     KillingHitDamageType;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.ReloadEvent
struct ABP_PlayerPawn_C_ReloadEvent_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.ReceiveTick
struct ABP_PlayerPawn_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.OnEquipWeapon
struct ABP_PlayerPawn_C_OnEquipWeapon_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.SwitchCameraEvent
struct ABP_PlayerPawn_C_SwitchCameraEvent_Params
{
	TEnumAsByte<EPlayerCameraMode>                     Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.SwitchCamera
struct ABP_PlayerPawn_C_SwitchCamera_Params
{
	struct FSTR_CameraSetting                          CameraSetting;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.OnNotifyHurt
struct ABP_PlayerPawn_C_OnNotifyHurt_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.NotifyPickup
struct ABP_PlayerPawn_C_NotifyPickup_Params
{
	bool                                               bIsAvailable;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.OnLanded
struct ABP_PlayerPawn_C_OnLanded_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.OnPoseStateChange
struct ABP_PlayerPawn_C_OnPoseStateChange_Params
{
	TEnumAsByte<ESTEPoseState>*                        LastState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESTEPoseState>*                        CurState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.K2_UpdateCustomMovement
struct ABP_PlayerPawn_C_K2_UpdateCustomMovement_Params
{
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.K2_OnMovementModeChanged
struct ABP_PlayerPawn_C_K2_OnMovementModeChanged_Params
{
	TEnumAsByte<EMovementMode>*                        PrevMovementMode;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>*                        NewMovementMode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PrevCustomMode;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     NewCustomMode;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.BPReceiveDamage
struct ABP_PlayerPawn_C_BPReceiveDamage_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.ParachuteOnWater
struct ABP_PlayerPawn_C_ParachuteOnWater_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.NotifyTombBox
struct ABP_PlayerPawn_C_NotifyTombBox_Params
{
	bool                                               bIsAvailable;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.DoAutoReloadCurrentWeapon
struct ABP_PlayerPawn_C_DoAutoReloadCurrentWeapon_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.SwitchCameraToNormal
struct ABP_PlayerPawn_C_SwitchCameraToNormal_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.Scoping
struct ABP_PlayerPawn_C_Scoping_Params
{
	bool                                               NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.OnScopeInterrupt
struct ABP_PlayerPawn_C_OnScopeInterrupt_Params
{
	bool*                                              bTeleport;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.ScopeOut
struct ABP_PlayerPawn_C_ScopeOut_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.OnScopeIn
struct ABP_PlayerPawn_C_OnScopeIn_Params
{
	bool*                                              bTeleport;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.OnUnEquipWeapon
struct ABP_PlayerPawn_C_OnUnEquipWeapon_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.BPResetCharacter
struct ABP_PlayerPawn_C_BPResetCharacter_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.OnInitGrenadeData
struct ABP_PlayerPawn_C_OnInitGrenadeData_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.OnScopeTempTransformFromFPP
struct ABP_PlayerPawn_C_OnScopeTempTransformFromFPP_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.OnScopeTempTransformToFPP
struct ABP_PlayerPawn_C_OnScopeTempTransformToFPP_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.VaultFailPawnBluePrint
struct ABP_PlayerPawn_C_VaultFailPawnBluePrint_Params
{
	struct FString*                                    Content;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.PawnVaultServerBluePrint
struct ABP_PlayerPawn_C_PawnVaultServerBluePrint_Params
{
	float*                                             dis;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Height;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Length;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    VaultKey;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector*                                    startPos;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor**                                     checkActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             crossblockMaxFall;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             crossblockMaxDis;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    hitpoint;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor**                                     WindowActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   MoveDir;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             ArrivalHeight;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.PawnVaultAllBluePrint
struct ABP_PlayerPawn_C_PawnVaultAllBluePrint_Params
{
	float*                                             dis;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Height;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Length;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    VaultKey;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector*                                    startPos;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor**                                     checkActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             crossblockMaxFall;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             crossblockMaxDis;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    hitpoint;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator*                                   MoveDir;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             ArrivalHeight;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.PlayScopeInTimeline
struct ABP_PlayerPawn_C_PlayScopeInTimeline_Params
{
	float                                              Rate;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.ScopeInStop
struct ABP_PlayerPawn_C_ScopeInStop_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.ScopeOutStop
struct ABP_PlayerPawn_C_ScopeOutStop_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.SpawnBulletPassByEffect
struct ABP_PlayerPawn_C_SpawnBulletPassByEffect_Params
{
	struct FVector*                                    Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             BulletVelocity;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.SwitchCameraToParachuteFalling
struct ABP_PlayerPawn_C_SwitchCameraToParachuteFalling_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.SwitchCameraToParachuteOpening
struct ABP_PlayerPawn_C_SwitchCameraToParachuteOpening_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.HandleParachuteStateChanged
struct ABP_PlayerPawn_C_HandleParachuteStateChanged_Params
{
	TEnumAsByte<EParachuteState>*                      NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.StopTurningInPlace
struct ABP_PlayerPawn_C_StopTurningInPlace_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.TurnInPlace
struct ABP_PlayerPawn_C_TurnInPlace_Params
{
	struct FRotator                                    TurnInPlaceStart;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    TurnInPlaceTarget;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UCurveFloat*                                 Curve;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                TurnAnimation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.ExecuteUbergraph_BP_PlayerPawn
struct ABP_PlayerPawn_C_ExecuteUbergraph_BP_PlayerPawn_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.NewEventDispatcher_0__DelegateSignature
struct ABP_PlayerPawn_C_NewEventDispatcher_0__DelegateSignature_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.UnequipWeaponComplete__DelegateSignature
struct ABP_PlayerPawn_C_UnequipWeaponComplete__DelegateSignature_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.EquipWeaponComplete__DelegateSignature
struct ABP_PlayerPawn_C_EquipWeaponComplete__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
