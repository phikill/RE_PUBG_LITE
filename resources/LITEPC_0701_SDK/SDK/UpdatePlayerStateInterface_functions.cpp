
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

// Function UpdatePlayerStateInterface.UpdatePlayerStateInterface_C.UpdatePlayerState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ExtraPlayerLiveState           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ACharacter*              OwnerCharacter                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUpdatePlayerStateInterface_C::UpdatePlayerState(ExtraPlayerLiveState State, class ACharacter* OwnerCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function UpdatePlayerStateInterface.UpdatePlayerStateInterface_C.UpdatePlayerState");

	UUpdatePlayerStateInterface_C_UpdatePlayerState_Params params;
	params.State = State;
	params.OwnerCharacter = OwnerCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UpdatePlayerStateInterface.UpdatePlayerStateInterface_C.InitPlayerState
// (Public, BlueprintCallable, BlueprintEvent)

void UUpdatePlayerStateInterface_C::InitPlayerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function UpdatePlayerStateInterface.UpdatePlayerStateInterface_C.InitPlayerState");

	UUpdatePlayerStateInterface_C_InitPlayerState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
