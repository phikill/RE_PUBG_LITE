#pragma once

// Name: LitePC_0701, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum OceanPlugin.EFollowMethod
enum class EFollowMethod : uint8_t
{
	LookAtLocation                 = 0,
	FollowCamera                   = 1,
	FollowPawn                     = 2,
	Stationary                     = 3,
	EFollowMethod_MAX              = 4
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OceanPlugin.StructBoneOverride
// 0x0010
struct FStructBoneOverride
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Density;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TestRadius;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OceanPlugin.WaveParameter
// 0x0014
struct FWaveParameter
{
	float                                              Rotation;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Length;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Amplitude;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Steepness;                                                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OceanPlugin.WaveSetParameters
// 0x00A0
struct FWaveSetParameters
{
	struct FWaveParameter                              Wave01;                                                   // 0x0000(0x0014) (Edit, BlueprintVisible)
	struct FWaveParameter                              Wave02;                                                   // 0x0014(0x0014) (Edit, BlueprintVisible)
	struct FWaveParameter                              Wave03;                                                   // 0x0028(0x0014) (Edit, BlueprintVisible)
	struct FWaveParameter                              Wave04;                                                   // 0x003C(0x0014) (Edit, BlueprintVisible)
	struct FWaveParameter                              Wave05;                                                   // 0x0050(0x0014) (Edit, BlueprintVisible)
	struct FWaveParameter                              Wave06;                                                   // 0x0064(0x0014) (Edit, BlueprintVisible)
	struct FWaveParameter                              Wave07;                                                   // 0x0078(0x0014) (Edit, BlueprintVisible)
	struct FWaveParameter                              Wave08;                                                   // 0x008C(0x0014) (Edit, BlueprintVisible)
};

// ScriptStruct OceanPlugin.TimeDate
// 0x001C
struct FTimeDate
{
	int                                                Millisecond;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Second;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Minute;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Hour;                                                     // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Day;                                                      // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Month;                                                    // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Year;                                                     // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OceanPlugin.ForceTriangle
// 0x006C
struct FForceTriangle
{
	unsigned char                                      UnknownData00[0x6C];                                      // 0x0000(0x006C) MISSED OFFSET
};

// ScriptStruct OceanPlugin.BuoyancyVertex
// 0x0010
struct FBuoyancyVertex
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
