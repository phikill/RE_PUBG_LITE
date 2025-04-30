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

// ScriptBlueprintGeneratedClass bp_noticebox_panel.bp_noticebox_panel_C
// 0x0048 (0x03D8 - 0x0390)
class Abp_noticebox_panel_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_CommonNoticeBox_Title;                                 // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_CommonNoticeBox_Msg;                                   // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_CommonNoticeBox_BtnOKTxt;                              // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_CommonNoticeBox_style;                                 // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03CC(0x0004) MISSED OFFSET
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_noticebox_panel.bp_noticebox_panel_C");
		return ptr;
	}


	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventCommonNoticeBoxClickOK_NoFetch();
	void EventCommonNoticeBoxClickOK();
	void EventCommonNoticeBoxClickClose_NoFetch();
	void EventCommonNoticeBoxClickClose();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
