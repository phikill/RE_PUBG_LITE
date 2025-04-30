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

// ScriptBlueprintGeneratedClass bp_good_item_get_panel.bp_good_item_get_panel_C
// 0x0040 (0x03D0 - 0x0390)
class Abp_good_item_get_panel_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_GoodItemGet_ToShow               BP_STRUCT_GoodItemGet_ToShow;                             // 0x0398(0x0018) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_GoodItemGet_ToShow>       BP_Array_GoodItemGet_ToShow;                              // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_IsShareAwardGold;                                      // 0x03C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03C1(0x0003) MISSED OFFSET
	int                                                BP_HasShareNum;                                           // 0x03C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_good_item_get_panel.bp_good_item_get_panel_C");
		return ptr;
	}


	void EventShowGetPanel_NoFetch();
	void EventShowGetPanel();
	void EventSetInfo_Push_NoFetch();
	void EventSetInfo_Push();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
