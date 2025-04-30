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

// ScriptBlueprintGeneratedClass bp_roleinfo_corps.bp_roleinfo_corps_C
// 0x0148 (0x04D8 - 0x0390)
class Abp_roleinfo_corps_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_RoleInfo_CorpsData               BP_STRUCT_RoleInfo_CorpsData;                             // 0x0398(0x0070) (Edit, BlueprintVisible)
	struct FBP_STRUCT_RoleInfo_CorpsAvatar             BP_STRUCT_RoleInfo_CorpsAvatar;                           // 0x0408(0x0058) (Edit, BlueprintVisible)
	struct FString                                     BP_RoleInfoCorpsMyCorpsID;                                // 0x0460(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_RoleInfoCorpsCanJoint;                                 // 0x0470(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0471(0x0007) MISSED OFFSET
	struct FBP_STRUCT_RoleInfo_Corps_AvatarData        BP_STRUCT_RoleInfo_Corps_AvatarData;                      // 0x0478(0x0058) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_roleinfo_corps.bp_roleinfo_corps_C");
		return ptr;
	}


	void EventRoleInfoCorpsRefresh_NoFetch();
	void EventRoleInfoCorpsRefresh();
	void EventRoleInfoCorpsReport_NoFetch();
	void EventRoleInfoCorpsReport();
	void EventRoleInfoCorpsApplyJoinCorps_NoFetch();
	void EventRoleInfoCorpsApplyJoinCorps();
	void EventRoleInfoCorpsShow_NoFetch();
	void EventRoleInfoCorpsShow();
	void EventRoleInfoCorpsClose_NoFetch();
	void EventRoleInfoCorpsClose();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
