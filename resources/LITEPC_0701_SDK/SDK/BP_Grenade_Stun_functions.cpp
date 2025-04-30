
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

// Function BP_Grenade_Stun.BP_Grenade_Stun_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Grenade_Stun_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Stun.BP_Grenade_Stun_C.UserConstructionScript");

	ABP_Grenade_Stun_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Stun.BP_Grenade_Stun_C.ExplodeLocal
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Grenade_Stun_C::ExplodeLocal()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Stun.BP_Grenade_Stun_C.ExplodeLocal");

	ABP_Grenade_Stun_C_ExplodeLocal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Stun.BP_Grenade_Stun_C.BndEvt__DelayFlyProjMovement_K2Node_ComponentBoundEvent_1_ActorComponentActivatedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UActorComponent*         Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bReset                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Grenade_Stun_C::BndEvt__DelayFlyProjMovement_K2Node_ComponentBoundEvent_1_ActorComponentActivatedSignature__DelegateSignature(class UActorComponent* Component, bool bReset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Stun.BP_Grenade_Stun_C.BndEvt__DelayFlyProjMovement_K2Node_ComponentBoundEvent_1_ActorComponentActivatedSignature__DelegateSignature");

	ABP_Grenade_Stun_C_BndEvt__DelayFlyProjMovement_K2Node_ComponentBoundEvent_1_ActorComponentActivatedSignature__DelegateSignature_Params params;
	params.Component = Component;
	params.bReset = bReset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Stun.BP_Grenade_Stun_C.InitLifeSpan
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Grenade_Stun_C::InitLifeSpan()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Stun.BP_Grenade_Stun_C.InitLifeSpan");

	ABP_Grenade_Stun_C_InitLifeSpan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Stun.BP_Grenade_Stun_C.BndEvt__DelayFlyProjMovement_K2Node_ComponentBoundEvent_1_ActorComponentDeactivateSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UActorComponent*         Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Grenade_Stun_C::BndEvt__DelayFlyProjMovement_K2Node_ComponentBoundEvent_1_ActorComponentDeactivateSignature__DelegateSignature(class UActorComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Stun.BP_Grenade_Stun_C.BndEvt__DelayFlyProjMovement_K2Node_ComponentBoundEvent_1_ActorComponentDeactivateSignature__DelegateSignature");

	ABP_Grenade_Stun_C_BndEvt__DelayFlyProjMovement_K2Node_ComponentBoundEvent_1_ActorComponentDeactivateSignature__DelegateSignature_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Stun.BP_Grenade_Stun_C.CheckTimeOut
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Grenade_Stun_C::CheckTimeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Stun.BP_Grenade_Stun_C.CheckTimeOut");

	ABP_Grenade_Stun_C_CheckTimeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Stun.BP_Grenade_Stun_C.ExecuteUbergraph_BP_Grenade_Stun
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Grenade_Stun_C::ExecuteUbergraph_BP_Grenade_Stun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Stun.BP_Grenade_Stun_C.ExecuteUbergraph_BP_Grenade_Stun");

	ABP_Grenade_Stun_C_ExecuteUbergraph_BP_Grenade_Stun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
