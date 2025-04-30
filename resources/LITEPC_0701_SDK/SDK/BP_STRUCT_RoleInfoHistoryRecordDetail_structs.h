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

// UserDefinedStruct BP_STRUCT_RoleInfoHistoryRecordDetail.BP_STRUCT_RoleInfoHistoryRecordDetail
// 0x00AA
struct FBP_STRUCT_RoleInfoHistoryRecordDetail
{
	int                                                total_player_count_0_5FDBA0454A582F43A43FBB9A9C4659E5;    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                change_kill_rating_1_9D8293AA4A4E14D34D612CB6D75BDF5C;    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                battle_type_2_6E95E3214B9B992B88E17F8F9ABA5B25;           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                rating_3_7F5D7F4A408E3EC9260BE89B68767B1B;                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                person_rank_4_A4B76E8C4C882D3636EC7E9284221E9C;           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                battle_time_5_8D87B607405BB1C6675F8EA56C4A8D82;           // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                total_team_count_6_CD4351FE49B6DD1FB75482B756271974;      // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                add_gold_7_5DED3D8441C7BA842C0EA6BF6C454527;              // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                battle_id_8_9E715C374C7A264BD39379AFDCBBCBE3;             // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FString                                     final_level_9_23FDE5ED43092110DD3AA9858D38AB7B;           // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     final_score_10_1FF5A975472A85810D093083DC1E7ABF;          // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                segment_11_9CB109DF44AB1DAAAA86349427A69209;              // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FString                                     wisdom_12_16B8D6EC489E9959160AECAE9EFBED3C;               // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     reason_result_13_214D755A4A2CA45C86C986B0F5D3F1A4;        // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                change_rating_14_E61D67004C39B2255EC69B9963D9760A;        // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	struct FString                                     battle_typename_15_9BA61AB745C420081A71C7B28714FF86;      // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                add_exp_16_09B22D5E43E9427011E19C8167AE3E2A;              // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	struct FString                                     reason_17_2634F63740E69123136A36A5CC1ADC02;               // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                change_win_rating_18_7BA61B8F46D3742550EBD6B7945EDEEB;    // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                team_rank_19_9CFDE8FF4B7F7E778D8BBEB6F4EF41EB;            // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               is_solo_20_A96C316F48D8B442240424BF422E5F63;              // 0x00A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               is_segment_protect_21_06FF3140741430EF113E2C260D541724;   // 0x00A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
