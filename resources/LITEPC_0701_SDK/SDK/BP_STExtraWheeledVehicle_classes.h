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

// BlueprintGeneratedClass BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C
// 0x0061 (0x0801 - 0x07A0)
class ABP_STExtraWheeledVehicle_C : public ASTExtraWheeledVehicle
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07A0(0x0008) (Transient, DuplicateTransient)
	class UCameraComponent*                            ObserverCameraFPPMode;                                    // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSpringArmComponent*                  FPPModeSpringArm;                                         // 0x07B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    PSCExhaust;                                               // 0x07B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCameraComponent*                            Camera;                                                   // 0x07C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSpringArmComponent*                  VehicleSpringArm;                                         // 0x07C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    PSCFire;                                                  // 0x07D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    PSCSmoke;                                                 // 0x07D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsPlayingEngineAk;                                        // 0x07E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x07E1(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    DMI;                                                      // 0x07E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstance*                           VehicleMaterial;                                          // 0x07F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       TailLightParamName;                                       // 0x07F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ToggleFPP;                                                // 0x0800(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C");
		return ptr;
	}


	void UpdateExhaustFx(class UParticleSystemComponent* PSCExhaust);
	void OnClientVehicleHealthStateChanged(ESTExtraVehicleHealthState VehicleHealthState);
	void CreateDMI();
	void UserConstructionScript();
	void InpActEvt_Horn_K2Node_InputActionEvent_12(const struct FKey& Key);
	void InpActEvt_Horn_K2Node_InputActionEvent_11(const struct FKey& Key);
	void InpActEvt_Handbrake_K2Node_InputActionEvent_10(const struct FKey& Key);
	void InpActEvt_Handbrake_K2Node_InputActionEvent_9(const struct FKey& Key);
	void InpActEvt_VehicleBoost_K2Node_InputActionEvent_8(const struct FKey& Key);
	void InpActEvt_VehicleBoost_K2Node_InputActionEvent_7(const struct FKey& Key);
	void OnBoostingChanged();
	void OnSetTailLightValue(float* LightValue);
	void BndEvt__VehicleSeats_K2Node_ComponentBoundEvent_0_SeatAttachDelegate__DelegateSignature(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType, int SeatIdx);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_STExtraWheeledVehicle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
