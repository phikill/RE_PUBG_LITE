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

// ScriptBlueprintGeneratedClass bp_market_appearance.bp_market_appearance_C
// 0x0088 (0x0418 - 0x0390)
class Abp_market_appearance_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               BP_MarketAppearanceUINotOwn;                              // 0x0398(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0399(0x0007) MISSED OFFSET
	TArray<int>                                        BP_ARRAY_MarketAppearanceUIWearList;                      // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_MarketAppearanceUICurSelectItemNum;                    // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03B4(0x0004) MISSED OFFSET
	TArray<int>                                        BP_ARRAY_MarketAppearanceUISelectList;                    // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_MarketAppearanceUISelectTypeIdx;                       // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_MarketAppearanceUIBuyIdx;                              // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_MarketAppearanceUI_AvatarPuton;                        // 0x03D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x03D1(0x0007) MISSED OFFSET
	struct FBP_STRUCT_MarketAppearanceUI_AvatarModelInfo BP_STRUCT_MarketAppearanceUI_AvatarModelInfo;             // 0x03D8(0x0020) (Edit, BlueprintVisible)
	bool                                               BP_MarketAppearanceUI_ReloadDonotJump;                    // 0x03F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x03F9(0x0007) MISSED OFFSET
	TArray<int>                                        BP_ARRAY_MarketAppearanceUI_AvatarChange_ResId_List;      // 0x0400(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_market_appearance.bp_market_appearance_C");
		return ptr;
	}


	void EventMarketAppearanceUIToggleOwn_NoFetch();
	void EventMarketAppearanceUIToggleOwn();
	void EventMarketAppearanceUISwitchGender_NoFetch();
	void EventMarketAppearanceUISwitchGender();
	void EventMarketAppearanceUISelect_NoFetch();
	void EventMarketAppearanceUISelect();
	void EventMarketAppearanceUIResetAvatar_NoFetch();
	void EventMarketAppearanceUIResetAvatar();
	void EventMarketAppearanceUISelectType_NoFetch();
	void EventMarketAppearanceUISelectType();
	void EventMarketAppearanceUIBatchBuy_NoFetch();
	void EventMarketAppearanceUIBatchBuy();
	void EventMarketAppearanceUIGetCurrentSelectNum_NoFetch();
	void EventMarketAppearanceUIGetCurrentSelectNum();
	void EventMarketAppearanceUIBuy_NoFetch();
	void EventMarketAppearanceUIBuy();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
