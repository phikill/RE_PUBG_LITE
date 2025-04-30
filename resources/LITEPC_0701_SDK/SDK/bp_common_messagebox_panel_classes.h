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

// ScriptBlueprintGeneratedClass bp_common_messagebox_panel.bp_common_messagebox_panel_C
// 0x0058 (0x03E8 - 0x0390)
class Abp_common_messagebox_panel_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_CommonMessageBox_Cancel;                               // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_CommonMessageBox_style;                                // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03AC(0x0004) MISSED OFFSET
	struct FString                                     BP_CommonMessageBox_OK;                                   // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_CommonMessageBox_title;                                // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_CommonMessageBox_msg;                                  // 0x03D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_common_messagebox_panel.bp_common_messagebox_panel_C");
		return ptr;
	}


	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventCommonMessageBoxAfterHide_NoFetch();
	void EventCommonMessageBoxAfterHide();
	void EventCommonMessageBoxClickCancel_NoFetch();
	void EventCommonMessageBoxClickCancel();
	void EventCommonMessageBoxClickOK_NoFetch();
	void EventCommonMessageBoxClickOK();
	void EventCommonMessageBoxTimerInvoke_NoFetch();
	void EventCommonMessageBoxTimerInvoke();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
