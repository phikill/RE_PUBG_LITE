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

// UserDefinedStruct BP_STRUCT_WardrobeClickedItemData.BP_STRUCT_WardrobeClickedItemData
// 0x0034
struct FBP_STRUCT_WardrobeClickedItemData
{
	bool                                               is_new_0_5F7CE5D84606E7A8F71838B4FE9D7076;                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               is_selected_1_9195524940DFFFCEB7EB5584C65F1290;           // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	int                                                count_2_1770475C4A126AA64AF580A8D69E25FD;                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                res_id_3_D36ACB67403D80ED0A15378D494446AA;                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               is_using_4_B6D9E9F848BBEF9EE9ED548C37E7DD07;              // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FString                                     ins_id_7_11CEFAC244B1967F18C855A628CF582B;                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               is_sourcebook_8_771EC879410F6A334B245EB469974726;         // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	int                                                validHours_9_F60D150A4BE7F2DCD9C8AEB47FA3F9F9;            // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                expireTS_10_01135022493F2554E6892FBE47FCFCAD;             // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                itemSubType_11_CEA9152A43AB7D75B0CA9CA11639EBEF;          // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                itemQuality_12_D2391AA54FB3B7AD7A06A1A78914A778;          // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
