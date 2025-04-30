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

// ScriptBlueprintGeneratedClass bp_master_privilege.bp_master_privilege_C
// 0x0110 (0x04A0 - 0x0390)
class Abp_master_privilege_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_CurrentLevel;                                          // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x039C(0x0004) MISSED OFFSET
	TArray<struct FBP_STRUCT_MasterPrivilegeDescItem>  BP_ARRAY_Master_Privilege_Desc;                           // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_MasterPrivilegeIsShow;                                 // 0x03B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03B1(0x0007) MISSED OFFSET
	TArray<struct FBP_STRUCT_MasterPrivilegeGiftItem>  BP_ARRAY_Master_Privilege_Gift;                           // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_MasterPrivilegeGiftItem          BP_STRUCT_MasterPrivilegeGiftItem;                        // 0x03C8(0x0018) (Edit, BlueprintVisible)
	struct FBP_STRUCT_MasterPrivilegeInfo              BP_STRUCT_MasterPrivilegeInfo;                            // 0x03E0(0x0050) (Edit, BlueprintVisible)
	struct FBP_STRUCT_MasterPrivilegeDescItem          BP_STRUCT_MasterPrivilegeDescItem;                        // 0x0430(0x0020) (Edit, BlueprintVisible)
	struct FBP_STRUCT_MasterPrivilegeItem              BP_STRUCT_MasterPrivilegeItem;                            // 0x0450(0x0048) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_master_privilege.bp_master_privilege_C");
		return ptr;
	}


	void EventMasterPrivilegePageNext_NoFetch();
	void EventMasterPrivilegePageNext();
	void EventMasterPrivilege_Push_NoFetch();
	void EventMasterPrivilege_Push();
	void EventMasterPrivilegePagePre_NoFetch();
	void EventMasterPrivilegePagePre();
	void EventFetchMasterPrivilegeInfo_NoFetch();
	void EventFetchMasterPrivilegeInfo();
	void EventMasterPrivilegeGetGift_NoFetch();
	void EventMasterPrivilegeGetGift();
	void EventMasterPrivilegeUIHide_NoFetch();
	void EventMasterPrivilegeUIHide();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
