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

// Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.GetGroundLocation
struct APlayerDeadInventoryBox_C_GetGroundLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.GetVector4
struct APlayerDeadInventoryBox_C_GetVector4_Params
{
	struct FVector                                     Dest;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Ratio;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.UserConstructionScript
struct APlayerDeadInventoryBox_C_UserConstructionScript_Params
{
};

// Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.CameraMove__FinishedFunc
struct APlayerDeadInventoryBox_C_CameraMove__FinishedFunc_Params
{
};

// Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.CameraMove__UpdateFunc
struct APlayerDeadInventoryBox_C_CameraMove__UpdateFunc_Params
{
};

// Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.MatParamTimeline__FinishedFunc
struct APlayerDeadInventoryBox_C_MatParamTimeline__FinishedFunc_Params
{
};

// Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.MatParamTimeline__UpdateFunc
struct APlayerDeadInventoryBox_C_MatParamTimeline__UpdateFunc_Params
{
};

// Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.PitchTimeline__FinishedFunc
struct APlayerDeadInventoryBox_C_PitchTimeline__FinishedFunc_Params
{
};

// Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.PitchTimeline__UpdateFunc
struct APlayerDeadInventoryBox_C_PitchTimeline__UpdateFunc_Params
{
};

// Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.ShowShine
struct APlayerDeadInventoryBox_C_ShowShine_Params
{
};

// Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.ShowNormal
struct APlayerDeadInventoryBox_C_ShowNormal_Params
{
};

// Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct APlayerDeadInventoryBox_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct APlayerDeadInventoryBox_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.ReceiveBeginPlay
struct APlayerDeadInventoryBox_C_ReceiveBeginPlay_Params
{
};

// Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.SwitchToDeadTombBox
struct APlayerDeadInventoryBox_C_SwitchToDeadTombBox_Params
{
};

// Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.HideDeadTombApparence
struct APlayerDeadInventoryBox_C_HideDeadTombApparence_Params
{
};

// Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.ExecuteUbergraph_PlayerDeadInventoryBox
struct APlayerDeadInventoryBox_C_ExecuteUbergraph_PlayerDeadInventoryBox_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
