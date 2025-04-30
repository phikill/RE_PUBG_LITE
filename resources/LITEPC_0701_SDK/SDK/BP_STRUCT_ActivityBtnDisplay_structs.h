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

// UserDefinedStruct BP_STRUCT_ActivityBtnDisplay.BP_STRUCT_ActivityBtnDisplay
// 0x0044
struct FBP_STRUCT_ActivityBtnDisplay
{
	int                                                Priority_0_46159A294AD8CE52B8706D9F5544BD82;              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     ActivityName_1_BDDD54604B8656536C99C0A3F5074B3F;          // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     IconPath_2_C79C7E02493AE6F3925939B80B14DE6D;              // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     JumpUrl_3_883F04534B750337906ECABA456B4935;               // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                EndTime_4_197423154ADCB20E680D95A680D052BA;               // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                StartTime_5_BF12CD944EAB63ED3C270ABF863560AD;             // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                HasToken_6_341FB6402DB0637736EEE6A503F4B0BE;              // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
