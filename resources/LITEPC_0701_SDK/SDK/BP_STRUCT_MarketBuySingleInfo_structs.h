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

// UserDefinedStruct BP_STRUCT_MarketBuySingleInfo.BP_STRUCT_MarketBuySingleInfo
// 0x00E5
struct FBP_STRUCT_MarketBuySingleInfo
{
	struct FString                                     id_2_69AD310030158BD277D1DB220AADC3F4;                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     item_id_3_5B8EF480748E4CF8597F5E88000309B4;               // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     name_5_3039A60020537FAE7439291E0DC44E95;                  // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     img_icon_10_6FD22F0017E4E59A181D49E809783E5E;             // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     desc_18_7659A5803E58B46874561FB20DC3A633;                 // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               is_owned_21_3D8EF3C01DDCC6E72648FE19040B20B4;             // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	int                                                money_type_25_4503B000256518E863A9699E0132F085;           // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                is_expire_26_4ABB6FC0006F3DC32EEC04770F1330B5;            // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                money_price2_28_7DB350C0354719E504052B21022818B2;         // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                money_price_29_676F64404EA57BFD6D70CD9903228185;          // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                money_price3_31_7DB45100354719E604052B20022818B3;         // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                discount_price2_33_62F321000B9C298207300173052267C2;      // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                discount_price3_34_62F421400B9C298307300172052267C3;      // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                discount_price_35_28235480590FE0D048ED0E5B04522675;       // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	struct FString                                     item_time_string2_39_04F7D700034F44E069E8BACC0048DEC2;    // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     item_time_string3_40_04F8D740034F44E169E8BACD0048DEC3;    // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     item_time_string_41_7AA30A806296299E1A67A94806048DE7;     // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                item_time_limit_42_0BB42C8055D96FE063BDDC950A681434;      // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                item_time_limit3_43_5B98F94065AF36537316D56D068143D3;     // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                item_time_limit2_44_5B97F90065AF36527316D562068143D2;     // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               is_suit_45_62D3DDC07A8774DD222CD717003C7844;              // 0x00B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00B5(0x0003) MISSED OFFSET
	int                                                quality_46_46C8E0006F60F6046BC70D0B081F0C99;              // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
	TArray<int>                                        BP_ARRAY_suit_sub_item_49_6A29108057220C1617BCB7EA0A7383ED;// 0x00C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     time_left_str_50_4B05BA0015658CC8587B7F6B01B1E0B2;        // 0x00D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                can_present_51_602482407D5B7FD51EDC4FCB0BB572E4;          // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               is_prop_type_53_0F43650074C32E3A53B03EC302658A35;         // 0x00E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
