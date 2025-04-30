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

// UserDefinedStruct BP_STRUCT_ShareRank_ShareInfo.BP_STRUCT_ShareRank_ShareInfo
// 0x0038
struct FBP_STRUCT_ShareRank_ShareInfo
{
	struct FString                                     rankName_0_BDEA98A44157CA458BECF6AED940E201;              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     rankPointStr_2_F3EEA32A409E7BA63C5157BC1FE3E80E;          // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                rankLevel_4_C6272AF940A25638B17DA0B842208143;             // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FString                                     rankTypeName_5_656F8D3248D148EFE6FE329F71D5A85D;          // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
