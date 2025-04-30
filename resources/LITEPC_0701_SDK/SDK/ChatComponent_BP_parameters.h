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

// Function ChatComponent_BP.ChatComponent_BP_C.LoadSingleAudio
struct UChatComponent_BP_C_LoadSingleAudio_Params
{
	int                                                chatTextID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChatComponent_BP.ChatComponent_BP_C.LoadAllAudio
struct UChatComponent_BP_C_LoadAllAudio_Params
{
};

// Function ChatComponent_BP.ChatComponent_BP_C.CreateAudio
struct UChatComponent_BP_C_CreateAudio_Params
{
	class UObject*                                     audio;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChatComponent_BP.ChatComponent_BP_C.SetQuickChatList
struct UChatComponent_BP_C_SetQuickChatList_Params
{
};

// Function ChatComponent_BP.ChatComponent_BP_C.InitFromSetting
struct UChatComponent_BP_C_InitFromSetting_Params
{
};

// Function ChatComponent_BP.ChatComponent_BP_C.AddOneMsgToUIInner
struct UChatComponent_BP_C_AddOneMsgToUIInner_Params
{
	bool                                               isMe;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChatComponent_BP.ChatComponent_BP_C.PlaySound
struct UChatComponent_BP_C_PlaySound_Params
{
	int                                                msgID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChatComponent_BP.ChatComponent_BP_C.AddToArray
struct UChatComponent_BP_C_AddToArray_Params
{
};

// Function ChatComponent_BP.ChatComponent_BP_C.AddOneMsgToUI1
struct UChatComponent_BP_C_AddOneMsgToUI1_Params
{
	struct FString*                                    Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString*                                    Content;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int*                                               msgID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              isMe;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              PlaySound;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChatComponent_BP.ChatComponent_BP_C.NotifyFriendChat
struct UChatComponent_BP_C_NotifyFriendChat_Params
{
	struct FString*                                    str_gid;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString*                                    sender_name;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString*                                    chat_content;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool*                                              self_msg;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChatComponent_BP.ChatComponent_BP_C.NotifyFriendInvite
struct UChatComponent_BP_C_NotifyFriendInvite_Params
{
	struct FString*                                    str_gid;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString*                                    sender_name;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function ChatComponent_BP.ChatComponent_BP_C.NotifyFriendReplyInvite
struct UChatComponent_BP_C_NotifyFriendReplyInvite_Params
{
	struct FString*                                    str_gid;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString*                                    sender_name;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool*                                              bReply;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChatComponent_BP.ChatComponent_BP_C.ReceiveBeginPlay
struct UChatComponent_BP_C_ReceiveBeginPlay_Params
{
};

// Function ChatComponent_BP.ChatComponent_BP_C.SendDirtyFilter
struct UChatComponent_BP_C_SendDirtyFilter_Params
{
	struct FString*                                    Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString*                                    Content;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool*                                              isMe;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChatComponent_BP.ChatComponent_BP_C.OnFilterFinish
struct UChatComponent_BP_C_OnFilterFinish_Params
{
	struct FString*                                    filterText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function ChatComponent_BP.ChatComponent_BP_C.CloseChatHistoryList
struct UChatComponent_BP_C_CloseChatHistoryList_Params
{
};

// Function ChatComponent_BP.ChatComponent_BP_C.UpdateQuickItemText
struct UChatComponent_BP_C_UpdateQuickItemText_Params
{
	int*                                               msgID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               alternateMsgID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChatComponent_BP.ChatComponent_BP_C.ExecuteUbergraph_ChatComponent_BP
struct UChatComponent_BP_C_ExecuteUbergraph_ChatComponent_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
