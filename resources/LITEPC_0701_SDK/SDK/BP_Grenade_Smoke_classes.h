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

// BlueprintGeneratedClass BP_Grenade_Smoke.BP_Grenade_Smoke_C
// 0x0078 (0x0499 - 0x0421)
class ABP_Grenade_Smoke_C : public ABP_Grenade_Base_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0421(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0428(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    Smoking;                                                  // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Trail;                                                    // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           OverlapingForXifu;                                        // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        proj;                                                     // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             RotationPivot;                                            // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LifeTimeAfterFly;                                         // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x045C(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               ExplodeAkEvent;                                           // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LifeTimeAfterSmoking;                                     // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x046C(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               SmokingAkEvent;                                           // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsThrowedOut_;                                            // 0x0478(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0479(0x0003) MISSED OFFSET
	float                                              LifeTimeForEmittingSmoke;                                 // 0x047C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                _rotationTimer;                                           // 0x0480(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              VoiceCheckDis;                                            // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanExplode;                                               // 0x048C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x048D(0x0003) MISSED OFFSET
	struct FTimerHandle                                CheckExplodeTimerHandle;                                  // 0x0490(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               IsLanded;                                                 // 0x0498(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Grenade_Smoke.BP_Grenade_Smoke_C");
		return ptr;
	}


	void TimeOver();
	void SetRotationPivotOnGround();
	void UserConstructionScript();
	void ExplodeLocal();
	void InitLifeSpan();
	void BndEvt__DelayFlyProjMovement_K2Node_ComponentBoundEvent_1_ActorComponentActivatedSignature__DelegateSignature(class UActorComponent* Component, bool bReset);
	void CheckWhetherThrowedOut();
	void BndEvt__DelayFlyProjMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature(struct FHitResult* ImpactResult);
	void OnSmokeDeactivate();
	void OnCheckExplosion();
	void ExecuteUbergraph_BP_Grenade_Smoke(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
