#pragma once

// Name: LitePC_0701, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ChatComponent_BP.ChatComponent_BP_C
// 0x00F4 (0x0334 - 0x0240)
class UChatComponent_BP_C : public UChatComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (Transient, DuplicateTransient)
	struct FString                                     addToUIText;                                              // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             UITextArray;                                              // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                FirstIndex;                                               // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x026C(0x0004) MISSED OFFSET
	struct FString                                     currContentMsg;                                           // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class USettingConfig_C*                            Setting;                                                  // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInitSetting;                                             // 0x0288(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0289(0x0007) MISSED OFFSET
	struct FString                                     FriendChatStrGid;                                         // 0x0290(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     FriendChatSenderName;                                     // 0x02A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     FriendChatContent;                                        // 0x02B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               FriendChatSelfMsg;                                        // 0x02C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x02C1(0x0007) MISSED OFFSET
	struct FString                                     FriendInviteStrGid;                                       // 0x02C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     FriendInviteSenderName;                                   // 0x02D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     FriendInviteBattleTextValue;                              // 0x02E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     FriendReplyStrGid;                                        // 0x02F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     FriendReplySenderName;                                    // 0x0308(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               FriendReplyReply;                                         // 0x0318(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isMe;                                                     // 0x0319(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x031A(0x0002) MISSED OFFSET
	int                                                UI_MsgID;                                                 // 0x031C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     UI_ItemName;                                              // 0x0320(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                UI_AlternateMsgID;                                        // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ChatComponent_BP.ChatComponent_BP_C");
		return ptr;
	}


	void LoadSingleAudio(int chatTextID);
	void LoadAllAudio();
	void CreateAudio(class UObject* audio, int resID);
	void SetQuickChatList();
	void InitFromSetting();
	void AddOneMsgToUIInner(bool isMe);
	void PlaySound(int msgID);
	void AddToArray();
	void AddOneMsgToUI1(struct FString* Name, struct FString* Content, int* msgID, bool* isMe, bool* PlaySound);
	void NotifyFriendChat(struct FString* str_gid, struct FString* sender_name, struct FString* chat_content, bool* self_msg);
	void NotifyFriendInvite(struct FString* str_gid, struct FString* sender_name);
	void NotifyFriendReplyInvite(struct FString* str_gid, struct FString* sender_name, bool* bReply);
	void ReceiveBeginPlay();
	void SendDirtyFilter(struct FString* Name, struct FString* Content, bool* isMe);
	void OnFilterFinish(struct FString* filterText);
	void CloseChatHistoryList();
	void UpdateQuickItemText(int* msgID, int* resID, int* alternateMsgID);
	void ExecuteUbergraph_ChatComponent_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
