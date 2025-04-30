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

// UserDefinedStruct BP_STRUCT_MasterTaskCondition.BP_STRUCT_MasterTaskCondition
// 0x0030
struct FBP_STRUCT_MasterTaskCondition
{
	struct FString                                     TaskNodeCondition_0_DE27AC9B4332D7CF486A599D80BC2B16;     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                TaskNodeNum_1_2FFE7E924CC91FAC08BA0CB2DFB49CB0;           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TaskProgressNum_2_6CCFC22D4790031444FCC584AE1085B3;       // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ConditionStatus_3_F8A96BDE4C3FCA9307F343994978AD45;       // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FString                                     ConditionJump_6_04CFB7807464EF2823CC6A500B133E00;         // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
