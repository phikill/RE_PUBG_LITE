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

// UserDefinedStruct BP_STRUCT_ChatRoomInfo.BP_STRUCT_ChatRoomInfo
// 0x0088
struct FBP_STRUCT_ChatRoomInfo
{
	bool                                               isMarked_0_E55F15C9431DBFA62F3CD6B006218F12;              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     id_1_BC240E014F167D8D4C77B79435BB4852;                    // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               isSelfCreate_2_B2701E4A41DFD8F6CF16B6B5AF80D1F3;          // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	struct FString                                     name_3_2E9BC1F04D00C597F554F5AE5FB7490F;                  // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                playerCount_4_4B475EBB452DA4B6FA77068FD94DBECB;           // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               needKey_5_E2A8C9774259A2D2BFA648B05D0E46F6;               // 0x0034(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	int                                                updateTime_6_D7A2260C484D11E6DEB443B03F7D2B9A;            // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FString                                     announcement_7_2EBF946C4748B6BD51D217966893BCC8;          // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     label2_8_75ADCCC74F394B138C384985C3924466;                // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     label1_9_7CBD59144749222785E4C2AC78C48C29;                // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     label3_10_38AF907A411D11946A46CBA3EE01E8D0;               // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                recommendType_11_C75F5C21495591362C4095B858CAB7EC;        // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                friendNum_12_64583AC54C79B358B8C9C5A129B165BA;            // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
