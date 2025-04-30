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

// ScriptBlueprintGeneratedClass bp_market_package.bp_market_package_C
// 0x0048 (0x03D8 - 0x0390)
class Abp_market_package_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_MarketPackageUI_ChangeItemResId;                       // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x039C(0x0004) MISSED OFFSET
	TArray<int>                                        BP_ARRAY_MarketPackageUISelectList;                       // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_MarketPackageUI_ReloadDonotJump;                       // 0x03B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03B1(0x0003) MISSED OFFSET
	int                                                BP_MarketPackageUISelectTypeIdx;                          // 0x03B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_MarketPackageUIBuyIdx;                                 // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_MarketPackageUINotOwn;                                 // 0x03BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x03BD(0x0003) MISSED OFFSET
	TArray<int>                                        BP_ARRAY_MarketPackageUIWearList;                         // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_market_package.bp_market_package_C");
		return ptr;
	}


	void EventMarketPackageUISelectType_NoFetch();
	void EventMarketPackageUISelectType();
	void EventMarketPackageUISelect_NoFetch();
	void EventMarketPackageUISelect();
	void EventMarketPackageUIToggleOwn_NoFetch();
	void EventMarketPackageUIToggleOwn();
	void EventMarketPackageUIBuy_NoFetch();
	void EventMarketPackageUIBuy();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
