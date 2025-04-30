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

// Function BP_GrenadePredictLine.BP_GrenadePredictLine_C.GetPredictedLineSTartPositionAndVelocity
struct ABP_GrenadePredictLine_C_GetPredictedLineSTartPositionAndVelocity_Params
{
	struct FVector                                     StartPosition;                                            // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     StartVelocity;                                            // (Parm, OutParm, IsPlainOldData)
};

// Function BP_GrenadePredictLine.BP_GrenadePredictLine_C.SetSplineMeshMatParams
struct ABP_GrenadePredictLine_C_SetSplineMeshMatParams_Params
{
	TArray<struct FVector>                             PredictTailPoints;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_GrenadePredictLine.BP_GrenadePredictLine_C.GetPositionByThrowMode
struct ABP_GrenadePredictLine_C_GetPositionByThrowMode_Params
{
	struct FVector                                     Input;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Output;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function BP_GrenadePredictLine.BP_GrenadePredictLine_C.DrawSplineMeshes
struct ABP_GrenadePredictLine_C_DrawSplineMeshes_Params
{
};

// Function BP_GrenadePredictLine.BP_GrenadePredictLine_C.UpdateSplineBase
struct ABP_GrenadePredictLine_C_UpdateSplineBase_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               isHit;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GrenadePredictLine.BP_GrenadePredictLine_C.CleanupSplineMeshes
struct ABP_GrenadePredictLine_C_CleanupSplineMeshes_Params
{
};

// Function BP_GrenadePredictLine.BP_GrenadePredictLine_C.UserConstructionScript
struct ABP_GrenadePredictLine_C_UserConstructionScript_Params
{
};

// Function BP_GrenadePredictLine.BP_GrenadePredictLine_C.ReceiveBeginPlay
struct ABP_GrenadePredictLine_C_ReceiveBeginPlay_Params
{
};

// Function BP_GrenadePredictLine.BP_GrenadePredictLine_C.ReceiveTick
struct ABP_GrenadePredictLine_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GrenadePredictLine.BP_GrenadePredictLine_C.NotifyUpdateSpline
struct ABP_GrenadePredictLine_C_NotifyUpdateSpline_Params
{
};

// Function BP_GrenadePredictLine.BP_GrenadePredictLine_C.ExecuteUbergraph_BP_GrenadePredictLine
struct ABP_GrenadePredictLine_C_ExecuteUbergraph_BP_GrenadePredictLine_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
