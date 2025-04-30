
#include "../SDK.h"

// Name: LitePC_0701, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function OMobileFBPL.OMobileFBPL.GetVolumeState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UOMobileFBPL::STATIC_GetVolumeState()
{
	static auto fn = UObject::FindObject<UFunction>("Function OMobileFBPL.OMobileFBPL.GetVolumeState");

	UOMobileFBPL_GetVolumeState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OMobileFBPL.OMobileFBPL.GetDeviceName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UOMobileFBPL::STATIC_GetDeviceName()
{
	static auto fn = UObject::FindObject<UFunction>("Function OMobileFBPL.OMobileFBPL.GetDeviceName");

	UOMobileFBPL_GetDeviceName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OMobileFBPL.OMobileFBPL.GetBatteryTemperature
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UOMobileFBPL::STATIC_GetBatteryTemperature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OMobileFBPL.OMobileFBPL.GetBatteryTemperature");

	UOMobileFBPL_GetBatteryTemperature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OMobileFBPL.OMobileFBPL.GetBatteryLevel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UOMobileFBPL::STATIC_GetBatteryLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function OMobileFBPL.OMobileFBPL.GetBatteryLevel");

	UOMobileFBPL_GetBatteryLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OMobileFBPL.OMobileFBPL.AreHeadphonesPluggedIn
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOMobileFBPL::STATIC_AreHeadphonesPluggedIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function OMobileFBPL.OMobileFBPL.AreHeadphonesPluggedIn");

	UOMobileFBPL_AreHeadphonesPluggedIn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
