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

// UserDefinedStruct BP_STRUCT_WardrobeItemInfo.BP_STRUCT_WardrobeItemInfo
// 0x0034
struct FBP_STRUCT_WardrobeItemInfo
{
	int                                                count_0_75D41A06495A24946E3D4B911DB00E9D;                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                res_id_3_8A41C51347759FB1159113B0667B6253;                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               is_new_5_966A0BDB4022BEDD4EA3A3A669254F7C;                // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               is_selected_6_B589A2E944A77AA5194DE79F52790784;           // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               is_using_7_B5788B0B4F853027E28847978621AEA5;              // 0x000A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x000B(0x0005) MISSED OFFSET
	struct FString                                     ins_id_10_FB4BC6174B7CBAB4AAEE3D9DE62CBE86;               // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               is_sourcebook_11_099B4E16490E3B2389A0F5B94A0E4B87;        // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	int                                                validHours_12_655C0D7043AFE0DD5939289B7F0CD14C;           // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                expireTS_13_1022E6C844F89790B0E5A68F6A4EE323;             // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                itemSubType_14_5B2B9CC14318B7D119A57F9C4E26E093;          // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                itemQuality_15_E9B592464100B4BE66B0AF80EC77B019;          // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
