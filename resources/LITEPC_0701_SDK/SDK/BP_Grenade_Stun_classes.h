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

// BlueprintGeneratedClass BP_Grenade_Stun.BP_Grenade_Stun_C
// 0x0040 (0x0461 - 0x0421)
class ABP_Grenade_Stun_C : public ABP_Grenade_Base_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0421(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0428(0x0008) (Transient, DuplicateTransient)
	class USphereComponent*                            SphereTrigger;                                            // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        proj;                                                     // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USTExtraBuffApplierComponent*                STExtraBuffApplier;                                       // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               ExplodeAkEvent;                                           // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ExplodParticleSystem;                                     // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LifeTimeFromFuzeToExplode;                                // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VoiceCheckDis;                                            // 0x045C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsThrowedOut_;                                            // 0x0460(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Grenade_Stun.BP_Grenade_Stun_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExplodeLocal();
	void BndEvt__DelayFlyProjMovement_K2Node_ComponentBoundEvent_1_ActorComponentActivatedSignature__DelegateSignature(class UActorComponent* Component, bool bReset);
	void InitLifeSpan();
	void BndEvt__DelayFlyProjMovement_K2Node_ComponentBoundEvent_1_ActorComponentDeactivateSignature__DelegateSignature(class UActorComponent* Component);
	void CheckTimeOut();
	void ExecuteUbergraph_BP_Grenade_Stun(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
