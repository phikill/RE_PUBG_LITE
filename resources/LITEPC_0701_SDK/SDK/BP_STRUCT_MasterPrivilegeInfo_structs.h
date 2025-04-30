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

// UserDefinedStruct BP_STRUCT_MasterPrivilegeInfo.BP_STRUCT_MasterPrivilegeInfo
// 0x0049
struct FBP_STRUCT_MasterPrivilegeInfo
{
	struct FString                                     maxMasterPoint_7_0BC5893844D1B58CEAC93BBEDFACD857;        // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     masterPoint_6_7BB7E2BB4E16FC7216CE45B9D41065B8;           // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                level_2_B9772B3648FC9CC63D16F8812D3D3AE6;                 // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FString                                     masterName_3_248B7C4146A551CC3DE9D2B2D2CB19E9;            // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     percent_4_5E1470E64FEC5493472A03BDEE2D63DE;               // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               isActivate_5_A6E382BF4B565EE8AC66678C43C06B63;            // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
