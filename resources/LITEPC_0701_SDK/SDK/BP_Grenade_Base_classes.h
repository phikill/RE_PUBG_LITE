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

// BlueprintGeneratedClass BP_Grenade_Base.BP_Grenade_Base_C
// 0x00B1 (0x0421 - 0x0370)
class ABP_Grenade_Base_C : public AUAEProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0370(0x0008) (Transient, DuplicateTransient)
	class URotatingMovementComponent*                  RotatingMovement;                                         // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDelayFlyProjMovementComponent*              DelayFlyProjMovement;                                     // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           RootCollision;                                            // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpeedForHigh;                                             // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0394(0x0004) MISSED OFFSET
	class UChildActorComponent*                        ChildActorComponent;                                      // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               FuzeAkSoundEvent;                                         // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               ThrowAkSoundEvent;                                        // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               WallCollideAkSoundEvent;                                  // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpeedForLow;                                              // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsTimeOut;                                                // 0x03BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03BD(0x0003) MISSED OFFSET
	struct FRotator                                    ViewOffsetRotation_H;                                     // 0x03C0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    ViewOffsetRotation_L;                                     // 0x03CC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   LowThrowMovementParam;                                    // 0x03D8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   HighThrowMovementParam;                                   // 0x03E0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     _upperVectorAligned;                                      // 0x03E8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     _surfaceNormalVector;                                     // 0x03F4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              showTime;                                                 // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0404(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnTimeout;                                                // 0x0408(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class AUAESkill*                                   SkillOwner;                                               // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsFly;                                                    // 0x0420(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Grenade_Base.BP_Grenade_Base_C");
		return ptr;
	}


	void SetProjectileProperties();
	void StopSkill();
	void SwitchWeapon();
	void ThrowGrenade();
	void callvoicecheck();
	void GetRandomStartAngle(int* Ret);
	void GetCurRotation(struct FRotator* Ret);
	void HandleLifeEnd();
	void InitLifeSpan();
	void StartFly(const struct FVector& Velocity, bool isThrowHigh);
	void UserConstructionScript();
	void HandleSkillEnd(int SkillID, EUTSkillStopReason Reason);
	void HandleSkillStart(int SkillID);
	void TriggerEvent(int SkillID, TEnumAsByte<EUTSkillEventType> EventType);
	void TriggerCustomEvent(TEnumAsByte<EUAESkillEvent> EventType);
	void TriggerEntryEvent(EUTSkillEntry EntryEvent);
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void InitFromSkill(class AUAESkill* SkillOwner);
	void SkillEvent(TEnumAsByte<EUAESkillEvent> SkillEventType);
	void StartFlyMulticast(const struct FVector& InitVelocity, bool isThrowHigh);
	void BndEvt__DelayFlyProjMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
	void BndEvt__DelayFlyProjMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature(const struct FHitResult& ImpactResult);
	void DettachFromOwner();
	void AlignToSurface();
	void HandleOnOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void DelayedOverlapCheck();
	void CheckCapsuleOverlap();
	void OnSkillEvent_Remote(TEnumAsByte<EUAESkillEvent> SkillEventType);
	void Timeout();
	void OnTimeoutRemote();
	void ExecuteUbergraph_BP_Grenade_Base(int EntryPoint);
	void OnTimeout__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
