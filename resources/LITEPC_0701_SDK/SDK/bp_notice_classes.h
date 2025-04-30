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

// ScriptBlueprintGeneratedClass bp_notice.bp_notice_C
// 0x0028 (0x03B8 - 0x0390)
class Abp_notice_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_Notice_Scene;                                          // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Notice_Index;                                          // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Notice_Type;                                           // 0x03AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_notice.bp_notice_C");
		return ptr;
	}


	void EventTryShowCommonNotice_NoFetch();
	void EventTryShowCommonNotice();
	void EventDoneNotice_NoFetch();
	void EventDoneNotice();
	void EventShowCommonNotice_NoFetch();
	void EventShowCommonNotice();
	void EventTryShowSlapNotice_NoFetch();
	void EventTryShowSlapNotice();
	void EventShowSlapNotice_NoFetch();
	void EventShowSlapNotice();
	void EventShowNotice_NoFetch();
	void EventShowNotice();
	void EventMaintenanceNotice_NoFetch();
	void EventMaintenanceNotice();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventSetInfo_Push_NoFetch();
	void EventSetInfo_Push();
	void EventTryShowMaintenanceNotice_NoFetch();
	void EventTryShowMaintenanceNotice();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
