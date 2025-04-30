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

// UserDefinedStruct BP_STRUCT_ShareAwardInfo.BP_STRUCT_ShareAwardInfo
// 0x0048
struct FBP_STRUCT_ShareAwardInfo
{
	int                                                award_state_0_7EC3CB8A4A1081AE7881928BDD227269;           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                award_type_1_04CE558D47861BC0795D9E8D5092B56A;            // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                need_share_num_2_8930AC1D434A2B6A4D73029F3AC50A00;        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                award_item1_3_23953CBC4C754B92704DE69ECAA221E2;           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                award_item2_4_7539E0DE47FF2C72A34CFF852F663023;           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                award_num1_5_58EB151A4DCA2FC9637671B967329BB3;            // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                award_num2_6_244611B7466597149B244994CD0C1FD5;            // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FString                                     award_name1_7_295DF2514393C1E32434498F40AEC5FA;           // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     award_name2_8_2AE290E947C09F6E10F9D091C9D99E93;           // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                award_time2_9_A02B5C134A887EF1D48FF68F81613E6B;           // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                award_time1_10_638C89C54DAD5A15CF1C45BF9B616630;          // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
