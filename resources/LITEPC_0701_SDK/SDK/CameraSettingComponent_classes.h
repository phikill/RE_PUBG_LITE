#pragma once

// Name: LitePC_0701, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CameraSettingComponent.CameraSettingComponent_C
// 0x0014 (0x010C - 0x00F8)
class UCameraSettingComponent_C : public UActorComponent
{
public:
	float                                              Current_Target_Arm_Length;                                // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurrentCameraLagSpeed;                                    // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CurrentSocketOffset;                                      // 0x0100(0x000C) (Edit, BlueprintVisible, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CameraSettingComponent.CameraSettingComponent_C");
		return ptr;
	}


	void SaveCurCameraSetting(class USpringArmComponent* SprintArm);
	void LerpCameraSettings(float LerpAlpha, const struct FSTR_CameraSetting& CameraSettings, class USpringArmComponent* SpringArm);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
