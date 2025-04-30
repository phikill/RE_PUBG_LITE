
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

// Function UAEStateMachine.UAEState.Update
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UUAEState::Update(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UAEStateMachine.UAEState.Update");

	UUAEState_Update_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UAEStateMachine.UAEState.OnLeave
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UUAEState*               TranitToState                  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUAEState::OnLeave(class UUAEState* TranitToState)
{
	static auto fn = UObject::FindObject<UFunction>("Function UAEStateMachine.UAEState.OnLeave");

	UUAEState_OnLeave_Params params;
	params.TranitToState = TranitToState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UAEStateMachine.UAEState.OnEnter
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UUAEState*               PrevState                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUAEState::OnEnter(class UUAEState* PrevState)
{
	static auto fn = UObject::FindObject<UFunction>("Function UAEStateMachine.UAEState.OnEnter");

	UUAEState_OnEnter_Params params;
	params.PrevState = PrevState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
