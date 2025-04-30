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

// BlueprintGeneratedClass BP_GrenadePredictLine.BP_GrenadePredictLine_C
// 0x004C (0x048C - 0x0440)
class ABP_GrenadePredictLine_C : public AGrenadePredictLine
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    BlockParticle;                                            // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USplineComponent*                            Spline;                                                   // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class USplineMeshComponent*>                SplineMeshes;                                             // 0x0460(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                NumberSplineMeshes;                                       // 0x0470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NumberPoints;                                             // 0x0474(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumberMeshesNeeded;                                       // 0x0478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LauncheVelocity;                                          // 0x047C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	int                                                NumberMeshesLastFrame;                                    // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GrenadePredictLine.BP_GrenadePredictLine_C");
		return ptr;
	}


	void GetPredictedLineSTartPositionAndVelocity(struct FVector* StartPosition, struct FVector* StartVelocity);
	void SetSplineMeshMatParams(TArray<struct FVector>* PredictTailPoints);
	void GetPositionByThrowMode(const struct FVector& Input, struct FVector* Output);
	void DrawSplineMeshes();
	void UpdateSplineBase(const struct FVector& Location, const struct FRotator& Rotation, bool isHit);
	void CleanupSplineMeshes();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void NotifyUpdateSpline();
	void ExecuteUbergraph_BP_GrenadePredictLine(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
