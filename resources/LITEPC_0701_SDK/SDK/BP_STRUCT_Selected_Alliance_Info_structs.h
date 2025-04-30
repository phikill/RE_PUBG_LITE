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

// UserDefinedStruct BP_STRUCT_Selected_Alliance_Info.BP_STRUCT_Selected_Alliance_Info
// 0x0099
struct FBP_STRUCT_Selected_Alliance_Info
{
	struct FString                                     notice_1_54BB79494B640B6A2AFABCA4FC72A09F;                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        BP_ARRAY_AllianceMemberID_List_2_01636C9F4C4500DDBCA8D6872580B7A4;// 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     bind_group_3_B0DA669241DABBE02921A990754A1FE3;            // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                bonusPercent_4_D37C5F54463C0BBC21C0B0A99B58A85D;          // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FString                                     icon_5_444FF73342413F4110A060963BAF2890;                  // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     aid_6_A885096049006C12508A57AAE359B0AE;                   // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     captainName_7_563C54544A1C110A243A12918049E70F;           // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                memberNum_8_07A3DD1048ADE805C00DC696F5BB95A1;             // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                iconId_9_0F4B195343CEC1E5FB63F28DAA2ACDF2;                // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     captainId_10_1B647F164D592CDE488EC5B9E413E4D2;            // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     name_11_23A9AC704F4EB7E95FCE46BCC8555E4A;                 // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                friendNum_12_060070344059FE83559ABF8DA2B53F3E;            // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                teamworkValue_13_EF2827834187CDD7E50CE5B4828B4A19;        // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isApplyed_14_91AACACA424961DA245B3388F234AF67;            // 0x0098(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
