
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

// Function OBUI_Library.OBUI_Library_C.GetPlayerColorByTeamID
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TeamID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FColor                  PlayerColor                    (Parm, OutParm, IsPlainOldData)

void UOBUI_Library_C::STATIC_GetPlayerColorByTeamID(int TeamID, class UObject* __WorldContext, struct FColor* PlayerColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function OBUI_Library.OBUI_Library_C.GetPlayerColorByTeamID");

	UOBUI_Library_C_GetPlayerColorByTeamID_Params params;
	params.TeamID = TeamID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerColor != nullptr)
		*PlayerColor = params.PlayerColor;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
