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

// UserDefinedStruct BP_STRUCT_ShareHistoryRanking_TeammateInfo.BP_STRUCT_ShareHistoryRanking_TeammateInfo
// 0x0090
struct FBP_STRUCT_ShareHistoryRanking_TeammateInfo
{
	int                                                heal_amount_0_661F68F14FE4D6F2920FCDA0B5DCDC5B;           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     final_score_1_51C6F6174F166B3BBC7C329A9BD2C25C;           // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                assist_num_2_4E3840C14BCEF567EDFC5496D4587197;            // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FString                                     survive_time_3_C1A63FA348F5256D0D6466BA7F61C269;          // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                kill_4_7B0477EB43A417D159753DB7538566DC;                  // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                gender_5_9AFAD19A4961A5A3C1972EAE6818472B;                // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     name_6_A97E9CDF4E6A5F9BDE92C98B4DEF9BA8;                  // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               is_mvp_7_AEC059CB47C0C9004AB27AB93E80A0FB;                // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
	TArray<int>                                        BP_ARRAY_TitleIDList_8_AE9D510B481ABA0E375C3794CCAC8920;  // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                damage_amount_9_084D43474E240FF3920CD1925C8906FF;         // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	struct FString                                     uid_10_AEE3EA7549D836A4207B5391781E3FF5;                  // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                cur_avatar_box_id_11_C4B0580143727D2B95D97AAC919CE82C;    // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	struct FString                                     picUrl_12_648B2F7240C634D00369C0AD2166F645;               // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
