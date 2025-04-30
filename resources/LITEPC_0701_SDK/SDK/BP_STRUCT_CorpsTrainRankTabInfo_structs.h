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

// UserDefinedStruct BP_STRUCT_CorpsTrainRankTabInfo.BP_STRUCT_CorpsTrainRankTabInfo
// 0x0020
struct FBP_STRUCT_CorpsTrainRankTabInfo
{
	int                                                week_day_0_12E9BC3F4B8228CD88A733A702983E0C;              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                train_id_1_06344E3E44023C0A4C866F87A43900B5;              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isToday_2_B6541751441B3ACFDDFBF8B5C7F2CE05;               // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     tab_name_3_199AC2BE4495AD2699299791D045C9B6;              // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
