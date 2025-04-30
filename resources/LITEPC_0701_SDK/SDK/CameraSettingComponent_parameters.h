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

// Function CameraSettingComponent.CameraSettingComponent_C.SaveCurCameraSetting
struct UCameraSettingComponent_C_SaveCurCameraSetting_Params
{
	class USpringArmComponent*                         SprintArm;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CameraSettingComponent.CameraSettingComponent_C.LerpCameraSettings
struct UCameraSettingComponent_C_LerpCameraSettings_Params
{
	float                                              LerpAlpha;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSTR_CameraSetting                          CameraSettings;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	class USpringArmComponent*                         SpringArm;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
