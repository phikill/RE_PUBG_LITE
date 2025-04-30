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

// Function QuickMenu_BP.QuickMenu_BP_C.SingleplayerSetting2
struct UQuickMenu_BP_C_SingleplayerSetting2_Params
{
};

// Function QuickMenu_BP.QuickMenu_BP_C.OnTouchMoved
struct UQuickMenu_BP_C_OnTouchMoved_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               InTouchEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function QuickMenu_BP.QuickMenu_BP_C.MakeFriendLastText
struct UQuickMenu_BP_C_MakeFriendLastText_Params
{
	int                                                MsgType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Content;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     Msg;                                                      // (Parm, OutParm, ZeroConstructor)
};

// Function QuickMenu_BP.QuickMenu_BP_C.MultiPlayerSetting
struct UQuickMenu_BP_C_MultiPlayerSetting_Params
{
};

// Function QuickMenu_BP.QuickMenu_BP_C.SingleplayerSetting
struct UQuickMenu_BP_C_SingleplayerSetting_Params
{
};

// Function QuickMenu_BP.QuickMenu_BP_C.ReceiveFriendInvite
struct UQuickMenu_BP_C_ReceiveFriendInvite_Params
{
	struct FString                                     gid;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               succ;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function QuickMenu_BP.QuickMenu_BP_C.SendFriendChat
struct UQuickMenu_BP_C_SendFriendChat_Params
{
	struct FText                                       InText;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function QuickMenu_BP.QuickMenu_BP_C.SendTeamChat
struct UQuickMenu_BP_C_SendTeamChat_Params
{
	struct FText                                       InText;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function QuickMenu_BP.QuickMenu_BP_C.RemindChatBtn
struct UQuickMenu_BP_C_RemindChatBtn_Params
{
};

// Function QuickMenu_BP.QuickMenu_BP_C.ShowAllUnRead
struct UQuickMenu_BP_C_ShowAllUnRead_Params
{
};

// Function QuickMenu_BP.QuickMenu_BP_C.ClearUnreadByGid
struct UQuickMenu_BP_C_ClearUnreadByGid_Params
{
	struct FString                                     gid;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function QuickMenu_BP.QuickMenu_BP_C.ClickAChatFriend
struct UQuickMenu_BP_C_ClickAChatFriend_Params
{
	struct FString                                     gid;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function QuickMenu_BP.QuickMenu_BP_C.AddFriendSecondChat
struct UQuickMenu_BP_C_AddFriendSecondChat_Params
{
	struct FString                                     gid;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     Content;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               isSelf;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MsgType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bReply;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuickMenu_BP.QuickMenu_BP_C.MakeFriendChatText
struct UQuickMenu_BP_C_MakeFriendChatText_Params
{
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     Content;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               isSelf;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MsgType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Reply;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Text;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function QuickMenu_BP.QuickMenu_BP_C.UpdateFriendSecondChatByGid
struct UQuickMenu_BP_C_UpdateFriendSecondChatByGid_Params
{
	struct FString                                     gid;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function QuickMenu_BP.QuickMenu_BP_C.AddFriendChat
struct UQuickMenu_BP_C_AddFriendChat_Params
{
	struct FString                                     gid;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     Content;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               isSelf;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                msgID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bReply;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuickMenu_BP.QuickMenu_BP_C.AddChatToHistory
struct UQuickMenu_BP_C_AddChatToHistory_Params
{
	struct FString                                     Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               isMe;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuickMenu_BP.QuickMenu_BP_C.InitQuickMsg
struct UQuickMenu_BP_C_InitQuickMsg_Params
{
};

// Function QuickMenu_BP.QuickMenu_BP_C.SelectOpt
struct UQuickMenu_BP_C_SelectOpt_Params
{
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuickMenu_BP.QuickMenu_BP_C.BndEvt__ButtonShortcut_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
struct UQuickMenu_BP_C_BndEvt__ButtonShortcut_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function QuickMenu_BP.QuickMenu_BP_C.BndEvt__ButtonRecord_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature
struct UQuickMenu_BP_C_BndEvt__ButtonRecord_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function QuickMenu_BP.QuickMenu_BP_C.BndEvt__ButtonFriends_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature
struct UQuickMenu_BP_C_BndEvt__ButtonFriends_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function QuickMenu_BP.QuickMenu_BP_C.BndEvt__inputText_K2Node_ComponentBoundEvent_176_OnEditableTextChangedEvent__DelegateSignature
struct UQuickMenu_BP_C_BndEvt__inputText_K2Node_ComponentBoundEvent_176_OnEditableTextChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function QuickMenu_BP.QuickMenu_BP_C.BndEvt__EditableText_0_K2Node_ComponentBoundEvent_36_OnEditableTextChangedEvent__DelegateSignature
struct UQuickMenu_BP_C_BndEvt__EditableText_0_K2Node_ComponentBoundEvent_36_OnEditableTextChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function QuickMenu_BP.QuickMenu_BP_C.BndEvt__BtnReturnFirstChat_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature
struct UQuickMenu_BP_C_BndEvt__BtnReturnFirstChat_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function QuickMenu_BP.QuickMenu_BP_C.BndEvt__inputText_K2Node_ComponentBoundEvent_13_OnEditableTextCommittedEvent__DelegateSignature
struct UQuickMenu_BP_C_BndEvt__inputText_K2Node_ComponentBoundEvent_13_OnEditableTextCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuickMenu_BP.QuickMenu_BP_C.BndEvt__friendChatMsg_K2Node_ComponentBoundEvent_106_OnEditableTextCommittedEvent__DelegateSignature
struct UQuickMenu_BP_C_BndEvt__friendChatMsg_K2Node_ComponentBoundEvent_106_OnEditableTextCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuickMenu_BP.QuickMenu_BP_C.BndEvt__Button_Refuse_K2Node_ComponentBoundEvent_86_OnButtonClickedEvent__DelegateSignature
struct UQuickMenu_BP_C_BndEvt__Button_Refuse_K2Node_ComponentBoundEvent_86_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function QuickMenu_BP.QuickMenu_BP_C.BndEvt__Button_accept_K2Node_ComponentBoundEvent_103_OnButtonClickedEvent__DelegateSignature
struct UQuickMenu_BP_C_BndEvt__Button_accept_K2Node_ComponentBoundEvent_103_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function QuickMenu_BP.QuickMenu_BP_C.ReceivedInitWidget
struct UQuickMenu_BP_C_ReceivedInitWidget_Params
{
};

// Function QuickMenu_BP.QuickMenu_BP_C.ReceivePlayerStateData
struct UQuickMenu_BP_C_ReceivePlayerStateData_Params
{
};

// Function QuickMenu_BP.QuickMenu_BP_C.BndEvt__InviteClose_K2Node_ComponentBoundEvent_164_OnButtonClickedEvent__DelegateSignature
struct UQuickMenu_BP_C_BndEvt__InviteClose_K2Node_ComponentBoundEvent_164_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function QuickMenu_BP.QuickMenu_BP_C.BndEvt__Button_sendfriend_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature
struct UQuickMenu_BP_C_BndEvt__Button_sendfriend_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function QuickMenu_BP.QuickMenu_BP_C.BndEvt__Button_Teamsend_K2Node_ComponentBoundEvent_54_OnButtonClickedEvent__DelegateSignature
struct UQuickMenu_BP_C_BndEvt__Button_Teamsend_K2Node_ComponentBoundEvent_54_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function QuickMenu_BP.QuickMenu_BP_C.ExecuteUbergraph_QuickMenu_BP
struct UQuickMenu_BP_C_ExecuteUbergraph_QuickMenu_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
