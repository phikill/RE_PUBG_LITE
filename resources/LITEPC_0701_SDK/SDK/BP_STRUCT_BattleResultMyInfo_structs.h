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

// UserDefinedStruct BP_STRUCT_BattleResultMyInfo.BP_STRUCT_BattleResultMyInfo
// 0x003C
struct FBP_STRUCT_BattleResultMyInfo
{
	struct FString                                     roleUid_0_69E651874D1B59E37EFC1EA2C25EE5BD;               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                cur_avatar_box_id_1_2E423FED44E481BF379E4AA2A1D6D57B;     // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     headIconUrl_2_2DE90D59411C4F69ED9F499E19E825A1;           // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     nickName_3_B3046B5241B93A9AE55B8F9B8703D4FC;              // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                gender_4_923EF15043A1194D7B0182B8366726E8;                // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
