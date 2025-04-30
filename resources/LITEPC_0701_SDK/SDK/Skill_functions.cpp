
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

// Function Skill.UTSkillEffect.UpdateAction
// (Native, Public)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillEffect::UpdateAction(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill.UTSkillEffect.UpdateAction");

	UUTSkillEffect_UpdateAction_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Skill.UTSkillEffect.UndoAction
// (Native, Public)

void UUTSkillEffect::UndoAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill.UTSkillEffect.UndoAction");

	UUTSkillEffect_UndoAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Skill.UTSkillEffect.DoHurtAppearance
// (Native, Public)
// Parameters:
// class APawn*                   Victim                         (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillEffect::DoHurtAppearance(class APawn* Victim)
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill.UTSkillEffect.DoHurtAppearance");

	UUTSkillEffect_DoHurtAppearance_Params params;
	params.Victim = Victim;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Skill.UTSkillEffect.DoAction
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillEffect::DoAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill.UTSkillEffect.DoAction");

	UUTSkillEffect_DoAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillAction.UpdateAction
// (Native, Public)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillAction::UpdateAction(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill.UTSkillAction.UpdateAction");

	UUTSkillAction_UpdateAction_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Skill.UTSkillAction.UndoAction
// (Native, Public)

void UUTSkillAction::UndoAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill.UTSkillAction.UndoAction");

	UUTSkillAction_UndoAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Skill.UTSkillAction.Reset
// (Native, Public)

void UUTSkillAction::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill.UTSkillAction.Reset");

	UUTSkillAction_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Skill.UTSkillAction.RealDoAction
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillAction::RealDoAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill.UTSkillAction.RealDoAction");

	UUTSkillAction_RealDoAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillAction.JudgeNeedPhaseWait
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillAction::JudgeNeedPhaseWait()
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill.UTSkillAction.JudgeNeedPhaseWait");

	UUTSkillAction_JudgeNeedPhaseWait_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillAction.DoAction
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillAction::DoAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill.UTSkillAction.DoAction");

	UUTSkillAction_DoAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkill.SetSkillPhasePercentage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Percentage                     (Parm, ZeroConstructor, IsPlainOldData)

