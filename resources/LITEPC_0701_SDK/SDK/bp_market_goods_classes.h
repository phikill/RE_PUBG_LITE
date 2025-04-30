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

// ScriptBlueprintGeneratedClass bp_market_goods.bp_market_goods_C
// 0x0040 (0x03D0 - 0x0390)
class Abp_market_goods_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FBP_STRUCT_MarketDropItem>           BP_ARRAY_MarketDropList;                                  // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_MarketDropItem                   BP_STRUCT_MarketDropItem;                                 // 0x03A8(0x0010) (Edit, BlueprintVisible)
	int                                                BP_MarketGoodsSelectIdx;                                  // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_MarketGoods_ReloadDonotJump;                           // 0x03BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03BD(0x0003) MISSED OFFSET
	int                                                BP_MarketGoodsSelectTypeIdx;                              // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03C4(0x0004) MISSED OFFSET
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_market_goods.bp_market_goods_C");
		return ptr;
	}


	void EventMarketGoodsUISelect_NoFetch();
	void EventMarketGoodsUISelect();
	void EventMarketGoodsUISelectType_NoFetch();
	void EventMarketGoodsUISelectType();
	void EventMarketGoodsUIBuy_NoFetch();
	void EventMarketGoodsUIBuy();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
