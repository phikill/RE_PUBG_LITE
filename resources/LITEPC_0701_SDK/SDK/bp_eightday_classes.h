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

// ScriptBlueprintGeneratedClass bp_eightday.bp_eightday_C
// 0x00C8 (0x0458 - 0x0390)
class Abp_eightday_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_EightDayUI_Info                  BP_STRUCT_EightDayUI_Info;                                // 0x0398(0x0048) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_EightDayUI_Info>          BP_ARRAY_EightDay_Items;                                  // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Request_EightDay_day;                                  // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03F4(0x0004) MISSED OFFSET
	struct FString                                     BP_String_EightDay_ActiveTime;                            // 0x03F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_BetterAwardInfo                  BP_STRUCT_BetterAwardInfo;                                // 0x0408(0x0048) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_eightday.bp_eightday_C");
		return ptr;
	}


	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventEightDayHideUI_NoFetch();
	void EventEightDayHideUI();
	void EventEightDaySignUpReq_Push_NoFetch();
	void EventEightDaySignUpReq_Push();
	void EventEightDaySignUpReq_NoFetch();
	void EventEightDaySignUpReq();
	void EventEightDayUpdateUI_NoFetch();
	void EventEightDayUpdateUI();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
