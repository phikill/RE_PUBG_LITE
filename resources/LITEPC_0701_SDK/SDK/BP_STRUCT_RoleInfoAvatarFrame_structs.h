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

// UserDefinedStruct BP_STRUCT_RoleInfoAvatarFrame.BP_STRUCT_RoleInfoAvatarFrame
// 0x0058
struct FBP_STRUCT_RoleInfoAvatarFrame
{
	struct FString                                     desc_0_9EA5A7514180A8C5037426941604F705;                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     state_1_08058C3543CE33D3D561879F47077882;                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     name_2_03F86960403366ACEC72A5A2C522DE3F;                  // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                id_3_94030D564734EFD97A8EB583222EDC21;                    // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FString                                     desc_get_4_66306E3D4BB4116257FA129F1C7DB2EA;              // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     expire_time_5_3963988D494449036ADB16A2DCA3D002;           // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
