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

// UserDefinedStruct BP_STRUCT_ActButtonInfo.BP_STRUCT_ActButtonInfo
// 0x0038
struct FBP_STRUCT_ActButtonInfo
{
	int                                                Btn_Type_0_72A7BDDA4D539877791B30B19CB97C5E;              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     Btn_TypeName_1_C1631EF849C229989F4201B7B2E4F5B5;          // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ActID_2_89F1DAB74AE5AF1F611CE4AC8F9FAE25;                 // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FString                                     Btn_Name_3_CB1FB8C54883B36537B88AA8946E6E9B;              // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               IsRedPoint_4_4762A09D4D3A7BDD1094AE91409A4294;            // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	int                                                Btn_Tab_Num_5_11086F8025E813FE02005F990CEB832D;           // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
