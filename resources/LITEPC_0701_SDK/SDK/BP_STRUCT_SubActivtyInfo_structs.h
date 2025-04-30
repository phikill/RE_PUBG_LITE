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

// UserDefinedStruct BP_STRUCT_SubActivtyInfo.BP_STRUCT_SubActivtyInfo
// 0x0070
struct FBP_STRUCT_SubActivtyInfo
{
	int                                                Index_0_B81C4C3D4AA3BD3A0439C28613BC1B08;                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ID_1_B9FD0E124EC506384D0042AEF530D01F;                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                IsCheckNotice_2_03C9FAE94553F31E283CCA9818454D8C;         // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<struct FBP_STRUCT_SubActivtyItemInfo>       BP_ARRAY_SubActivtyCostList_3_2E0A75754F88C667970257BD3E879D10;// 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Status_4_71F8FBFE44841130373B5984E5ADE55E;                // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	TArray<struct FBP_STRUCT_SubActivtyItemInfo>       BP_ARRAY_SubActivtyDropList_5_9784E2B7450A1AB589BA13996C456495;// 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Type_6_31D5D141480C00C9D1CE7C9701E2F9E2;                  // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Total_7_C0F4C9C247C42AAD81AFC897D01D992F;                 // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Progress_8_71FB3C23488F699216766E8407B5DBB3;              // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FString                                     Key_9_BEE7791345C151F2E38CC2BA5075774E;                   // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Title_10_F0F2DB8E400F2113AAC7B68624E0F9AB;                // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               IsShowExPage_11_369D8D30425633B6F6235EA633885329;         // 0x0068(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0069(0x0003) MISSED OFFSET
	int                                                CanGetTimes_12_F994309946FE801BCCFD71BCD3822B9F;          // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
