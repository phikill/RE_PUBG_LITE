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

// UserDefinedStruct BP_STRUCT_MASTER_SAME_DISCIPLE_ITEM.BP_STRUCT_MASTER_SAME_DISCIPLE_ITEM
// 0x0074
struct FBP_STRUCT_MASTER_SAME_DISCIPLE_ITEM
{
	bool                                               can_be_teacher_0_8E074FCC4D9D96022012F5990B408681;        // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     uid_9_6A4B3BF24FDF6537F4884FBD304DA543;                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                gender_2_F8C9176C4866ED91B3E6D5A2E655C333;                // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                segment_info_squad_3_A7EA246340A30380968E71A5CA15ECC5;    // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     nickName_4_789A0D9A41A37D4EFFD9C6800AF63492;              // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                segment_info_duo_5_2C5E95DD40145A49BAA8AEA2F01A1748;      // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                segment_info_solo_6_5E3124FD43BC0E733A2B588D427D6784;     // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     url_7_B8E714E7484176654DAB339E7D651199;                   // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               is_teacher_8_65BFDA9E4AA7A3218C66298709EF72A1;            // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               is_friend_10_A2772F444DFDC057D14047B66DE510E6;            // 0x0049(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x004A(0x0002) MISSED OFFSET
	int                                                platform_12_9ED28F454CA4CB8B8C5EC686D0DD073E;             // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     logout_time_13_6BCAED0944A18D2D18BC2EA3F0CF8D74;          // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                level_14_94CB387F4D22CD01D44164B002500016;                // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                sex_15_4009A1424D115CFB21F2E4B05713F264;                  // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                cur_avatar_box_id_16_F1CCBBEE4948657ED497F0B598FB1357;    // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                startup_type_17_70E9C6754E67BDA239658395E4D1998D;         // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                qq_vip_18_4EFD3046431BCA6BAB894BA4DAC08B1B;               // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
