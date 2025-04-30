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

// UserDefinedStruct BP_STRUCT_WeaponDetailInfo.BP_STRUCT_WeaponDetailInfo
// 0x0060
struct FBP_STRUCT_WeaponDetailInfo
{
	int                                                BulletID_0_4B408CC0781892BF035D59500A3318A4;              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     BulletUrl_1_26BB9640637FBE336FDF349A03319B2C;             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BulletDesc_2_1F11494074457F937829B66A0318D6A3;            // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     WeaponName_3_08070A401A91F6F13EBDF22B08947FB5;            // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                WeaponResID_4_6FAA77C0657CD6D159A19E46092B5F54;           // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FString                                     WeaponDesc_5_4E2709C05446B70B3B908DD108939513;            // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BulletName_6_58F149C03A90BF79780072D603193E05;            // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
