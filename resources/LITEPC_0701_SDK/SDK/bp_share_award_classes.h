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

// ScriptBlueprintGeneratedClass bp_share_award.bp_share_award_C
// 0x00C8 (0x0458 - 0x0390)
class Abp_share_award_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_CurShareNum;                                           // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_GetAwardIndex;                                         // 0x039C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_GetAwardID;                                            // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_AwardNum1;                                             // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_ShareAward_ActiveTime;                                 // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_AwardItem2;                                            // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_AwardNum2;                                             // 0x03BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_AwardName2;                                            // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_AwardTime2;                                            // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SelAwardIndex;                                         // 0x03D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_ShareAwardInfo                   BP_STRUCT_ShareAwardInfo;                                 // 0x03D8(0x0048) (Edit, BlueprintVisible)
	int                                                BP_AwardItem1;                                            // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0424(0x0004) MISSED OFFSET
	TArray<struct FBP_STRUCT_ShareAwardInfo>           BP_ARRAY_ShareAwardInfoList;                              // 0x0428(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_AwardName1;                                            // 0x0438(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_IsTodayShareDone;                                      // 0x0448(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0449(0x0003) MISSED OFFSET
	int                                                BP_AwardTime1;                                            // 0x044C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_share_award.bp_share_award_C");
		return ptr;
	}


	void EventShareAwardSelAward_Push_NoFetch();
	void EventShareAwardSelAward_Push();
	void EventShareAwardSelPanelHide_Push_NoFetch();
	void EventShareAwardSelPanelHide_Push();
	void EventShareAwardShare_Push_NoFetch();
	void EventShareAwardShare_Push();
	void EventShareAwardGetOnAward_Push_NoFetch();
	void EventShareAwardGetOnAward_Push();
	void EventShareAwardUIHide_Push_NoFetch();
	void EventShareAwardUIHide_Push();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
