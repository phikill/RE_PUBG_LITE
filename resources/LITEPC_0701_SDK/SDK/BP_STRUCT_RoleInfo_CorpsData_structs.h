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

// UserDefinedStruct BP_STRUCT_RoleInfo_CorpsData.BP_STRUCT_RoleInfo_CorpsData
// 0x006C
struct FBP_STRUCT_RoleInfo_CorpsData
{
	int                                                n_join_level_1_40E219C0223E5F0D72ACA5AC0D53477C;          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                n_member_num_2_6895B9C004CE51C13FE0CCB107D723CD;          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     str_announcement_3_4112ED803614B2EC770418B20FD8D4E4;      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                n_position_4_5DB8AD407E870C7357DDF03308EFBD7E;            // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               b_IsOwnApply_5_16674A804054AB801AE563DD047F0D19;          // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	struct FString                                     str_corps_id_6_43259F807F3D056C60E6545F0909AE14;          // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                n_level_7_24BA960019E7DAC4328323C60115284C;               // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                n_leader_8_300DAB4047B86F754E51E498015535D2;              // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                n_member_max_9_622677403BBDF5E13FE0D8B207D725F8;          // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                n_icon_10_3F9B7A407B7E9DA75424646D0F10881E;               // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     str_city_11_45B3F9007F346D0218F590D70E1BEF29;             // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                n_activeness_12_79449D407F4000EF011F20F50FDC4853;         // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FString                                     str_name_13_6152B3006CDF002C18F9D2DB0E1C09A5;             // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                n_join_segment_17_23D6D0807C8FCB665008C2600837F724;       // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
