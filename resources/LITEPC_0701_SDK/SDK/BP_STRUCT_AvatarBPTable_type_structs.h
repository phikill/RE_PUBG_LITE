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

// UserDefinedStruct BP_STRUCT_AvatarBPTable_type.BP_STRUCT_AvatarBPTable_type
// 0x006C
struct FBP_STRUCT_AvatarBPTable_type
{
	struct FText                                       CName_7_A4052DC94E7BDAA9FAD3B19A7B988D48;                 // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FString                                     AvatarBPPath_1_891FA0534B751701E31560B16F286D8B;          // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ItemID_2_5414CFBB435533293B561394BF4A770E;                // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FString                                     BaseMaterial_4_BB10FD1746E1312D290060B355928632;          // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                IsPackage_6_8A447B1A47E74FFEC3441AB4077497C5;             // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FString                                     SkinSkMesh_13_7A10B214415AF1DF4D9557B1546CCC78;           // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     SkinMaterial_15_06A6E27F44B1E89D49C81F8DEB2D3F14;         // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ParentItemID_10_434290154F05285E8821D89BF4549A18;         // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
