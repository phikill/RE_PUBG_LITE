#pragma once

#include "../SDK.h"

// Name: LitePC_0701, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_VoiceCheck.BP_VoiceCheck_C.GetWeatherID
struct UBP_VoiceCheck_C_GetWeatherID_Params
{
	int                                                WeatherID;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VoiceCheck.BP_VoiceCheck_C.IsVoiceCheckEnable
struct UBP_VoiceCheck_C_IsVoiceCheckEnable_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VoiceCheck.BP_VoiceCheck_C.UpdateRainDay
struct UBP_VoiceCheck_C_UpdateRainDay_Params
{
};

// Function BP_VoiceCheck.BP_VoiceCheck_C.TrigerVoiceCheck
struct UBP_VoiceCheck_C_TrigerVoiceCheck_Params
{
	class AActor*                                      nowActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              checkDis;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VoiceCheck.BP_VoiceCheck_C.InitCheckObjectByType
struct UBP_VoiceCheck_C_InitCheckObjectByType_Params
{
	TEnumAsByte<EBP_VoiceCheckType>                    NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBP_VoiceDataObject_C*                       NewParam1;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VoiceCheck.BP_VoiceCheck_C.GetCheckData
struct UBP_VoiceCheck_C_GetCheckData_Params
{
	TEnumAsByte<EBP_VoiceCheckType>                    checkType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBP_VoiceCheckData                          Result;                                                   // (Parm, OutParm)
};

// Function BP_VoiceCheck.BP_VoiceCheck_C.InitCheckMap
struct UBP_VoiceCheck_C_InitCheckMap_Params
{
};

// Function BP_VoiceCheck.BP_VoiceCheck_C.ReceiveBeginPlay
struct UBP_VoiceCheck_C_ReceiveBeginPlay_Params
{
};

// Function BP_VoiceCheck.BP_VoiceCheck_C.ReceiveTick
struct UBP_VoiceCheck_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VoiceCheck.BP_VoiceCheck_C.SetAllWeatherType
struct UBP_VoiceCheck_C_SetAllWeatherType_Params
{
	int                                                weatherType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VoiceCheck.BP_VoiceCheck_C.ExecuteUbergraph_BP_VoiceCheck
struct UBP_VoiceCheck_C_ExecuteUbergraph_BP_VoiceCheck_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VoiceCheck.BP_VoiceCheck_C.ShowTrigerVoiceIcon__DelegateSignature
struct UBP_VoiceCheck_C_ShowTrigerVoiceIcon__DelegateSignature_Params
{
	class UBP_VoiceDataSubObject_C*                    nowSubObject;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
