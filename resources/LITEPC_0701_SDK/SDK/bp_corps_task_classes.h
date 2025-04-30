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

// ScriptBlueprintGeneratedClass bp_corps_task.bp_corps_task_C
// 0x00F8 (0x0488 - 0x0390)
class Abp_corps_task_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_CorpsTaskStarNum;                                      // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x039C(0x0004) MISSED OFFSET
	TArray<struct FBP_STRUCT_CorpsTaskActiveAwardInfo> BP_ARRAY_CorpsTaskActiveAwardInfos;                       // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_TaskCorpsCategory                BP_STRUCT_TaskCorpsCategory;                              // 0x03B0(0x0018) (Edit, BlueprintVisible)
	int                                                BP_CorpsTaskActiveNum;                                    // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_CorpsTaskHasRedPoint;                                  // 0x03CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03CD(0x0003) MISSED OFFSET
	TArray<struct FBP_STRUCT_TaskCorpsCategory>        BP_ARRAY_TaskCorpsInfos;                                  // 0x03D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_CorpsTaskDropItem>        BP_ARRAY_CorpsTaskCurrDropList;                           // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_CorpsTaskActiveAwardItem         BP_STRUCT_CorpsTaskActiveAwardItem;                       // 0x03F0(0x0020) (Edit, BlueprintVisible)
	struct FBP_STRUCT_CorpsTaskDropItem                BP_STRUCT_CorpsTaskDropItem;                              // 0x0410(0x000C) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData02[0x4];                                       // 0x041C(0x0004) MISSED OFFSET
	struct FBP_STRUCT_CorpsTaskInfo                    BP_STRUCT_CorpsTaskInfo;                                  // 0x0420(0x0030) (Edit, BlueprintVisible)
	int                                                BP_CorpsTaskCurrentOperateTaskId;                         // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0454(0x0004) MISSED OFFSET
	struct FBP_STRUCT_CorpsTaskActiveAwardInfo         BP_STRUCT_CorpsTaskActiveAwardInfo;                       // 0x0458(0x0020) (Edit, BlueprintVisible)
	int                                                BP_CorpsTaskCurrentOperateAwardId;                        // 0x0478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x047C(0x0004) MISSED OFFSET
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_corps_task.bp_corps_task_C");
		return ptr;
	}


	void EventCorpsTaskGetActivenessReward_Push_NoFetch();
	void EventCorpsTaskGetActivenessReward_Push();
	void EventCorpsTaskGetReward_Push_NoFetch();
	void EventCorpsTaskGetReward_Push();
	void EventCorpsTaskShowRewardDetailPopup_Push_NoFetch();
	void EventCorpsTaskShowRewardDetailPopup_Push();
	void EventCorpsTaskGenTaskRewardData_Push_NoFetch();
	void EventCorpsTaskGenTaskRewardData_Push();
	void EventCorpsTaskGoTo_Push_NoFetch();
	void EventCorpsTaskGoTo_Push();
	void EventCorpsTaskClickAwarded_Push_NoFetch();
	void EventCorpsTaskClickAwarded_Push();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
