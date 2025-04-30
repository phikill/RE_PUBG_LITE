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

// Enum UnrealArchExt.EUserWidgetFadingStatus
enum class EUserWidgetFadingStatus : uint8_t
{
	EUserWidgetFadingStatus__UserWidgetFadingStatus_None = 0,
	EUserWidgetFadingStatus__UserWidgetFadingStatus_FadingIn = 1,
	EUserWidgetFadingStatus__UserWidgetFadingStatus_FadingOut = 2,
	EUserWidgetFadingStatus__UserWidgetFadingStatus_MAX = 3
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct UnrealArchExt.UserWidgetState
// 0x0028
struct FUserWidgetState
{
	struct FString                                     WidgetName;                                               // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FName                                       ContainerName;                                            // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ZOrder;                                                   // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UUAEUserWidget*                              Widget;                                                   // 0x0020(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct UnrealArchExt.UnixTimestampCallback
// 0x0050
struct FUnixTimestampCallback
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct UnrealArchExt.LogicManagerCreateParams
// 0x0010
struct FLogicManagerCreateParams
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UClass*                                      pLogicManagerClass;                                       // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
