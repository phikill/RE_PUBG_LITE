#pragma once

#include "../SDK.h"

// Name: LitePC_0701, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function ParachutingControl.ParachutingControl_C.UIMSG_ParachutingLeaderChange
struct UParachutingControl_C_UIMSG_ParachutingLeaderChange_Params
{
};

// Function ParachutingControl.ParachutingControl_C.HideFollowPanelAndBtn
struct UParachutingControl_C_HideFollowPanelAndBtn_Params
{
};

// Function ParachutingControl.ParachutingControl_C.CheckParachuteFollowState
struct UParachutingControl_C_CheckParachuteFollowState_Params
{
	bool                                               IsFollowElse;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ParachutingControl.ParachutingControl_C.HideCanOpenTips
struct UParachutingControl_C_HideCanOpenTips_Params
{
	bool                                               isShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_GuideText_type                   NewParam1;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ParachutingControl.ParachutingControl_C.HideCanJumpTips
struct UParachutingControl_C_HideCanJumpTips_Params
{
	bool                                               isShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_GuideText_type                   NewParam1;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ParachutingControl.ParachutingControl_C.ResponsFollowInvite
struct UParachutingControl_C_ResponsFollowInvite_Params
{
	EInviteResponceType                                ResponsID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ParachutingControl.ParachutingControl_C.ReceiveFollowRequst
struct UParachutingControl_C_ReceiveFollowRequst_Params
{
};

// Function ParachutingControl.ParachutingControl_C.RefreshParachuteFollowState
struct UParachutingControl_C_RefreshParachuteFollowState_Params
{
};

// Function ParachutingControl.ParachutingControl_C.Reconnect_ResetUIByPlayerControllerState
struct UParachutingControl_C_Reconnect_ResetUIByPlayerControllerState_Params
{
};

// Function ParachutingControl.ParachutingControl_C.BndEvt__Button_Refuse_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature
struct UParachutingControl_C_BndEvt__Button_Refuse_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ParachutingControl.ParachutingControl_C.BndEvt__Button_Agree_K2Node_ComponentBoundEvent_42_OnButtonClickedEvent__DelegateSignature
struct UParachutingControl_C_BndEvt__Button_Agree_K2Node_ComponentBoundEvent_42_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ParachutingControl.ParachutingControl_C.BndEvt__Button_OutOfFollow_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature
struct UParachutingControl_C_BndEvt__Button_OutOfFollow_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ParachutingControl.ParachutingControl_C.BndEvt__ParachutingButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UParachutingControl_C_BndEvt__ParachutingButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ParachutingControl.ParachutingControl_C.BndEvt__IN_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UParachutingControl_C_BndEvt__IN_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function ParachutingControl.ParachutingControl_C.BndEvt__Button_Parachute_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature
struct UParachutingControl_C_BndEvt__Button_Parachute_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ParachutingControl.ParachutingControl_C.Tick
struct UParachutingControl_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ParachutingControl.ParachutingControl_C.BndEvt__Out_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UParachutingControl_C_BndEvt__Out_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function ParachutingControl.ParachutingControl_C.BndEvt__Button_LeavePlane_K2Node_ComponentBoundEvent_169_OnButtonClickedEvent__DelegateSignature
struct UParachutingControl_C_BndEvt__Button_LeavePlane_K2Node_ComponentBoundEvent_169_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ParachutingControl.ParachutingControl_C.ExecuteUbergraph_ParachutingControl
struct UParachutingControl_C_ExecuteUbergraph_ParachutingControl_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
