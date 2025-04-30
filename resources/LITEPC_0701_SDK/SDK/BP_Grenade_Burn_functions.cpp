
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

// Function BP_Grenade_Burn.BP_Grenade_Burn_C.ExplodeClientEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Grenade_Burn_C::ExplodeClientEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Burn.BP_Grenade_Burn_C.ExplodeClientEffect");

	ABP_Grenade_Burn_C_ExplodeClientEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Burn.BP_Grenade_Burn_C.GetHitSurfaceNormal
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Grenade_Burn_C::GetHitSurfaceNormal()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Burn.BP_Grenade_Burn_C.GetHitSurfaceNormal");

	ABP_Grenade_Burn_C_GetHitSurfaceNormal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Burn.BP_Grenade_Burn_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Grenade_Burn_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Burn.BP_Grenade_Burn_C.UserConstructionScript");

	ABP_Grenade_Burn_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Burn.BP_Grenade_Burn_C.ExplodeLocal
// (BlueprintCallable, BlueprintEvent)

void ABP_Grenade_Burn_C::ExplodeLocal()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Burn.BP_Grenade_Burn_C.ExplodeLocal");

	ABP_Grenade_Burn_C_ExplodeLocal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Burn.BP_Grenade_Burn_C.BndEvt__DelayFlyProjMovement_K2Node_ComponentBoundEvent_1_ActorComponentActivatedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UActorComponent*         Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bReset                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Grenade_Burn_C::BndEvt__DelayFlyProjMovement_K2Node_ComponentBoundEvent_1_ActorComponentActivatedSignature__DelegateSignature(class UActorComponent* Component, bool bReset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Burn.BP_Grenade_Burn_C.BndEvt__DelayFlyProjMovement_K2Node_ComponentBoundEvent_1_ActorComponentActivatedSignature__DelegateSignature");

	ABP_Grenade_Burn_C_BndEvt__DelayFlyProjMovement_K2Node_ComponentBoundEvent_1_ActorComponentActivatedSignature__DelegateSignature_Params params;
	params.Component = Component;
	params.bReset = bReset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Burn.BP_Grenade_Burn_C.InitLifeSpan
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Grenade_Burn_C::InitLifeSpan()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Burn.BP_Grenade_Burn_C.InitLifeSpan");

	ABP_Grenade_Burn_C_InitLifeSpan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Burn.BP_Grenade_Burn_C.BndEvt__DelayFlyProjMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             ImpactResult                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Grenade_Burn_C::BndEvt__DelayFlyProjMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature(struct FHitResult* ImpactResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Burn.BP_Grenade_Burn_C.BndEvt__DelayFlyProjMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature");

	ABP_Grenade_Burn_C_BndEvt__DelayFlyProjMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature_Params params;
	params.ImpactResult = ImpactResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Burn.BP_Grenade_Burn_C.BndEvt__DelayFlyProjMovement_K2Node_ComponentBoundEvent_0_OnTouchedWaterDelegate__DelegateSignature
// (BlueprintEvent)

void ABP_Grenade_Burn_C::BndEvt__DelayFlyProjMovement_K2Node_ComponentBoundEvent_0_OnTouchedWaterDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Burn.BP_Grenade_Burn_C.BndEvt__DelayFlyProjMovement_K2Node_ComponentBoundEvent_0_OnTouchedWaterDelegate__DelegateSignature");

	ABP_Grenade_Burn_C_BndEvt__DelayFlyProjMovement_K2Node_ComponentBoundEvent_0_OnTouchedWaterDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Burn.BP_Grenade_Burn_C.StartBurning
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Grenade_Burn_C::StartBurning()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Burn.BP_Grenade_Burn_C.StartBurning");

	ABP_Grenade_Burn_C_StartBurning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Burn.BP_Grenade_Burn_C.IsServerAlreadyExplodedCppNotify
// (Event, Public, BlueprintEvent)

void ABP_Grenade_Burn_C::IsServerAlreadyExplodedCppNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Burn.BP_Grenade_Burn_C.IsServerAlreadyExplodedCppNotify");

	ABP_Grenade_Burn_C_IsServerAlreadyExplodedCppNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Burn.BP_Grenade_Burn_C.ExecuteUbergraph_BP_Grenade_Burn
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Grenade_Burn_C::ExecuteUbergraph_BP_Grenade_Burn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Burn.BP_Grenade_Burn_C.ExecuteUbergraph_BP_Grenade_Burn");

	ABP_Grenade_Burn_C_ExecuteUbergraph_BP_Grenade_Burn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
