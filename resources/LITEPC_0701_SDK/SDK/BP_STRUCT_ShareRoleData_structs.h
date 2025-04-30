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

// UserDefinedStruct BP_STRUCT_ShareRoleData.BP_STRUCT_ShareRoleData
// 0x003C
struct FBP_STRUCT_ShareRoleData
{
	struct FString                                     roleUid_0_1A548B4C4EB010EC75B2DF90B00BBA70;               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                gender_1_ACDF9CF941A6007C098337BF3D87A619;                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     headIconUrl_2_BF20C3D5403B085191EADEBBCC85CB5D;           // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     nickName_3_FDC2DBEA4D6FDC408B79B0A28E980AD7;              // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                cur_avatar_box_id_4_76E5C59D48808FCF4028DC886A53346D;     // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
