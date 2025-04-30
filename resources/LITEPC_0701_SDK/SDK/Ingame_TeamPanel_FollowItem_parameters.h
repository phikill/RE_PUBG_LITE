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

// Function Ingame_TeamPanel_FollowItem.Ingame_TeamPanel_FollowItem_C.InviteCDFinished
struct UIngame_TeamPanel_FollowItem_C_InviteCDFinished_Params
{
};

// Function Ingame_TeamPanel_FollowItem.Ingame_TeamPanel_FollowItem_C.On_FollowDisableTipsImage_MouseButtonDown_1
struct UIngame_TeamPanel_FollowItem_C_On_FollowDisableTipsImage_MouseButtonDown_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Ingame_TeamPanel_FollowItem.Ingame_TeamPanel_FollowItem_C.RefreshState
struct UIngame_TeamPanel_FollowItem_C_RefreshState_Params
{
	int                                                InTeamIdx;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayerInTeamIdx;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FParachuteFollowState                       PFS;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FParachuteFollowState                       PlayerPFS;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	ExtraPlayerLiveState                               LiveState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ingame_TeamPanel_FollowItem.Ingame_TeamPanel_FollowItem_C.Init
struct UIngame_TeamPanel_FollowItem_C_Init_Params
{
	struct FString                                     TeammateName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function Ingame_TeamPanel_FollowItem.Ingame_TeamPanel_FollowItem_C.BndEvt__Button_FollowTeammate_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature
struct UIngame_TeamPanel_FollowItem_C_BndEvt__Button_FollowTeammate_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Ingame_TeamPanel_FollowItem.Ingame_TeamPanel_FollowItem_C.BndEvt__Button_InviteTeammate_K2Node_ComponentBoundEvent_97_OnButtonClickedEvent__DelegateSignature
struct UIngame_TeamPanel_FollowItem_C_BndEvt__Button_InviteTeammate_K2Node_ComponentBoundEvent_97_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Ingame_TeamPanel_FollowItem.Ingame_TeamPanel_FollowItem_C.BndEvt__Button_CancelFollow_K2Node_ComponentBoundEvent_116_OnButtonClickedEvent__DelegateSignature
struct UIngame_TeamPanel_FollowItem_C_BndEvt__Button_CancelFollow_K2Node_ComponentBoundEvent_116_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Ingame_TeamPanel_FollowItem.Ingame_TeamPanel_FollowItem_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_137_OnButtonClickedEvent__DelegateSignature
struct UIngame_TeamPanel_FollowItem_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_137_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Ingame_TeamPanel_FollowItem.Ingame_TeamPanel_FollowItem_C.BndEvt__Button_UnableInviteTeammate_K2Node_ComponentBoundEvent_92_OnButtonClickedEvent__DelegateSignature
struct UIngame_TeamPanel_FollowItem_C_BndEvt__Button_UnableInviteTeammate_K2Node_ComponentBoundEvent_92_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Ingame_TeamPanel_FollowItem.Ingame_TeamPanel_FollowItem_C.BndEvt__CancelFollowBtn_K2Node_ComponentBoundEvent_120_OnButtonClickedEvent__DelegateSignature
struct UIngame_TeamPanel_FollowItem_C_BndEvt__CancelFollowBtn_K2Node_ComponentBoundEvent_120_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Ingame_TeamPanel_FollowItem.Ingame_TeamPanel_FollowItem_C.ExecuteUbergraph_Ingame_TeamPanel_FollowItem
struct UIngame_TeamPanel_FollowItem_C_ExecuteUbergraph_Ingame_TeamPanel_FollowItem_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
