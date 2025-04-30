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

// ScriptBlueprintGeneratedClass bp_setting.bp_setting_C
// 0x0068 (0x03F8 - 0x0390)
class Abp_setting_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_UrlStr2;                                               // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_SettingPlayerLevel;                                    // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_CanShowVideoSetting;                                   // 0x03AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03AD(0x0003) MISSED OFFSET
	int                                                BP_CurSettingPage;                                        // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_SettingIsDingYueNewVer;                                // 0x03B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03B5(0x0003) MISSED OFFSET
	int                                                BP_DiyLimitLevel;                                         // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03BC(0x0004) MISSED OFFSET
	struct FString                                     BP_UrlStr1;                                               // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_SettingFresherType;                                    // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_LoginChannel;                                          // 0x03D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_UrlStr3;                                               // 0x03D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_SettingIsDingYue;                                      // 0x03E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_SettingCanShowHistory;                                 // 0x03E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_IsInLobby;                                             // 0x03EA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x5];                                       // 0x03EB(0x0005) MISSED OFFSET
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_setting.bp_setting_C");
		return ptr;
	}


	void EventCancelDingYue_NoFetch();
	void EventCancelDingYue();
	void EventSettingNoticeHighestArtClosed_NoFetch();
	void EventSettingNoticeHighestArtClosed();
	void EventShowLogOutNoticce_NoFetch();
	void EventShowLogOutNoticce();
	void EventShowNoQuickMsgSelected_NoFetch();
	void EventShowNoQuickMsgSelected();
	void EventSettingCannotSetHigherFps_Push_NoFetch();
	void EventSettingCannotSetHigherFps_Push();
	void EventSettingNotSupportHDR_NoFetch();
	void EventSettingNotSupportHDR();
	void EventSetDingYueNewVer_NoFetch();
	void EventSetDingYueNewVer();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventSettingSendCanShowHistory_NoFetch();
	void EventSettingSendCanShowHistory();
	void EventSetDingYue_NoFetch();
	void EventSetDingYue();
	void EventOpenKefuUrl_NoFetch();
	void EventOpenKefuUrl();
	void EventSettingShowConfirmModifyHDR_NoFetch();
	void EventSettingShowConfirmModifyHDR();
	void EventTurnonManualRecord_NoFetch();
	void EventTurnonManualRecord();
	void EventShowDiyLimitLevelNotice_Push_NoFetch();
	void EventShowDiyLimitLevelNotice_Push();
	void EventSettingCurPicSettingNotSupportThisFps_NoFetch();
	void EventSettingCurPicSettingNotSupportThisFps();
	void EventShowDuplactedMsgSelected_NoFetch();
	void EventShowDuplactedMsgSelected();
	void EventShowMyRecordVideos_NoFetch();
	void EventShowMyRecordVideos();
	void EventShowQuickMsgBackToDefaultMsg_NoFetch();
	void EventShowQuickMsgBackToDefaultMsg();
	void EventShowBackToLobbyNotice_NoFetch();
	void EventShowBackToLobbyNotice();
	void EventSettingConfirmModifyArtQuality_Push_NoFetch();
	void EventSettingConfirmModifyArtQuality_Push();
	void EventForceSwitchToManulRecord_NoFetch();
	void EventForceSwitchToManulRecord();
	void EventSettingShowAASettingModifiedNotice_NoFetch();
	void EventSettingShowAASettingModifiedNotice();
	void EventSettingCannotSetHigherQuality_Push_NoFetch();
	void EventSettingCannotSetHigherQuality_Push();
	void EventSettingShowConfirmModifyFps_NoFetch();
	void EventSettingShowConfirmModifyFps();
	void EventShowQuickMsgModifiedSuccess_NoFetch();
	void EventShowQuickMsgModifiedSuccess();
	void EventShowBackToLobbyFromTrainingNotice_NoFetch();
	void EventShowBackToLobbyFromTrainingNotice();
	void EventTurnonMomentRecord_NoFetch();
	void EventTurnonMomentRecord();
	void EventForceSwitchToMomentRecord_NoFetch();
	void EventForceSwitchToMomentRecord();
	void EventCancelDingYueNewVer_NoFetch();
	void EventCancelDingYueNewVer();
	void EventClickSwitchButton_NoFetch();
	void EventClickSwitchButton();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
