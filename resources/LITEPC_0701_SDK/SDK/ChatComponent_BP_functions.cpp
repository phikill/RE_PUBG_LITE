
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

// Function ChatComponent_BP.ChatComponent_BP_C.LoadSingleAudio
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            chatTextID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChatComponent_BP_C::LoadSingleAudio(int chatTextID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatComponent_BP.ChatComponent_BP_C.LoadSingleAudio");

	UChatComponent_BP_C_LoadSingleAudio_Params params;
	params.chatTextID = chatTextID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChatComponent_BP.ChatComponent_BP_C.LoadAllAudio
// (Public, BlueprintCallable, BlueprintEvent)

void UChatComponent_BP_C::LoadAllAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatComponent_BP.ChatComponent_BP_C.LoadAllAudio");

	UChatComponent_BP_C_LoadAllAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChatComponent_BP.ChatComponent_BP_C.CreateAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 audio                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            resID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChatComponent_BP_C::CreateAudio(class UObject* audio, int resID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatComponent_BP.ChatComponent_BP_C.CreateAudio");

	UChatComponent_BP_C_CreateAudio_Params params;
	params.audio = audio;
	params.resID = resID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChatComponent_BP.ChatComponent_BP_C.SetQuickChatList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UChatComponent_BP_C::SetQuickChatList()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatComponent_BP.ChatComponent_BP_C.SetQuickChatList");

	UChatComponent_BP_C_SetQuickChatList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChatComponent_BP.ChatComponent_BP_C.InitFromSetting
// (Public, BlueprintCallable, BlueprintEvent)

void UChatComponent_BP_C::InitFromSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatComponent_BP.ChatComponent_BP_C.InitFromSetting");

	UChatComponent_BP_C_InitFromSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChatComponent_BP.ChatComponent_BP_C.AddOneMsgToUIInner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isMe                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChatComponent_BP_C::AddOneMsgToUIInner(bool isMe)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatComponent_BP.ChatComponent_BP_C.AddOneMsgToUIInner");

	UChatComponent_BP_C_AddOneMsgToUIInner_Params params;
	params.isMe = isMe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChatComponent_BP.ChatComponent_BP_C.PlaySound
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            msgID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChatComponent_BP_C::PlaySound(int msgID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatComponent_BP.ChatComponent_BP_C.PlaySound");

	UChatComponent_BP_C_PlaySound_Params params;
	params.msgID = msgID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChatComponent_BP.ChatComponent_BP_C.AddToArray
// (Public, BlueprintCallable, BlueprintEvent)

void UChatComponent_BP_C::AddToArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatComponent_BP.ChatComponent_BP_C.AddToArray");

	UChatComponent_BP_C_AddToArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChatComponent_BP.ChatComponent_BP_C.AddOneMsgToUI1
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString*                Content                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int*                           msgID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          isMe                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          PlaySound                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChatComponent_BP_C::AddOneMsgToUI1(struct FString* Name, struct FString* Content, int* msgID, bool* isMe, bool* PlaySound)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatComponent_BP.ChatComponent_BP_C.AddOneMsgToUI1");

	UChatComponent_BP_C_AddOneMsgToUI1_Params params;
	params.Name = Name;
	params.Content = Content;
	params.msgID = msgID;
	params.isMe = isMe;
	params.PlaySound = PlaySound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChatComponent_BP.ChatComponent_BP_C.NotifyFriendChat
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                str_gid                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString*                sender_name                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString*                chat_content                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool*                          self_msg                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChatComponent_BP_C::NotifyFriendChat(struct FString* str_gid, struct FString* sender_name, struct FString* chat_content, bool* self_msg)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatComponent_BP.ChatComponent_BP_C.NotifyFriendChat");

	UChatComponent_BP_C_NotifyFriendChat_Params params;
	params.str_gid = str_gid;
	params.sender_name = sender_name;
	params.chat_content = chat_content;
	params.self_msg = self_msg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChatComponent_BP.ChatComponent_BP_C.NotifyFriendInvite
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                str_gid                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString*                sender_name                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UChatComponent_BP_C::NotifyFriendInvite(struct FString* str_gid, struct FString* sender_name)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatComponent_BP.ChatComponent_BP_C.NotifyFriendInvite");

	UChatComponent_BP_C_NotifyFriendInvite_Params params;
	params.str_gid = str_gid;
	params.sender_name = sender_name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChatComponent_BP.ChatComponent_BP_C.NotifyFriendReplyInvite
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                str_gid                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString*                sender_name                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool*                          bReply                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChatComponent_BP_C::NotifyFriendReplyInvite(struct FString* str_gid, struct FString* sender_name, bool* bReply)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatComponent_BP.ChatComponent_BP_C.NotifyFriendReplyInvite");

	UChatComponent_BP_C_NotifyFriendReplyInvite_Params params;
	params.str_gid = str_gid;
	params.sender_name = sender_name;
	params.bReply = bReply;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChatComponent_BP.ChatComponent_BP_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UChatComponent_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatComponent_BP.ChatComponent_BP_C.ReceiveBeginPlay");

	UChatComponent_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChatComponent_BP.ChatComponent_BP_C.SendDirtyFilter
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString*                Content                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool*                          isMe                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChatComponent_BP_C::SendDirtyFilter(struct FString* Name, struct FString* Content, bool* isMe)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatComponent_BP.ChatComponent_BP_C.SendDirtyFilter");

	UChatComponent_BP_C_SendDirtyFilter_Params params;
	params.Name = Name;
	params.Content = Content;
	params.isMe = isMe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChatComponent_BP.ChatComponent_BP_C.OnFilterFinish
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                filterText                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UChatComponent_BP_C::OnFilterFinish(struct FString* filterText)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatComponent_BP.ChatComponent_BP_C.OnFilterFinish");

	UChatComponent_BP_C_OnFilterFinish_Params params;
	params.filterText = filterText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChatComponent_BP.ChatComponent_BP_C.CloseChatHistoryList
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UChatComponent_BP_C::CloseChatHistoryList()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatComponent_BP.ChatComponent_BP_C.CloseChatHistoryList");

	UChatComponent_BP_C_CloseChatHistoryList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChatComponent_BP.ChatComponent_BP_C.UpdateQuickItemText
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           msgID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           resID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           alternateMsgID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChatComponent_BP_C::UpdateQuickItemText(int* msgID, int* resID, int* alternateMsgID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatComponent_BP.ChatComponent_BP_C.UpdateQuickItemText");

	UChatComponent_BP_C_UpdateQuickItemText_Params params;
	params.msgID = msgID;
	params.resID = resID;
	params.alternateMsgID = alternateMsgID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChatComponent_BP.ChatComponent_BP_C.ExecuteUbergraph_ChatComponent_BP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChatComponent_BP_C::ExecuteUbergraph_ChatComponent_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatComponent_BP.ChatComponent_BP_C.ExecuteUbergraph_ChatComponent_BP");

	UChatComponent_BP_C_ExecuteUbergraph_ChatComponent_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
