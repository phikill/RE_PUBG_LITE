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

// UserDefinedStruct BP_STRUCT_BattleResultData.BP_STRUCT_BattleResultData
// 0x0181
struct FBP_STRUCT_BattleResultData
{
	struct FString                                     Reason_0_090FA58547C1A0B16D89ED93556131B8;                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                RemainingPlayerCount_1_B6DCB4414166FCD5925CDDB9D1FE4005;  // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TotalPlayerCount_2_3C547194403DC35E7A7441A850D9052A;      // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_MemBTResultData>          BP_ARRAY_TeammateList_4_D1D37C9F463CFE5D12DB56A25C3FC3F5; // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               IsSolo_5_7761A17048044B6BA00837870DEE79A6;                // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                RemainingTeamCount_6_09A91CE14B0638569CB67BA3C11DA4C1;    // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TotalTeamCount_7_B45CD71043E4B40CE3733EB58A5FA2C8;        // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                HealTimes_8_92E7141942C26836199CD295FA664C38;             // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                destroyVehicleNum_10_39F2606240FAD9BB96112FB36D7F3476;    // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ShootWeaponShotNum_15_00FDC55D46412A4EF2D46788057C4B8E;   // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ShootWeaponShotAndHitPlayerNum_16_2F13756C4750D3F3F05932BC37A64410;// 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                add_exp_18_33F80B2F441B32D5C0B97FA429A2643D;              // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                add_gold_19_88091C09400E4592461BFA9B7875B20F;             // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                battle_id_20_991B81644AB2AFE897194A8812ED48F2;            // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                max_game_num_21_89652E3B4A981D752CEE0DB8B057F65E;         // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_BTRating                         BP_STRUCT_BTRating_23_9103901146E6516BDB1721AD842CA08D;   // 0x0054(0x0018) (Edit, BlueprintVisible)
	int                                                person_rank_24_4BE9AF544E5666C0D1276F9D4B7381A1;          // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                team_rank_25_19B113CD47B5E1F5B1D2C4AE0CACF918;            // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               is_last_survive_27_D64038A548BAF4E29E66ECB94800871A;      // 0x0074(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               is_team_result_28_77AFCE32426209D6DA3EDDB119CBB9C9;       // 0x0075(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0076(0x0002) MISSED OFFSET
	int                                                HeadShotRatio_29_CF108FB640585FC2F35E53BA84BB23EB;        // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               is_version_match_30_8C55192942DA2E7A91B2189BE6B447B1;     // 0x007C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x007D(0x0003) MISSED OFFSET
	struct FString                                     final_level_41_373D4259445F1E41E1D787A83FEDB9AE;          // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                battle_type_32_858C097044897D316F8E50A4EAE8BEC2;          // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_EXP_DETAIL                       BP_STRUCT_EXP_DETAIL_33_BC093B3449A2C76B45FF52801E60219B; // 0x0094(0x0034) (Edit, BlueprintVisible)
	struct FBP_STRUCT_GOLD_DETAIL                      BP_STRUCT_GOLD_DETAIL_34_B4FE6BF648C177BCD15BD49447A5B38F;// 0x00C8(0x0028) (Edit, BlueprintVisible)
	int                                                get_gold_today_35_C15138194E5FAE9AB83061AABAD46EDF;       // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET
	struct FBP_STRUCT_RADAR                            BP_STRUCT_RADAR_37_CC6CC09643AA9C79154D4690B734AEE9;      // 0x00F8(0x0078) (Edit, BlueprintVisible)
	int                                                famous_id_38_FCE942C344D184F4B394078B2A740846;            // 0x0170(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isobserver_39_89DC81CA406AF2B2406E659C630F95B6;           // 0x0174(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0175(0x0003) MISSED OFFSET
	int                                                battle_owner_40_455041684149A0F3254B3F82E848EDB7;         // 0x0178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                sub_mode_42_30956600233A9EF42F9B8F200891AD95;             // 0x017C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               segment_protect_43_6E49E7400FC56D9F1D16E4BD04F47144;      // 0x0180(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
