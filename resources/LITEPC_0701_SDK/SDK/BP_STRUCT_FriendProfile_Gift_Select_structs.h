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

// UserDefinedStruct BP_STRUCT_FriendProfile_Gift_Select.BP_STRUCT_FriendProfile_Gift_Select
// 0x005C
struct FBP_STRUCT_FriendProfile_Gift_Select
{
	struct FString                                     gid_0_651EBE80259609EC0A592DD600068E84;                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                cur_avatar_box_id_1_74BF30805CE0F5122AAC4CA50BD7D5C4;     // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     nickName_2_44A2DB0065BC21CC0CF487A208A02F45;              // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     platName_3_7F1F9E006D584ADE7EC21E2205892F55;              // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                level_4_0026578065570384482A6BED0691BCBC;                 // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FString                                     picUrl_5_3D838D400DB5ADF75649205809588CEC;                // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                intimacy_6_260389006F39FB740A1E7A4C02B05F79;              // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                sex_7_624845806A2709300A5AE0D800069AB8;                   // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                create_time_8_3D1F9200679D5B9E13123A3C0C3F55B5;           // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
