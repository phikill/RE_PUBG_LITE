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

// ScriptBlueprintGeneratedClass bp_festival_share_award.bp_festival_share_award_C
// 0x0078 (0x0408 - 0x0390)
class Abp_festival_share_award_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_FestivalShare_ActiveTime;                              // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_FestivalShare_IsTodayDone;                             // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03A9(0x0003) MISSED OFFSET
	int                                                BP_FestivalShare_CurNum;                                  // 0x03AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_FestivalShare_GetAwardIndex;                           // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03B4(0x0004) MISSED OFFSET
	TArray<struct FBP_STRUCT_FestivalShareActInfo>     BP_ARRAY_FestivalShareActInfoList;                        // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_FestivalShareActInfo             BP_STRUCT_FestivalShareActInfo;                           // 0x03C8(0x0038) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_festival_share_award.bp_festival_share_award_C");
		return ptr;
	}


	void EventFestivalShareActAwardReq_NoFetch();
	void EventFestivalShareActAwardReq();
	void EventFestivalShareActUpdateUI_NoFetch();
	void EventFestivalShareActUpdateUI();
	void EventFestivalShareActUIHide_NoFetch();
	void EventFestivalShareActUIHide();
	void EventFestivalShareActBtnShare_NoFetch();
	void EventFestivalShareActBtnShare();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
