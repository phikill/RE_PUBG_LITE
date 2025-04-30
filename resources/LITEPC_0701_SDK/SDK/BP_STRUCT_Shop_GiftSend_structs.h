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

// UserDefinedStruct BP_STRUCT_Shop_GiftSend.BP_STRUCT_Shop_GiftSend
// 0x0080
struct FBP_STRUCT_Shop_GiftSend
{
	int                                                uid_0_68A0B1003869D4CC1D33CA1E07574AA4;                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                avatarBox_3_24E50A8053E8D4CE6C72697B0FFF32F8;             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     iconUrl_4_6E139780034FCBC05C6EEBDB0ED36BDC;               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                gender_6_3D4FDDC035E7DD895AD638FE05CF3FB2;                // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                intimacy_7_4BC578001929EFF67C6D139700DB4259;              // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     name_8_477AC8C0315B73F930F229D205765345;                  // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     date_9_543EA80031D577F8305B1CB90575BDD5;                  // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     message_10_757AD9C05695A73751D18235029DC0B5;              // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                read_11_6094C7807BFBB0C4308C2FD005749E04;                 // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                index_12_6C9D66804EEB57087CCE2A3A075F1D98;                // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                style_13_1D850CC01AEB6D7B0D2988C5074BE975;                // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               inited_16_0FFBFFC04D1881E525C0991605F27FC4;               // 0x005C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
	struct FString                                     give_type_17_6C9E73806EEFC17015F5E7D60C01FD35;            // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                shopid_18_25810240608A582B46E7307A048C1384;               // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                item_19_2102EC4030334DE130FFB3D605761FCD;                 // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                level_20_0C7EC68008BF70167A899AC007639BEC;                // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                relation_21_7ABF3800162AEE681062280F0F5DDCCE;             // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
