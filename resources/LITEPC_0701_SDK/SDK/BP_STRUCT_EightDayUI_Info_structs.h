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

// UserDefinedStruct BP_STRUCT_EightDayUI_Info.BP_STRUCT_EightDayUI_Info
// 0x0048
struct FBP_STRUCT_EightDayUI_Info
{
	struct FString                                     itemName_0_9D70B96F4821371DF784CA887393F735;              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                itemQuality_1_A153147949B851A477654DA85EB1A41C;           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     name_2_9FA2E4D84AF5AE71FB127FA409F6447D;                  // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                status_3_3273115741EC4EAF0015CE95B437A240;                // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FString                                     itemImage_4_A32C739E42436A8A5422A8B3ED5BA354;             // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                itemID_5_37FD8C0B4FF8374C94BA7BBF6CF69DA1;                // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                itemTime_6_997EA589430A3E5FA00061857A3D99CD;              // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
