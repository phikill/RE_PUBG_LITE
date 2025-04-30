
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

// Function BP_Grenade_Base.BP_Grenade_Base_C.SetProjectileProperties
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Grenade_Base_C::SetProjectileProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Base.BP_Grenade_Base_C.SetProjectileProperties");

	ABP_Grenade_Base_C_SetProjectileProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Base.BP_Grenade_Base_C.StopSkill
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Grenade_Base_C::StopSkill()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Base.BP_Grenade_Base_C.StopSkill");

	ABP_Grenade_Base_C_StopSkill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Base.BP_Grenade_Base_C.SwitchWeapon
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Grenade_Base_C::SwitchWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Base.BP_Grenade_Base_C.SwitchWeapon");

	ABP_Grenade_Base_C_SwitchWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Base.BP_Grenade_Base_C.ThrowGrenade
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Grenade_Base_C::ThrowGrenade()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Base.BP_Grenade_Base_C.ThrowGrenade");

	ABP_Grenade_Base_C_ThrowGrenade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Base.BP_Grenade_Base_C.callvoicecheck
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Grenade_Base_C::callvoicecheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Base.BP_Grenade_Base_C.callvoicecheck");

	ABP_Grenade_Base_C_callvoicecheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Base.BP_Grenade_Base_C.GetRandomStartAngle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Grenade_Base_C::GetRandomStartAngle(int* Ret)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Base.BP_Grenade_Base_C.GetRandomStartAngle");

	ABP_Grenade_Base_C_GetRandomStartAngle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function BP_Grenade_Base.BP_Grenade_Base_C.GetCurRotation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRotator                Ret                            (Parm, OutParm, IsPlainOldData)

