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

// ScriptBlueprintGeneratedClass bp_chat_entrance.bp_chat_entrance_C
// 0x0088 (0x0418 - 0x0390)
class Abp_chat_entrance_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_ChatEntranceVoiceRoomId;                               // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_ChatEntranceValid;                                     // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03A9(0x0007) MISSED OFFSET
	struct FString                                     BP_ChatEntranceNewMsg;                                    // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ChatEntranceNewChannel;                                // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_ChatFriendNewMsgCount;                                 // 0x03C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_ChatEntranceTickBufferList;                            // 0x03C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_ChatEntranceEnterCorps;                                // 0x03C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_ChatEntranceEnterRoom;                                 // 0x03CA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x03CB(0x0001) MISSED OFFSET
	int                                                BP_ChatEntranceQuickMsgId;                                // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_ChatEntranceClearGID;                                  // 0x03D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ChatEntranceQuickMsgStr;                               // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_ChatEntranceTeamed;                                    // 0x03F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x03F1(0x0007) MISSED OFFSET
	struct FString                                     BP_ChatEntranceNewSender;                                 // 0x03F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ChatEntranceChatroomNewMsgCount;                       // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x040C(0x0004) MISSED OFFSET
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_chat_entrance.bp_chat_entrance_C");
		return ptr;
	}


	void EventTestJoinGameRoom_NoFetch();
	void EventTestJoinGameRoom();
	void EventSetInfo_Push_NoFetch();
	void EventSetInfo_Push();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventClickBtnRecruit_NoFetch();
	void EventClickBtnRecruit();
	void EventOpenChatUI_NoFetch();
	void EventOpenChatUI();
	void EventOpenChatWindow_NoFetch();
	void EventOpenChatWindow();
	void EventTestQuitRoom_NoFetch();
	void EventTestQuitRoom();
	void EventPopMessageBuffer_NoFetch();
	void EventPopMessageBuffer();
	void EventOpenFriendNewChat_NoFetch();
	void EventOpenFriendNewChat();
	void EventAchieveQuickMsgStr_NoFetch();
	void EventAchieveQuickMsgStr();
	void EventSendTeamQuickMsg_NoFetch();
	void EventSendTeamQuickMsg();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
