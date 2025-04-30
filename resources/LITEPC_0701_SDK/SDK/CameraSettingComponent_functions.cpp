
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

// Function CameraSettingComponent.CameraSettingComponent_C.SaveCurCameraSetting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USpringArmComponent*     SprintArm                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCameraSettingComponent_C::SaveCurCameraSetting(class USpringArmComponent* SprintArm)
{
	static auto fn = UObject::FindObject<UFunction>("Function CameraSettingComponent.CameraSettingComponent_C.SaveCurCameraSetting");

	UCameraSettingComponent_C_SaveCurCameraSetting_Params params;
	params.SprintArm = SprintArm;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CameraSettingComponent.CameraSettingComponent_C.LerpCameraSettings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          LerpAlpha                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSTR_CameraSetting      CameraSettings                 (BlueprintVisible, BlueprintReadOnly, Parm)
// class USpringArmComponent*     SpringArm                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCameraSettingComponent_C::LerpCameraSettings(float LerpAlpha, const struct FSTR_CameraSetting& CameraSettings, class USpringArmComponent* SpringArm)
{
	static auto fn = UObject::FindObject<UFunction>("Function CameraSettingComponent.CameraSettingComponent_C.LerpCameraSettings");

	UCameraSettingComponent_C_LerpCameraSettings_Params params;
	params.LerpAlpha = LerpAlpha;
	params.CameraSettings = CameraSettings;
	params.SpringArm = SpringArm;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
