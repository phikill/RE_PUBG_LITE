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

// ScriptBlueprintGeneratedClass bp_task.bp_task_C
// 0x0168 (0x04F8 - 0x0390)
class Abp_task_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_ActiveAwardItem                  BP_STRUCT_ActiveAwardItem;                                // 0x0398(0x0020) (Edit, BlueprintVisible)
	struct FBP_STRUCT_CurrentOperateLevelTask          BP_STRUCT_CurrentOperateLevelTask;                        // 0x03B8(0x0008) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_ActiveAwardInfo>          BP_ARRAY_ActiveAwardInfos;                                // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_TaskWeekActiveNum;                                     // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CurrentOperateTaskId;                                  // 0x03D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_TaskCategory                     BP_STRUCT_TaskCategory;                                   // 0x03D8(0x0028) (Edit, BlueprintVisible)
	int                                                BP_RefreshWeekAwardTimeLast;                              // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CurrentOperateDropId;                                  // 0x0404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_TaskInfo                         BP_STRUCT_TaskInfo;                                       // 0x0408(0x0028) (Edit, BlueprintVisible)
	int                                                BP_RefreshAwardTimeLast;                                  // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CurrentOperateAwardId;                                 // 0x0434(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_LevelTaskInfos                   BP_STRUCT_LevelTaskInfos;                                 // 0x0438(0x0038) (Edit, BlueprintVisible)
	struct FBP_STRUCT_LevelTaskInfo                    BP_STRUCT_LevelTaskInfo;                                  // 0x0470(0x0018) (Edit, BlueprintVisible)
	struct FBP_STRUCT_ActiveAwardInfo                  BP_STRUCT_ActiveAwardInfo;                                // 0x0488(0x0018) (Edit, BlueprintVisible)
	int                                                BP_TaskActiveNum;                                         // 0x04A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04A4(0x0004) MISSED OFFSET
	TArray<struct FBP_STRUCT_TaskDropItem>             BP_ARRAY_CurrentDropList;                                 // 0x04A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_TaskDropItem                     BP_STRUCT_TaskDropItem;                                   // 0x04B8(0x0010) (Edit, BlueprintVisible)
	int                                                BP_RefreshTaskTimeLast;                                   // 0x04C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04CC(0x0004) MISSED OFFSET
	TArray<struct FBP_STRUCT_TaskCategory>             BP_ARRAY_TaskInfos;                                       // 0x04D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_ActiveAwardInfo>          BP_ARRAY_WeekActiveAwardInfos;                            // 0x04E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_task.bp_task_C");
		return ptr;
	}


	void EventGetDropsList_Push_NoFetch();
	void EventGetDropsList_Push();
	void EventTaskShowRewardDetailPopup_Push_NoFetch();
	void EventTaskShowRewardDetailPopup_Push();
	void EventTaskGetTaskReward_Push_NoFetch();
	void EventTaskGetTaskReward_Push();
	void EventTaskShowUI_NoFetch();
	void EventTaskShowUI();
	void EventTestAddProgress_Push_NoFetch();
	void EventTestAddProgress_Push();
	void EventTaskHideUI_NoFetch();
	void EventTaskHideUI();
	void EventTaskGoTo_Push_NoFetch();
	void EventTaskGoTo_Push();
	void EventTaskClickAwarded_Push_NoFetch();
	void EventTaskClickAwarded_Push();
	void EventTaskGetReward_Push_NoFetch();
	void EventTaskGetReward_Push();
	void EventLevelTaskShowRewardDetailPopup_Push_NoFetch();
	void EventLevelTaskShowRewardDetailPopup_Push();
	void EventLevelTaskGoto_Push_NoFetch();
	void EventLevelTaskGoto_Push();
	void EventTaskFinishTask_Push_NoFetch();
	void EventTaskFinishTask_Push();
	void EventLevelTaskGetAward_Push_NoFetch();
	void EventLevelTaskGetAward_Push();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
