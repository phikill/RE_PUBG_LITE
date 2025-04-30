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

// UserDefinedStruct BP_STRUCT_Weapon_SecMenu.BP_STRUCT_Weapon_SecMenu
// 0x0048
struct FBP_STRUCT_Weapon_SecMenu
{
	int                                                WeaponID_0_1CC1794074E290EF48708FDA0544EAF4;              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     WeaponIconUrl_1_4C1245005581D45C22285CB60DD2722C;         // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                WeaponType_2_5F021E8039EF73364DE6930B04EBA525;            // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FString                                     WeaponName_3_0835B6405FEEA96902BD5AAB04EB6375;            // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                IsSelect_4_10B2A28049BF3BF46D655735065FA154;              // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FString                                     WeaponShortName_5_5CDCBA4078FA90BD1AC4C45B02D7FDF5;       // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
