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

// ScriptBlueprintGeneratedClass bp_activity_group.bp_activity_group_C
// 0x00B8 (0x0448 - 0x0390)
class Abp_activity_group_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FBP_STRUCT_ActivityGroupInfo>        BP_ARRAY_ActivityInfoSortList;                            // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_CurrentOperateActivityID;                              // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03AC(0x0004) MISSED OFFSET
	struct FString                                     BP_CurrentAcitvityTimeStr;                                // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_CurrentActivityRedPoint;                               // 0x03C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03C1(0x0007) MISSED OFFSET
	struct FString                                     BP_CurrentAcitvityState;                                  // 0x03C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_ActivityGroupInfo                BP_STRUCT_ActivityGroupInfo;                              // 0x03D8(0x0068) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_activity_group.bp_activity_group_C");
		return ptr;
	}


	void EventActivityGroupGetItemData_Push_NoFetch();
	void EventActivityGroupGetItemData_Push();
	void EventActivityGroupGoTo_Push_NoFetch();
	void EventActivityGroupGoTo_Push();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
