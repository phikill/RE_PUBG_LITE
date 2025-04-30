
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

// Function BP_Grenade_Smoke.BP_Grenade_Smoke_C.TimeOver
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Grenade_Smoke_C::TimeOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Smoke.BP_Grenade_Smoke_C.TimeOver");

	ABP_Grenade_Smoke_C_TimeOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Smoke.BP_Grenade_Smoke_C.SetRotationPivotOnGround
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Grenade_Smoke_C::SetRotationPivotOnGround()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Smoke.BP_Grenade_Smoke_C.SetRotationPivotOnGround");

	ABP_Grenade_Smoke_C_SetRotationPivotOnGround_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Smoke.BP_Grenade_Smoke_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Grenade_Smoke_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Smoke.BP_Grenade_Smoke_C.UserConstructionScript");

	ABP_Grenade_Smoke_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Smoke.BP_Grenade_Smoke_C.ExplodeLocal
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Grenade_Smoke_C::ExplodeLocal()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Smoke.BP_Grenade_Smoke_C.ExplodeLocal");

	ABP_Grenade_Smoke_C_ExplodeLocal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Smoke.BP_Grenade_Smoke_C.InitLifeSpan
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Grenade_Smoke_C::InitLifeSpan()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Smoke.BP_Grenade_Smoke_C.InitLifeSpan");

	ABP_Grenade_Smoke_C_InitLifeSpan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Smoke.BP_Grenade_Smoke_C.BndEvt__DelayFlyProjMovement_K2Node_ComponentBoundEvent_1_ActorComponentActivatedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UActorComponent*         Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bReset                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Grenade_Smoke_C::BndEvt__DelayFlyProjMovement_K2Node_ComponentBoundEvent_1_ActorComponentActivatedSignature__DelegateSignature(class UActorComponent* Component, bool bReset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Smoke.BP_Grenade_Smoke_C.BndEvt__DelayFlyProjMovement_K2Node_ComponentBoundEvent_1_ActorComponentActivatedSignature__DelegateSignature");

	ABP_Grenade_Smoke_C_BndEvt__DelayFlyProjMovement_K2Node_ComponentBoundEvent_1_ActorComponentActivatedSignature__DelegateSignature_Params params;
	params.Component = Component;
	params.bReset = bReset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Smoke.BP_Grenade_Smoke_C.CheckWhetherThrowedOut
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Grenade_Smoke_C::CheckWhetherThrowedOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Smoke.BP_Grenade_Smoke_C.CheckWhetherThrowedOut");

	ABP_Grenade_Smoke_C_CheckWhetherThrowedOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Smoke.BP_Grenade_Smoke_C.BndEvt__DelayFlyProjMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             ImpactResult                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Grenade_Smoke_C::BndEvt__DelayFlyProjMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature(struct FHitResult* ImpactResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Smoke.BP_Grenade_Smoke_C.BndEvt__DelayFlyProjMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature");

	ABP_Grenade_Smoke_C_BndEvt__DelayFlyProjMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature_Params params;
	params.ImpactResult = ImpactResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Smoke.BP_Grenade_Smoke_C.OnSmokeDeactivate
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Grenade_Smoke_C::OnSmokeDeactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Smoke.BP_Grenade_Smoke_C.OnSmokeDeactivate");

	ABP_Grenade_Smoke_C_OnSmokeDeactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Smoke.BP_Grenade_Smoke_C.OnCheckExplosion
// (BlueprintCallable, BlueprintEvent)

void ABP_Grenade_Smoke_C::OnCheckExplosion()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Smoke.BP_Grenade_Smoke_C.OnCheckExplosion");

	ABP_Grenade_Smoke_C_OnCheckExplosion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Smoke.BP_Grenade_Smoke_C.ExecuteUbergraph_BP_Grenade_Smoke
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Grenade_Smoke_C::ExecuteUbergraph_BP_Grenade_Smoke(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Smoke.BP_Grenade_Smoke_C.ExecuteUbergraph_BP_Grenade_Smoke");

	ABP_Grenade_Smoke_C_ExecuteUbergraph_BP_Grenade_Smoke_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
