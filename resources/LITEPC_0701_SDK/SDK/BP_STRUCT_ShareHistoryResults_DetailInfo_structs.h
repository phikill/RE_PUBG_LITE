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

// UserDefinedStruct BP_STRUCT_ShareHistoryResults_DetailInfo.BP_STRUCT_ShareHistoryResults_DetailInfo
// 0x00A4
struct FBP_STRUCT_ShareHistoryResults_DetailInfo
{
	int                                                battle_type_0_EC056C1D41DAEEEF282803ABEA159A14;           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     wisdom_1_8DDE52924801AE817B25549580F20645;                // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     battle_typename_2_067CE6214BDEF762DA0FE3880B0D1E53;       // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     final_level_3_BC8AF8BA4E1A0FE9368C1BAA3D3B0041;           // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                add_exp_4_0F8B045F4E66AAAFBA16E584C49F15AF;               // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                battle_id_5_85BA1B3A4FB4D9C4EA07DD9B486DD38E;             // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                battle_time_6_5E58672240C44BA4F691869801278A0D;           // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FString                                     final_score_7_9D21DD7746756B47B226DF91DC560853;           // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     reason_result_8_714579224E7E18693A13B481205D8E88;         // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                change_rating_9_15F0F046473F08858405CD943C919BD3;         // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                total_team_count_10_482B56C64683AF3654F158BAE3D50087;     // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                person_rank_11_CF6FD76E434E0B59E8F844868E646AE0;          // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               is_solo_12_1F451E3F4A5F5145EDAF8E9B30F677F0;              // 0x0074(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0075(0x0003) MISSED OFFSET
	struct FString                                     reason_13_897CB41B4316E7B6811B179FF5215BA6;               // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                add_gold_14_AC1FFB564D665D07ACB8138DB718A2E0;             // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                total_player_count_15_79DDF22942C00C115E6161BF99FD18A2;   // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                rating_16_8E2BCE7A4EDBA4FD54C9FE91F1E79F3A;               // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                team_rank_17_966D6BEE4726BB3C32812E803AF63D2A;            // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                change_kill_rating_18_A6FFF35949AA12E4475E518CF2AC4585;   // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                change_win_rating_19_3021694046196AD9A0F993A2303AE165;    // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                segment_20_00C611304733906A98116CB85DE8D8E3;              // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
