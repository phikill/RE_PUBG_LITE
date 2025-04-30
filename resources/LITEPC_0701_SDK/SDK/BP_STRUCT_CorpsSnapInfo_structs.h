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

// UserDefinedStruct BP_STRUCT_CorpsSnapInfo.BP_STRUCT_CorpsSnapInfo
// 0x00BC
struct FBP_STRUCT_CorpsSnapInfo
{
	struct FString                                     name_0_CFBD2A73490E0F77672EF6ACF2C38ADE;                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     icon_1_5243A150463A3F5A51814196E4384923;                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     commander_name_2_20CCD9A940D86956CF7AAFB72DC330B4;        // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     city_3_EFFB043E421A21EBCB1F4585FFB079D8;                  // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     province_4_40A9DBF04A37C9C993586C8A6994642D;              // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                friend_num_5_B3B0024F447E4EF5A598BF956702BD61;            // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FString                                     commander_id_17_CC20693E4C6C75332F1AF59D9954F500;         // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     corps_id_18_0EF762DD4A3C5A47103FB0BCFBDDD931;             // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                join_level_8_B2BE8A4F47AB7B2729EA08ADE0DCD688;            // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	TArray<struct FString>                             BP_ARRAY_Corps_MemberList_19_48208D3F485ED94AD9ACD28D70AA52BA;// 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               need_approval_10_1388746D447B59906E4EB7B7FBAE16D9;        // 0x0090(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0091(0x0003) MISSED OFFSET
	int                                                activeness_11_11F95DDF461F75C6CBE5FB8E9C6E43AB;           // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                join_segment_12_392510914102FDF395DB01932A545EBB;         // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	struct FString                                     announcement_13_F57AD0704FBD0C5A3627C78131889DF4;         // 0x00A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                level_14_528FA0704CA14ABCBAA9818221BD2093;                // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               activeness_tag_15_0BDDBA806B939F165D87541E0109CB77;       // 0x00B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x00B5(0x0003) MISSED OFFSET
	int                                                commander_gender_16_4E64890048CCF5685153E5E506F555B2;     // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
