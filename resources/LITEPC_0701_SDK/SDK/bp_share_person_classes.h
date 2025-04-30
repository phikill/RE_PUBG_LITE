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

// ScriptBlueprintGeneratedClass bp_share_person.bp_share_person_C
// 0x00E8 (0x0478 - 0x0390)
class Abp_share_person_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_SharePersonInfo                  BP_STRUCT_SharePersonInfo;                                // 0x0398(0x00C8) (Edit, BlueprintVisible)
	struct FString                                     BP_SharePersonPath;                                       // 0x0460(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_share_person.bp_share_person_C");
		return ptr;
	}


	void EventSharePersonFetchInfo_NoFetch();
	void EventSharePersonFetchInfo();
	void EventPersonQQZoneBtn_NoFetch();
	void EventPersonQQZoneBtn();
	void EventPersonWXZoneBtn_NoFetch();
	void EventPersonWXZoneBtn();
	void EventPersonWXFrientBtn_NoFetch();
	void EventPersonWXFrientBtn();
	void EventSharePerson_Push_NoFetch();
	void EventSharePerson_Push();
	void EventPersonQQFrientBtn_NoFetch();
	void EventPersonQQFrientBtn();
	void EventHideUI_NoFetch();
	void EventHideUI();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
