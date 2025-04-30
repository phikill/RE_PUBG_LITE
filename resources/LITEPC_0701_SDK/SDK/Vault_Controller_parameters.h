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

// Function Vault_Controller.Vault_Controller_C.CanCancleVault
struct UVault_Controller_C_CanCancleVault_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.OnRep_NowDrawDebugType
struct UVault_Controller_C_OnRep_NowDrawDebugType_Params
{
};

// Function Vault_Controller.Vault_Controller_C.CheckVaultPath
struct UVault_Controller_C_CheckVaultPath_Params
{
	float                                              Height;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OppSiteHitLocation;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     StartLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    StartPlayerRotation;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVaultData                                  VaultData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.StartSmoothLocation
struct UVault_Controller_C_StartSmoothLocation_Params
{
	struct FVector                                     PlayerLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     StartLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     MoveLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ResultLocation;                                           // (Parm, OutParm, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.CheckFloor
struct UVault_Controller_C_CheckFloor_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.DealBrokenWindows
struct UVault_Controller_C_DealBrokenWindows_Params
{
};

// Function Vault_Controller.Vault_Controller_C.VaultFromCPP
struct UVault_Controller_C_VaultFromCPP_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.CheckVaultWindows
struct UVault_Controller_C_CheckVaultWindows_Params
{
	struct FVector                                     CheckStart;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     CheckEnd;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.EnableCulling
struct UVault_Controller_C_EnableCulling_Params
{
	bool                                               bEnable;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.GetCliblastCheckDis
struct UVault_Controller_C_GetCliblastCheckDis_Params
{
	float                                              Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.NowStateCheck
struct UVault_Controller_C_NowStateCheck_Params
{
	bool                                               Sprint;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Walk;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Stand;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.CheckNowisJumpAnimation
struct UVault_Controller_C_CheckNowisJumpAnimation_Params
{
	float                                              dis;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              thcikLength;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsJump;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ishasAnimation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.CheckIsValidByHeightCheckDis
struct UVault_Controller_C_CheckIsValidByHeightCheckDis_Params
{
	float                                              nowheight;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              checkDis;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isVaild;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.IsValidVault
struct UVault_Controller_C_IsValidVault_Params
{
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.GetTestObjectChannels
struct UVault_Controller_C_GetTestObjectChannels_Params
{
	TArray<TEnumAsByte<EObjectTypeQuery>>              Channels;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function Vault_Controller.Vault_Controller_C.UpdateMontageSpeed
struct UVault_Controller_C_UpdateMontageSpeed_Params
{
};

// Function Vault_Controller.Vault_Controller_C.ServerCheckBlockDis
struct UVault_Controller_C_ServerCheckBlockDis_Params
{
	struct FVector                                     hitpoint;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FString                                     Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.GetNowOppSideDis
struct UVault_Controller_C_GetNowOppSideDis_Params
{
	float                                              Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.CheckUpLengthBlock
struct UVault_Controller_C_CheckUpLengthBlock_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.GetCrossMaxBlockDisOffsset
struct UVault_Controller_C_GetCrossMaxBlockDisOffsset_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.SetLimitPostion
struct UVault_Controller_C_SetLimitPostion_Params
{
	float                                              XValue;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ZVaule;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.CheckForward
struct UVault_Controller_C_CheckForward_Params
{
	bool                                               IsActive;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.CheckHeight
struct UVault_Controller_C_CheckHeight_Params
{
	float                                              Height;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsActive;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.printReason
struct UVault_Controller_C_printReason_Params
{
	struct FString                                     Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function Vault_Controller.Vault_Controller_C.PrintEnable
struct UVault_Controller_C_PrintEnable_Params
{
};

// Function Vault_Controller.Vault_Controller_C.TestHasFourteenwindowTag
struct UVault_Controller_C_TestHasFourteenwindowTag_Params
{
	TArray<struct FHitResult>                          acorList;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.CacultLimitData
struct UVault_Controller_C_CacultLimitData_Params
{
};

// Function Vault_Controller.Vault_Controller_C.GetCrossMaxBlockDisForward
struct UVault_Controller_C_GetCrossMaxBlockDisForward_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.GetPlayerStartZ
struct UVault_Controller_C_GetPlayerStartZ_Params
{
	float                                              Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.GetCrossBlockMaxFallingHeight
struct UVault_Controller_C_GetCrossBlockMaxFallingHeight_Params
{
};

// Function Vault_Controller.Vault_Controller_C.ForwardTestObjectType
struct UVault_Controller_C_ForwardTestObjectType_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.SetEnd
struct UVault_Controller_C_SetEnd_Params
{
};

// Function Vault_Controller.Vault_Controller_C.SetVaultData
struct UVault_Controller_C_SetVaultData_Params
{
	float                                              dis;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Length;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     VaultKey;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FVector                                     startPos;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor*                                      checkActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              crossmaxFalling;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              crossmaxDis;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     hitpoint;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    MoveDir;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              ArrivalHeight;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.UpdatePostion2
struct UVault_Controller_C_UpdatePostion2_Params
{
};

// Function Vault_Controller.Vault_Controller_C.GetNowData
struct UVault_Controller_C_GetNowData_Params
{
	bool                                               IsGet;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.CheckCanVault
struct UVault_Controller_C_CheckCanVault_Params
{
	bool                                               IsActive;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.OnNotifyEnd_7D71C17943B655B8C686998C00A928EE
struct UVault_Controller_C_OnNotifyEnd_7D71C17943B655B8C686998C00A928EE_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.OnNotifyBegin_7D71C17943B655B8C686998C00A928EE
struct UVault_Controller_C_OnNotifyBegin_7D71C17943B655B8C686998C00A928EE_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.OnInterrupted_7D71C17943B655B8C686998C00A928EE
struct UVault_Controller_C_OnInterrupted_7D71C17943B655B8C686998C00A928EE_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.OnBlendOut_7D71C17943B655B8C686998C00A928EE
struct UVault_Controller_C_OnBlendOut_7D71C17943B655B8C686998C00A928EE_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.OnCompleted_7D71C17943B655B8C686998C00A928EE
struct UVault_Controller_C_OnCompleted_7D71C17943B655B8C686998C00A928EE_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.StartVault
struct UVault_Controller_C_StartVault_Params
{
};

// Function Vault_Controller.Vault_Controller_C.ReceiveBeginPlay
struct UVault_Controller_C_ReceiveBeginPlay_Params
{
};

// Function Vault_Controller.Vault_Controller_C.JumpVault
struct UVault_Controller_C_JumpVault_Params
{
};

// Function Vault_Controller.Vault_Controller_C.VaultServer
struct UVault_Controller_C_VaultServer_Params
{
	float                                              dis;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Length;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     VaultKey;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FVector                                     startPos;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor*                                      checkActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              crossblockMaxFall;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              crossblockMaxDis;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     hitpoint;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor*                                      WindowActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    MoveDir;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              ArrivalHeight;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.vaultAll
struct UVault_Controller_C_vaultAll_Params
{
	float                                              dis;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Length;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     VaultKey;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FVector                                     startPos;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor*                                      checkActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              crossmaxFalling;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              crossmaxDis;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     hitpoint;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    MoveDir;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              ArrivalHeight;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.jumpfromUI
struct UVault_Controller_C_jumpfromUI_Params
{
};

// Function Vault_Controller.Vault_Controller_C.VaultFail
struct UVault_Controller_C_VaultFail_Params
{
	struct FString                                     Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function Vault_Controller.Vault_Controller_C.UpdateVault_BluePrint
struct UVault_Controller_C_UpdateVault_BluePrint_Params
{
};

// Function Vault_Controller.Vault_Controller_C.interrupted
struct UVault_Controller_C_interrupted_Params
{
	EPawnState                                         State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.vaultLeave
struct UVault_Controller_C_vaultLeave_Params
{
	EPawnState                                         State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.ServerStartCancleVault
struct UVault_Controller_C_ServerStartCancleVault_Params
{
};

// Function Vault_Controller.Vault_Controller_C.StartCancleVault
struct UVault_Controller_C_StartCancleVault_Params
{
};

// Function Vault_Controller.Vault_Controller_C.EndCancleVault
struct UVault_Controller_C_EndCancleVault_Params
{
};

// Function Vault_Controller.Vault_Controller_C.ExecuteUbergraph_Vault_Controller
struct UVault_Controller_C_ExecuteUbergraph_Vault_Controller_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
