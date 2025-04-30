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

// UserDefinedStruct BP_STRUCT_RoleRankDetailSingleInfo.BP_STRUCT_RoleRankDetailSingleInfo
// 0x0028
struct FBP_STRUCT_RoleRankDetailSingleInfo
{
	struct FString                                     name_0_61BC2A864A3E84DFD235009959A94793;                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                level_2_CE95E9D1472364D0C7F5DFA2EE067916;                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     type_name_3_8A71F0964ADC0D83221AC28CCA54E9BE;             // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
