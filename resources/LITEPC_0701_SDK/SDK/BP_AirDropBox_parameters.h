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

// Function BP_AirDropBox.BP_AirDropBox_C.GetSuperAirDropGenerateWrappersData
struct ABP_AirDropBox_C_GetSuperAirDropGenerateWrappersData_Params
{
	TArray<struct FAirDropBoxGenerateWrapperItemData>  RetData;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function BP_AirDropBox.BP_AirDropBox_C.IsWater
struct ABP_AirDropBox_C_IsWater_Params
{
	class AActor*                                      NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsWater;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AirDropBox.BP_AirDropBox_C.OnRep_ServerDroppingSpeed
struct ABP_AirDropBox_C_OnRep_ServerDroppingSpeed_Params
{
};

// Function BP_AirDropBox.BP_AirDropBox_C.OnRep_bIsBoxInWater
struct ABP_AirDropBox_C_OnRep_bIsBoxInWater_Params
{
};

// Function BP_AirDropBox.BP_AirDropBox_C.OnRep_bIsBoxSomking
struct ABP_AirDropBox_C_OnRep_bIsBoxSomking_Params
{
};

// Function BP_AirDropBox.BP_AirDropBox_C.OnRep_bIsParachuteOpen
struct ABP_AirDropBox_C_OnRep_bIsParachuteOpen_Params
{
};

// Function BP_AirDropBox.BP_AirDropBox_C.OnRep_bIsBoxHitTheGroundOrInWater
struct ABP_AirDropBox_C_OnRep_bIsBoxHitTheGroundOrInWater_Params
{
};

// Function BP_AirDropBox.BP_AirDropBox_C.GetRandomGenerateWrappersData
struct ABP_AirDropBox_C_GetRandomGenerateWrappersData_Params
{
	TArray<struct FAirDropBoxGenerateWrapperItemData>  GenerateData;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function BP_AirDropBox.BP_AirDropBox_C.CheckBoxIsLand
struct ABP_AirDropBox_C_CheckBoxIsLand_Params
{
};

// Function BP_AirDropBox.BP_AirDropBox_C.UserConstructionScript
struct ABP_AirDropBox_C_UserConstructionScript_Params
{
};

// Function BP_AirDropBox.BP_AirDropBox_C.ReceiveBeginPlay
struct ABP_AirDropBox_C_ReceiveBeginPlay_Params
{
};

// Function BP_AirDropBox.BP_AirDropBox_C.BndEvt__Cube_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature
struct ABP_AirDropBox_C_BndEvt__Cube_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_AirDropBox.BP_AirDropBox_C.HideSmoke
struct ABP_AirDropBox_C_HideSmoke_Params
{
};

// Function BP_AirDropBox.BP_AirDropBox_C.OnLandBroadCast
struct ABP_AirDropBox_C_OnLandBroadCast_Params
{
};

// Function BP_AirDropBox.BP_AirDropBox_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_AirDropBox_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_AirDropBox.BP_AirDropBox_C.DistanceScalerChangedEvent
struct ABP_AirDropBox_C_DistanceScalerChangedEvent_Params
{
	float*                                             Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AirDropBox.BP_AirDropBox_C.ReceiveTick
struct ABP_AirDropBox_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AirDropBox.BP_AirDropBox_C.BndEvt__Box1_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_AirDropBox_C_BndEvt__Box1_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_AirDropBox.BP_AirDropBox_C.ChangeAirdropAppearance
struct ABP_AirDropBox_C_ChangeAirdropAppearance_Params
{
};

// Function BP_AirDropBox.BP_AirDropBox_C.ExecuteUbergraph_BP_AirDropBox
struct ABP_AirDropBox_C_ExecuteUbergraph_BP_AirDropBox_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
