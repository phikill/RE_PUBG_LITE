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

// UserDefinedStruct BP_STRUCT_ShopLimitInfo.BP_STRUCT_ShopLimitInfo
// 0x0078
struct FBP_STRUCT_ShopLimitInfo
{
	int                                                price_0_2A56679046B375EA92C902BE5CDADFCA;                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                lootid_1_D8A904924B0844F0B2B204AB28521462;                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                end_time_3_85D2484242D4D3A851AFC2B72B6BCFE6;              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     icon_4_1FF01CE944DA0BCE57288EBCF0502641;                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     typename_5_44D883F045AA79A1D12A9A8F923353D3;              // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                open_time_6_8E26DE884D298F1E15E2CD88B39605FC;             // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                type_7_280497704F9B2016457695B91FA16D0F;                  // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     gift_8_CF0EF83D48544513CB76CFBDADA5A12E;                  // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                id_10_1951C9D84A0DB7BE27D2639960C73EE3;                   // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FString                                     desc_11_A641A677459F8D59DDB71E92F86E1483;                 // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                current_sold_num_15_EEFF0F8047872110AB9CE484A76DED4B;     // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                limit_17_AC422E864DDA8806A4EF4C85A713C7D9;                // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     typepic_18_B77B665F4C429E8181827AA8566DADE3;              // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
