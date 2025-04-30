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

// UserDefinedStruct BP_STRUCT_BASE_INFO.BP_STRUCT_BASE_INFO
// 0x0050
struct FBP_STRUCT_BASE_INFO
{
	struct FString                                     IconUrl_0_F87C151A4DF187689A13C5B7F5E0AF88;               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Name_1_20B58F514E3EF725BC2964B6D98C61C1;                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Sex_2_48C5BE224E0569CA1AE61892C9B68F0C;                   // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RankIntegralLevel_3_4159E314413B9D13EE0DCDB2FC3545E8;     // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Level_4_874F3534489CFF63B3DA539ADADE8ECC;                 // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                IconFrameID_5_518316924FCDC68E4E8089ADEEA3ADC5;           // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     strUid_6_CF74E30F48AF1416946F94B73CB23B9B;                // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     lastOnlineTimeStr_10_220E1F003F2BD10E55DB010D0AFEBAB2;    // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
