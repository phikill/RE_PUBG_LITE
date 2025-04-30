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

// UserDefinedStruct BP_STRUCT_RoleInfo_CorpsAvatar.BP_STRUCT_RoleInfo_CorpsAvatar
// 0x0054
struct FBP_STRUCT_RoleInfo_CorpsAvatar
{
	struct FString                                     LastOnlineTimeStr_0_6D5566406EAB6A4516276CB30BF06F82;     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Name_1_15E5164071300E2755B85A3300547C85;                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     strUid_2_6F9974C01AE4A461021C04000097CBA4;                // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Level_3_6F9A54005A8A8D663BBB59EF054107BC;                 // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FString                                     IconUrl_4_7CB1A500239DA92A77E1598A0C6F39BC;               // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Sex_5_1D88C2000D34AEDC068D29190B052A08;                   // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RankIntegralLevel_6_7266E480003A1CAA0699621F0D83BDCC;     // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                IconFrameID_7_23127640158A94290DD63D5608BC56F4;           // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
