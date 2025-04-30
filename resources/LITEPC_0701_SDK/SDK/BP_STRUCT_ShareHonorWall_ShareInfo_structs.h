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

// UserDefinedStruct BP_STRUCT_ShareHonorWall_ShareInfo.BP_STRUCT_ShareHonorWall_ShareInfo
// 0x0038
struct FBP_STRUCT_ShareHonorWall_ShareInfo
{
	int                                                share_honor_gold_2_FA0CE3014E42D2FBA878D084D2FFAA19;      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                share_honor_total_3_AF8611C94DD64D28C3BFEA97F6A8A444;     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                share_honor_silver_4_AF188D8E47811BA2DBE569A7A181259D;    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                share_honor_owned_5_59BDBD8A48A30ED1BC347E949502BBE8;     // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                share_honor_copper_7_6117A6E945CD2C3C90D580816E420D87;    // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     share_title_9_84BF144944C294EDE573BCB4ED9B2991;           // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             BP_ARRAY_share_title_tags_10_DF17211D427D8E6901E728B0A3362570;// 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
