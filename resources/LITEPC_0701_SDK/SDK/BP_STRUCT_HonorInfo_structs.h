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

// UserDefinedStruct BP_STRUCT_HonorInfo.BP_STRUCT_HonorInfo
// 0x0038
struct FBP_STRUCT_HonorInfo
{
	int                                                honor_id_1_D52F055A486F8B1A99C5CF9F080365A6;              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                honor_ownedcount_2_8565649A46E3CAB0307CF3977CAAA8E5;      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     honor_ownedtime_gold_6_7C18640E49FCE446C0D98A9A7F9426E0;  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     honor_ownedtime_copper_7_77A63DEA440917319B004EA9E1783D9E;// 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     honor_ownedtime_silver_8_685AC6514E3B4F70C0214081D7EC23BA;// 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
