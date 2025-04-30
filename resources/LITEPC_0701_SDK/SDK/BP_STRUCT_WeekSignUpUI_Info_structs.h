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

// UserDefinedStruct BP_STRUCT_WeekSignUpUI_Info.BP_STRUCT_WeekSignUpUI_Info
// 0x0048
struct FBP_STRUCT_WeekSignUpUI_Info
{
	int                                                status_0_EC8A35D74F5AC2CC2B98F591C9409F6E;                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     name_1_53251327494CC92F32987E8745702062;                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                itemQuality_3_56B4A3B3426227C55FA26CA98E36D3AB;           // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FString                                     itemName_4_6A7EF4194025F1D0E47130BACFB2F4A9;              // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     itemImage_5_FA483C614A13FD79836B3FB3D77C8481;             // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                itemResID_6_AD9534F24C781486346957AF128CF8EF;             // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                dropItemTime_7_0A3C58D5463863B3C2C38385677CF898;          // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
