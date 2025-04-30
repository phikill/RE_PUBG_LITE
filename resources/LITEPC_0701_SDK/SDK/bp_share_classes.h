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

// ScriptBlueprintGeneratedClass bp_share.bp_share_C
// 0x0060 (0x03F0 - 0x0390)
class Abp_share_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_ShareRoleData                    BP_STRUCT_ShareRoleData;                                  // 0x0398(0x0040) (Edit, BlueprintVisible)
	struct FString                                     BP_Share_Image_Path;                                      // 0x03D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_share.bp_share_C");
		return ptr;
	}


	void EventClickWXFrientBtn_NoFetch();
	void EventClickWXFrientBtn();
	void EventGetRoleData_NoFetch();
	void EventGetRoleData();
	void EventShareFetchInfo_NoFetch();
	void EventShareFetchInfo();
	void EventSaveLocalFail_NoFetch();
	void EventSaveLocalFail();
	void EventSaveLocalSuccess_NoFetch();
	void EventSaveLocalSuccess();
	void EventClickQQFrientBtn_NoFetch();
	void EventClickQQFrientBtn();
	void EventClickQQZoneBtn_NoFetch();
	void EventClickQQZoneBtn();
	void EventClickWXZoneBtn_NoFetch();
	void EventClickWXZoneBtn();
	void EventClickSaveLocal_NoFetch();
	void EventClickSaveLocal();
	void EventStructShare_NoFetch();
	void EventStructShare();
	void EventShareToFriend_NoFetch();
	void EventShareToFriend();
	void EventClickClose_NoFetch();
	void EventClickClose();
	void EventShare_Push_NoFetch();
	void EventShare_Push();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
