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

// UserDefinedStruct BP_STRUCT_InfoCorpsInfo.BP_STRUCT_InfoCorpsInfo
// 0x0024
struct FBP_STRUCT_InfoCorpsInfo
{
	int                                                icon_0_631D36624DDB0202016038808C2FB4CD;                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     name_2_B495D052415CC98D019D5D8BA7A3D6DD;                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                level_4_8F88FF3A47A818550913CF8153B69D5E;                 // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                season_active_29_0F291E007D507CA0460285FF08FE7995;        // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                week_active_30_33E126C00E55174F7AE2A8D9080338F5;          // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
