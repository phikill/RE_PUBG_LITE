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

// UserDefinedStruct BP_STRUCT_CreateRole_SelectTip.BP_STRUCT_CreateRole_SelectTip
// 0x002D
struct FBP_STRUCT_CreateRole_SelectTip
{
	int                                                avatar_price_7_F6C6AA89495286C20BFF94973BCF3E1D;          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               has_item_8_8BF9B9F841DB32C4EBAF74A6FE901DE9;              // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FString                                     avatar_name_10_945810BC42AE1A35BA9DE5BCF7261304;          // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     remain_time_str_12_C37ED8434AB3DAE15D1D38B6BA4CEAA4;      // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                avatar_id_13_84AC56154D9817C5BA38AF92E278B2E9;            // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               show_price_14_66AEC9B047604770EB6D7FB9EA2265C8;           // 0x002C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
