
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

// Function LobbyNameTag.LobbyNameTag_C.UpdateNameTag
// (Public, BlueprintCallable, BlueprintEvent)

void ULobbyNameTag_C::UpdateNameTag()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyNameTag.LobbyNameTag_C.UpdateNameTag");

	ULobbyNameTag_C_UpdateNameTag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
