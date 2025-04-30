
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

// Function OB_PlayerListItem_BP.OB_PlayerListItem_BP_C.ShowIsOnOberving
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 OBPlayerName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UOB_PlayerListItem_BP_C::ShowIsOnOberving(const struct FString& OBPlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_PlayerListItem_BP.OB_PlayerListItem_BP_C.ShowIsOnOberving");

	UOB_PlayerListItem_BP_C_ShowIsOnOberving_Params params;
	params.OBPlayerName = OBPlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_PlayerListItem_BP.OB_PlayerListItem_BP_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UOB_PlayerListItem_BP_C::OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_PlayerListItem_BP.OB_PlayerListItem_BP_C.OnMouseButtonUp");

	UOB_PlayerListItem_BP_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function OB_PlayerListItem_BP.OB_PlayerListItem_BP_C.ShowData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PlayerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            TeamID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 OBPlayerName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            KillNum                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsAlive                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOB_PlayerListItem_BP_C::ShowData(const struct FString& PlayerName, int TeamID, const struct FString& OBPlayerName, int KillNum, bool IsAlive)
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_PlayerListItem_BP.OB_PlayerListItem_BP_C.ShowData");

	UOB_PlayerListItem_BP_C_ShowData_Params params;
	params.PlayerName = PlayerName;
	params.TeamID = TeamID;
	params.OBPlayerName = OBPlayerName;
	params.KillNum = KillNum;
	params.IsAlive = IsAlive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
