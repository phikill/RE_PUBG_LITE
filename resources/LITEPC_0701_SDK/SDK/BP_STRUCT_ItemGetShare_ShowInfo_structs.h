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

// UserDefinedStruct BP_STRUCT_ItemGetShare_ShowInfo.BP_STRUCT_ItemGetShare_ShowInfo
// 0x0060
struct FBP_STRUCT_ItemGetShare_ShowInfo
{
	int                                                res_id_1_6940CF294EA278B623F8B088F0FA6325;                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     play_name_2_FF2D88BA4C334932528F689EC5DEB876;             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     tip_3_240B92E3496FDAA001EF82925D1958AC;                   // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     uid_4_73F757454E3C9549FBD82EB70D18D542;                   // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     icon_url_5_869049884AD9F1127DC32AA32F2BFA93;              // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                gender_6_F9451FD04492F819A631A0955B4C77BA;                // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FString                                     valid_hours_str_8_8B504E2443C0610E930F8F85E55F5ECE;       // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
