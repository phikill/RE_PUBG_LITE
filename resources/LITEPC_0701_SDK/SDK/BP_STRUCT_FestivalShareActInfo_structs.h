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

// UserDefinedStruct BP_STRUCT_FestivalShareActInfo.BP_STRUCT_FestivalShareActInfo
// 0x0034
struct FBP_STRUCT_FestivalShareActInfo
{
	int                                                needNum_0_5B5B6CE24D9D88106B5C7DB3E17BA277;               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                status_1_A0A0F6FB4F6603492CA4D7ACBEDE8502;                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                itemQuality_2_5223B49047AF430B108327827B5A255F;           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                itemTime_3_41E8136F4D25F4C6C160AC8B879B006E;              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     itemImage_4_4C6CE207405CCD5DB59023B7217B7E1A;             // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     itemName_5_DECCA83F44128CFCDD2267A78029C797;              // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                itemID_6_C363DEBD4518058E1021BA92B28838FB;                // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
