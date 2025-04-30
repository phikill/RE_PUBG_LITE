
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

// Function FPPComponent.FPPComponent_C.GetScopeCameraAttachTarget
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMeshComponent*          NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFPPComponent_C::GetScopeCameraAttachTarget(class UMeshComponent** NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function FPPComponent.FPPComponent_C.GetScopeCameraAttachTarget");

	UFPPComponent_C_GetScopeCameraAttachTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function FPPComponent.FPPComponent_C.GetScopeFov
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASTExtraShootWeapon**    shootWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UFPPComponent_C::GetScopeFov(class ASTExtraShootWeapon** shootWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function FPPComponent.FPPComponent_C.GetScopeFov");

	UFPPComponent_C_GetScopeFov_Params params;
	params.shootWeapon = shootWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FPPComponent.FPPComponent_C.GetScopeFovBP
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ASTExtraShootWeapon*     Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          FOV                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFPPComponent_C::GetScopeFovBP(class ASTExtraShootWeapon* Weapon, float* FOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function FPPComponent.FPPComponent_C.GetScopeFovBP");

	UFPPComponent_C_GetScopeFovBP_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FOV != nullptr)
		*FOV = params.FOV;
}


// Function FPPComponent.FPPComponent_C.SetTagCullingBP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsUse                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFPPComponent_C::SetTagCullingBP(bool IsUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function FPPComponent.FPPComponent_C.SetTagCullingBP");

	UFPPComponent_C_SetTagCullingBP_Params params;
	params.IsUse = IsUse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FPPComponent.FPPComponent_C.requestResourceGuarantee
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InOrOut                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ELoadMode>         loadMode                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EApplyStatus>      applyStatus                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFPPComponent_C::requestResourceGuarantee(int InOrOut, TEnumAsByte<ELoadMode> loadMode, TEnumAsByte<EApplyStatus> applyStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function FPPComponent.FPPComponent_C.requestResourceGuarantee");

	UFPPComponent_C_requestResourceGuarantee_Params params;
	params.InOrOut = InOrOut;
	params.loadMode = loadMode;
	params.applyStatus = applyStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FPPComponent.FPPComponent_C.ReloadEvent
// (BlueprintCallable, BlueprintEvent)

void UFPPComponent_C::ReloadEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function FPPComponent.FPPComponent_C.ReloadEvent");

	UFPPComponent_C_ReloadEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FPPComponent.FPPComponent_C.SetTagCulling
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          IsUse                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFPPComponent_C::SetTagCulling(bool* IsUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function FPPComponent.FPPComponent_C.SetTagCulling");

	UFPPComponent_C_SetTagCulling_Params params;
	params.IsUse = IsUse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FPPComponent.FPPComponent_C.PlayScopeInTimeline
// (Event, Protected, BlueprintEvent)

void UFPPComponent_C::PlayScopeInTimeline()
{
	static auto fn = UObject::FindObject<UFunction>("Function FPPComponent.FPPComponent_C.PlayScopeInTimeline");

	UFPPComponent_C_PlayScopeInTimeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FPPComponent.FPPComponent_C.ScopeInEnd
// (Event, Protected, BlueprintEvent)

void UFPPComponent_C::ScopeInEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function FPPComponent.FPPComponent_C.ScopeInEnd");

	UFPPComponent_C_ScopeInEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FPPComponent.FPPComponent_C.ScopeOutEnd
// (Event, Protected, BlueprintEvent)

void UFPPComponent_C::ScopeOutEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function FPPComponent.FPPComponent_C.ScopeOutEnd");

	UFPPComponent_C_ScopeOutEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FPPComponent.FPPComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFPPComponent_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function FPPComponent.FPPComponent_C.ReceiveTick");

	UFPPComponent_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FPPComponent.FPPComponent_C.StopScopeIn
// (Event, Protected, BlueprintEvent)

void UFPPComponent_C::StopScopeIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function FPPComponent.FPPComponent_C.StopScopeIn");

	UFPPComponent_C_StopScopeIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FPPComponent.FPPComponent_C.AttachToSight
// (Event, Protected, BlueprintEvent)

void UFPPComponent_C::AttachToSight()
{
	static auto fn = UObject::FindObject<UFunction>("Function FPPComponent.FPPComponent_C.AttachToSight");

	UFPPComponent_C_AttachToSight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FPPComponent.FPPComponent_C.AttachTo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFPPComponent_C::AttachTo(class USceneComponent* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function FPPComponent.FPPComponent_C.AttachTo");

	UFPPComponent_C_AttachTo_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FPPComponent.FPPComponent_C.Detach
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFPPComponent_C::Detach(class USceneComponent* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function FPPComponent.FPPComponent_C.Detach");

	UFPPComponent_C_Detach_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FPPComponent.FPPComponent_C.StopScopeOut
// (Event, Protected, BlueprintEvent)

void UFPPComponent_C::StopScopeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function FPPComponent.FPPComponent_C.StopScopeOut");

	UFPPComponent_C_StopScopeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FPPComponent.FPPComponent_C.ExecuteUbergraph_FPPComponent
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFPPComponent_C::ExecuteUbergraph_FPPComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FPPComponent.FPPComponent_C.ExecuteUbergraph_FPPComponent");

	UFPPComponent_C_ExecuteUbergraph_FPPComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
