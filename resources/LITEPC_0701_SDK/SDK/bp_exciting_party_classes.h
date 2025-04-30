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

// ScriptBlueprintGeneratedClass bp_exciting_party.bp_exciting_party_C
// 0x00F8 (0x0488 - 0x0390)
class Abp_exciting_party_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_ExcitingPart_Op_Item_Idx;                              // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x039C(0x0004) MISSED OFFSET
	TArray<struct FBP_STRUCT_Exciting_Party_Info>      BP_ARRAY_Exciting_Party_Infos;                            // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_Exciting_Party_Award_Info> BP_ARRAY_Exciting_Party_Award_Infos;                      // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_Exciting_Party_Info              BP_STRUCT_Exciting_Party_Info;                            // 0x03C0(0x00A0) (Edit, BlueprintVisible)
	struct FString                                     BP_Exciting_Party_ACT_TIME;                               // 0x0460(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_Exciting_Party_Award_Info        BP_STRUCT_Exciting_Party_Award_Info;                      // 0x0470(0x000C) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x4];                                       // 0x047C(0x0004) MISSED OFFSET
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_exciting_party.bp_exciting_party_C");
		return ptr;
	}


	void EventRefreshOpenExcitingPartyTime_NoFetch();
	void EventRefreshOpenExcitingPartyTime();
	void EventExcitingPartyViewBox_NoFetch();
	void EventExcitingPartyViewBox();
	void EventSetInfo_Push_NoFetch();
	void EventSetInfo_Push();
	void EventExcitingPartyShare_NoFetch();
	void EventExcitingPartyShare();
	void EventExcitingPartyCloseUI_NoFetch();
	void EventExcitingPartyCloseUI();
	void EventExcitingPartyShareGet_NoFetch();
	void EventExcitingPartyShareGet();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventExcitingPartyRule_NoFetch();
	void EventExcitingPartyRule();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
