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

// UserDefinedStruct BP_STRUCT_CorpsAppoint_ListItemData.BP_STRUCT_CorpsAppoint_ListItemData
// 0x0068
struct FBP_STRUCT_CorpsAppoint_ListItemData
{
	int                                                WeekContrActive_0_BEA4FA004D65DAA352F1638CDFF916EB;       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SeasonContrActive_1_142301EA42291474C19A538F389D9172;     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AppointType_2_AC2CF82346F77837174A22817FCD571F;           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FBP_STRUCT_BASE_INFO                        BP_STRUCT_BASE_INFO_3_9E2F8A774DF1C520A7438097D150883E;   // 0x0010(0x0050) (Edit, BlueprintVisible)
	int                                                SeasonCorpsWarCount_4_E27909A043DB2054AD81EF9BE8401785;   // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                WeekCorpsWarCount_5_EED6E58A4BF77F6DDED7DBACCC87082B;     // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
