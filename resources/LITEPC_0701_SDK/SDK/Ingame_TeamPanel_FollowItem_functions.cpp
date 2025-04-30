
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

// Function Ingame_TeamPanel_FollowItem.Ingame_TeamPanel_FollowItem_C.InviteCDFinished
// (Public, BlueprintCallable, BlueprintEvent)

void UIngame_TeamPanel_FollowItem_C::InviteCDFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ingame_TeamPanel_FollowItem.Ingame_TeamPanel_FollowItem_C.InviteCDFinished");

	UIngame_TeamPanel_FollowItem_C_InviteCDFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ingame_TeamPanel_FollowItem.Ingame_TeamPanel_FollowItem_C.On_FollowDisableTipsImage_MouseButtonDown_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UIngame_TeamPanel_FollowItem_C::On_FollowDisableTipsImage_MouseButtonDown_1(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ingame_TeamPanel_FollowItem.Ingame_TeamPanel_FollowItem_C.On_FollowDisableTipsImage_MouseButtonDown_1");

	UIngame_TeamPanel_FollowItem_C_On_FollowDisableTipsImage_MouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function Ingame_TeamPanel_FollowItem.Ingame_TeamPanel_FollowItem_C.RefreshState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InTeamIdx                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            PlayerInTeamIdx                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FParachuteFollowState   PFS                            (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FParachuteFollowState   PlayerPFS                      (BlueprintVisible, BlueprintReadOnly, Parm)
// ExtraPlayerLiveState           LiveState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIngame_TeamPanel_FollowItem_C::RefreshState(int InTeamIdx, int PlayerInTeamIdx, const struct FParachuteFollowState& PFS, const struct FParachuteFollowState& PlayerPFS, ExtraPlayerLiveState LiveState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ingame_TeamPanel_FollowItem.Ingame_TeamPanel_FollowItem_C.RefreshState");

	UIngame_TeamPanel_FollowItem_C_RefreshState_Params params;
	params.InTeamIdx = InTeamIdx;
	params.PlayerInTeamIdx = PlayerInTeamIdx;
	params.PFS = PFS;
	params.PlayerPFS = PlayerPFS;
	params.LiveState = LiveState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ingame_TeamPanel_FollowItem.Ingame_TeamPanel_FollowItem_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 TeammateName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UIngame_TeamPanel_FollowItem_C::Init(const struct FString& TeammateName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ingame_TeamPanel_FollowItem.Ingame_TeamPanel_FollowItem_C.Init");

	UIngame_TeamPanel_FollowItem_C_Init_Params params;
	params.TeammateName = TeammateName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ingame_TeamPanel_FollowItem.Ingame_TeamPanel_FollowItem_C.BndEvt__Button_FollowTeammate_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UIngame_TeamPanel_FollowItem_C::BndEvt__Button_FollowTeammate_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ingame_TeamPanel_FollowItem.Ingame_TeamPanel_FollowItem_C.BndEvt__Button_FollowTeammate_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature");

	UIngame_TeamPanel_FollowItem_C_BndEvt__Button_FollowTeammate_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ingame_TeamPanel_FollowItem.Ingame_TeamPanel_FollowItem_C.BndEvt__Button_InviteTeammate_K2Node_ComponentBoundEvent_97_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UIngame_TeamPanel_FollowItem_C::BndEvt__Button_InviteTeammate_K2Node_ComponentBoundEvent_97_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ingame_TeamPanel_FollowItem.Ingame_TeamPanel_FollowItem_C.BndEvt__Button_InviteTeammate_K2Node_ComponentBoundEvent_97_OnButtonClickedEvent__DelegateSignature");

	UIngame_TeamPanel_FollowItem_C_BndEvt__Button_InviteTeammate_K2Node_ComponentBoundEvent_97_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ingame_TeamPanel_FollowItem.Ingame_TeamPanel_FollowItem_C.BndEvt__Button_CancelFollow_K2Node_ComponentBoundEvent_116_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UIngame_TeamPanel_FollowItem_C::BndEvt__Button_CancelFollow_K2Node_ComponentBoundEvent_116_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ingame_TeamPanel_FollowItem.Ingame_TeamPanel_FollowItem_C.BndEvt__Button_CancelFollow_K2Node_ComponentBoundEvent_116_OnButtonClickedEvent__DelegateSignature");

	UIngame_TeamPanel_FollowItem_C_BndEvt__Button_CancelFollow_K2Node_ComponentBoundEvent_116_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ingame_TeamPanel_FollowItem.Ingame_TeamPanel_FollowItem_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_137_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UIngame_TeamPanel_FollowItem_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_137_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ingame_TeamPanel_FollowItem.Ingame_TeamPanel_FollowItem_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_137_OnButtonClickedEvent__DelegateSignature");

	UIngame_TeamPanel_FollowItem_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_137_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ingame_TeamPanel_FollowItem.Ingame_TeamPanel_FollowItem_C.BndEvt__Button_UnableInviteTeammate_K2Node_ComponentBoundEvent_92_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UIngame_TeamPanel_FollowItem_C::BndEvt__Button_UnableInviteTeammate_K2Node_ComponentBoundEvent_92_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ingame_TeamPanel_FollowItem.Ingame_TeamPanel_FollowItem_C.BndEvt__Button_UnableInviteTeammate_K2Node_ComponentBoundEvent_92_OnButtonClickedEvent__DelegateSignature");

	UIngame_TeamPanel_FollowItem_C_BndEvt__Button_UnableInviteTeammate_K2Node_ComponentBoundEvent_92_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ingame_TeamPanel_FollowItem.Ingame_TeamPanel_FollowItem_C.BndEvt__CancelFollowBtn_K2Node_ComponentBoundEvent_120_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UIngame_TeamPanel_FollowItem_C::BndEvt__CancelFollowBtn_K2Node_ComponentBoundEvent_120_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ingame_TeamPanel_FollowItem.Ingame_TeamPanel_FollowItem_C.BndEvt__CancelFollowBtn_K2Node_ComponentBoundEvent_120_OnButtonClickedEvent__DelegateSignature");

	UIngame_TeamPanel_FollowItem_C_BndEvt__CancelFollowBtn_K2Node_ComponentBoundEvent_120_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ingame_TeamPanel_FollowItem.Ingame_TeamPanel_FollowItem_C.ExecuteUbergraph_Ingame_TeamPanel_FollowItem
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIngame_TeamPanel_FollowItem_C::ExecuteUbergraph_Ingame_TeamPanel_FollowItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ingame_TeamPanel_FollowItem.Ingame_TeamPanel_FollowItem_C.ExecuteUbergraph_Ingame_TeamPanel_FollowItem");

	UIngame_TeamPanel_FollowItem_C_ExecuteUbergraph_Ingame_TeamPanel_FollowItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
