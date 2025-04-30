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

// ScriptBlueprintGeneratedClass bp_common_item_get_panel.bp_common_item_get_panel_C
// 0x0030 (0x03C0 - 0x0390)
class Abp_common_item_get_panel_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FBP_STRUCT_ItemGetPanel_ItemData>    BP_ARRAY_ItemGetPanel_ItemData;                           // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_ItemGetPanel_ItemData            BP_STRUCT_ItemGetPanel_ItemData;                          // 0x03A8(0x0010) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_common_item_get_panel.bp_common_item_get_panel_C");
		return ptr;
	}


	void EventTryToShowGetPanel_NoFetch();
	void EventTryToShowGetPanel();
	void EventCommonItemGetShowPanel_Push_NoFetch();
	void EventCommonItemGetShowPanel_Push();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
