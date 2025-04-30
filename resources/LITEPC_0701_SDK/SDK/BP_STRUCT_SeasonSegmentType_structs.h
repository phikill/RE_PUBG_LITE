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

// UserDefinedStruct BP_STRUCT_SeasonSegmentType.BP_STRUCT_SeasonSegmentType
// 0x0028
struct FBP_STRUCT_SeasonSegmentType
{
	int                                                Segment_Level_0_B1266897475F4B0A70911C9E74EA48A7;         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     SegmentType_Name_1_3BFA88D946C517780E4EA484B64EB854;      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     SegmentType_Text_2_732DD39B4165B74A2454D7AE985E3BBE;      // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
