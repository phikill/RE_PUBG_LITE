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

// ScriptBlueprintGeneratedClass bp_roleinfo_avatarframe.bp_roleinfo_avatarframe_C
// 0x00A0 (0x0430 - 0x0390)
class Abp_roleinfo_avatarframe_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     RoleInfoAvatarFrameSelfUid;                               // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_RoleInfoAvatarFrame              BP_STRUCT_RoleInfoAvatarFrame;                            // 0x03A8(0x0058) (Edit, BlueprintVisible)
	struct FString                                     RoleInfoAvatarFrameSelfUrl;                               // 0x0400(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                RoleInfoAvatarFrameCurUseId;                              // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0414(0x0004) MISSED OFFSET
	TArray<struct FBP_STRUCT_RoleInfoAvatarFrame>      BP_ARRAY_RoleInfoAvatarFrameList;                         // 0x0418(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_roleinfo_avatarframe.bp_roleinfo_avatarframe_C");
		return ptr;
	}


	void EventRoleInfoAvatarFrameUse_NoFetch();
	void EventRoleInfoAvatarFrameUse();
	void EventRoleInfoAvatarFrameFetchInfo_NoFetch();
	void EventRoleInfoAvatarFrameFetchInfo();
	void EventRoleInfoAvatarFrameUIClose_NoFetch();
	void EventRoleInfoAvatarFrameUIClose();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
