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

// UserDefinedStruct BP_STRUCT_RoleInfoHistoryRoleBasicInfo.BP_STRUCT_RoleInfoHistoryRoleBasicInfo
// 0x003C
struct FBP_STRUCT_RoleInfoHistoryRoleBasicInfo
{
	int                                                role_avatar_frame_0_209F33AE4BE55A906BEB91AA95B88998;     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     role_id_1_1111470C4A9D993C755FCCA32CB337FA;               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     role_image_2_6C441A7F4A68E5F53CAECEBBB5002C52;            // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     role_name_3_95C2753245C2735DBACBFE8C9E5B9B68;             // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                role_sex_4_E2F2F5454ABF3CD3A3BED19706C9FC16;              // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
