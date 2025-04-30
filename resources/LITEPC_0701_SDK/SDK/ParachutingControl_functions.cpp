
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

// Function ParachutingControl.ParachutingControl_C.UIMSG_ParachutingLeaderChange
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UParachutingControl_C::UIMSG_ParachutingLeaderChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParachutingControl.ParachutingControl_C.UIMSG_ParachutingLeaderChange");

	UParachutingControl_C_UIMSG_ParachutingLeaderChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParachutingControl.ParachutingControl_C.HideFollowPanelAndBtn
// (Public, BlueprintCallable, BlueprintEvent)

void UParachutingControl_C::HideFollowPanelAndBtn()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParachutingControl.ParachutingControl_C.HideFollowPanelAndBtn");

	UParachutingControl_C_HideFollowPanelAndBtn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParachutingControl.ParachutingControl_C.CheckParachuteFollowState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsFollowElse                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UParachutingControl_C::CheckParachuteFollowState(bool* IsFollowElse)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParachutingControl.ParachutingControl_C.CheckParachuteFollowState");

	UParachutingControl_C_CheckParachuteFollowState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsFollowElse != nullptr)
		*IsFollowElse = params.IsFollowElse;
}


// Function ParachutingControl.ParachutingControl_C.HideCanOpenTips
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBP_STRUCT_GuideText_type NewParam1                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UParachutingControl_C::HideCanOpenTips(bool isShow, const struct FBP_STRUCT_GuideText_type& NewParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParachutingControl.ParachutingControl_C.HideCanOpenTips");

	UParachutingControl_C_HideCanOpenTips_Params params;
	params.isShow = isShow;
	params.NewParam1 = NewParam1;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParachutingControl.ParachutingControl_C.HideCanJumpTips
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBP_STRUCT_GuideText_type NewParam1                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UParachutingControl_C::HideCanJumpTips(bool isShow, const struct FBP_STRUCT_GuideText_type& NewParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParachutingControl.ParachutingControl_C.HideCanJumpTips");

	UParachutingControl_C_HideCanJumpTips_Params params;
	params.isShow = isShow;
	params.NewParam1 = NewParam1;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParachutingControl.ParachutingControl_C.ResponsFollowInvite
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EInviteResponceType            ResponsID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UParachutingControl_C::ResponsFollowInvite(EInviteResponceType ResponsID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParachutingControl.ParachutingControl_C.ResponsFollowInvite");

	UParachutingControl_C_ResponsFollowInvite_Params params;
	params.ResponsID = ResponsID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParachutingControl.ParachutingControl_C.ReceiveFollowRequst
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UParachutingControl_C::ReceiveFollowRequst()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParachutingControl.ParachutingControl_C.ReceiveFollowRequst");

	UParachutingControl_C_ReceiveFollowRequst_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParachutingControl.ParachutingControl_C.RefreshParachuteFollowState
// (Public, BlueprintCallable, BlueprintEvent)

void UParachutingControl_C::RefreshParachuteFollowState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParachutingControl.ParachutingControl_C.RefreshParachuteFollowState");

	UParachutingControl_C_RefreshParachuteFollowState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParachutingControl.ParachutingControl_C.Reconnect_ResetUIByPlayerControllerState
// (Public, BlueprintCallable, BlueprintEvent)

void UParachutingControl_C::Reconnect_ResetUIByPlayerControllerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParachutingControl.ParachutingControl_C.Reconnect_ResetUIByPlayerControllerState");

	UParachutingControl_C_Reconnect_ResetUIByPlayerControllerState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParachutingControl.ParachutingControl_C.BndEvt__Button_Refuse_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UParachutingControl_C::BndEvt__Button_Refuse_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParachutingControl.ParachutingControl_C.BndEvt__Button_Refuse_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature");

	UParachutingControl_C_BndEvt__Button_Refuse_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParachutingControl.ParachutingControl_C.BndEvt__Button_Agree_K2Node_ComponentBoundEvent_42_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UParachutingControl_C::BndEvt__Button_Agree_K2Node_ComponentBoundEvent_42_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParachutingControl.ParachutingControl_C.BndEvt__Button_Agree_K2Node_ComponentBoundEvent_42_OnButtonClickedEvent__DelegateSignature");

	UParachutingControl_C_BndEvt__Button_Agree_K2Node_ComponentBoundEvent_42_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParachutingControl.ParachutingControl_C.BndEvt__Button_OutOfFollow_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UParachutingControl_C::BndEvt__Button_OutOfFollow_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParachutingControl.ParachutingControl_C.BndEvt__Button_OutOfFollow_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature");

	UParachutingControl_C_BndEvt__Button_OutOfFollow_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParachutingControl.ParachutingControl_C.BndEvt__ParachutingButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UParachutingControl_C::BndEvt__ParachutingButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParachutingControl.ParachutingControl_C.BndEvt__ParachutingButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UParachutingControl_C_BndEvt__ParachutingButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParachutingControl.ParachutingControl_C.BndEvt__IN_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UParachutingControl_C::BndEvt__IN_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParachutingControl.ParachutingControl_C.BndEvt__IN_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UParachutingControl_C_BndEvt__IN_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParachutingControl.ParachutingControl_C.BndEvt__Button_Parachute_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UParachutingControl_C::BndEvt__Button_Parachute_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParachutingControl.ParachutingControl_C.BndEvt__Button_Parachute_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature");

	UParachutingControl_C_BndEvt__Button_Parachute_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParachutingControl.ParachutingControl_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UParachutingControl_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParachutingControl.ParachutingControl_C.Tick");

	UParachutingControl_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParachutingControl.ParachutingControl_C.BndEvt__Out_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UParachutingControl_C::BndEvt__Out_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParachutingControl.ParachutingControl_C.BndEvt__Out_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UParachutingControl_C_BndEvt__Out_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParachutingControl.ParachutingControl_C.BndEvt__Button_LeavePlane_K2Node_ComponentBoundEvent_169_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UParachutingControl_C::BndEvt__Button_LeavePlane_K2Node_ComponentBoundEvent_169_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParachutingControl.ParachutingControl_C.BndEvt__Button_LeavePlane_K2Node_ComponentBoundEvent_169_OnButtonClickedEvent__DelegateSignature");

	UParachutingControl_C_BndEvt__Button_LeavePlane_K2Node_ComponentBoundEvent_169_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParachutingControl.ParachutingControl_C.ExecuteUbergraph_ParachutingControl
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UParachutingControl_C::ExecuteUbergraph_ParachutingControl(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParachutingControl.ParachutingControl_C.ExecuteUbergraph_ParachutingControl");

	UParachutingControl_C_ExecuteUbergraph_ParachutingControl_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
