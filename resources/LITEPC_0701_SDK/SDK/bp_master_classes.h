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

// ScriptBlueprintGeneratedClass bp_master.bp_master_C
// 0x0168 (0x04F8 - 0x0390)
class Abp_master_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_Master_MasterId;                                       // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Master_RedPoint_HasApply;                              // 0x039C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Master_RedPoint_HasTask;                               // 0x039D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Master_RedPoint_HasPrivilege;                          // 0x039E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_HasMasterOrDisciple;                                   // 0x039F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_MASTER_SAME_DISCIPLE_ITEM> BP_ARRAY_MASTER_SAME_DISCIPLE;                            // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Master_Master_Tips;                                    // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_MASTER_DISCIPLE_ITEM>     BP_ARRAY_MASTER_DISCIPLE;                                 // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_MASTER_SAME_DISCIPLE_ITEM        BP_STRUCT_MASTER_SAME_DISCIPLE_ITEM;                      // 0x03D0(0x0078) (Edit, BlueprintVisible)
	struct FString                                     BP_Master_Disciple_Tips;                                  // 0x0448(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_MASTER_MAIN_select_item_gender;                        // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x045C(0x0004) MISSED OFFSET
	struct FBP_STRUCT_MASTER_DISCIPLE_ITEM             BP_STRUCT_MASTER_DISCIPLE_ITEM;                           // 0x0460(0x0080) (Edit, BlueprintVisible)
	struct FString                                     BP_MASTER_MAIN_select_item_uid;                           // 0x04E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_master.bp_master_C");
		return ptr;
	}


	void EventClickMasterPrivilege_NoFetch();
	void EventClickMasterPrivilege();
	void EventMasterShowSendAddFriendRequestTips_NoFetch();
	void EventMasterShowSendAddFriendRequestTips();
	void EventClickMasterTask_NoFetch();
	void EventClickMasterTask();
	void EventClickMasterApplyList_NoFetch();
	void EventClickMasterApplyList();
	void EventClickMasterToMaster_NoFetch();
	void EventClickMasterToMaster();
	void EventClickMasterToDisciple_NoFetch();
	void EventClickMasterToDisciple();
	void EventMasterDismissMasterRelationShip_NoFetch();
	void EventMasterDismissMasterRelationShip();
	void EventMasterAddFriend_NoFetch();
	void EventMasterAddFriend();
	void EventMasterChatToFriend_NoFetch();
	void EventMasterChatToFriend();
	void EventMasterMainClickHeadBtn_NoFetch();
	void EventMasterMainClickHeadBtn();
	void EventClickMasterHelper_NoFetch();
	void EventClickMasterHelper();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
