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

// ScriptBlueprintGeneratedClass bp_lobby_friend.bp_lobby_friend_C
// 0x0938 (0x0CC8 - 0x0390)
class Abp_lobby_friend_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_FRIEND_CHAT_ID;                                        // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_Friend_Process_Add_Friend;                             // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03A9(0x0007) MISSED OFFSET
	struct FBP_STRUCT_Search_Data                      BP_STRUCT_Search_Data;                                    // 0x03B0(0x0020) (Edit, BlueprintVisible)
	int                                                BP_Friend_Search_PlayDate;                                // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03D4(0x0004) MISSED OFFSET
	struct FBP_STRUCT_FriendLiteProfile                BP_STRUCT_FriendLiteProfile;                              // 0x03D8(0x0010) (Edit, BlueprintVisible)
	int                                                BP_Platform_Friend_Scroll_End;                            // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03EC(0x0004) MISSED OFFSET
	struct FString                                     BP_RSPAdd_OP;                                             // 0x03F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Inner_Friend_Scroll_Start;                             // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0404(0x0004) MISSED OFFSET
	TArray<struct FBP_STRUCT_FriendLiteProfile>        BP_ARRAY_Apply_Friend_Lite_Profile;                       // 0x0408(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_FriendLiteProfile>        BP_ARRAY_Blacklist_Friend_Lite_Profile;                   // 0x0418(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Delete_Friend_ID;                                      // 0x0428(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_Intimacy_DetailData>      BP_Array_Intimacy_DetailData;                             // 0x0438(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Apply_Friend_Scroll_End;                               // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x044C(0x0004) MISSED OFFSET
	struct FString                                     BP_Delete_Friend_Name;                                    // 0x0450(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Friend_Intimacy_Build_Gid;                             // 0x0460(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_Lobby_Friend_Search_Data         BP_STRUCT_Lobby_Friend_Search_Data;                       // 0x0470(0x0100) (Edit, BlueprintVisible)
	int                                                BP_Verify_MaxWordCount;                                   // 0x0570(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0574(0x0004) MISSED OFFSET
	struct FString                                     BP_DELETE_FRIEND_BLACK_NAME;                              // 0x0578(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Friend_Search_Gender;                                  // 0x0588(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x058C(0x0004) MISSED OFFSET
	struct FBP_STRUCT_FriendProfile                    BP_STRUCT_FriendProfile;                                  // 0x0590(0x01C0) (Edit, BlueprintVisible)
	int                                                BP_NearBy_Gender_Filter;                                  // 0x0750(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0754(0x0004) MISSED OFFSET
	struct FString                                     BP_FriendSystem_SelectedFriendNickNameAddQQFriend;        // 0x0758(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_DELETE_FRIEND_BLACK_ID;                                // 0x0768(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_Friend_Is_Show;                                        // 0x0778(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0779(0x0003) MISSED OFFSET
	int                                                BP_Friend_UpdateInnerIndex;                               // 0x077C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_FriendLiteProfile>        BP_ARRAY_Search_Friend_Lite_Profile;                      // 0x0780(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Friend_Intimacy_Delete_NickName;                       // 0x0790(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Friend_UpdatePlatIndex;                                // 0x07A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Recent_Teammate_ScrollStart;                           // 0x07A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Recent_Teammate_ScrollEnd;                             // 0x07A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Friend_Add_Index;                                      // 0x07AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Friend_Intimacy_Op;                                    // 0x07B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Search_Friend_Scroll_End;                              // 0x07B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Friend_Intimacy_Apply_Has_New;                         // 0x07B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x07B9(0x0007) MISSED OFFSET
	struct FString                                     BP_Friend_Intimacy_NickName;                              // 0x07C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_FriendProfile>            BP_ARRAY_Near_By_Profile;                                 // 0x07D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_FriendLiteProfile>        BP_ARRAY_Recent_Teammate_Lite_Profile;                    // 0x07E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Friend_Intimacy_Delete_Gid;                            // 0x07F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Friend_SearchName;                                     // 0x0800(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_FriendLiteProfile>        BP_ARRAY_Plat_Friend_Lite_Profile;                        // 0x0810(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Friend_Intimacy_Relation;                              // 0x0820(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x0824(0x0004) MISSED OFFSET
	struct FString                                     BP_Add_Friend_ID;                                         // 0x0828(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_FriendProfile>            BP_ARRAY_Inner_Friend_Detail_Profile;                     // 0x0838(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_Intimacy_Data                    BP_STRUCT_Intimacy_Data;                                  // 0x0848(0x0078) (Edit, BlueprintVisible)
	struct FString                                     BP_Friend_Intimacy_Gid;                                   // 0x08C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_NearBy_SelfUID;                                        // 0x08D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Add_Friend_Verify;                                     // 0x08E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_XY_API_URL;                                            // 0x08F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_FRIEND_PROFILE_ID;                                     // 0x0900(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Friend_Intimacy_Delete_State;                          // 0x0910(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Friend_Search_Is_Same_City;                            // 0x0914(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0915(0x0003) MISSED OFFSET
	int                                                BP_Search_Friend_Scroll_Start;                            // 0x0918(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x091C(0x0004) MISSED OFFSET
	struct FString                                     BP_NearBy_Empty_Tips;                                     // 0x0920(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_Lobby_Friend_Common_Data         BP_STRUCT_Lobby_Friend_Common_Data;                       // 0x0930(0x00E8) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_FriendProfile>            BP_ARRAY_Plat_Friend_Profile;                             // 0x0A18(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_FriendProfile>            BP_ARRAY_Search_Friend_Profile;                           // 0x0A28(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_NearBy_Empty_Tips_Location_Close;                      // 0x0A38(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_Intimacy_DetailData              BP_STRUCT_Intimacy_DetailData;                            // 0x0A48(0x0020) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_Search_Data>              BP_Array_Search_Data;                                     // 0x0A68(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Apply_Friend_Scroll_Start;                             // 0x0A78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x0A7C(0x0004) MISSED OFFSET
	struct FString                                     BP_RSPAdd_Friend_ID;                                      // 0x0A80(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_BlackList_Friend_Scroll_End;                           // 0x0A90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Platform_Friend_Scroll_Start;                          // 0x0A94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_FriendProfile>            BP_ARRAY_Blacklist_Friend_Profile;                        // 0x0A98(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Friend_Search_Tendency;                                // 0x0AA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_BlackList_Friend_Scroll_Start;                         // 0x0AAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_LobbyFriend_Master_RedPoint;                           // 0x0AB0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x7];                                       // 0x0AB1(0x0007) MISSED OFFSET
	TArray<struct FBP_STRUCT_FriendLiteProfile>        BP_ARRAY_Inner_Friend_Lite_Profile;                       // 0x0AB8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_FriendProfile>            BP_ARRAY_Near_By_Gender_Filter_Profile;                   // 0x0AC8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Friend_Intimacy_Delete_Relation;                       // 0x0AD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_NearBy_Location_Open;                                  // 0x0ADC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x0ADD(0x0003) MISSED OFFSET
	int                                                BP_Friend_Panel_Tab_Index;                                // 0x0AE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Friend_Intimacy_Build_Relation;                        // 0x0AE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Friend_Platform;                                       // 0x0AE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x0AEC(0x0004) MISSED OFFSET
	struct FBP_STRUCT_Lobby_Friend_Apply_Data          BP_STRUCT_Lobby_Friend_Apply_Data;                        // 0x0AF0(0x0110) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_Lobby_Friend_Search_Data> BP_ARRAY_Search_Friend_Detail_Profile;                    // 0x0C00(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_FriendProfile>            BP_ARRAY_Blacklist_Friend_Detail_Profile;                 // 0x0C10(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Inner_Friend_Scroll_End;                               // 0x0C20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData17[0x4];                                       // 0x0C24(0x0004) MISSED OFFSET
	TArray<struct FBP_STRUCT_FriendProfile>            BP_ARRAY_Apply_Friend_Profile;                            // 0x0C28(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_FriendSystem_Present_Coin_Friend_ID;                   // 0x0C38(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Add_Friend_Gender;                                     // 0x0C48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData18[0x4];                                       // 0x0C4C(0x0004) MISSED OFFSET
	TArray<struct FBP_STRUCT_FriendProfile>            BP_ARRAY_Recent_Teammate_Detail_Profile;                  // 0x0C50(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_FriendProfile>            BP_ARRAY_Plat_Friend_Detail_Profile;                      // 0x0C60(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Friend_Search_Segment;                                 // 0x0C70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData19[0x4];                                       // 0x0C74(0x0004) MISSED OFFSET
	TArray<struct FBP_STRUCT_FriendProfile>            BP_ARRAY_Recent_Teammate_Profile;                         // 0x0C78(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_Intimacy_Data>            BP_ARRAY_Intimacy_Data;                                   // 0x0C88(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Friend_Search_PlayTime;                                // 0x0C98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData20[0x4];                                       // 0x0C9C(0x0004) MISSED OFFSET
	TArray<struct FBP_STRUCT_FriendProfile>            BP_ARRAY_Inner_Friend_Profile;                            // 0x0CA0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_Lobby_Friend_Apply_Data>  BP_ARRAY_Apply_Friend_Detail_Profile;                     // 0x0CB0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0CC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_lobby_friend.bp_lobby_friend_C");
		return ptr;
	}


	void EventNearByUpdateFilterArray_NoFetch();
	void EventNearByUpdateFilterArray();
	void EventLobbyFriendFetchFriendList_NoFetch();
	void EventLobbyFriendFetchFriendList();
	void EventLobbyFriendScrollApplyList_NoFetch();
	void EventLobbyFriendScrollApplyList();
	void EventLobbyFriendSearchReq_NoFetch();
	void EventLobbyFriendSearchReq();
	void EventLobbyFriendDeleteBlackReq_NoFetch();
	void EventLobbyFriendDeleteBlackReq();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventShowSendAddFriendRequestTips_NoFetch();
	void EventShowSendAddFriendRequestTips();
	void EventXYAPISetUrl_NoFetch();
	void EventXYAPISetUrl();
	void EventLobbyFriendIntimacyReq_NoFetch();
	void EventLobbyFriendIntimacyReq();
	void EventLobbyFriendReplyRelationReq_NoFetch();
	void EventLobbyFriendReplyRelationReq();
	void EventLobbyPresentCoinReq_NoFetch();
	void EventLobbyPresentCoinReq();
	void EventLobbyFriendDeleteRelationReq_NoFetch();
	void EventLobbyFriendDeleteRelationReq();
	void EventOpenMyCardPanelInFriendPanel_NoFetch();
	void EventOpenMyCardPanelInFriendPanel();
	void EventOpenIntimacyDescriptionPanel_NoFetch();
	void EventOpenIntimacyDescriptionPanel();
	void EventLobbyFriendScrollInnerList_NoFetch();
	void EventLobbyFriendScrollInnerList();
	void EventRecentTeammateScrollApplyList_NoFetch();
	void EventRecentTeammateScrollApplyList();
	void EventFetchNewNearByPersonInfoList_NoFetch();
	void EventFetchNewNearByPersonInfoList();
	void EventOpenMasterPanel_NoFetch();
	void EventOpenMasterPanel();
	void EventLobbyFriendMasterNotOpen_NoFetch();
	void EventLobbyFriendMasterNotOpen();
	void EventNearByCloseLocation_NoFetch();
	void EventNearByCloseLocation();
	void EventLobbyFriendBuildRelationReq_NoFetch();
	void EventLobbyFriendBuildRelationReq();
	void EventLobbyFriendDeleteReq_NoFetch();
	void EventLobbyFriendDeleteReq();
	void EventLobbyFriendLabelSearchReq_NoFetch();
	void EventLobbyFriendLabelSearchReq();
	void EventGetRecentTeammateList_NoFetch();
	void EventGetRecentTeammateList();
	void EventLobbyFriendAddFriendReqList_NoFetch();
	void EventLobbyFriendAddFriendReqList();
	void EventLobbyFriendApplyReq_NoFetch();
	void EventLobbyFriendApplyReq();
	void EventLobbyFriendAddQQFriend_NoFetch();
	void EventLobbyFriendAddQQFriend();
	void EventLobbyFriendScrollPlatList_NoFetch();
	void EventLobbyFriendScrollPlatList();
	void EventHideMasterPanel_NoFetch();
	void EventHideMasterPanel();
	void EventOpenNearByPanel_NoFetch();
	void EventOpenNearByPanel();
	void EventLobbyFriendProfileReq_NoFetch();
	void EventLobbyFriendProfileReq();
	void EventSetXYAPIHideRedPoint_NoFetch();
	void EventSetXYAPIHideRedPoint();
	void EventLobbyFriendBlackListScroll_NoFetch();
	void EventLobbyFriendBlackListScroll();
	void EventLobbyFriendGetBlackListReq_NoFetch();
	void EventLobbyFriendGetBlackListReq();
	void EventSetXYAPIShowRedPoint_NoFetch();
	void EventSetXYAPIShowRedPoint();
	void EventLobbyFriendChat_NoFetch();
	void EventLobbyFriendChat();
	void EventOpenFriendRuleDescriptionPanel_NoFetch();
	void EventOpenFriendRuleDescriptionPanel();
	void EventNearByOpenLocation_NoFetch();
	void EventNearByOpenLocation();
	void EventLobbyFriendRespondApply_NoFetch();
	void EventLobbyFriendRespondApply();
	void EventLobbyFriendScrollSearchList_NoFetch();
	void EventLobbyFriendScrollSearchList();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
