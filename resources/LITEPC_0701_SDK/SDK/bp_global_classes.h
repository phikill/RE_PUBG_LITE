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

// ScriptBlueprintGeneratedClass bp_global.bp_global_C
// 0x00F0 (0x0480 - 0x0390)
class Abp_global_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               BP_IsAppleAudit;                                          // 0x0398(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0399(0x0003) MISSED OFFSET
	struct FBP_STRUCT_GlobalHelpTips_Pos               BP_STRUCT_GlobalHelpTips_Pos;                             // 0x039C(0x0008) (Edit, BlueprintVisible)
	int                                                BP_Global_Url_Direction;                                  // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_String_ServerTime;                                     // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_BP_ItemTimeLimitInfo_FindId;                           // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_CHECK_MENU_OPEN_RESULT;                                // 0x03BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_IS_SHOW_2D_CODE;                                       // 0x03BD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x03BE(0x0002) MISSED OFFSET
	struct FBP_STRUCT_GlobalTips_TimeInfo              BP_STRUCT_GlobalTips_TimeInfo;                            // 0x03C0(0x0018) (Edit, BlueprintVisible)
	int                                                BP_YXXY_RedPoint;                                         // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_GLOBAL_SET_MENU_OPEN_ID;                               // 0x03DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Platform;                                              // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_BA_BUTTON_TYPE;                                        // 0x03E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Global_CloseLocation;                                  // 0x03E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x03E9(0x0003) MISSED OFFSET
	int                                                BP_CHECK_MENU_OPEN_ID;                                    // 0x03EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_IS_EXTERNAL_CHANNEL;                                   // 0x03F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x03F1(0x0003) MISSED OFFSET
	int                                                BP_Global_CorpsShopLevelForRedPiont;                      // 0x03F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_NearBy_RedPoint;                                       // 0x03F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_HadPlayAnimation;                                      // 0x03F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x03FA(0x0006) MISSED OFFSET
	struct FString                                     BP_GLOBAL_USE_ITEM;                                       // 0x0400(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_GlobalTips_Pos                   BP_STRUCT_GlobalTips_Pos;                                 // 0x0410(0x0008) (Edit, BlueprintVisible)
	bool                                               BP_GLOBAL_SET_MENU_OPEN_STATUS;                           // 0x0418(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0419(0x0007) MISSED OFFSET
	struct FString                                     BP_Global_SelfUID;                                        // 0x0420(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_GlobalHelpTips_StringID;                               // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_StartUpType;                                           // 0x0434(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_GlobalTips_ItemID;                                     // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Global_Url_HasToken;                                   // 0x043C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x043D(0x0003) MISSED OFFSET
	int                                                BP_ChatBan;                                               // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_IOS_CHECK;                                             // 0x0444(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0445(0x0003) MISSED OFFSET
	int                                                BP_Global_FstRechargeState;                               // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x044C(0x0004) MISSED OFFSET
	struct FString                                     BP_Global_Url;                                            // 0x0450(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_played_cg;                                             // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_BA_REASON;                                             // 0x0464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_ItemTimeLimitInfo_ExTime;                              // 0x0468(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_global.bp_global_C");
		return ptr;
	}


	void EventAndroidQuitGame_NoFetch();
	void EventAndroidQuitGame();
	void EventChatCheckBan_NoFetch();
	void EventChatCheckBan();
	void EventGetItemLimitTimeInfo_NoFetch();
	void EventGetItemLimitTimeInfo();
	void EventChatBanInfo_NoFetch();
	void EventChatBanInfo();
	void EventOnLobbyCoverCamera_NoFetch();
	void EventOnLobbyCoverCamera();
	void EventGlobalCloseItemTips_NoFetch();
	void EventGlobalCloseItemTips();
	void EventShowPlatQQStartup_NoFetch();
	void EventShowPlatQQStartup();
	void EventOnLobbyRecoverCamera_NoFetch();
	void EventOnLobbyRecoverCamera();
	void EventGlobalShowItemTips_Push_NoFetch();
	void EventGlobalShowItemTips_Push();
	void EventShowPlatQQVip_NoFetch();
	void EventShowPlatQQVip();
	void EventSetPlayedCG_NoFetch();
	void EventSetPlayedCG();
	void EventCheckIfMenuOpen_NoFetch();
	void EventCheckIfMenuOpen();
	void EventSetLobbyMenuOpenStatus_NoFetch();
	void EventSetLobbyMenuOpenStatus();
	void EventGlobalUseItem_NoFetch();
	void EventGlobalUseItem();
	void EventSendBAReport_NoFetch();
	void EventSendBAReport();
	void EventShowPlatIconTips_NoFetch();
	void EventShowPlatIconTips();
	void EventGlobalShowHelpTips_NoFetch();
	void EventGlobalShowHelpTips();
	void EventSetInfo_Push_NoFetch();
	void EventSetInfo_Push();
	void EventShowPlatWXStartup_NoFetch();
	void EventShowPlatWXStartup();
	void EventUpdateServerTime_NoFetch();
	void EventUpdateServerTime();
	void EventJumpUrl_NoFetch();
	void EventJumpUrl();
	void EventGlobalCloseHelpTips_NoFetch();
	void EventGlobalCloseHelpTips();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
