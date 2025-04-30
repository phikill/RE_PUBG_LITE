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

// ScriptBlueprintGeneratedClass bp_lobby.bp_lobby_C
// 0x0200 (0x0590 - 0x0390)
class Abp_lobby_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_PlayerGender;                                          // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Lobby_CanOpenUrl;                                      // 0x039C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x039D(0x0003) MISSED OFFSET
	struct FBP_STRUCT_TransformUseList                 BP_STRUCT_TransformUseList;                               // 0x03A0(0x0008) (Edit, BlueprintVisible)
	struct FBP_STRUCT_SpawnPlayerData                  BP_STRUCT_SpawnPlayerData;                                // 0x03A8(0x0030) (Edit, BlueprintVisible)
	int                                                BP_PlayerExp;                                             // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_CurrentRedPointStatus;                                 // 0x03DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03DD(0x0003) MISSED OFFSET
	int                                                BP_FriendApplyMessageCount;                               // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_LevelChange;                                           // 0x03E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Exciting_Party_Open;                                   // 0x03E5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x03E6(0x0002) MISSED OFFSET
	int                                                BP_LOBBY_SPAWNPOS;                                        // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x03EC(0x0004) MISSED OFFSET
	struct FBP_STRUCT_ShopLimit                        BP_STRUCT_ShopLimit;                                      // 0x03F0(0x0020) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_SpawnPlayerData>          BP_ARRAY_LobbyPlayerDataList;                             // 0x0410(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_ActivityBtnDisplay               BP_STRUCT_ActivityBtnDisplay;                             // 0x0420(0x0048) (Edit, BlueprintVisible)
	struct FBP_STRUCT_TeamUpRingsChange                BP_STRUCT_TeamUpRingsChange;                              // 0x0468(0x0018) (Edit, BlueprintVisible)
	int                                                BP_PlayerLevel;                                           // 0x0480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0484(0x0004) MISSED OFFSET
	TArray<struct FBP_STRUCT_ActivityBtnDisplay>       BP_ARRAY_LobbyActivityBtnDisplayList;                     // 0x0488(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Lobby_PlayerMaxRankLevel;                              // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Lobby_OpenShoporWardrobe;                              // 0x049C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Lobby_MenuOpen;                                        // 0x049D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x049E(0x0002) MISSED OFFSET
	TArray<int>                                        BP_ARRAY_Lobby_ActivityNotOpenList;                       // 0x04A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_COLLECT_EQUIPMENT_Open;                                // 0x04B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Free_Data_Open;                                        // 0x04B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x6];                                       // 0x04B2(0x0006) MISSED OFFSET
	struct FBP_STRUCT_LOBBY_GoldExp_BuffInfo           BP_STRUCT_LOBBY_GoldExp_BuffInfo;                         // 0x04B8(0x0020) (Edit, BlueprintVisible)
	int                                                BP_Lobby_Exp_Rate;                                        // 0x04D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x04DC(0x0004) MISSED OFFSET
	struct FString                                     BP_PlayerUid;                                             // 0x04E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_LOBBY_GoldExp_BuffInfo>   BP_ARRAY_Lobby_ExpBuffInfo;                               // 0x04F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_LOBBY_GoldExp_BuffInfo>   BP_ARRAY_Lobby_GoldBuffInfo;                              // 0x0500(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               EmulatorCheck_FirstinLobby;                               // 0x0510(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0511(0x0003) MISSED OFFSET
	int                                                BP_Lobby_Gold_Rate;                                       // 0x0514(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_PlayerIconUrl;                                         // 0x0518(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_LobbyNetworkStatus;                                    // 0x0528(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0529(0x0003) MISSED OFFSET
	int                                                BP_CurrentMaxExp;                                         // 0x052C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Lobby_Has_Gold_Rate;                                   // 0x0530(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DataMgrInit;                                              // 0x0531(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x2];                                       // 0x0532(0x0002) MISSED OFFSET
	int                                                BP_Lobby_Role_Avatar_Frame;                               // 0x0534(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_PlayerGold;                                            // 0x0538(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_LobbyNetworkDelay;                                     // 0x053C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Lobby_Has_Exp_Rate;                                    // 0x0540(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0541(0x0003) MISSED OFFSET
	int                                                BP_PlayerQQVip;                                           // 0x0544(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_AvatarChange                     BP_STRUCT_AvatarChange;                                   // 0x0548(0x0018) (Edit, BlueprintVisible)
	int                                                BP_LobbyPlayerNum;                                        // 0x0560(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Lobby_RankChange;                                      // 0x0564(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x0565(0x0003) MISSED OFFSET
	int                                                BP_CurrentMenuId;                                         // 0x0568(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_XinyueRedPointSvrOpen;                                 // 0x056C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x056D(0x0003) MISSED OFFSET
	struct FString                                     BP_PlayerName;                                            // 0x0570(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               LobbyModeSwitched;                                        // 0x0580(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x7];                                       // 0x0581(0x0007) MISSED OFFSET
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_lobby.bp_lobby_C");
		return ptr;
	}


	void EventEnterTeamUp_NoFetch();
	void EventEnterTeamUp();
	void EventAvatarChange_NoFetch();
	void EventAvatarChange();
	void EventTestRemovePlayer_NoFetch();
	void EventTestRemovePlayer();
	void EventLobbyLeaveGuidePanel_NoFetch();
	void EventLobbyLeaveGuidePanel();
	void EventLobbyLeaveSetting_NoFetch();
	void EventLobbyLeaveSetting();
	void EventEnterWardrobe_NoFetch();
	void EventEnterWardrobe();
	void EventOpenHuati_NoFetch();
	void EventOpenHuati();
	void EventTestRemovePlayer3_NoFetch();
	void EventTestRemovePlayer3();
	void EventEnterMailGift_NoFetch();
	void EventEnterMailGift();
	void EventLobbyOpenArmory_NoFetch();
	void EventLobbyOpenArmory();
	void EventTestSpawnPlayer2_NoFetch();
	void EventTestSpawnPlayer2();
	void EventLobbyLeaveChatWnd_NoFetch();
	void EventLobbyLeaveChatWnd();
	void EventLobbyHideShop_NoFetch();
	void EventLobbyHideShop();
	void EventLobbyShowDoubleCard_NoFetch();
	void EventLobbyShowDoubleCard();
	void EventLobbyLeaveRankList_NoFetch();
	void EventLobbyLeaveRankList();
	void EventTestScrollMsg_NoFetch();
	void EventTestScrollMsg();
	void EventClickDailyShareBtn_NoFetch();
	void EventClickDailyShareBtn();
	void EventOnClickCorps_NoFetch();
	void EventOnClickCorps();
	void EventOpenMissionUI_NoFetch();
	void EventOpenMissionUI();
	void EventGetCollectEquipOpenState_NoFetch();
	void EventGetCollectEquipOpenState();
	void EventRerollAllScrollMsg_NoFetch();
	void EventRerollAllScrollMsg();
	void EventLobbyLeaveTask_NoFetch();
	void EventLobbyLeaveTask();
	void EventLobbyLeaveMail_NoFetch();
	void EventLobbyLeaveMail();
	void EventSwitchBackLobbyMainCamera_NoFetch();
	void EventSwitchBackLobbyMainCamera();
	void EventInitActivityListComplete_NoFetch();
	void EventInitActivityListComplete();
	void EventGetExcitingPartyOpenState_NoFetch();
	void EventGetExcitingPartyOpenState();
	void EventInvitePlatformFriend_NoFetch();
	void EventInvitePlatformFriend();
	void EventOpenGetExcitingPartyUI_NoFetch();
	void EventOpenGetExcitingPartyUI();
	void EventOpenCollectEquipment_NoFetch();
	void EventOpenCollectEquipment();
	void EventClickQQAround_NoFetch();
	void EventClickQQAround();
	void EventOpenXinyue_NoFetch();
	void EventOpenXinyue();
	void EventOpenActivityPanel_NoFetch();
	void EventOpenActivityPanel();
	void EventEnterFriendList_NoFetch();
	void EventEnterFriendList();
	void EventGetShopLimitTitle_NoFetch();
	void EventGetShopLimitTitle();
	void EventOpenESportTV_NoFetch();
	void EventOpenESportTV();
	void EventOpenFreeDataUrl_NoFetch();
	void EventOpenFreeDataUrl();
	void EventOpenActivityGroupUI_NoFetch();
	void EventOpenActivityGroupUI();
	void EventClickRoom_Push_NoFetch();
	void EventClickRoom_Push();
	void EventOpenQQVip_NoFetch();
	void EventOpenQQVip();
	void EventOpenQQlibao_NoFetch();
	void EventOpenQQlibao();
	void EventTestLevelUp_NoFetch();
	void EventTestLevelUp();
	void EventOpenCommunityInLobby_NoFetch();
	void EventOpenCommunityInLobby();
	void EventLeaveWeekSignUp_NoFetch();
	void EventLeaveWeekSignUp();
	void EventHideScrollMsg_NoFetch();
	void EventHideScrollMsg();
	void EventLeaveWardrobe_NoFetch();
	void EventLeaveWardrobe();
	void EventOpenChatUI_NoFetch();
	void EventOpenChatUI();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventGetFriendProfile_NoFetch();
	void EventGetFriendProfile();
	void EventEnterMail_NoFetch();
	void EventEnterMail();
	void EventClickTraining_Push_NoFetch();
	void EventClickTraining_Push();
	void EventTeamUpRings_NoFetch();
	void EventTeamUpRings();
	void EventLobbyLeaveWorldView_NoFetch();
	void EventLobbyLeaveWorldView();
	void EventEnterMarket_NoFetch();
	void EventEnterMarket();
	void EventOpenGMMenu_NoFetch();
	void EventOpenGMMenu();
	void EventOpenShopLimitUI_NoFetch();
	void EventOpenShopLimitUI();
	void EventLobbyUpdateDoubleCardButton_NoFetch();
	void EventLobbyUpdateDoubleCardButton();
	void EventClickDesertCircleRun_NoFetch();
	void EventClickDesertCircleRun();
	void EventLobbyLeaveSeason_NoFetch();
	void EventLobbyLeaveSeason();
	void EventEnterRoleInfo_NoFetch();
	void EventEnterRoleInfo();
	void EventLobbyLeaveItemGet_NoFetch();
	void EventLobbyLeaveItemGet();
	void EventTestSpawnPlayer3_NoFetch();
	void EventTestSpawnPlayer3();
	void EventTestRedpoint_NoFetch();
	void EventTestRedpoint();
	void EventClickTeach_Push_NoFetch();
	void EventClickTeach_Push();
	void EventEnterFirstRecharge_NoFetch();
	void EventEnterFirstRecharge();
	void EventEnterConfig_NoFetch();
	void EventEnterConfig();
	void EventOpenGuidePanel_NoFetch();
	void EventOpenGuidePanel();
	void EventTestRemovePlayer2_NoFetch();
	void EventTestRemovePlayer2();
	void EventEnterSigninSystem_NoFetch();
	void EventEnterSigninSystem();
	void EventEnterSeason_NoFetch();
	void EventEnterSeason();
	void EventLobbyLeaveRoleInfo_NoFetch();
	void EventLobbyLeaveRoleInfo();
	void EventEnterRank_NoFetch();
	void EventEnterRank();
	void EventLobbyEnterAlliance_NoFetch();
	void EventLobbyEnterAlliance();
	void EventCanOpenUrl_NoFetch();
	void EventCanOpenUrl();
	void EventOpenWorldView_NoFetch();
	void EventOpenWorldView();
	void EventLobbyLeaveCorps_NoFetch();
	void EventLobbyLeaveCorps();
	void EventEnterShop_NoFetch();
	void EventEnterShop();
	void EventLobbyLeaveFriend_NoFetch();
	void EventLobbyLeaveFriend();
	void EventSetInfo_Push_NoFetch();
	void EventSetInfo_Push();
	void EventTestSpawnPlayer_NoFetch();
	void EventTestSpawnPlayer();
	void EventEnterRoom_NoFetch();
	void EventEnterRoom();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
