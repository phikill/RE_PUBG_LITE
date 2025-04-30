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

// UserDefinedStruct BP_STRUCT_EightDayNewUI_Info.BP_STRUCT_EightDayNewUI_Info
// 0x004C
struct FBP_STRUCT_EightDayNewUI_Info
{
	int                                                itemID_0_44A45CC001A702DF2B2E4C2004133664;                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                status_1_707076C0726547D90E463DE102B31C73;                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                itemTime_2_44B6DD40719ED9CB3DE70F9603351C25;              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     name_3_14BDB60004AE27BC01CCE28907B45FA5;                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     itemName_4_1C8519C073771E593DE756BE0337F425;              // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                itemQuality_5_7BEAB3C054ACBC496CA996FF03F723E9;           // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FString                                     itemImage_6_15FF1240149F34FD5646B33D036576E5;             // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                dayIndex_7_3EDB7B4074AAD4E92FAFEF000149F978;              // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
