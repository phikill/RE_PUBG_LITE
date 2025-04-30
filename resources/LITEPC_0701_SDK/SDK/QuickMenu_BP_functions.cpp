
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

// Function QuickMenu_BP.QuickMenu_BP_C.SingleplayerSetting2
// (Public, BlueprintCallable, BlueprintEvent)

void UQuickMenu_BP_C::SingleplayerSetting2()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickMenu_BP.QuickMenu_BP_C.SingleplayerSetting2");

	UQuickMenu_BP_C_SingleplayerSetting2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickMenu_BP.QuickMenu_BP_C.OnTouchMoved
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           InTouchEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UQuickMenu_BP_C::OnTouchMoved(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickMenu_BP.QuickMenu_BP_C.OnTouchMoved");

	UQuickMenu_BP_C_OnTouchMoved_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InTouchEvent != nullptr)
		*InTouchEvent = params.InTouchEvent;

	return params.ReturnValue;
}


// Function QuickMenu_BP.QuickMenu_BP_C.MakeFriendLastText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            MsgType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Content                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 Msg                            (Parm, OutParm, ZeroConstructor)

void UQuickMenu_BP_C::MakeFriendLastText(int MsgType, const struct FString& Content, struct FString* Msg)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickMenu_BP.QuickMenu_BP_C.MakeFriendLastText");

	UQuickMenu_BP_C_MakeFriendLastText_Params params;
	params.MsgType = MsgType;
	params.Content = Content;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Msg != nullptr)
		*Msg = params.Msg;
}


// Function QuickMenu_BP.QuickMenu_BP_C.MultiPlayerSetting
// (Public, BlueprintCallable, BlueprintEvent)

void UQuickMenu_BP_C::MultiPlayerSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickMenu_BP.QuickMenu_BP_C.MultiPlayerSetting");

	UQuickMenu_BP_C_MultiPlayerSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickMenu_BP.QuickMenu_BP_C.SingleplayerSetting
// (Public, BlueprintCallable, BlueprintEvent)

void UQuickMenu_BP_C::SingleplayerSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickMenu_BP.QuickMenu_BP_C.SingleplayerSetting");

	UQuickMenu_BP_C_SingleplayerSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickMenu_BP.QuickMenu_BP_C.ReceiveFriendInvite
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 gid                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           succ                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UQuickMenu_BP_C::ReceiveFriendInvite(const struct FString& gid, const struct FString& Name, bool* succ)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickMenu_BP.QuickMenu_BP_C.ReceiveFriendInvite");

	UQuickMenu_BP_C_ReceiveFriendInvite_Params params;
	params.gid = gid;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (succ != nullptr)
		*succ = params.succ;
}


// Function QuickMenu_BP.QuickMenu_BP_C.SendFriendChat
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InText                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UQuickMenu_BP_C::SendFriendChat(struct FText* InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickMenu_BP.QuickMenu_BP_C.SendFriendChat");

	UQuickMenu_BP_C_SendFriendChat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InText != nullptr)
		*InText = params.InText;
}


// Function QuickMenu_BP.QuickMenu_BP_C.SendTeamChat
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InText                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UQuickMenu_BP_C::SendTeamChat(struct FText* InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickMenu_BP.QuickMenu_BP_C.SendTeamChat");

	UQuickMenu_BP_C_SendTeamChat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InText != nullptr)
		*InText = params.InText;
}


// Function QuickMenu_BP.QuickMenu_BP_C.RemindChatBtn
// (Public, BlueprintCallable, BlueprintEvent)

void UQuickMenu_BP_C::RemindChatBtn()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickMenu_BP.QuickMenu_BP_C.RemindChatBtn");

	UQuickMenu_BP_C_RemindChatBtn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickMenu_BP.QuickMenu_BP_C.ShowAllUnRead
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UQuickMenu_BP_C::ShowAllUnRead()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickMenu_BP.QuickMenu_BP_C.ShowAllUnRead");

	UQuickMenu_BP_C_ShowAllUnRead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickMenu_BP.QuickMenu_BP_C.ClearUnreadByGid
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 gid                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UQuickMenu_BP_C::ClearUnreadByGid(const struct FString& gid)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickMenu_BP.QuickMenu_BP_C.ClearUnreadByGid");

	UQuickMenu_BP_C_ClearUnreadByGid_Params params;
	params.gid = gid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickMenu_BP.QuickMenu_BP_C.ClickAChatFriend
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 gid                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UQuickMenu_BP_C::ClickAChatFriend(const struct FString& gid)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickMenu_BP.QuickMenu_BP_C.ClickAChatFriend");

	UQuickMenu_BP_C_ClickAChatFriend_Params params;
	params.gid = gid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickMenu_BP.QuickMenu_BP_C.AddFriendSecondChat
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 gid                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 Content                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           isSelf                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            MsgType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bReply                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuickMenu_BP_C::AddFriendSecondChat(const struct FString& gid, const struct FString& Name, const struct FString& Content, bool isSelf, int MsgType, bool bReply)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickMenu_BP.QuickMenu_BP_C.AddFriendSecondChat");

	UQuickMenu_BP_C_AddFriendSecondChat_Params params;
	params.gid = gid;
	params.Name = Name;
	params.Content = Content;
	params.isSelf = isSelf;
	params.MsgType = MsgType;
	params.bReply = bReply;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickMenu_BP.QuickMenu_BP_C.MakeFriendChatText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 Content                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           isSelf                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            MsgType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Reply                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Text                           (Parm, OutParm, ZeroConstructor)

