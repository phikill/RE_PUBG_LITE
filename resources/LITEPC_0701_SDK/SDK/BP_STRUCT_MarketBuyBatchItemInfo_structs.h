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

// UserDefinedStruct BP_STRUCT_MarketBuyBatchItemInfo.BP_STRUCT_MarketBuyBatchItemInfo
// 0x00D0
struct FBP_STRUCT_MarketBuyBatchItemInfo
{
	int                                                id_1_2EB414C0222D48671123C58B0687E404;                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                money_price_3_7BD168005D0771B837CBFA87013AC325;           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                money_type_6_0E9B93C035E8349B42616D640B1374A5;            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     name_11_38C4C9C07C1031B12B24BE1C07E5B2B5;                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                item_id_12_62687840656A767711A470130FC46BA4;              // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FString                                     img_icon_14_7AA5D2C03A18123F0F62C51505521E4E;             // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                is_expire_15_3E793380084FB2C45725265D0DB14F75;            // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                money_price2_16_59CF74805D3932AA10B9B53403AC3292;         // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                chosen_checked_index_17_4E8408C0581EFCAF664367850A5A4348; // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FString                                     item_time_string2_18_31C69AC02F87D1E76407AB6D02491BA2;    // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     item_time_string3_19_31C79B002F87D1E86407AB6C02491BA3;    // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     item_time_string_20_7707AE40378F995B54DD1B49002491B7;     // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                price_chosen_21_30099E002AB1146869A57159001117EE;         // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                money_price3_22_59D074C05D3932AB10B9B53303AC3293;         // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                item_time_limit3_23_57FD9D002BF2235801F780C004A13F83;     // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                time_chosen_24_582BC50008A3277E193CE95F0BCCC25E;          // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                item_time_limit2_25_57FC9CC02BF2235701F780C104A13F82;     // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                item_time_limit_26_7C9EB040000267FD000FA1C30F4A13F4;      // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                index_in_list_27_26BB7BC06515F50B6C12F2310F28A4B4;        // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               is_cancel_32_7EAEC9C02293AAC751A668A40DEA164C;            // 0x0094(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0095(0x0003) MISSED OFFSET
	int                                                quality_33_4DA263C01F9F97614677D82A07E06EE9;              // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	struct FString                                     time_left_str_35_73CBFDC04DD1A44320E7264B0E7386C2;        // 0x00A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                discount_price_36_2A83B8402AB0891F6EFA191900781FD5;       // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                discount_price3_37_53DEA50061D9721415FBB0800781FD83;      // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                discount_price2_38_53DDA4C061D9721315FBB0810781FD82;      // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               is_owned_39_4862978039830E9C44C05CBA0FE14144;             // 0x00BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               is_suit_40_69AD618070BA47E21D89263D0FFED654;              // 0x00BD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x00BE(0x0002) MISSED OFFSET
	TArray<int>                                        BP_ARRAY_suit_sub_item_41_4B1A74407B2E3AA307BE7D82005687CD;// 0x00C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
