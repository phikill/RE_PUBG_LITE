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

// UserDefinedStruct BP_STRUCT_LogInfo.BP_STRUCT_LogInfo
// 0x004C
struct FBP_STRUCT_LogInfo
{
	struct FString                                     msg_0_FD98E9164FA0A73D6AE3D5918754B441;                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     date_2_CD4ABACF46B4CFA57BCFFBADC2849491;                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     time_3_791F61524E393B4561FBD484BF64A102;                  // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     icon_4_70DB6B86461AA7302A03BABB7B2ED742;                  // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                level_5_EA0D984748CDDD24B9FE7C9E21FABC7D;                 // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                iconFrameID_7_67089100333B459E682C0008028EE9E4;           // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                playerId_8_64A437405C643A770F11F270002E37B4;              // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
