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

// ScriptBlueprintGeneratedClass bp_share_exciting_party.bp_share_exciting_party_C
// 0x0038 (0x03C8 - 0x0390)
class Abp_share_exciting_party_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_ShareExcitingPartyPath;                                // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_ShareExcitingPartyInfo           BP_STRUCT_ShareExcitingPartyInfo;                         // 0x03A8(0x0018) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_share_exciting_party.bp_share_exciting_party_C");
		return ptr;
	}


	void EventShareExcitingParty_Push_NoFetch();
	void EventShareExcitingParty_Push();
	void EventExcitingPartyHideUI_NoFetch();
	void EventExcitingPartyHideUI();
	void EventExcitingPartyWXFriendBtn_NoFetch();
	void EventExcitingPartyWXFriendBtn();
	void EventExcitingPartyWXZoneBtn_NoFetch();
	void EventExcitingPartyWXZoneBtn();
	void EventExcitingPartyQQFriendBtn_NoFetch();
	void EventExcitingPartyQQFriendBtn();
	void EventExcitingPartyQQZoneBtn_NoFetch();
	void EventExcitingPartyQQZoneBtn();
	void EventShareExcitingPartyFetchInfo_NoFetch();
	void EventShareExcitingPartyFetchInfo();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
