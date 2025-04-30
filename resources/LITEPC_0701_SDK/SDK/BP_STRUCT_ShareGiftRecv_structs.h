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

// UserDefinedStruct BP_STRUCT_ShareGiftRecv.BP_STRUCT_ShareGiftRecv
// 0x0070
struct FBP_STRUCT_ShareGiftRecv
{
	int                                                style_0_56A00CC05DB7FA45179AE9E105755495;                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                senderGender_1_67D4F6001C608E1A4F0F5DEF01BECB52;          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                myGender_2_587E6F40229554DF7C97A14C03111D72;              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                myAvatarBox_3_01A15C002F151E084A82B6C50DD35D18;           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     notice_4_2B0F4100754156501B7CC7D207C864C5;                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     myName_5_6A2ADA406934904362FBBDE407B48D65;                // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     give_type_6_2FB973801FFDDC1A18BB416A0023E385;             // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                uid_7_1CBBB1003E4CF5D215F2AAAF0CB57414;                   // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FString                                     myIconUrl_8_78116900005AAB1643BAD256033147BC;             // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                itemId_9_0611B780513B8908657A1EEC07F48AA4;                // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FString                                     senderName_10_1B40210047287A5079009BDF019222B5;           // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
