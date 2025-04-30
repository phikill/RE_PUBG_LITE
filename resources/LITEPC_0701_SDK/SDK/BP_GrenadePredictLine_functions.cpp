
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

// Function BP_GrenadePredictLine.BP_GrenadePredictLine_C.GetPredictedLineSTartPositionAndVelocity
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 StartPosition                  (Parm, OutParm, IsPlainOldData)
// struct FVector                 StartVelocity                  (Parm, OutParm, IsPlainOldData)

void ABP_GrenadePredictLine_C::GetPredictedLineSTartPositionAndVelocity(struct FVector* StartPosition, struct FVector* StartVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GrenadePredictLine.BP_GrenadePredictLine_C.GetPredictedLineSTartPositionAndVelocity");

	ABP_GrenadePredictLine_C_GetPredictedLineSTartPositionAndVelocity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StartPosition != nullptr)
		*StartPosition = params.StartPosition;
	if (StartVelocity != nullptr)
		*StartVelocity = params.StartVelocity;
}


// Function BP_GrenadePredictLine.BP_GrenadePredictLine_C.SetSplineMeshMatParams
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         PredictTailPoints              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_GrenadePredictLine_C::SetSplineMeshMatParams(TArray<struct FVector>* PredictTailPoints)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GrenadePredictLine.BP_GrenadePredictLine_C.SetSplineMeshMatParams");

	ABP_GrenadePredictLine_C_SetSplineMeshMatParams_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PredictTailPoints != nullptr)
		*PredictTailPoints = params.PredictTailPoints;
}


// Function BP_GrenadePredictLine.BP_GrenadePredictLine_C.GetPositionByThrowMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Input                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Output                         (Parm, OutParm, IsPlainOldData)

void ABP_GrenadePredictLine_C::GetPositionByThrowMode(const struct FVector& Input, struct FVector* Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GrenadePredictLine.BP_GrenadePredictLine_C.GetPositionByThrowMode");

	ABP_GrenadePredictLine_C_GetPositionByThrowMode_Params params;
	params.Input = Input;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function BP_GrenadePredictLine.BP_GrenadePredictLine_C.DrawSplineMeshes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_GrenadePredictLine_C::DrawSplineMeshes()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GrenadePredictLine.BP_GrenadePredictLine_C.DrawSplineMeshes");

	ABP_GrenadePredictLine_C_DrawSplineMeshes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GrenadePredictLine.BP_GrenadePredictLine_C.UpdateSplineBase
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           isHit                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GrenadePredictLine_C::UpdateSplineBase(const struct FVector& Location, const struct FRotator& Rotation, bool isHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GrenadePredictLine.BP_GrenadePredictLine_C.UpdateSplineBase");

	ABP_GrenadePredictLine_C_UpdateSplineBase_Params params;
	params.Location = Location;
	params.Rotation = Rotation;
	params.isHit = isHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GrenadePredictLine.BP_GrenadePredictLine_C.CleanupSplineMeshes
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GrenadePredictLine_C::CleanupSplineMeshes()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GrenadePredictLine.BP_GrenadePredictLine_C.CleanupSplineMeshes");

	ABP_GrenadePredictLine_C_CleanupSplineMeshes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GrenadePredictLine.BP_GrenadePredictLine_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_GrenadePredictLine_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GrenadePredictLine.BP_GrenadePredictLine_C.UserConstructionScript");

	ABP_GrenadePredictLine_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GrenadePredictLine.BP_GrenadePredictLine_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_GrenadePredictLine_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GrenadePredictLine.BP_GrenadePredictLine_C.ReceiveBeginPlay");

	ABP_GrenadePredictLine_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GrenadePredictLine.BP_GrenadePredictLine_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GrenadePredictLine_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GrenadePredictLine.BP_GrenadePredictLine_C.ReceiveTick");

	ABP_GrenadePredictLine_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GrenadePredictLine.BP_GrenadePredictLine_C.NotifyUpdateSpline
// (BlueprintCallable, BlueprintEvent)

void ABP_GrenadePredictLine_C::NotifyUpdateSpline()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GrenadePredictLine.BP_GrenadePredictLine_C.NotifyUpdateSpline");

	ABP_GrenadePredictLine_C_NotifyUpdateSpline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GrenadePredictLine.BP_GrenadePredictLine_C.ExecuteUbergraph_BP_GrenadePredictLine
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GrenadePredictLine_C::ExecuteUbergraph_BP_GrenadePredictLine(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GrenadePredictLine.BP_GrenadePredictLine_C.ExecuteUbergraph_BP_GrenadePredictLine");

	ABP_GrenadePredictLine_C_ExecuteUbergraph_BP_GrenadePredictLine_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
