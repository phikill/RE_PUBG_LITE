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

// ScriptBlueprintGeneratedClass bp_share_dayfinaly.bp_share_dayfinaly_C
// 0x0050 (0x03E0 - 0x0390)
class Abp_share_dayfinaly_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_ShareDayFinalyUrl;                                     // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ShareDayFinalySologan;                                 // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ShareDayFinalyPath;                                    // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ShareDayFinalyNick;                                    // 0x03C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_share_dayfinaly.bp_share_dayfinaly_C");
		return ptr;
	}


	void EventDayWXZoneBtn_NoFetch();
	void EventDayWXZoneBtn();
	void EventDayQQFrientBtn_NoFetch();
	void EventDayQQFrientBtn();
	void EventShareDayFinaly_Push_NoFetch();
	void EventShareDayFinaly_Push();
	void EventShareDayFinalyFetchInfo_NoFetch();
	void EventShareDayFinalyFetchInfo();
	void EventClickBtnSave_NoFetch();
	void EventClickBtnSave();
	void EventDayWXFrientBtn_NoFetch();
	void EventDayWXFrientBtn();
	void EventDayQQZoneBtn_NoFetch();
	void EventDayQQZoneBtn();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
