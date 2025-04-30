
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

// Function Ingame_TeamItem_BP.Ingame_TeamItem_BP_C.SwitchGenderIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsMan                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIngame_TeamItem_BP_C::SwitchGenderIcon(bool bIsMan)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ingame_TeamItem_BP.Ingame_TeamItem_BP_C.SwitchGenderIcon");

	UIngame_TeamItem_BP_C_SwitchGenderIcon_Params params;
	params.bIsMan = bIsMan;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ingame_TeamItem_BP.Ingame_TeamItem_BP_C.SetParachuteFollowState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FParachuteFollowState   ParachuteFollowState           (BlueprintVisible, BlueprintReadOnly, Parm)

void UIngame_TeamItem_BP_C::SetParachuteFollowState(const struct FParachuteFollowState& ParachuteFollowState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ingame_TeamItem_BP.Ingame_TeamItem_BP_C.SetParachuteFollowState");

	UIngame_TeamItem_BP_C_SetParachuteFollowState_Params params;
	params.ParachuteFollowState = ParachuteFollowState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ingame_TeamItem_BP.Ingame_TeamItem_BP_C.StartFollowTarget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UIngame_TeamItem_BP_C::StartFollowTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ingame_TeamItem_BP.Ingame_TeamItem_BP_C.StartFollowTarget");

	UIngame_TeamItem_BP_C_StartFollowTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ingame_TeamItem_BP.Ingame_TeamItem_BP_C.CanFollowTarget
// (Public, BlueprintCallable, BlueprintEvent)

void UIngame_TeamItem_BP_C::CanFollowTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ingame_TeamItem_BP.Ingame_TeamItem_BP_C.CanFollowTarget");

	UIngame_TeamItem_BP_C_CanFollowTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ingame_TeamItem_BP.Ingame_TeamItem_BP_C.UpdateVoice
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            status                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIngame_TeamItem_BP_C::UpdateVoice(int status)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ingame_TeamItem_BP.Ingame_TeamItem_BP_C.UpdateVoice");

	UIngame_TeamItem_BP_C_UpdateVoice_Params params;
	params.status = status;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ingame_TeamItem_BP.Ingame_TeamItem_BP_C.SetTextAlpha
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isDead                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIngame_TeamItem_BP_C::SetTextAlpha(bool isDead)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ingame_TeamItem_BP.Ingame_TeamItem_BP_C.SetTextAlpha");

	UIngame_TeamItem_BP_C_SetTextAlpha_Params params;
	params.isDead = isDead;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ingame_TeamItem_BP.Ingame_TeamItem_BP_C.SetBreathHP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          HP                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIngame_TeamItem_BP_C::SetBreathHP(float HP)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ingame_TeamItem_BP.Ingame_TeamItem_BP_C.SetBreathHP");

	UIngame_TeamItem_BP_C_SetBreathHP_Params params;
	params.HP = HP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ingame_TeamItem_BP.Ingame_TeamItem_BP_C.SetPlayerName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIngame_TeamItem_BP_C::SetPlayerName(const struct FString& Name, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ingame_TeamItem_BP.Ingame_TeamItem_BP_C.SetPlayerName");

	UIngame_TeamItem_BP_C_SetPlayerName_Params params;
	params.Name = Name;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ingame_TeamItem_BP.Ingame_TeamItem_BP_C.SetState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ExtraPlayerLiveState           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIngame_TeamItem_BP_C::SetState(ExtraPlayerLiveState State)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ingame_TeamItem_BP.Ingame_TeamItem_BP_C.SetState");

	UIngame_TeamItem_BP_C_SetState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ingame_TeamItem_BP.Ingame_TeamItem_BP_C.SetHP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsDying                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIngame_TeamItem_BP_C::SetHP(float Percent, bool bIsDying)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ingame_TeamItem_BP.Ingame_TeamItem_BP_C.SetHP");

	UIngame_TeamItem_BP_C_SetHP_Params params;
	params.Percent = Percent;
	params.bIsDying = bIsDying;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ingame_TeamItem_BP.Ingame_TeamItem_BP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UIngame_TeamItem_BP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ingame_TeamItem_BP.Ingame_TeamItem_BP_C.Construct");

	UIngame_TeamItem_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ingame_TeamItem_BP.Ingame_TeamItem_BP_C.BndEvt__Button_Follow_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UIngame_TeamItem_BP_C::BndEvt__Button_Follow_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ingame_TeamItem_BP.Ingame_TeamItem_BP_C.BndEvt__Button_Follow_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UIngame_TeamItem_BP_C_BndEvt__Button_Follow_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ingame_TeamItem_BP.Ingame_TeamItem_BP_C.ExecuteUbergraph_Ingame_TeamItem_BP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIngame_TeamItem_BP_C::ExecuteUbergraph_Ingame_TeamItem_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ingame_TeamItem_BP.Ingame_TeamItem_BP_C.ExecuteUbergraph_Ingame_TeamItem_BP");

	UIngame_TeamItem_BP_C_ExecuteUbergraph_Ingame_TeamItem_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