void ABP_Grenade_Base_C::GetCurRotation(struct FRotator* Ret)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Base.BP_Grenade_Base_C.GetCurRotation");

	ABP_Grenade_Base_C_GetCurRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function BP_Grenade_Base.BP_Grenade_Base_C.HandleLifeEnd
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Grenade_Base_C::HandleLifeEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Base.BP_Grenade_Base_C.HandleLifeEnd");

	ABP_Grenade_Base_C_HandleLifeEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Base.BP_Grenade_Base_C.InitLifeSpan
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Grenade_Base_C::InitLifeSpan()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Base.BP_Grenade_Base_C.InitLifeSpan");

	ABP_Grenade_Base_C_InitLifeSpan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Base.BP_Grenade_Base_C.StartFly
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Velocity                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           isThrowHigh                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Grenade_Base_C::StartFly(const struct FVector& Velocity, bool isThrowHigh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Base.BP_Grenade_Base_C.StartFly");

	ABP_Grenade_Base_C_StartFly_Params params;
	params.Velocity = Velocity;
	params.isThrowHigh = isThrowHigh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Base.BP_Grenade_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Grenade_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Base.BP_Grenade_Base_C.UserConstructionScript");

	ABP_Grenade_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Base.BP_Grenade_Base_C.HandleSkillEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            SkillID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EUTSkillStopReason             Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Grenade_Base_C::HandleSkillEnd(int SkillID, EUTSkillStopReason Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Base.BP_Grenade_Base_C.HandleSkillEnd");

	ABP_Grenade_Base_C_HandleSkillEnd_Params params;
	params.SkillID = SkillID;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Base.BP_Grenade_Base_C.HandleSkillStart
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            SkillID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Grenade_Base_C::HandleSkillStart(int SkillID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Base.BP_Grenade_Base_C.HandleSkillStart");

	ABP_Grenade_Base_C_HandleSkillStart_Params params;
	params.SkillID = SkillID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Base.BP_Grenade_Base_C.TriggerEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            SkillID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EUTSkillEventType> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Grenade_Base_C::TriggerEvent(int SkillID, TEnumAsByte<EUTSkillEventType> EventType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Base.BP_Grenade_Base_C.TriggerEvent");

	ABP_Grenade_Base_C_TriggerEvent_Params params;
	params.SkillID = SkillID;
	params.EventType = EventType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Base.BP_Grenade_Base_C.TriggerCustomEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EUAESkillEvent>    EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Grenade_Base_C::TriggerCustomEvent(TEnumAsByte<EUAESkillEvent> EventType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Base.BP_Grenade_Base_C.TriggerCustomEvent");

	ABP_Grenade_Base_C_TriggerCustomEvent_Params params;
	params.EventType = EventType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Base.BP_Grenade_Base_C.TriggerEntryEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// EUTSkillEntry                  EntryEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Grenade_Base_C::TriggerEntryEvent(EUTSkillEntry EntryEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Base.BP_Grenade_Base_C.TriggerEntryEvent");

	ABP_Grenade_Base_C_TriggerEntryEvent_Params params;
	params.EntryEvent = EntryEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Base.BP_Grenade_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Grenade_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Base.BP_Grenade_Base_C.ReceiveBeginPlay");

	ABP_Grenade_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Base.BP_Grenade_Base_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Grenade_Base_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Base.BP_Grenade_Base_C.ReceiveTick");

	ABP_Grenade_Base_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Base.BP_Grenade_Base_C.InitFromSkill
// (Event, Public, BlueprintEvent)
// Parameters:
// class AUAESkill*               SkillOwner                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Grenade_Base_C::InitFromSkill(class AUAESkill* SkillOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Base.BP_Grenade_Base_C.InitFromSkill");

	ABP_Grenade_Base_C_InitFromSkill_Params params;
	params.SkillOwner = SkillOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Base.BP_Grenade_Base_C.SkillEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EUAESkillEvent>    SkillEventType                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Grenade_Base_C::SkillEvent(TEnumAsByte<EUAESkillEvent> SkillEventType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Base.BP_Grenade_Base_C.SkillEvent");

	ABP_Grenade_Base_C_SkillEvent_Params params;
	params.SkillEventType = SkillEventType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Base.BP_Grenade_Base_C.StartFlyMulticast
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 InitVelocity                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           isThrowHigh                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Grenade_Base_C::StartFlyMulticast(const struct FVector& InitVelocity, bool isThrowHigh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Base.BP_Grenade_Base_C.StartFlyMulticast");

	ABP_Grenade_Base_C_StartFlyMulticast_Params params;
	params.InitVelocity = InitVelocity;
	params.isThrowHigh = isThrowHigh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Base.BP_Grenade_Base_C.BndEvt__DelayFlyProjMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 ImpactVelocity                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Grenade_Base_C::BndEvt__DelayFlyProjMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Base.BP_Grenade_Base_C.BndEvt__DelayFlyProjMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature");

	ABP_Grenade_Base_C_BndEvt__DelayFlyProjMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature_Params params;
	params.ImpactResult = ImpactResult;
	params.ImpactVelocity = ImpactVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Base.BP_Grenade_Base_C.BndEvt__DelayFlyProjMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Grenade_Base_C::BndEvt__DelayFlyProjMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature(const struct FHitResult& ImpactResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Base.BP_Grenade_Base_C.BndEvt__DelayFlyProjMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature");

	ABP_Grenade_Base_C_BndEvt__DelayFlyProjMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature_Params params;
	params.ImpactResult = ImpactResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Base.BP_Grenade_Base_C.DettachFromOwner
// (BlueprintCallable, BlueprintEvent)

void ABP_Grenade_Base_C::DettachFromOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Base.BP_Grenade_Base_C.DettachFromOwner");

	ABP_Grenade_Base_C_DettachFromOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Base.BP_Grenade_Base_C.AlignToSurface
// (BlueprintCallable, BlueprintEvent)

void ABP_Grenade_Base_C::AlignToSurface()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Base.BP_Grenade_Base_C.AlignToSurface");

	ABP_Grenade_Base_C_AlignToSurface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Base.BP_Grenade_Base_C.HandleOnOverlap
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Grenade_Base_C::HandleOnOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Base.BP_Grenade_Base_C.HandleOnOverlap");

	ABP_Grenade_Base_C_HandleOnOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Base.BP_Grenade_Base_C.DelayedOverlapCheck
// (BlueprintCallable, BlueprintEvent)

void ABP_Grenade_Base_C::DelayedOverlapCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Base.BP_Grenade_Base_C.DelayedOverlapCheck");

	ABP_Grenade_Base_C_DelayedOverlapCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Base.BP_Grenade_Base_C.CheckCapsuleOverlap
// (BlueprintCallable, BlueprintEvent)

void ABP_Grenade_Base_C::CheckCapsuleOverlap()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Base.BP_Grenade_Base_C.CheckCapsuleOverlap");

	ABP_Grenade_Base_C_CheckCapsuleOverlap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Base.BP_Grenade_Base_C.OnSkillEvent_Remote
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EUAESkillEvent>    SkillEventType                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Grenade_Base_C::OnSkillEvent_Remote(TEnumAsByte<EUAESkillEvent> SkillEventType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Base.BP_Grenade_Base_C.OnSkillEvent_Remote");

	ABP_Grenade_Base_C_OnSkillEvent_Remote_Params params;
	params.SkillEventType = SkillEventType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Base.BP_Grenade_Base_C.Timeout
// (BlueprintCallable, BlueprintEvent)

void ABP_Grenade_Base_C::Timeout()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Base.BP_Grenade_Base_C.Timeout");

	ABP_Grenade_Base_C_Timeout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Base.BP_Grenade_Base_C.OnTimeoutRemote
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_Grenade_Base_C::OnTimeoutRemote()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Base.BP_Grenade_Base_C.OnTimeoutRemote");

	ABP_Grenade_Base_C_OnTimeoutRemote_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Base.BP_Grenade_Base_C.ExecuteUbergraph_BP_Grenade_Base
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Grenade_Base_C::ExecuteUbergraph_BP_Grenade_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Base.BP_Grenade_Base_C.ExecuteUbergraph_BP_Grenade_Base");

	ABP_Grenade_Base_C_ExecuteUbergraph_BP_Grenade_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Base.BP_Grenade_Base_C.OnTimeout__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_Grenade_Base_C::OnTimeout__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Base.BP_Grenade_Base_C.OnTimeout__DelegateSignature");

	ABP_Grenade_Base_C_OnTimeout__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
