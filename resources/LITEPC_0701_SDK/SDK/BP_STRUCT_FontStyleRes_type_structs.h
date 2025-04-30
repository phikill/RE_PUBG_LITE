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

// UserDefinedStruct BP_STRUCT_FontStyleRes_type.BP_STRUCT_FontStyleRes_type
// 0x003C
struct FBP_STRUCT_FontStyleRes_type
{
	int                                                FontSize_0_453DF68E457859D86C19C2AB341F1DCA;              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     FontColor_1_C23B5D56422A13425EC0CE8D9960FC64;             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     FontPath_2_795675834F31CB02AD789D9273FE0B41;              // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     StyleName_3_59E5C6D24A99889D050ABEA64B5E19D9;             // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                FontShadow_4_7E2621134424FC4A0DC1588B789D9612;            // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
