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

// ScriptBlueprintGeneratedClass bp_corps_own_homepage.bp_corps_own_homepage_C
// 0x0128 (0x04B8 - 0x0390)
class Abp_corps_own_homepage_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               BP_CorpsHasGroup;                                         // 0x0398(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_CorpsHomepageShowAnimation;                            // 0x0399(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x039A(0x0002) MISSED OFFSET
	struct FBP_STRUCT_CorpsHomePageActiveHelpPos       BP_STRUCT_CorpsHomePageActiveHelpPos;                     // 0x039C(0x0008) (Edit, BlueprintVisible)
	bool                                               BP_CorpsHomePage_SkipGroup;                               // 0x03A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_CorpsHomePage_TrainRedPoint;                           // 0x03A5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_CorpsInGroup;                                          // 0x03A6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_CorpsHomePageIsWX;                                     // 0x03A7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_CorpsHomePageAnnouncement;                             // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_BASE_INFO                        BP_STRUCT_BASE_INFO;                                      // 0x03B8(0x0050) (Edit, BlueprintVisible)
	bool                                               BP_CorpsIsSecCommander;                                   // 0x0408(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0409(0x0007) MISSED OFFSET
	struct FBP_STRUCT_HomePageCorpsInfo                BP_STRUCT_HomePageCorpsInfo;                              // 0x0410(0x0020) (Edit, BlueprintVisible)
	bool                                               CorpsGroupShow;                                           // 0x0430(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_CorpsIsCommander;                                      // 0x0431(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0432(0x0002) MISSED OFFSET
	int                                                BP_CorpsHomePageCorpsMoney;                               // 0x0434(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CorpsSelfRankByWeekActive;                             // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CorpsMemberNum;                                        // 0x043C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_SelfMemberInfo                   BP_STRUCT_SelfMemberInfo;                                 // 0x0440(0x0070) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_corps_own_homepage.bp_corps_own_homepage_C");
		return ptr;
	}


	void EventClickCorpsTrain_NoFetch();
	void EventClickCorpsTrain();
	void EventCorpsSelfTeamReport_NoFetch();
	void EventCorpsSelfTeamReport();
	void EventCorpsActiveHelp_NoFetch();
	void EventCorpsActiveHelp();
	void EventCorpsGroupWXJoin_NoFetch();
	void EventCorpsGroupWXJoin();
	void EventNoticeChange_Push_NoFetch();
	void EventNoticeChange_Push();
	void EventCorpsGroupQQCreate_NoFetch();
	void EventCorpsGroupQQCreate();
	void EventCorpsGroupQQDismiss_NoFetch();
	void EventCorpsGroupQQDismiss();
	void EventClickCorpsHelp_NoFetch();
	void EventClickCorpsHelp();
	void EventShowInviteUI_NoFetch();
	void EventShowInviteUI();
	void EventCorpsGroupWXDismiss_NoFetch();
	void EventCorpsGroupWXDismiss();
	void EventCorpsGroupWXRemind_NoFetch();
	void EventCorpsGroupWXRemind();
	void EventCorpsHomepageChangeLocation_NoFetch();
	void EventCorpsHomepageChangeLocation();
	void EventCorpsHomepageChangeIcon_NoFetch();
	void EventCorpsHomepageChangeIcon();
	void EventCorpsGroupQQRemind_NoFetch();
	void EventCorpsGroupQQRemind();
	void EventCorpsGroupQQJoin_NoFetch();
	void EventCorpsGroupQQJoin();
	void EventCorpsGroupWXCreate_NoFetch();
	void EventCorpsGroupWXCreate();
	void EventClickCorpsExercise_NoFetch();
	void EventClickCorpsExercise();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
