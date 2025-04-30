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

// ScriptBlueprintGeneratedClass bp_market_buy_single.bp_market_buy_single_C
// 0x0130 (0x04C0 - 0x0390)
class Abp_market_buy_single_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               BP_MarketBuySingle_GiftBtn_Enable;                        // 0x0398(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0399(0x0007) MISSED OFFSET
	struct FString                                     BP_MarketBuySingle_ItemCount;                             // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_MarketBuySingle_MoneyEnough;                           // 0x03B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_MarketBuySingle_BuyBtn_Enable;                         // 0x03B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x03B2(0x0006) MISSED OFFSET
	struct FString                                     BP_MarketBuySingle_TotalPrice;                            // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_MarketBuySingle_GiftBtn_Visible;                       // 0x03C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x03C9(0x0003) MISSED OFFSET
	int                                                BP_MarketBuySingle_Checked_Index;                         // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_MarketBuySingleInfo              BP_STRUCT_MarketBuySingleInfo;                            // 0x03D0(0x00E8) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_market_buy_single.bp_market_buy_single_C");
		return ptr;
	}


	void EventMarketBuySingleUIClose_NoFetch();
	void EventMarketBuySingleUIClose();
	void EventMarketBuySingleUIOnAdd_NoFetch();
	void EventMarketBuySingleUIOnAdd();
	void EventMarketBuySingleUIOnBuy_NoFetch();
	void EventMarketBuySingleUIOnBuy();
	void EventMarketBuySingleUIOnSub_NoFetch();
	void EventMarketBuySingleUIOnSub();
	void EventMarketBuySingleUIOnGift_NoFetch();
	void EventMarketBuySingleUIOnGift();
	void EventMarketBuySingleUIOnAddTen_NoFetch();
	void EventMarketBuySingleUIOnAddTen();
	void EventMarketBuySingleUIOnDisableBuy_NoFetch();
	void EventMarketBuySingleUIOnDisableBuy();
	void EventMarketBuySingleUIOnDisableGift_NoFetch();
	void EventMarketBuySingleUIOnDisableGift();
	void EventMarketBuySingleCheckBoxStateChanged_NoFetch();
	void EventMarketBuySingleCheckBoxStateChanged();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
