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

// ScriptBlueprintGeneratedClass bp_market.bp_market_C
// 0x00E0 (0x0470 - 0x0390)
class Abp_market_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_Market_OpenPage;                                       // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Market_Gold;                                           // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Market_Diamond;                                        // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_MarketItem                       BP_STRUCT_MarketItem;                                     // 0x03C8(0x0068) (Edit, BlueprintVisible)
	struct FString                                     BP_Market_Ticket;                                         // 0x0430(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_MarketItem>               BP_ARRAY_MarketList;                                      // 0x0440(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Market_Isopen;                                         // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0454(0x0004) MISSED OFFSET
	struct FString                                     BP_Market_ClosePage;                                      // 0x0458(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_market.bp_market_C");
		return ptr;
	}


	void EventMarketOpenMarketMainUIEnter_NoFetch();
	void EventMarketOpenMarketMainUIEnter();
	void EventMarketOnOpenPage_NoFetch();
	void EventMarketOnOpenPage();
	void EventMarketCloseMarketMainUI_NoFetch();
	void EventMarketCloseMarketMainUI();
	void EventMarketCloseMarketMainUIEnter_NoFetch();
	void EventMarketCloseMarketMainUIEnter();
	void EventMarketOnClose_NoFetch();
	void EventMarketOnClose();
	void EventMarketOnClosePage_NoFetch();
	void EventMarketOnClosePage();
	void EventMarketOnRecharge_NoFetch();
	void EventMarketOnRecharge();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
