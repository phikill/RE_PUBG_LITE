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

// UserDefinedStruct BP_STRUCT_VehicleSpawn_type.BP_STRUCT_VehicleSpawn_type
// 0x0030
struct FBP_STRUCT_VehicleSpawn_type
{
	struct FString                                     VehicleType_0_D5F23BDF4A402F908C32838B32EE296A;           // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                KeyID_1_DA313A8B47F5A4995D23CE8FADB22B3A;                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SnapFloor_2_4E8583D44F46C002B16DD3BE8DAC9F9D;             // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	int                                                Weight_3_B85B07C74A2D99C9E8655D9BA2496D44;                // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FString                                     Vehicle_4_8EAC1DE84321DB8AA153C19AB4E97012;               // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
