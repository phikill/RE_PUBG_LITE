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

// ScriptBlueprintGeneratedClass bp_roleinfo_history.bp_roleinfo_history_C
// 0x00C0 (0x0450 - 0x0390)
class Abp_roleinfo_history_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_RoleInfoHistoryShowRecordBattleId;                     // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_RoleInfoHistoryItem>      BP_ARRAY_RoleInfoHistoryList;                             // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_RoleInfoHistoryEmptyType;                              // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_RoleInfoCanShowHistory;                                // 0x03BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03BD(0x0003) MISSED OFFSET
	struct FBP_STRUCT_RoleInfoHistoryItem              BP_STRUCT_RoleInfoHistoryItem;                            // 0x03C0(0x0088) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_roleinfo_history.bp_roleinfo_history_C");
		return ptr;
	}


	void EventRoleInfoHistoryShowRecord_NoFetch();
	void EventRoleInfoHistoryShowRecord();
	void EventRoleInfoHistorySettingHistory_NoFetch();
	void EventRoleInfoHistorySettingHistory();
	void EventRoleInfoHistoryUIClose_NoFetch();
	void EventRoleInfoHistoryUIClose();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