void AUTSkill::SetSkillPhasePercentage(float Percentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill.UTSkill.SetSkillPhasePercentage");

	AUTSkill_SetSkillPhasePercentage_Params params;
	params.Percentage = Percentage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Skill.UTSkill.OnEvent
// (Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EUTSkillEventType> TheEventType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUTSkill::OnEvent(TEnumAsByte<EUTSkillEventType> TheEventType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill.UTSkill.OnEvent");

	AUTSkill_OnEvent_Params params;
	params.TheEventType = TheEventType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkill.GetSkillPhasePercentage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AUTSkill::GetSkillPhasePercentage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill.UTSkill.GetSkillPhasePercentage");

	AUTSkill_GetSkillPhasePercentage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkill.GetSkillPhase
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            PhaseIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// class UUTSkillPhase*           ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUTSkillPhase* AUTSkill::GetSkillPhase(int PhaseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill.UTSkill.GetSkillPhase");

	AUTSkill_GetSkillPhase_Params params;
	params.PhaseIndex = PhaseIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkill.DoSkillCoolDown
// (Native, Public, BlueprintCallable)

void AUTSkill::DoSkillCoolDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill.UTSkill.DoSkillCoolDown");

	AUTSkill_DoSkillCoolDown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Skill.UTSkill.CanBePlayed
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           bShowErrorMsg                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUTSkill::CanBePlayed(bool bShowErrorMsg)
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill.UTSkill.CanBePlayed");

	AUTSkill_CanBePlayed_Params params;
	params.bShowErrorMsg = bShowErrorMsg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillCondition.IsTargetOK
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                   Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillCondition::IsTargetOK(class APawn* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill.UTSkillCondition.IsTargetOK");

	UUTSkillCondition_IsTargetOK_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillCondition.IsOK
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillCondition::IsOK()
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill.UTSkillCondition.IsOK");

	UUTSkillCondition_IsOK_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillInterface.TriggerEvent
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EUTSkillEventType> EventType                      (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillInterface::TriggerEvent(int SkillID, TEnumAsByte<EUTSkillEventType> EventType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill.UTSkillInterface.TriggerEvent");

	UUTSkillInterface_TriggerEvent_Params params;
	params.SkillID = SkillID;
	params.EventType = EventType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Skill.UTSkillInterface.HandleSkillStart
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillInterface::HandleSkillStart(int SkillID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill.UTSkillInterface.HandleSkillStart");

	UUTSkillInterface_HandleSkillStart_Params params;
	params.SkillID = SkillID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Skill.UTSkillInterface.HandleSkillEnd
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// EUTSkillStopReason             Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillInterface::HandleSkillEnd(int SkillID, EUTSkillStopReason Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill.UTSkillInterface.HandleSkillEnd");

	UUTSkillInterface_HandleSkillEnd_Params params;
	params.SkillID = SkillID;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Skill.UTSkillPhase.TryJumpToPhase
// (Final, Native, Public)
// Parameters:
// int                            PhaseID                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillPhase::TryJumpToPhase(int PhaseID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill.UTSkillPhase.TryJumpToPhase");

	UUTSkillPhase_TryJumpToPhase_Params params;
	params.PhaseID = PhaseID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillPhase.StopPhase
// (Native, Public)

void UUTSkillPhase::StopPhase()
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill.UTSkillPhase.StopPhase");

	UUTSkillPhase_StopPhase_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Skill.UTSkillPhase.StartPhase
// (Native, Public)

void UUTSkillPhase::StartPhase()
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill.UTSkillPhase.StartPhase");

	UUTSkillPhase_StartPhase_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Skill.UTSkillPhase.RepeatPhase
// (Native, Public)

void UUTSkillPhase::RepeatPhase()
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill.UTSkillPhase.RepeatPhase");

	UUTSkillPhase_RepeatPhase_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Skill.UTSkillPhase.PlaySkillHurtEffect
// (Native, Public)
// Parameters:
// class APawn*                   Victim                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillPhase::PlaySkillHurtEffect(class APawn* Victim)
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill.UTSkillPhase.PlaySkillHurtEffect");

	UUTSkillPhase_PlaySkillHurtEffect_Params params;
	params.Victim = Victim;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillPhase.PlaySkillHurtAppearances
// (Native, Public)
// Parameters:
// class APawn*                   Victim                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillPhase::PlaySkillHurtAppearances(class APawn* Victim)
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill.UTSkillPhase.PlaySkillHurtAppearances");

	UUTSkillPhase_PlaySkillHurtAppearances_Params params;
	params.Victim = Victim;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillPhase.PickTargets
// (Native, Public)

void UUTSkillPhase::PickTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill.UTSkillPhase.PickTargets");

	UUTSkillPhase_PickTargets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Skill.UTSkillPhase.OnEvent
// (Native, Public)
// Parameters:
// TEnumAsByte<EUTSkillEventType> TheEventType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillPhase::OnEvent(TEnumAsByte<EUTSkillEventType> TheEventType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill.UTSkillPhase.OnEvent");

	UUTSkillPhase_OnEvent_Params params;
	params.TheEventType = TheEventType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillPhase.OnCustomEvent
// (Native, Public)
// Parameters:
// TEnumAsByte<EUTSkillEventType> TheEventType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillPhase::OnCustomEvent(TEnumAsByte<EUTSkillEventType> TheEventType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill.UTSkillPhase.OnCustomEvent");

	UUTSkillPhase_OnCustomEvent_Params params;
	params.TheEventType = TheEventType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillPhase.GetChargePhaseRate
// (Final, Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUTSkillPhase::GetChargePhaseRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill.UTSkillPhase.GetChargePhaseRate");

	UUTSkillPhase_GetChargePhaseRate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillPhase.ForceStopPhase
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillPhase::ForceStopPhase()
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill.UTSkillPhase.ForceStopPhase");

	UUTSkillPhase_ForceStopPhase_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillPhase.ClearAttachments
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillPhase::ClearAttachments()
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill.UTSkillPhase.ClearAttachments");

	UUTSkillPhase_ClearAttachments_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.TraceTarget
// (Native, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FVector                 StartTrace                     (Parm, IsPlainOldData)
// struct FVector                 EndTrace                       (Parm, IsPlainOldData)
// EUTPickerTargetType            TargetType                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   TargetActor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::TraceTarget(const struct FVector& StartTrace, const struct FVector& EndTrace, EUTPickerTargetType TargetType, float Radius, class APawn** TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.TraceTarget");

	UUTSkillManagerComponent_TraceTarget_Params params;
	params.StartTrace = StartTrace;
	params.EndTrace = EndTrace;
	params.TargetType = TargetType;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetActor != nullptr)
		*TargetActor = params.TargetActor;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.SwitchSkill
// (Native, Public)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EUTSkillEventType> EventType                      (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::SwitchSkill(int SkillID, TEnumAsByte<EUTSkillEventType> EventType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.SwitchSkill");

	UUTSkillManagerComponent_SwitchSkill_Params params;
	params.SkillID = SkillID;
	params.EventType = EventType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.StopSkill
// (Native, Public)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// EUTSkillStopReason             StopReason                     (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::StopSkill(int SkillID, EUTSkillStopReason StopReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.StopSkill");

	UUTSkillManagerComponent_StopSkill_Params params;
	params.SkillID = SkillID;
	params.StopReason = StopReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.ShouldTriggerEvent
// (Native, Public)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EUTSkillEventType> EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::ShouldTriggerEvent(int SkillID, TEnumAsByte<EUTSkillEventType> EventType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.ShouldTriggerEvent");

	UUTSkillManagerComponent_ShouldTriggerEvent_Params params;
	params.SkillID = SkillID;
	params.EventType = EventType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.SetCurSkill
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            SkillIndex                     (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::SetCurSkill(int SkillIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.SetCurSkill");

	UUTSkillManagerComponent_SetCurSkill_Params params;
	params.SkillIndex = SkillIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.ServerTriggerEvent
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EUTSkillEventType> EventType                      (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::ServerTriggerEvent(int SkillID, TEnumAsByte<EUTSkillEventType> EventType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.ServerTriggerEvent");

	UUTSkillManagerComponent_ServerTriggerEvent_Params params;
	params.SkillID = SkillID;
	params.EventType = EventType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.ServerStartSkill
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoCast                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::ServerStartSkill(int SkillID, bool bAutoCast)
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.ServerStartSkill");

	UUTSkillManagerComponent_ServerStartSkill_Params params;
	params.SkillID = SkillID;
	params.bAutoCast = bAutoCast;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.ServerNotifyRandomSeed
// (Net, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// int                            Seed                           (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::ServerNotifyRandomSeed(int Seed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.ServerNotifyRandomSeed");

	UUTSkillManagerComponent_ServerNotifyRandomSeed_Params params;
	params.Seed = Seed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.RepSkillSynData
// (Native, Public, BlueprintCallable)

void UUTSkillManagerComponent::RepSkillSynData()
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.RepSkillSynData");

	UUTSkillManagerComponent_RepSkillSynData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.RepSkillHitInfo
// (Final, Native, Public, BlueprintCallable)

void UUTSkillManagerComponent::RepSkillHitInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.RepSkillHitInfo");

	UUTSkillManagerComponent_RepSkillHitInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.RandRangeSyn
// (Final, Native, Public)
// Parameters:
// int                            StartIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            EndIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUTSkillManagerComponent::RandRangeSyn(int StartIndex, int EndIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.RandRangeSyn");

	UUTSkillManagerComponent_RandRangeSyn_Params params;
	params.StartIndex = StartIndex;
	params.EndIndex = EndIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.PreCheckNewSkill
// (Native, Public)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::PreCheckNewSkill(int SkillID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.PreCheckNewSkill");

	UUTSkillManagerComponent_PreCheckNewSkill_Params params;
	params.SkillID = SkillID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.PlayHurtSkillEffect
// (Native, Public)
// Parameters:
// struct FUTSkillHitInfo         TheSkillHitInfo                (Parm)

void UUTSkillManagerComponent::PlayHurtSkillEffect(const struct FUTSkillHitInfo& TheSkillHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.PlayHurtSkillEffect");

	UUTSkillManagerComponent_PlayHurtSkillEffect_Params params;
	params.TheSkillHitInfo = TheSkillHitInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.OnSameTeam
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  A                              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  B                              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::STATIC_OnSameTeam(class AActor* A, class AActor* B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.OnSameTeam");

	UUTSkillManagerComponent_OnSameTeam_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.OnRep_SkillHitInfo
// (Native, Public)

void UUTSkillManagerComponent::OnRep_SkillHitInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.OnRep_SkillHitInfo");

	UUTSkillManagerComponent_OnRep_SkillHitInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.IsReadyToCastSkill
// (Native, Public)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::IsReadyToCastSkill(int SkillID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.IsReadyToCastSkill");

	UUTSkillManagerComponent_IsReadyToCastSkill_Params params;
	params.SkillID = SkillID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.IsCastingSkill
// (Native, Public, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::IsCastingSkill()
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.IsCastingSkill");

	UUTSkillManagerComponent_IsCastingSkill_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.InitSkillSystem
// (Native, Public, BlueprintCallable)

void UUTSkillManagerComponent::InitSkillSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.InitSkillSystem");

	UUTSkillManagerComponent_InitSkillSystem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.GetSkillByName
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 SkillName                      (Parm, ZeroConstructor)
// class AUTSkill*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AUTSkill* UUTSkillManagerComponent::GetSkillByName(const struct FString& SkillName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetSkillByName");

	UUTSkillManagerComponent_GetSkillByName_Params params;
	params.SkillName = SkillName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.GetSkill
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// class AUTSkill*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AUTSkill* UUTSkillManagerComponent::GetSkill(int SkillID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetSkill");

	UUTSkillManagerComponent_GetSkill_Params params;
	params.SkillID = SkillID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.GetCurSkillPhase
// (Final, Native, Public)
// Parameters:
// class UUTSkillPhase*           ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUTSkillPhase* UUTSkillManagerComponent::GetCurSkillPhase()
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetCurSkillPhase");

	UUTSkillManagerComponent_GetCurSkillPhase_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.GetCurSkill
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AUTSkill*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AUTSkill* UUTSkillManagerComponent::GetCurSkill()
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetCurSkill");

	UUTSkillManagerComponent_GetCurSkill_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.ClearSkill
// (Native, Public)

void UUTSkillManagerComponent::ClearSkill()
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.ClearSkill");

	UUTSkillManagerComponent_ClearSkill_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.CheckNewSkill
// (Native, Public)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::CheckNewSkill(int SkillID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.CheckNewSkill");

	UUTSkillManagerComponent_CheckNewSkill_Params params;
	params.SkillID = SkillID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.CheckAutoSkill
// (Native, Public)

void UUTSkillManagerComponent::CheckAutoSkill()
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.CheckAutoSkill");

	UUTSkillManagerComponent_CheckAutoSkill_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
