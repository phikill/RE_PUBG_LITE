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

// ScriptBlueprintGeneratedClass bp_rank.bp_rank_C
// 0x0258 (0x05E8 - 0x0390)
class Abp_rank_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FBP_STRUCT_RankInfo>                 BP_ARRAY_RankList;                                        // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_RankRegionType;                                        // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_RankSelectMemberType;                                  // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_RankInfo                         BP_STRUCT_RankInfo;                                       // 0x03C8(0x0098) (Edit, BlueprintVisible)
	struct FBP_STRUCT_RankUpdateItemInfo               BP_STRUCT_RankUpdateItemInfo;                             // 0x0460(0x0098) (Edit, BlueprintVisible)
	int                                                BP_RankUpdateIdx;                                         // 0x04F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04FC(0x0004) MISSED OFFSET
	struct FString                                     BP_RankSelectType;                                        // 0x0500(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_RankScrollPos;                                         // 0x0510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0514(0x0004) MISSED OFFSET
	struct FString                                     BP_RankShowRoleUid;                                       // 0x0518(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_RankShowHelpContent;                                   // 0x0528(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_RankInfoMe                       BP_STRUCT_RankInfoMe;                                     // 0x0538(0x0098) (Edit, BlueprintVisible)
	struct FString                                     BP_RankInfoSelfBelow1wDisplay;                            // 0x05D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x05E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_rank.bp_rank_C");
		return ptr;
	}


	void EventRankScrollPos_NoFetch();
	void EventRankScrollPos();
	void EventRankFetchInfo_NoFetch();
	void EventRankFetchInfo();
	void EventQueryRank_NoFetch();
	void EventQueryRank();
	void EventRankClose_NoFetch();
	void EventRankClose();
	void EventRankShowRole_NoFetch();
	void EventRankShowRole();
	void EventRankShowHelp_NoFetch();
	void EventRankShowHelp();
	void EventTestRank_NoFetch();
	void EventTestRank();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
