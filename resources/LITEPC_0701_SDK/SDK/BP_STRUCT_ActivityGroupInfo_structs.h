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

// UserDefinedStruct BP_STRUCT_ActivityGroupInfo.BP_STRUCT_ActivityGroupInfo
// 0x0064
struct FBP_STRUCT_ActivityGroupInfo
{
	int                                                type_0_D067354840D2B27A27F8838B84B660C8;                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                id_1_6CC5C2A24764550ECD1880B81A718F90;                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                button_id_2_DAC92545495BC629323B44BB8CA895E6;             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                position_3_9E25B58544334B518AEEA0966BD19DD8;              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     icon_4_D0D214D7417C22863EB58CADE5E15C77;                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     description_5_0C6C081A4282C827C2742ABFF98514A7;           // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                end_time_6_F124D037419BEE0C0E9895AA27C51133;              // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FString                                     jump_to_7_EDD6D2364CC15A70A343D0AEBB2F8578;               // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                open_time_8_BA857826461842809675D4946CE2CECE;             // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FString                                     title_9_0737801341804875EE22F29154492EC0;                 // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                activity_id_10_CFE7932D48472BA7BD4200B4FB90DBD4;          // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
