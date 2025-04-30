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

// ScriptBlueprintGeneratedClass bp_share_result.bp_share_result_C
// 0x0078 (0x0408 - 0x0390)
class Abp_share_result_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_ModeKillInfo;                                          // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_PlayerCount;                                           // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_KillNum;                                               // 0x03AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_PlayerName;                                            // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ShareImagePath;                                        // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_SHARE_RESULT_TYPE;                                     // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_ShareResult_SelectedTitle;                             // 0x03D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_ShareResult_TeamShowSingle;                            // 0x03D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03D9(0x0003) MISSED OFFSET
	int                                                BP_ShareResult_FamousId;                                  // 0x03DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_PlayerRank;                                            // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03E4(0x0004) MISSED OFFSET
	struct FString                                     BP_PlayerIcon;                                            // 0x03E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_LoginChannel;                                          // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_ShareResultTeamNum;                                    // 0x03FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_share_result.bp_share_result_C");
		return ptr;
	}


	void EventShareResult_BtnShareQQFriend_NoFetch();
	void EventShareResult_BtnShareQQFriend();
	void EventShareResultVariable_Push_NoFetch();
	void EventShareResultVariable_Push();
	void EventShareResult_ShowUI_Push_NoFetch();
	void EventShareResult_ShowUI_Push();
	void EventShareResult_BtnSave_NoFetch();
	void EventShareResult_BtnSave();
	void EventShareResult_BtnCaptureScreen_NoFetch();
	void EventShareResult_BtnCaptureScreen();
	void EventShareResultPanelClosed_NoFetch();
	void EventShareResultPanelClosed();
	void EventShareResult_BtnShareFriend_NoFetch();
	void EventShareResult_BtnShareFriend();
	void EventShareResult_BtnShareQQZone_NoFetch();
	void EventShareResult_BtnShareQQZone();
	void EventShareResult_BtnShareQQTribe_NoFetch();
	void EventShareResult_BtnShareQQTribe();
	void EventShareResult_BtnShareGameZone_NoFetch();
	void EventShareResult_BtnShareGameZone();
	void EventShareResult_BtnShareTimeLine_NoFetch();
	void EventShareResult_BtnShareTimeLine();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
