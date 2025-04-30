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

// ScriptBlueprintGeneratedClass bp_share_history_ranking.bp_share_history_ranking_C
// 0x0170 (0x0500 - 0x0390)
class Abp_share_history_ranking_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<int>                                        BP_ARRAY_ShareHistoryRanking_MyTitleIDList;               // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ShareHistoryRanking_MyKillNum;                         // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03AC(0x0004) MISSED OFFSET
	struct FBP_STRUCT_ShareHistoryRanking_TeammateInfo BP_STRUCT_ShareHistoryRanking_TeammateInfo;               // 0x03B0(0x0090) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_ShareHistoryRanking_TeammateInfo> BP_ARRAY_ShareHistoryRanking_TeammateInfoList;            // 0x0440(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_ShareHistoryRanking_DetailInfo   BP_STRUCT_ShareHistoryRanking_DetailInfo;                 // 0x0450(0x00A8) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_share_history_ranking.bp_share_history_ranking_C");
		return ptr;
	}


	void EventShareHistoryRankingHide_NoFetch();
	void EventShareHistoryRankingHide();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventSetInfo_Push_NoFetch();
	void EventSetInfo_Push();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
