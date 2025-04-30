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

// ScriptBlueprintGeneratedClass bp_common_item_list.bp_common_item_list_C
// 0x0060 (0x03F0 - 0x0390)
class Abp_common_item_list_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_CommonItemListInfo               BP_STRUCT_CommonItemListInfo;                             // 0x0398(0x0028) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_CommonItemListInfo>       BP_ARRAY_CommonItemListData;                              // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_CommonItemList_SignleIndex;                            // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CommonItemList_SelectedIndex;                          // 0x03D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_CommonItemList_TitleString;                            // 0x03D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_common_item_list.bp_common_item_list_C");
		return ptr;
	}


	void EventCommonItemListOnClickItem_NoFetch();
	void EventCommonItemListOnClickItem();
	void EventCommonItemListClickClose_NoFetch();
	void EventCommonItemListClickClose();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
