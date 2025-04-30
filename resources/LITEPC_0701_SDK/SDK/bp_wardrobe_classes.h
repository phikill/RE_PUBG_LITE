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

// ScriptBlueprintGeneratedClass bp_wardrobe.bp_wardrobe_C
// 0x0180 (0x0510 - 0x0390)
class Abp_wardrobe_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FBP_STRUCT_WardrobeItemInfo>         BP_ARRAY_WardrobeItemList;                                // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ChangePageTabType;                                     // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CurTabType;                                            // 0x03AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_LastPageType;                                          // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03B4(0x0004) MISSED OFFSET
	TArray<struct FBP_STRUCT_WardrobeItemInfo>         BP_ARRAY_Wardrobe_SourceBookItemList;                     // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ChangeTabIcon;                                         // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_PageRedPointMask;                                      // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        BP_ARRAY_CurPageTabIcon;                                  // 0x03D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_Wardrobe_IsShowJumpToExchange;                         // 0x03E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03E1(0x0007) MISSED OFFSET
	struct FString                                     BP_Sell_id;                                               // 0x03E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_WardrobeItemInfo                 BP_STRUCT_WardrobeItemInfo;                               // 0x03F8(0x0038) (Edit, BlueprintVisible)
	struct FString                                     BP_WardrobeGold;                                          // 0x0430(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_WardrobeClickedItemData          BP_STRUCT_WardrobeClickedItemData;                        // 0x0440(0x0038) (Edit, BlueprintVisible)
	struct FString                                     BP_String_Wardrobe_RemainTime;                            // 0x0478(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_Wardrobe_IsShowUseButton;                              // 0x0488(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0489(0x0003) MISSED OFFSET
	int                                                BP_WARDROBE_Jump_Item_resID;                              // 0x048C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_WardrobeDiamond;                                       // 0x0490(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_Wardrobe_BG_showPutOn;                                 // 0x04A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Wardrobe_IsShowDecomposeButton;                        // 0x04A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x04A2(0x0002) MISSED OFFSET
	int                                                BP_Wardrobe_BG_resID;                                     // 0x04A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_ChangeTabType;                                         // 0x04A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x04AC(0x0004) MISSED OFFSET
	struct FBP_STRUCT_WardrobeChangedItemData          BP_STRUCT_WardrobeChangedItemData;                        // 0x04B0(0x0038) (Edit, BlueprintVisible)
	int                                                BP_LastTabType;                                           // 0x04E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CurPageTabType;                                        // 0x04EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Wardrobe_DecomposeItemInsID;                           // 0x04F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_TabRedPointMask;                                       // 0x0500(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0504(0x0004) MISSED OFFSET
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_wardrobe.bp_wardrobe_C");
		return ptr;
	}


	void EventWardrobeClickJumpToExchange_NoFetch();
	void EventWardrobeClickJumpToExchange();
	void EventWardrobeSell_NoFetch();
	void EventWardrobeSell();
	void EventWardrobeClickItem_NoFetch();
	void EventWardrobeClickItem();
	void EventWardrobeClickDecomposeItem_NoFetch();
	void EventWardrobeClickDecomposeItem();
	void EventWardrobeClickJump_NoFetch();
	void EventWardrobeClickJump();
	void EventHideWardrodbe_NoFetch();
	void EventHideWardrodbe();
	void EventChangeWardrodbeTab_NoFetch();
	void EventChangeWardrodbeTab();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
