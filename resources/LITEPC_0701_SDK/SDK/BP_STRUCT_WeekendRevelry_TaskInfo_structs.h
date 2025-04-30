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

// UserDefinedStruct BP_STRUCT_WeekendRevelry_TaskInfo.BP_STRUCT_WeekendRevelry_TaskInfo
// 0x0038
struct FBP_STRUCT_WeekendRevelry_TaskInfo
{
	struct FString                                     desc_0_213D4F8023037E3A6058373206541D33;                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                progress_1_7192A5006B2C050E5D6F523E0AF8D963;              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                id_2_0A7ADB0038C358B02ADAD90101A65444;                    // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                totalProgress_3_5EA3060054FB843C2E44BF350B2EA883;         // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                status_7_28F610C03C08F889340A34FC051B2D93;                // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                taskType_5_6401FD007326216E1E3585400946F575;              // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FString                                     icon_6_0F327200591C2C98605FCDE4065449FE;                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
