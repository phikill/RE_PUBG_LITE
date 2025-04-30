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

// UserDefinedStruct BP_STRUCT_WardrobeChangedItemData.BP_STRUCT_WardrobeChangedItemData
// 0x0034
struct FBP_STRUCT_WardrobeChangedItemData
{
	bool                                               is_new_0_2D9A188C4472605D9977E5ADB4EAC2C9;                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               is_selected_1_4304CBCD41F677B4E8FE20B94DC1D15A;           // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	int                                                count_2_E2C54826467B15932BB9DD8B2B648DBF;                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                res_id_3_CDADB020479BCC7359A9E5A3CFE08A21;                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               is_using_4_2DBCA32A4D623940343653BF19C16F2A;              // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FString                                     ins_id_7_5437CADB4FBE3A56BCAF8E92C3BC3538;                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               is_sourcebook_8_31E036E04BCF30F8B93F838954323F76;         // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	int                                                validHours_9_6061DE364061F81046D4539A8E3A3A97;            // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                expireTS_10_78B7137941914C4B96FCECBAFA3153D9;             // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                itemSubType_11_C232C3204A24D1709AF19BBE71BD84DD;          // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                itemQuality_12_7DCFB9914D0D2E60FE769FAE58D4D7AA;          // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
