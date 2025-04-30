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

// UserDefinedStruct BP_STRUCT_RecordingUpload.BP_STRUCT_RecordingUpload
// 0x004C
struct FBP_STRUCT_RecordingUpload
{
	struct FString                                     openUid_0_54D56FF14523BD47320C999A356D4A89;               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     battleUid_1_E085462F49A09FBF73121597985007B0;             // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     roleUid_2_BCE9DEF348A2756A826DBAB7C9C35515;               // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                HeadShotNum_3_1F6986E44FBDD374A4EFFCB4D9155E13;           // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                killNum_4_58DEC1EE4B1FE46CCB08479A637854DD;               // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     platform_5_11FC63E6443F3259AD396F958EDEB0F1;              // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                MaxKillDistane_6_FF85298B476C4D8EF2CDAC87DBCDCD81;        // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
