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

// ScriptBlueprintGeneratedClass bp_chat_room.bp_chat_room_C
// 0x0348 (0x06D8 - 0x0390)
class Abp_chat_room_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_ChatRoom_CreatePassword;                               // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ChatRoom_ScrollStart;                                  // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_ChatRoom_MyRoomIsSelfCreate;                           // 0x03AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_ChatRoom_MyRoomIsMarked;                               // 0x03AD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x03AE(0x0002) MISSED OFFSET
	struct FString                                     BP_ChatRoom_CreateName;                                   // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ChatRoom_MyRoomName;                                   // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ChatRoom_MyRoomAnnouncement;                           // 0x03D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ChatRoom_EmptyRoomAnnouncement;                        // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ChatRoom_SetWindowTitle;                               // 0x03F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ChatRoom_ClickMenuPlayerGender;                        // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0404(0x0004) MISSED OFFSET
	struct FString                                     BP_ChatRoom_MyRoomID;                                     // 0x0408(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ChatRoom_RecommendTypeOfficial;                        // 0x0418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x041C(0x0004) MISSED OFFSET
	TArray<struct FBP_STRUCT_ChatRoomInfo>             BP_ARRAY_ChatRoomRecommendList;                           // 0x0420(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_ChatRoom_ClickMenuPlayerIsPullBlack;                   // 0x0430(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0431(0x0003) MISSED OFFSET
	int                                                BP_ChatRoom_RecommendTypeFriend;                          // 0x0434(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_ChatShowHelpContent;                                   // 0x0438(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ChatRoom_RecommendTypeRandom;                          // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_ChatRoom_MyRoomNeedKey;                                // 0x044C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x044D(0x0003) MISSED OFFSET
	struct FBP_STRUCT_ChatRoomLabel                    BP_STRUCT_ChatRoomLabel;                                  // 0x0450(0x0020) (Edit, BlueprintVisible)
	struct FString                                     BP_ChatRoom_WillMarkRoomID;                               // 0x0470(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_ChatRoomInfo>             BP_ARRAY_ChatRoomInfoList;                                // 0x0480(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ChatRoom_Announcement;                                 // 0x0490(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ChatRoom_SearchRoomPassword;                           // 0x04A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_ChatRoomLitePlayer               BP_STRUCT_ChatRoomLitePlayer;                             // 0x04B0(0x0010) (Edit, BlueprintVisible)
	int                                                BP_ChatRoom_ScrollEnd;                                    // 0x04C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x04C4(0x0004) MISSED OFFSET
	TArray<struct FBP_STRUCT_ChatRoomLabel>            BP_ARRAY_ChatRoomLabelSelectedList;                       // 0x04C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_ChatRoom_WillMarkRoomState;                            // 0x04D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x04D9(0x0007) MISSED OFFSET
	struct FString                                     BP_ChatRoom_SearchRoomID;                                 // 0x04E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ChatRoom_ClickLabelId;                                 // 0x04F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x04F4(0x0004) MISSED OFFSET
	struct FString                                     BP_ChatRoom_LabelIntroduce;                               // 0x04F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_ChatRoom_ClickMenuPlayerInMyTeam;                      // 0x0508(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0509(0x0007) MISSED OFFSET
	struct FString                                     BP_ChatRoom_ClickMenuPlayerID;                            // 0x0510(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ChatRoom_MyRoomPlayerCount;                            // 0x0520(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x0524(0x0004) MISSED OFFSET
	TArray<struct FBP_STRUCT_ChatRoomPlayer>           BP_ARRAY_ChatRoomPlayerDetailList;                        // 0x0528(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ChatRoom_MyChatRoomPassword;                           // 0x0538(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ChatRoom_RecommendTypeHot;                             // 0x0548(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x054C(0x0004) MISSED OFFSET
	struct FBP_STRUCT_ChatRoomPlayer                   BP_STRUCT_ChatRoomPlayer;                                 // 0x0550(0x0080) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_ChatRoomLitePlayer>       BP_ARRAY_ChatRoomPlayerLiteList;                          // 0x05D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ChatRoom_MaxLabelNum;                                  // 0x05E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x05E4(0x0004) MISSED OFFSET
	TArray<struct FBP_STRUCT_ChatRoomLabel>            BP_ARRAY_ChatRoomLabelList;                               // 0x05E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_ChatRoom_ClickMenuPlayerIsFriend;                      // 0x05F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x05F9(0x0007) MISSED OFFSET
	TArray<struct FBP_STRUCT_ChatRoomPlayer>           BP_ARRAY_ChatRoomPlayerList;                              // 0x0600(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_ChatRoomInfo                     BP_STRUCT_ChatRoomInfo;                                   // 0x0610(0x0088) (Edit, BlueprintVisible)
	struct FString                                     BP_ChatRoom_CreateWindowTitle;                            // 0x0698(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ChatRoom_InputString;                                  // 0x06A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ChatRoom_DefaultCreateName;                            // 0x06B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ChatRoom_UpdateOnePlayerIndex;                         // 0x06C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_ChatRoom_UpdateMemberIndex;                            // 0x06CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x06D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_chat_room.bp_chat_room_C");
		return ptr;
	}


	void EventCreateChatRoom_NoFetch();
	void EventCreateChatRoom();
	void EventChatRoomUpdateOnMemberAddOrRemove_NoFetch();
	void EventChatRoomUpdateOnMemberAddOrRemove();
	void EventChatRoomOnMyRoom_NoFetch();
	void EventChatRoomOnMyRoom();
	void EventChatRoomCheckAnnouncement_NoFetch();
	void EventChatRoomCheckAnnouncement();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventChatRoomChangeScroll_NoFetch();
	void EventChatRoomChangeScroll();
	void EventChatRoomOnShowList_NoFetch();
	void EventChatRoomOnShowList();
	void EventSaveChatRoom_NoFetch();
	void EventSaveChatRoom();
	void EventClickSearchAndJoinRoom_NoFetch();
	void EventClickSearchAndJoinRoom();
	void EventQuitChatRoom_NoFetch();
	void EventQuitChatRoom();
	void EventClickChatRoomPlayerInfo_NoFetch();
	void EventClickChatRoomPlayerInfo();
	void EventClickMarkState_NoFetch();
	void EventClickMarkState();
	void EventJoinChatRoom_NoFetch();
	void EventJoinChatRoom();
	void EventOpenChatRoomPassword_NoFetch();
	void EventOpenChatRoomPassword();
	void EventAlertNeedPassword_NoFetch();
	void EventAlertNeedPassword();
	void EventAlertNeedRoomID_NoFetch();
	void EventAlertNeedRoomID();
	void EventAlertNeedRoomName_NoFetch();
	void EventAlertNeedRoomName();
	void EventChatRoomPlayerInfo_NoFetch();
	void EventChatRoomPlayerInfo();
	void EventChatRoomUpdateClickMenuPlayer_NoFetch();
	void EventChatRoomUpdateClickMenuPlayer();
	void EventChatRoomJoinTeam_NoFetch();
	void EventChatRoomJoinTeam();
	void EventChatRoomPullBlack_NoFetch();
	void EventChatRoomPullBlack();
	void EventChatRoomInviteTeam_NoFetch();
	void EventChatRoomInviteTeam();
	void EventOpenCreateChatRoomPanel_NoFetch();
	void EventOpenCreateChatRoomPanel();
	void EventChatRoomMenuOpen_NoFetch();
	void EventChatRoomMenuOpen();
	void EventChatRoomCheckName_NoFetch();
	void EventChatRoomCheckName();
	void EventChatRoomReplaceSpace_NoFetch();
	void EventChatRoomReplaceSpace();
	void EventClickRemoveRoom_NoFetch();
	void EventClickRemoveRoom();
	void EventChatRoomAddFriend_NoFetch();
	void EventChatRoomAddFriend();
	void EventChatRoomRefreshRecommend_NoFetch();
	void EventChatRoomRefreshRecommend();
	void EventChatRoomClickLabel_NoFetch();
	void EventChatRoomClickLabel();
	void EventOpenSetChatRoomPanel_NoFetch();
	void EventOpenSetChatRoomPanel();
	void EventChatRoomScrollMemberList_NoFetch();
	void EventChatRoomScrollMemberList();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
