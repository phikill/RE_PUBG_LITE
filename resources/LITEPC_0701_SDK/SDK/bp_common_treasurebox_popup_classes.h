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

// ScriptBlueprintGeneratedClass bp_common_treasurebox_popup.bp_common_treasurebox_popup_C
// 0x0050 (0x03E0 - 0x0390)
class Abp_common_treasurebox_popup_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_ActiveAwardItem                  BP_STRUCT_ActiveAwardItem;                                // 0x0398(0x0020) (Edit, BlueprintVisible)
	struct FString                                     BP_TitleName_String;                                      // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_DropItem                         BP_STRUCT_DropItem;                                       // 0x03C8(0x0010) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_common_treasurebox_popup.bp_common_treasurebox_popup_C");
		return ptr;
	}


	void EventCommonTreasureBoxPopupClosePanel_NoFetch();
	void EventCommonTreasureBoxPopupClosePanel();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
