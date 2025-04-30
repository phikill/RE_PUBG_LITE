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

// UserDefinedStruct BP_STRUCT_Shop_ItemInfo.BP_STRUCT_Shop_ItemInfo
// 0x004C
struct FBP_STRUCT_Shop_ItemInfo
{
	struct FString                                     pruduct_name_0_5B29BA93499594D4CBB44A8FAE5DDFB0;          // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                product_sub_type_1_D725D632474D3D69533AB6B9BB1A74AB;      // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                product_gold_price_2_F81D1F4C47A822905FC194BBCC31D86A;    // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                product_id_3_900CD0FF4DF6081D731F9A9C4FD6B68F;            // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FString                                     product_desc_4_CE6E0C65473991A29496FC8C7199BA12;          // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                product_type_5_D05ABCC841B153289F6831907AAF5B22;          // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                item_id_6_C824D15248674294875E6195166C8425;               // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     item_icon_7_7B21BA264199835B609EB8959934C835;             // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                product_sort_8_1057FEEF4CACC02A1DEB36BC4A4D6D7A;          // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
