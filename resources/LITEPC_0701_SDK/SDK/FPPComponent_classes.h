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

// BlueprintGeneratedClass FPPComponent.FPPComponent_C
// 0x0038 (0x01A0 - 0x0168)
class UFPPComponent_C : public UBaseFPPComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0168(0x0008) (Transient, DuplicateTransient)
	class ABP_PlayerPawn_C*                            PawnBP;                                                   // 0x0170(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTempFPP;                                                 // 0x0178(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0179(0x0007) MISSED OFFSET
	class UCurveFloat*                                 ST_MZJ_8X_4X;                                             // 0x0180(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScopeInTickAlpha;                                         // 0x0188(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeltaTime;                                                // 0x018C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScopeSpeed;                                               // 0x0190(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0194(0x0004) MISSED OFFSET
	class USkeletalMeshComponent*                      NewVar_1;                                                 // 0x0198(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FPPComponent.FPPComponent_C");
		return ptr;
	}


	void GetScopeCameraAttachTarget(class UMeshComponent** NewParam);
	float GetScopeFov(class ASTExtraShootWeapon** shootWeapon);
	void GetScopeFovBP(class ASTExtraShootWeapon* Weapon, float* FOV);
	void SetTagCullingBP(bool IsUse);
	void requestResourceGuarantee(int InOrOut, TEnumAsByte<ELoadMode> loadMode, TEnumAsByte<EApplyStatus> applyStatus);
	void ReloadEvent();
	void SetTagCulling(bool* IsUse);
	void PlayScopeInTimeline();
	void ScopeInEnd();
	void ScopeOutEnd();
	void ReceiveTick(float* DeltaSeconds);
	void StopScopeIn();
	void AttachToSight();
	void AttachTo(class USceneComponent* NewParam);
	void Detach(class USceneComponent* NewParam);
	void StopScopeOut();
	void ExecuteUbergraph_FPPComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
