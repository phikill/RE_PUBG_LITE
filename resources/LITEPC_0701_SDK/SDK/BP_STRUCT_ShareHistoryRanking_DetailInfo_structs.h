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

// UserDefinedStruct BP_STRUCT_ShareHistoryRanking_DetailInfo.BP_STRUCT_ShareHistoryRanking_DetailInfo
// 0x00A8
struct FBP_STRUCT_ShareHistoryRanking_DetailInfo
{
	struct FString                                     reason_0_BF938E264C9018FAD97EFABBEAE2429A;                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                change_kill_rating_1_0BE411A544EE40077CE6D18BCC62A9A9;    // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     final_score_2_923383BF40E03242C1B698837CA888B6;           // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                person_rank_3_616270D240A84589AC35F0914305840B;           // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               is_solo_4_7BB2FA83462C888B852044B75F64F63F;               // 0x002C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	int                                                total_player_count_5_76E14EBD435749EC9B1F8E9C136BB609;    // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                change_rating_6_4EE1FE1D4F3550E23FE3B69CEE3872AB;         // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                battle_type_7_5C8A76C64F99DAB4282FB1BFD08F1369;           // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FString                                     final_level_8_AB22F9354D4AE5ADBE6101BC938F47B7;           // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     battle_typename_9_8BB44781426DD43EC0F693A3A67B6FFD;       // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                battle_time_10_50AACF3F444D67BC855D49A74114C4E3;          // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                battle_id_11_D7A3C8324AB835F100373988188AB357;            // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                rating_12_96E6C9DE4069412D2419DC89FD88B0B5;               // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                total_team_count_13_D4C956E8408BCA79D7A9D0A55867BCBB;     // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     reason_result_14_6C339FF14F41A3C88F9D108B47F9767F;        // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                team_rank_15_714479934BC756D2215DF8965AA0551C;            // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	struct FString                                     wisdom_16_8C17AEE54AF8F78F20D3C0BAF63A4906;               // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                add_gold_17_FBE8E18B43A1EFF597A3AE9E58F8DDC6;             // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                add_exp_18_91DFBF0D4D4ABF07A2EB6F947755C5EE;              // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                segment_19_8DDF41F3471ACAA295519E9ED24C9B33;              // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                change_win_rating_20_56485EBA4FE20347F8CD7C9B52BAE35B;    // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
