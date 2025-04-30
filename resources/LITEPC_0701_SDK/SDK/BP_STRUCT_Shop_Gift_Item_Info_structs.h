#pragma once

// Name: LitePC_0701, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct BP_STRUCT_Shop_Gift_Item_Info.BP_STRUCT_Shop_Gift_Item_Info
// 0x0058
struct FBP_STRUCT_Shop_Gift_Item_Info
{
	int                                                quality_0_74D236804F6FA3245EB179A109BFB6E9;               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     product_desc_1_584A940061B2203847B47587000C6F73;          // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     pruduct_name_2_6A81D6006FF759D811FD5377000D65D5;          // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     icon_path_3_6741E18056945A2817668A780DC02608;             // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                item_id_4_09984B00549CFA1870DC26AB01A3B3A4;               // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                product_price_5_0D0851003691EC46442F4C4A00FBB195;         // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                before_discount_price_6_35ABDF80237DF02A36201BC5001F1715; // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FString                                     money_path_7_3BF541405D6F6BBB36C8A74D04935E78;            // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
