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

// ScriptBlueprintGeneratedClass bp_market_buy_batch.bp_market_buy_batch_C
// 0x0118 (0x04A8 - 0x0390)
class Abp_market_buy_batch_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_MarketBuyBatchItemInfo           BP_STRUCT_MarketBuyBatchItemInfo;                         // 0x0398(0x00D0) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_MarketBuyBatchItemInfo>   BP_ARRAY_MarketBuyBatchItemList;                          // 0x0468(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_MarketBuyBatch_MoneyPrice1;                            // 0x0478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_MarketBuyBatch_MoneyPrice2;                            // 0x047C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_MarketBuyBatch_MoneyEnough1;                           // 0x0480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0481(0x0003) MISSED OFFSET
	int                                                BP_MarketBuyBatch_MoneyType1;                             // 0x0484(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_MarketBuyBatch_CheckBoxClickItemIndex;                 // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_MarketBuyBatch_CheckBoxClickTimeIndex;                 // 0x048C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_MarketBuyBatch_BuyBtn_Enable;                          // 0x0490(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0491(0x0003) MISSED OFFSET
	int                                                BP_MarketBuyBatch_SwitchSelectedItemIndex;                // 0x0494(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_MarketBuyBatch_MoneyType2;                             // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_MarketBuyBatch_MoneyEnough2;                           // 0x049C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x049D(0x0003) MISSED OFFSET
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_market_buy_batch.bp_market_buy_batch_C");
		return ptr;
	}


	void EventMarketBuyBatchUIClose_NoFetch();
	void EventMarketBuyBatchUIClose();
	void EventMarketBuyBatchUIOnBuy_NoFetch();
	void EventMarketBuyBatchUIOnBuy();
	void EventOnCheckBoxChecked_NoFetch();
	void EventOnCheckBoxChecked();
	void EventOnSwitchItemSelected_NoFetch();
	void EventOnSwitchItemSelected();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
