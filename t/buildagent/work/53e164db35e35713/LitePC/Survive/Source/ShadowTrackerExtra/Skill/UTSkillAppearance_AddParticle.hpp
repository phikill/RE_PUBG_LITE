

// Class ShadowTrackerExtra.UTSkillAppearance_AddParticle
// //Class ShadowTrackerExtra.UTSkillAppearance_AddParticle
//0x0060 (0x01B8 - 0x0158)
class UUTSkillAppearance_AddParticle : public UUAESkillAction
{
public:
	class UParticleSystem*                             TemplateParticle_Effect;                                  // 0x0158(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UParticleSystemComponent>     ParticleInstance;                                         // 0x0160(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       HangMeshTagName;                                          // 0x0168(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParticleCompTagName;                                      // 0x0170(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocationPosition;                                         // 0x0178(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    LocationRotation;                                         // 0x0184(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     LocationScale;                                            // 0x0190(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     FPPScale;                                                 // 0x019C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     FPPLocationPosition;                                      // 0x01A8(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      bPhaseFinishRemove : 1;                                   // 0x01B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00 : 8;                                        // 0x01B5(0x0001)
	unsigned char                                      bUndoRemove : 1;                                          // 0x01B5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x01B6(0x0002) MISSED OFFSET

	// Function ShadowTrackerExtra.UTSkillAppearance_AddParticle.UndoAction
	// (Native, Public)
	void UndoAction();// sub_1993F00()

	// Function ShadowTrackerExtra.UTSkillAppearance_AddParticle.Reset
	// (Native, Public)
	void Reset();// sub_E03E90()

	// Function ShadowTrackerExtra.UTSkillAppearance_AddParticle.OnParticleSystemFinished
	// (Final, Native, Private)
	void OnParticleSystemFinished(class UParticleSystemComponent* PSC);// sub_1AD9430()


}