void UQuickMenu_BP_C::MakeFriendChatText(const struct FString& Name, const struct FString& Content, bool isSelf, int MsgType, bool Reply, struct FString* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickMenu_BP.QuickMenu_BP_C.MakeFriendChatText");

	UQuickMenu_BP_C_MakeFriendChatText_Params params;
	params.Name = Name;
	params.Content = Content;
	params.isSelf = isSelf;
	params.MsgType = MsgType;
	params.Reply = Reply;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function QuickMenu_BP.QuickMenu_BP_C.UpdateFriendSecondChatByGid
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 gid                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UQuickMenu_BP_C::UpdateFriendSecondChatByGid(const struct FString& gid)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickMenu_BP.QuickMenu_BP_C.UpdateFriendSecondChatByGid");

	UQuickMenu_BP_C_UpdateFriendSecondChatByGid_Params params;
	params.gid = gid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickMenu_BP.QuickMenu_BP_C.AddFriendChat
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 gid                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 Content                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           isSelf                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            msgID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bReply                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuickMenu_BP_C::AddFriendChat(const struct FString& gid, const struct FString& Name, const struct FString& Content, bool isSelf, int msgID, bool bReply)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickMenu_BP.QuickMenu_BP_C.AddFriendChat");

	UQuickMenu_BP_C_AddFriendChat_Params params;
	params.gid = gid;
	params.Name = Name;
	params.Content = Content;
	params.isSelf = isSelf;
	params.msgID = msgID;
	params.bReply = bReply;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickMenu_BP.QuickMenu_BP_C.AddChatToHistory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Message                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           isMe                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuickMenu_BP_C::AddChatToHistory(const struct FString& Message, bool isMe)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickMenu_BP.QuickMenu_BP_C.AddChatToHistory");

	UQuickMenu_BP_C_AddChatToHistory_Params params;
	params.Message = Message;
	params.isMe = isMe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickMenu_BP.QuickMenu_BP_C.InitQuickMsg
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UQuickMenu_BP_C::InitQuickMsg()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickMenu_BP.QuickMenu_BP_C.InitQuickMsg");

	UQuickMenu_BP_C_InitQuickMsg_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickMenu_BP.QuickMenu_BP_C.SelectOpt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuickMenu_BP_C::SelectOpt(int Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickMenu_BP.QuickMenu_BP_C.SelectOpt");

	UQuickMenu_BP_C_SelectOpt_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickMenu_BP.QuickMenu_BP_C.BndEvt__ButtonShortcut_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UQuickMenu_BP_C::BndEvt__ButtonShortcut_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickMenu_BP.QuickMenu_BP_C.BndEvt__ButtonShortcut_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");

	UQuickMenu_BP_C_BndEvt__ButtonShortcut_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickMenu_BP.QuickMenu_BP_C.BndEvt__ButtonRecord_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UQuickMenu_BP_C::BndEvt__ButtonRecord_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickMenu_BP.QuickMenu_BP_C.BndEvt__ButtonRecord_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature");

	UQuickMenu_BP_C_BndEvt__ButtonRecord_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickMenu_BP.QuickMenu_BP_C.BndEvt__ButtonFriends_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UQuickMenu_BP_C::BndEvt__ButtonFriends_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickMenu_BP.QuickMenu_BP_C.BndEvt__ButtonFriends_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature");

	UQuickMenu_BP_C_BndEvt__ButtonFriends_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickMenu_BP.QuickMenu_BP_C.BndEvt__inputText_K2Node_ComponentBoundEvent_176_OnEditableTextChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UQuickMenu_BP_C::BndEvt__inputText_K2Node_ComponentBoundEvent_176_OnEditableTextChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickMenu_BP.QuickMenu_BP_C.BndEvt__inputText_K2Node_ComponentBoundEvent_176_OnEditableTextChangedEvent__DelegateSignature");

	UQuickMenu_BP_C_BndEvt__inputText_K2Node_ComponentBoundEvent_176_OnEditableTextChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickMenu_BP.QuickMenu_BP_C.BndEvt__EditableText_0_K2Node_ComponentBoundEvent_36_OnEditableTextChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UQuickMenu_BP_C::BndEvt__EditableText_0_K2Node_ComponentBoundEvent_36_OnEditableTextChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickMenu_BP.QuickMenu_BP_C.BndEvt__EditableText_0_K2Node_ComponentBoundEvent_36_OnEditableTextChangedEvent__DelegateSignature");

	UQuickMenu_BP_C_BndEvt__EditableText_0_K2Node_ComponentBoundEvent_36_OnEditableTextChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickMenu_BP.QuickMenu_BP_C.BndEvt__BtnReturnFirstChat_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UQuickMenu_BP_C::BndEvt__BtnReturnFirstChat_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickMenu_BP.QuickMenu_BP_C.BndEvt__BtnReturnFirstChat_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature");

	UQuickMenu_BP_C_BndEvt__BtnReturnFirstChat_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickMenu_BP.QuickMenu_BP_C.BndEvt__inputText_K2Node_ComponentBoundEvent_13_OnEditableTextCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuickMenu_BP_C::BndEvt__inputText_K2Node_ComponentBoundEvent_13_OnEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickMenu_BP.QuickMenu_BP_C.BndEvt__inputText_K2Node_ComponentBoundEvent_13_OnEditableTextCommittedEvent__DelegateSignature");

	UQuickMenu_BP_C_BndEvt__inputText_K2Node_ComponentBoundEvent_13_OnEditableTextCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickMenu_BP.QuickMenu_BP_C.BndEvt__friendChatMsg_K2Node_ComponentBoundEvent_106_OnEditableTextCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuickMenu_BP_C::BndEvt__friendChatMsg_K2Node_ComponentBoundEvent_106_OnEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickMenu_BP.QuickMenu_BP_C.BndEvt__friendChatMsg_K2Node_ComponentBoundEvent_106_OnEditableTextCommittedEvent__DelegateSignature");

	UQuickMenu_BP_C_BndEvt__friendChatMsg_K2Node_ComponentBoundEvent_106_OnEditableTextCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickMenu_BP.QuickMenu_BP_C.BndEvt__Button_Refuse_K2Node_ComponentBoundEvent_86_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UQuickMenu_BP_C::BndEvt__Button_Refuse_K2Node_ComponentBoundEvent_86_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickMenu_BP.QuickMenu_BP_C.BndEvt__Button_Refuse_K2Node_ComponentBoundEvent_86_OnButtonClickedEvent__DelegateSignature");

	UQuickMenu_BP_C_BndEvt__Button_Refuse_K2Node_ComponentBoundEvent_86_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickMenu_BP.QuickMenu_BP_C.BndEvt__Button_accept_K2Node_ComponentBoundEvent_103_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UQuickMenu_BP_C::BndEvt__Button_accept_K2Node_ComponentBoundEvent_103_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickMenu_BP.QuickMenu_BP_C.BndEvt__Button_accept_K2Node_ComponentBoundEvent_103_OnButtonClickedEvent__DelegateSignature");

	UQuickMenu_BP_C_BndEvt__Button_accept_K2Node_ComponentBoundEvent_103_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickMenu_BP.QuickMenu_BP_C.ReceivedInitWidget
// (Event, Public, BlueprintEvent)

void UQuickMenu_BP_C::ReceivedInitWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickMenu_BP.QuickMenu_BP_C.ReceivedInitWidget");

	UQuickMenu_BP_C_ReceivedInitWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickMenu_BP.QuickMenu_BP_C.ReceivePlayerStateData
// (BlueprintCallable, BlueprintEvent)

void UQuickMenu_BP_C::ReceivePlayerStateData()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickMenu_BP.QuickMenu_BP_C.ReceivePlayerStateData");

	UQuickMenu_BP_C_ReceivePlayerStateData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickMenu_BP.QuickMenu_BP_C.BndEvt__InviteClose_K2Node_ComponentBoundEvent_164_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UQuickMenu_BP_C::BndEvt__InviteClose_K2Node_ComponentBoundEvent_164_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickMenu_BP.QuickMenu_BP_C.BndEvt__InviteClose_K2Node_ComponentBoundEvent_164_OnButtonClickedEvent__DelegateSignature");

	UQuickMenu_BP_C_BndEvt__InviteClose_K2Node_ComponentBoundEvent_164_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickMenu_BP.QuickMenu_BP_C.BndEvt__Button_sendfriend_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UQuickMenu_BP_C::BndEvt__Button_sendfriend_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickMenu_BP.QuickMenu_BP_C.BndEvt__Button_sendfriend_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature");

	UQuickMenu_BP_C_BndEvt__Button_sendfriend_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickMenu_BP.QuickMenu_BP_C.BndEvt__Button_Teamsend_K2Node_ComponentBoundEvent_54_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UQuickMenu_BP_C::BndEvt__Button_Teamsend_K2Node_ComponentBoundEvent_54_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickMenu_BP.QuickMenu_BP_C.BndEvt__Button_Teamsend_K2Node_ComponentBoundEvent_54_OnButtonClickedEvent__DelegateSignature");

	UQuickMenu_BP_C_BndEvt__Button_Teamsend_K2Node_ComponentBoundEvent_54_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickMenu_BP.QuickMenu_BP_C.ExecuteUbergraph_QuickMenu_BP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuickMenu_BP_C::ExecuteUbergraph_QuickMenu_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickMenu_BP.QuickMenu_BP_C.ExecuteUbergraph_QuickMenu_BP");

	UQuickMenu_BP_C_ExecuteUbergraph_QuickMenu_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
