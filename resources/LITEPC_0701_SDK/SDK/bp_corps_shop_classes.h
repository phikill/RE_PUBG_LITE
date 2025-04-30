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

// ScriptBlueprintGeneratedClass bp_corps_shop.bp_corps_shop_C
// 0x0080 (0x0410 - 0x0390)
class Abp_corps_shop_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_CorpsShopCurrentSelectPageIdx;                         // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_CorpsShopClothingInfo            BP_STRUCT_CorpsShopClothingInfo;                          // 0x039C(0x0018) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03B4(0x0004) MISSED OFFSET
	TArray<struct FBP_STRUCT_CorpsShopClothingInfo>    BP_ARRAY_CorpsShopClothingInfoList;                       // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_CorpsShopHeadpotraitInfo> BP_ARRAY_CorpsShopHeadpotraitInfoList;                    // 0x03C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_CorpsShopCurrentClickShopItemId;                       // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_CorpsShopHeadpotraitInfo         BP_STRUCT_CorpsShopHeadpotraitInfo;                       // 0x03DC(0x0018) (Edit, BlueprintVisible)
	int                                                BP_CorpsShopCurrentBuyShopItemNum;                        // 0x03F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CorpsShop_Money;                                       // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CorpsShopCurrentBuyShopItemId;                         // 0x03FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CorpsShop_Level;                                       // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0404(0x0004) MISSED OFFSET
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_corps_shop.bp_corps_shop_C");
		return ptr;
	}


	void EventCorpsShopUIFetchInfo_Push_NoFetch();
	void EventCorpsShopUIFetchInfo_Push();
	void EventSwitchToClothingPage_NoFetch();
	void EventSwitchToClothingPage();
	void EventBuyCorpsShopItem_NoFetch();
	void EventBuyCorpsShopItem();
	void EventSwitchToHeadpotraitPage_NoFetch();
	void EventSwitchToHeadpotraitPage();
	void EventClickShowBaoxiangDrop_NoFetch();
	void EventClickShowBaoxiangDrop();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
