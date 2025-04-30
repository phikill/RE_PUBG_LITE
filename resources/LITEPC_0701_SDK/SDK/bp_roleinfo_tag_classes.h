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

// ScriptBlueprintGeneratedClass bp_roleinfo_tag.bp_roleinfo_tag_C
// 0x0048 (0x03D8 - 0x0390)
class Abp_roleinfo_tag_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_RoleInfoSelected_Count;                                // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x039C(0x0004) MISSED OFFSET
	struct FBP_STRUCT_RoleInfoTag                      BP_STRUCT_RoleInfoTag;                                    // 0x03A0(0x0018) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_RoleInfoTag>              BP_ARRAY_RoleInfoTagList;                                 // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_RoleInfoSelectTag                BP_STRUCT_RoleInfoSelectTag;                              // 0x03C8(0x0008) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_roleinfo_tag.bp_roleinfo_tag_C");
		return ptr;
	}


	void EventRoleInfoTagSelect_NoFetch();
	void EventRoleInfoTagSelect();
	void EventRoleInfoTagUIChg_NoFetch();
	void EventRoleInfoTagUIChg();
	void EventRoleInfoTagClose_NoFetch();
	void EventRoleInfoTagClose();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
