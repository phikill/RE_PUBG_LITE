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

// UserDefinedStruct BP_STRUCT_REDPACKET_SEC_Info.BP_STRUCT_REDPACKET_SEC_Info
// 0x0030
struct FBP_STRUCT_REDPACKET_SEC_Info
{
	int                                                condition_maxvalue_0_11A56D806C2510F46CA04B0A0DADA995;    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                share_flag_1_750D0E401B5ADCF716730FEB09CB7D57;            // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                condition_curvalue_2_17D6EE8056DB4F945C107D2509CDAA05;    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                trigger_flag_3_20D1A6801DC2BB881794A369030CAEB7;          // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     battle_gid_4_09F38F0065C9F53039A723600C36E4E4;            // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     process_str_5_28FC790073C0CA7807286F5A0D4DC532;           // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
