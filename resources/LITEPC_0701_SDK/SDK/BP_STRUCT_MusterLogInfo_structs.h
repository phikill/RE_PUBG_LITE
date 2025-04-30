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

// UserDefinedStruct BP_STRUCT_MusterLogInfo.BP_STRUCT_MusterLogInfo
// 0x002C
struct FBP_STRUCT_MusterLogInfo
{
	struct FString                                     desc_0_3CE250803C6127A60DFA5739013C50F3;                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                score_1_392B8FC064D9932732355B9703D66095;                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     timestr_2_28D36AC01FAFCD212BA546EB0545D962;               // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                time_3_1EF4148034CBA49A0DE2166C013D5455;                  // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
