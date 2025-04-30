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

// ScriptBlueprintGeneratedClass bp_item_get_share.bp_item_get_share_C
// 0x0070 (0x0400 - 0x0390)
class Abp_item_get_share_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_ItemGetShare_ShowInfo            BP_STRUCT_ItemGetShare_ShowInfo;                          // 0x0398(0x0060) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_item_get_share.bp_item_get_share_C");
		return ptr;
	}


	void EventSetInfo_Push_NoFetch();
	void EventSetInfo_Push();
	void EventShowSharePanel_NoFetch();
	void EventShowSharePanel();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventItemShareHide_NoFetch();
	void EventItemShareHide();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
