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

// BlueprintGeneratedClass BP_AirDropBox.BP_AirDropBox_C
// 0x00B8 (0x04D0 - 0x0418)
class ABP_AirDropBox_C : public AAirDropBoxActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0418(0x0008) (Transient, DuplicateTransient)
	class UCameraComponent*                            Camera;                                                   // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpringArmComponent*                         SpringArm;                                                // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               box1;                                                     // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBuoyancyForceComponent*                     buoyancyForce;                                            // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Box;                                                      // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UProjectileMovementComponent*                ProjectileMovement;                                       // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Smoke;                                                    // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Flash;                                                    // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Parachute;                                                // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SmokeAppearTime;                                          // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SmokeDisappearTime;                                       // 0x046C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsSpawnedPickedup;                                        // 0x0470(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0471(0x0007) MISSED OFFSET
	struct FTimerHandle                                CheckBoxIsLandTimer;                                      // 0x0478(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bIsParachuteShouldOpen;                                   // 0x0480(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsBoxHitTheGround;                                       // 0x0481(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsBoxSomking;                                            // 0x0482(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsBoxInWater;                                            // 0x0483(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ServerDroppingSpeed;                                      // 0x0484(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              ForceUpdatePeriod;                                        // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasBuoyancy;                                             // 0x048C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x048D(0x0003) MISSED OFFSET
	class UDataTable*                                  DefaultDataTable;                                         // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAirDropResource                            DefaultAirDropBoxResource;                                // 0x0498(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FSuperAirDropBoxDataItem>            SuperAirDropDataConfig;                                   // 0x04B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UAirDropComponent*                           NewVar_1;                                                 // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AirDropBox.BP_AirDropBox_C");
		return ptr;
	}


	void GetSuperAirDropGenerateWrappersData(TArray<struct FAirDropBoxGenerateWrapperItemData>* RetData);
	void IsWater(class AActor* NewParam, bool* IsWater);
	void OnRep_ServerDroppingSpeed();
	void OnRep_bIsBoxInWater();
	void OnRep_bIsBoxSomking();
	void OnRep_bIsParachuteOpen();
	void OnRep_bIsBoxHitTheGroundOrInWater();
	void GetRandomGenerateWrappersData(TArray<struct FAirDropBoxGenerateWrapperItemData>* GenerateData);
	void CheckBoxIsLand();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BndEvt__Cube_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void HideSmoke();
	void OnLandBroadCast();
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void DistanceScalerChangedEvent(float* Scale);
	void ReceiveTick(float* DeltaSeconds);
	void BndEvt__Box1_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ChangeAirdropAppearance();
	void ExecuteUbergraph_BP_AirDropBox(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
