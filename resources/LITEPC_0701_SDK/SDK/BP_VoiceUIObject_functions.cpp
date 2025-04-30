
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

// Function BP_VoiceUIObject.BP_VoiceUIObject_C.HideAll
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_VoiceUIObject_C::HideAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceUIObject.BP_VoiceUIObject_C.HideAll");

	UBP_VoiceUIObject_C_HideAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VoiceUIObject.BP_VoiceUIObject_C.GetNowOwnPlayer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ASTExtraBaseCharacter*   Player                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_VoiceUIObject_C::GetNowOwnPlayer(class ASTExtraBaseCharacter** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceUIObject.BP_VoiceUIObject_C.GetNowOwnPlayer");

	UBP_VoiceUIObject_C_GetNowOwnPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Player != nullptr)
		*Player = params.Player;
}


// Function BP_VoiceUIObject.BP_VoiceUIObject_C.GetPosIndex
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_VoiceUIObject_C::GetPosIndex(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceUIObject.BP_VoiceUIObject_C.GetPosIndex");

	UBP_VoiceUIObject_C_GetPosIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function BP_VoiceUIObject.BP_VoiceUIObject_C.UpdateState
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          detaTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           isShow                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_VoiceUIObject_C::UpdateState(float detaTime, bool* isShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceUIObject.BP_VoiceUIObject_C.UpdateState");

	UBP_VoiceUIObject_C_UpdateState_Params params;
	params.detaTime = detaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isShow != nullptr)
		*isShow = params.isShow;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
