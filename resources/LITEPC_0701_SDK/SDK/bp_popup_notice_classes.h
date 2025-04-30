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

// ScriptBlueprintGeneratedClass bp_popup_notice.bp_popup_notice_C
// 0x00A0 (0x0430 - 0x0390)
class Abp_popup_notice_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_NoticeTitle;                                           // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_MessageBoxButton                 BP_STRUCT_MessageBoxButton;                               // 0x03A8(0x0020) (Edit, BlueprintVisible)
	struct FBP_STRUCT_MessageBoxData                   BP_STRUCT_MessageBoxData;                                 // 0x03C8(0x0030) (Edit, BlueprintVisible)
	struct FString                                     BP_PendingMessageBoxCallback;                             // 0x03F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_NoticeMsg;                                             // 0x0408(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_MessageBoxData>           BP_ARRAY_MessageBoxStack;                                 // 0x0418(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_popup_notice.bp_popup_notice_C");
		return ptr;
	}


	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventShrinkMessageBoxStack_NoFetch();
	void EventShrinkMessageBoxStack();
	void EventPopupNoticeShowBox_Push_NoFetch();
	void EventPopupNoticeShowBox_Push();
	void EventCallPendingMessageBoxCallback_Push_NoFetch();
	void EventCallPendingMessageBoxCallback_Push();
	void EventShowOpenSpeakerAtFirst_Push_NoFetch();
	void EventShowOpenSpeakerAtFirst_Push();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
