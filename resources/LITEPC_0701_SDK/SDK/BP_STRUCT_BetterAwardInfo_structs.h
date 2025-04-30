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

// UserDefinedStruct BP_STRUCT_BetterAwardInfo.BP_STRUCT_BetterAwardInfo
// 0x0048
struct FBP_STRUCT_BetterAwardInfo
{
	struct FString                                     itemName_0_636B5FBB48C5F7230F16AFA5B8BB830A;              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                status_1_AB78C601463946E65C4BD1927EC05BD8;                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     name_2_6ACEB602425FFDB0D8F6C88694CE6D05;                  // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                itemQuality_3_8033A9BA41D349EF35F2838FE9DE4DEF;           // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FString                                     itemImage_4_C9B31B0941D569BC9DC034BDB290AB32;             // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                itemID_5_6D2DFD3D4F2AA91D018BC48060793561;                // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                itemTime_6_AD62130F4195D4439308DAB7E928D525;              // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
