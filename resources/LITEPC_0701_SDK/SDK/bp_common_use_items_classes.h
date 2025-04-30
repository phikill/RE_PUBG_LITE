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

// ScriptBlueprintGeneratedClass bp_common_use_items.bp_common_use_items_C
// 0x0060 (0x03F0 - 0x0390)
class Abp_common_use_items_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_Common_Use_Items_DlgType;                              // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Common_Use_Items_UseCount;                             // 0x039C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Common_Use_Items_DropCount;                            // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Common_Use_Items_Desc;                                 // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Common_Use_Items_Name;                                 // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Common_Buy_Items_CostItemId;                           // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Common_Use_Items_resID;                                // 0x03D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Common_Buy_Items_Cost;                                 // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Common_Use_Items_DropItem_ID;                          // 0x03DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Common_Use_Items_LongDescID;                           // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Common_Use_Items_Amount;                               // 0x03E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_common_use_items.bp_common_use_items_C");
		return ptr;
	}


	void EventCommonUseItemsOnOkClick_NoFetch();
	void EventCommonUseItemsOnOkClick();
	void EventCommonUpdateUseCount_NoFetch();
	void EventCommonUpdateUseCount();
	void EventCommonUseItemBeyondMax_NoFetch();
	void EventCommonUseItemBeyondMax();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
