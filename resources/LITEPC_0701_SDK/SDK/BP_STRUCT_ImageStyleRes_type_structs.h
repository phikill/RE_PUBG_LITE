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

// UserDefinedStruct BP_STRUCT_ImageStyleRes_type.BP_STRUCT_ImageStyleRes_type
// 0x0038
struct FBP_STRUCT_ImageStyleRes_type
{
	struct FString                                     StyleName_1_2AA758BE4A03809EB53FBB84D3485796;             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ImageSize_2_96EB865D41AAAF80E29845882B51076E;             // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     ImagePath_3_827587E143D09497FBF413A233DBD394;             // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     ImageColor_4_FEA280FC47AC19EA68EA0DA0953F26D4;            // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
