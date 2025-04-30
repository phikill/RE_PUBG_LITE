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

// UserDefinedStruct BP_STRUCT_MarketItem.BP_STRUCT_MarketItem
// 0x0068
struct FBP_STRUCT_MarketItem
{
	bool                                               time_limit_2_3DF8E540436ED5E347F6A93F08C71624;            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                item_id_19_4435D0C072FEF1B362382106050C0BA4;              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                id_18_5F16AD40528A410B626E2EBA0A1DE4A4;                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               selected_9_3D6D4C407E9BB70518C140D402364F74;              // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	int                                                item_count_10_2384E7C07A9C41F1715781F300BD3C94;           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     name_11_15BEE240638738AD03111F0A0DE51E25;                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               owned_12_4A14E14028190545000820D60E538564;                // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               worn_13_315C6B801793949C032D64690DE59C9E;                 // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x002A(0x0002) MISSED OFFSET
	int                                                money_price_15_69CDC0805B80DDB41CDA4875013F8A85;          // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                money_type_16_445C2C401A7EA19F7D10844201134035;           // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                money_orgprice_17_6E0972800561CF3A1303403008B69E75;       // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                item_type_20_19D6EE0017867BE04169AAF50C08F565;            // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FString                                     show_discount_21_65FA9C4016E0C9E55B02FEBE0CCF4854;        // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                label_idx_23_0CBEA3004FB3B25A7A1C19A209800868;            // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FString                                     br_label_left_24_51ADE9407987CF2D2FC176300901D214;        // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
