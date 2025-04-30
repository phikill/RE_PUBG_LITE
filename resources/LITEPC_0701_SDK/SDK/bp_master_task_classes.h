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

// ScriptBlueprintGeneratedClass bp_master_task.bp_master_task_C
// 0x00D8 (0x0468 - 0x0390)
class Abp_master_task_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FBP_STRUCT_MasterTaskInfo>           BP_ARRAY_MasterTaskInfo;                                  // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_MasterTaskAwardItem>      BP_ARRAY_MasterTaskAwardInfo;                             // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_MasterTaskCondition>      BP_ARRAY_MasterTaskCondition;                             // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_MasterTask_CurrentJump;                                // 0x03C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_MasterTask_MasterAwardResId;                           // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_MasterTask_CurrentTaskId;                              // 0x03DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_MasterTaskCondition              BP_STRUCT_MasterTaskCondition;                            // 0x03E0(0x0030) (Edit, BlueprintVisible)
	struct FBP_STRUCT_MasterTaskInfo                   BP_STRUCT_MasterTaskInfo;                                 // 0x0410(0x0030) (Edit, BlueprintVisible)
	struct FBP_STRUCT_MasterTaskAwardItem              BP_STRUCT_MasterTaskAwardItem;                            // 0x0440(0x0020) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_master_task.bp_master_task_C");
		return ptr;
	}


	void EventMasterTaskGetAward_NoFetch();
	void EventMasterTaskGetAward();
	void EventMasterTaskConditionJump_NoFetch();
	void EventMasterTaskConditionJump();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
