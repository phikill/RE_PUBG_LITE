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

// UserDefinedStruct BP_STRUCT_ItemSpawnData_type.BP_STRUCT_ItemSpawnData_type
// 0x005C
struct FBP_STRUCT_ItemSpawnData_type
{
	struct FString                                     ItemPath_0_D0FBAF87490148226BAF1EA64C14D676;              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Weight_1_8B176B3A44BC3029D3D57C992BB33E0A;                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                StackCount_2_50A25130464BF7E958EE1BA27F86CE8E;            // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     ValueFilter_3_55D7C46A4D20D4B879EC7D9E1AE304F5;           // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                KeyID_4_4049A0B04B42E14BD7E84F901DE2413A;                 // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FString                                     CategoryFilter_5_0E93E256497F3BA9D982AD92AEF618F3;        // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                CountMax_6_FCD7719F4E23EC13BBEF5AAB66F8E6D9;              // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CountMin_7_71907C574CB6C46F3FFD518E2BE6F6BD;              // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     ItemTogetherPath_8_3BF5FE8A4F71E0430332D28EC5112838;      // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Count_10_AEB2A32E4D42E69436A4EE981E1A35A9;                // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
