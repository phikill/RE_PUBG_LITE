
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

// Function BP_Grenade_Shoulei.BP_Grenade_Shoulei_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Grenade_Shoulei_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Shoulei.BP_Grenade_Shoulei_C.UserConstructionScript");

	ABP_Grenade_Shoulei_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Shoulei.BP_Grenade_Shoulei_C.ExplodeLocal
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Grenade_Shoulei_C::ExplodeLocal()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Shoulei.BP_Grenade_Shoulei_C.ExplodeLocal");

	ABP_Grenade_Shoulei_C_ExplodeLocal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Shoulei.BP_Grenade_Shoulei_C.InitLifeSpan
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Grenade_Shoulei_C::InitLifeSpan()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Shoulei.BP_Grenade_Shoulei_C.InitLifeSpan");

	ABP_Grenade_Shoulei_C_InitLifeSpan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Shoulei.BP_Grenade_Shoulei_C.BndEvt__DelayFlyProjMovement_K2Node_ComponentBoundEvent_1_ActorComponentActivatedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UActorComponent*         Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bReset                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Grenade_Shoulei_C::BndEvt__DelayFlyProjMovement_K2Node_ComponentBoundEvent_1_ActorComponentActivatedSignature__DelegateSignature(class UActorComponent* Component, bool bReset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Shoulei.BP_Grenade_Shoulei_C.BndEvt__DelayFlyProjMovement_K2Node_ComponentBoundEvent_1_ActorComponentActivatedSignature__DelegateSignature");

	ABP_Grenade_Shoulei_C_BndEvt__DelayFlyProjMovement_K2Node_ComponentBoundEvent_1_ActorComponentActivatedSignature__DelegateSignature_Params params;
	params.Component = Component;
	params.bReset = bReset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Shoulei.BP_Grenade_Shoulei_C.BndEvt__DelayFlyProjMovement_K2Node_ComponentBoundEvent_0_ActorComponentDeactivateSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UActorComponent*         Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Grenade_Shoulei_C::BndEvt__DelayFlyProjMovement_K2Node_ComponentBoundEvent_0_ActorComponentDeactivateSignature__DelegateSignature(class UActorComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Shoulei.BP_Grenade_Shoulei_C.BndEvt__DelayFlyProjMovement_K2Node_ComponentBoundEvent_0_ActorComponentDeactivateSignature__DelegateSignature");

	ABP_Grenade_Shoulei_C_BndEvt__DelayFlyProjMovement_K2Node_ComponentBoundEvent_0_ActorComponentDeactivateSignature__DelegateSignature_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Shoulei.BP_Grenade_Shoulei_C.SetProjectileProperties
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Grenade_Shoulei_C::SetProjectileProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Shoulei.BP_Grenade_Shoulei_C.SetProjectileProperties");

	ABP_Grenade_Shoulei_C_SetProjectileProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Shoulei.BP_Grenade_Shoulei_C.ExecuteUbergraph_BP_Grenade_Shoulei
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Grenade_Shoulei_C::ExecuteUbergraph_BP_Grenade_Shoulei(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Shoulei.BP_Grenade_Shoulei_C.ExecuteUbergraph_BP_Grenade_Shoulei");

	ABP_Grenade_Shoulei_C_ExecuteUbergraph_BP_Grenade_Shoulei_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
