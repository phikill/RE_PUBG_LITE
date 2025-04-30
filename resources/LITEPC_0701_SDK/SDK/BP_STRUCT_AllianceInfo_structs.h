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

// UserDefinedStruct BP_STRUCT_AllianceInfo.BP_STRUCT_AllianceInfo
// 0x00A1
struct FBP_STRUCT_AllianceInfo
{
	int                                                memberNum_0_14223FAF4E0B0862E577E7B919B9CC6C;             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     icon_1_5213135C4D600FD1A9B67896D172529E;                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     notice_2_093DE7884DA8175E805ADEB3366F51E4;                // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                bonusPercent_3_A1F8CCCE42519DA58E14B8A2818B9486;          // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FString                                     aid_4_D4CA4B6541460B92F9C627917E5FB149;                   // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     name_6_0707D5E14DAE0C71424A7ABE2469D510;                  // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                iconId_7_7227304B4C2FC66B01CBBCA62180B32B;                // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FString                                     captainName_8_5CE327344A858F34D04E5CBB7A58EEEA;           // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     captainId_9_7EA8BC1F45CBC5EF4EEBE499BC945AFF;             // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     bind_group_12_605BE28B480D196A67AE9E8545EB5BFD;           // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        BP_ARRAY_AllianceMemberID_List_13_1E64CA8A416533E35179AFA3A05E5132;// 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                friendNum_14_54FF818F4E816541F6FC0A95ECA52C36;            // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                teamworkValue_15_7D96D4A54323EEC01840DB898A3638A5;        // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isApplyed_16_9A2B0AC1481C6889D7F5409220B321EF;            // 0x00A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
