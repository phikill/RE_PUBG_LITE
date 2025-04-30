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

// ScriptBlueprintGeneratedClass bp_update_notice.bp_update_notice_C
// 0x0048 (0x03D8 - 0x0390)
class Abp_update_notice_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_Update_Notice_Type;                                    // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x039C(0x0004) MISSED OFFSET
	struct FString                                     BP_Update_Notice_Ok_Text;                                 // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Update_Notice_Scene;                                   // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Update_Notice_Cancel_Text;                             // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_update_notice.bp_update_notice_C");
		return ptr;
	}


	void EventUpdateNoticeClickOk_NoFetch();
	void EventUpdateNoticeClickOk();
	void EventSetInfo_Push_NoFetch();
	void EventSetInfo_Push();
	void EventUpdateNoticeClickHelp_NoFetch();
	void EventUpdateNoticeClickHelp();
	void EventUpdateNoticeClickCancel_NoFetch();
	void EventUpdateNoticeClickCancel();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
