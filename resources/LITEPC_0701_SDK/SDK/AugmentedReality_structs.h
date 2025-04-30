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

// Enum AugmentedReality.EARTrackingQuality
enum class EARTrackingQuality : uint8_t
{
	EARTrackingQuality__NotAvailable = 0,
	EARTrackingQuality__Limited    = 1,
	EARTrackingQuality__Normal     = 2,
	EARTrackingQuality__EARTrackingQuality_MAX = 3
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AugmentedReality.ARHitTestResult
// 0x0040
struct FARHitTestResult
{
	float                                              Distance;                                                 // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
