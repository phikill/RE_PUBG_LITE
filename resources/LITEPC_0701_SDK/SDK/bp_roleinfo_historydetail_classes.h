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

// ScriptBlueprintGeneratedClass bp_roleinfo_historydetail.bp_roleinfo_historydetail_C
// 0x0248 (0x05D8 - 0x0390)
class Abp_roleinfo_historydetail_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_HistoryDetail_SelfIconURL;                             // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_HistoryDetail_SelfID;                                  // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_RoleInfoHistoryRecordDetail      BP_STRUCT_RoleInfoHistoryRecordDetail;                    // 0x03B8(0x00B0) (Edit, BlueprintVisible)
	struct FBP_STRUCT_RoleInfoHistoryRadarInfo         BP_STRUCT_RoleInfoHistoryRadarInfo;                       // 0x0468(0x0050) (Edit, BlueprintVisible)
	struct FBP_STRUCT_RoleInfoHistoryTeammateInfo      BP_STRUCT_RoleInfoHistoryTeammateInfo;                    // 0x04B8(0x0080) (Edit, BlueprintVisible)
	struct FBP_STRUCT_RoleInfoHistoryRoleBasicInfo     BP_STRUCT_RoleInfoHistoryRoleBasicInfo;                   // 0x0538(0x0040) (Edit, BlueprintVisible)
	struct FString                                     BP_HistoryDetail_SelfName;                                // 0x0578(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_HistoryDetail_AddFriendUID;                            // 0x0588(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_HistoryDetail_AddFriendGender;                         // 0x0598(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_HistoryDetail_SelfFrameLevel;                          // 0x059C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_HistoryDetail_TodayShareNum;                           // 0x05A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_HistoryDetail_ShareGold;                               // 0x05A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x05A5(0x0003) MISSED OFFSET
	TArray<struct FBP_STRUCT_RoleInfoHistoryTeammateInfo> BP_ARRAY_RoleInfoHistoryTeammateInfoList;                 // 0x05A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_HistoryDetail_SegmentProtectTips;                      // 0x05B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_HistoryDetail_SelfGender;                              // 0x05C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x05CC(0x0004) MISSED OFFSET
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x05D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_roleinfo_historydetail.bp_roleinfo_historydetail_C");
		return ptr;
	}


	void EventRoleInfoHistoryShareRanking_NoFetch();
	void EventRoleInfoHistoryShareRanking();
	void EventRoleInfoHistoryShareResults_NoFetch();
	void EventRoleInfoHistoryShareResults();
	void EventRoleInfoHistoryDetailAddFriend_NoFetch();
	void EventRoleInfoHistoryDetailAddFriend();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
