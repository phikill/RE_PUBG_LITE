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

// UserDefinedStruct BP_STRUCT_VersionUpdateInfo.BP_STRUCT_VersionUpdateInfo
// 0x0064
struct FBP_STRUCT_VersionUpdateInfo
{
	struct FString                                     isAppUpdating_0_E6690F6B40E329A7D534F7A9AA1486C2;         // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     isNeedUpdating_1_7DEF18944AC725B1A2E612BC4173B477;        // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     versionString_2_E8428CB24748F92CE545E8888CB66610;         // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     versionDescrition_3_DEA8C78E4626A9BDA6B54B93C187781A;     // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     userDefineStr_4_B7B148F746032C2F44D4D2BC027AC670;         // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     isForcedUpdating_6_7853489640C050B24A83EBA7B51CF960;      // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              needDownloadSize_f_7_B978907241DA7EFAC3D380B44E071BDD;    // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
