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

// UserDefinedStruct BP_STRUCT_CorpsRankInfo.BP_STRUCT_CorpsRankInfo
// 0x0034
struct FBP_STRUCT_CorpsRankInfo
{
	int                                                members_cnt_63_5CBBA8C05F0701E111294A9D08148AD4;          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     name_64_57BE8D407D08349F226E7BB90048C105;                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                award_id_65_508FF3C05645A7050B8B8EE90AB8E2F4;             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                corps_id_66_55CCF9C04341FBC3358A289D01A7D2D4;             // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                level_67_6E284B003145EEAC74B83713048ABFBC;                // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                icon_68_0BD3AF400D8C5A072271F3A800477F6E;                 // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                max_cnt_69_3156FF806B877E2246898EE80BFF5ED4;              // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                award_num_70_628DD480610D43467FDF39080B8E351D;            // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                score_71_074DAC0004608F1277DEFF370461F585;                // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
