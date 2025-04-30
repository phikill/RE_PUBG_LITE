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

// UserDefinedStruct BP_STRUCT_LinkStyleRes_type.BP_STRUCT_LinkStyleRes_type
// 0x0040
struct FBP_STRUCT_LinkStyleRes_type
{
	int                                                FontSize_0_A45833814314772AA0F40587CB0DD2DB;              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     StyleName_1_01B6B5F543AB25F3AC37A48BDB25594A;             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               UnderLine_2_89F7D6C64387435409BA1A84421C6F57;             // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	struct FString                                     FontColor_3_D2BCBAE447301225879E948D36B9BD28;             // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     FontPath_4_0A5E92CA4BB4DAF4821590AD6C060516;              // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
