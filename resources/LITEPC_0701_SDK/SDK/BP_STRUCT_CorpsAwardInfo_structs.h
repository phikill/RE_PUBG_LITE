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

// UserDefinedStruct BP_STRUCT_CorpsAwardInfo.BP_STRUCT_CorpsAwardInfo
// 0x0034
struct FBP_STRUCT_CorpsAwardInfo
{
	int                                                award_num_0_1537077C47AEC797F80CCCBC976456DE;             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                my_activity_1_97501E6346B75FF2F6E851865C6E0725;           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                icon_2_A7C79E7E4B854F8690301ABCF041E4FA;                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                award_id_3_D7E830274CD79A0523736E935E87BCFB;              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                last_activity_4_83D45C884EB1120C634DAF988AAAADC7;         // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                last_rank_14_3883973148EE6A3F009868AF675EF09E;            // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               is_week_7_2C9D09E340E82D73BA455496041E808D;               // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               is_get_award_10_26FC78004619A80A39E7D72C0478F4A4;         // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x001A(0x0002) MISSED OFFSET
	int                                                need_activity_11_11E657C0207B13EB48D3D0F40F7C6B69;        // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     coprs_name_12_7C340780596DBDA26957126A087DD735;           // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                last_rank_per_15_6552770067A9CB745EE7A7B305CEFEE2;        // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
