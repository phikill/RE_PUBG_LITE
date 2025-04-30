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

// UserDefinedStruct BP_STRUCT_ActivtyInfo.BP_STRUCT_ActivtyInfo
// 0x00A0
struct FBP_STRUCT_ActivtyInfo
{
	struct FString                                     LabelDesc_1_0EFC5DED4CED05B79FDCF6B9E65944E9;             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_SubActivtyInfo>           BP_ARRAY_SubActivtyList_4_933599174B1BED11D5D64F8229990182;// 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     ImgUrl_7_118283564B55A3DD0FDF5AAF9712C5DF;                // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     EndTimeStr_9_E9AF9C4148A199EC73BB589422750EBE;            // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Title_10_B7DE485B48313542459A0CA90F0A2EA7;                // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     StartTimeStr_12_38F4087242259C1D210C9C98A68AE294;         // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ID_14_103BF6F54D3F09622B6DF48C276390CD;                   // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	struct FString                                     ImgLink_18_A5ECFD5B45F94F471012FAB48547C49E;              // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                LabelType_19_4B7540464994C079799243BC5D06BB10;            // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	struct FString                                     Desc_22_AD24C1674410F87CB92F399F38ECD3EA;                 // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Detail_26_D77DDBD54C6614122839C3BE5087AB0E;               // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
