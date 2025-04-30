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

// ScriptBlueprintGeneratedClass bp_open_box_panel.bp_open_box_panel_C
// 0x0030 (0x03C0 - 0x0390)
class Abp_open_box_panel_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_OpenBoxPanel_ItemData            BP_STRUCT_OpenBoxPanel_ItemData;                          // 0x0398(0x0020) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_open_box_panel.bp_open_box_panel_C");
		return ptr;
	}


	void EventOpenBoxBuyAgain_NoFetch();
	void EventOpenBoxBuyAgain();
	void EventSetInfo_Push_NoFetch();
	void EventSetInfo_Push();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventCheckOpenBox_NoFetch();
	void EventCheckOpenBox();
	void EventAfterHideOpenBox_NoFetch();
	void EventAfterHideOpenBox();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
