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

// UserDefinedStruct BP_STRUCT_TaskCorpsCategory.BP_STRUCT_TaskCorpsCategory
// 0x0018
struct FBP_STRUCT_TaskCorpsCategory
{
	bool                                               reddot_1_31C87E8A47A57A4BDC8A70B032572700;                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FBP_STRUCT_CorpsTaskInfo>            BP_ARRAY_TaskCorps_2_41769129434364AFDEA605BDD9AB20E3;    // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
