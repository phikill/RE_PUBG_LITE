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

// ScriptBlueprintGeneratedClass bp_master_apply_list.bp_master_apply_list_C
// 0x0130 (0x04C0 - 0x0390)
class Abp_master_apply_list_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_MasterApplyInfo                  BP_STRUCT_MasterApplyInfo;                                // 0x0398(0x00F8) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_MasterApplyInfo>          BP_ARRAY_Master_ApplyList;                                // 0x0490(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_CurrentMasterCheck;                                    // 0x04A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_MasterMasterApplistIsShow;                             // 0x04A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x04A2(0x0006) MISSED OFFSET
	struct FString                                     BP_CurrentMasterApplistUID;                               // 0x04A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_master_apply_list.bp_master_apply_list_C");
		return ptr;
	}


	void EventMasterApplyRefuse_NoFetch();
	void EventMasterApplyRefuse();
	void EventMasterApplyHarass_NoFetch();
	void EventMasterApplyHarass();
	void EventFetchMasterApplyList_NoFetch();
	void EventFetchMasterApplyList();
	void EventMasterApplyClickHead_NoFetch();
	void EventMasterApplyClickHead();
	void EventMasterApplyOk_NoFetch();
	void EventMasterApplyOk();
	void EventMasterApplyAddFriend_NoFetch();
	void EventMasterApplyAddFriend();
	void EventMasterApplyListUIHide_NoFetch();
	void EventMasterApplyListUIHide();
	void EventMasterApplyList_Push_NoFetch();
	void EventMasterApplyList_Push();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
