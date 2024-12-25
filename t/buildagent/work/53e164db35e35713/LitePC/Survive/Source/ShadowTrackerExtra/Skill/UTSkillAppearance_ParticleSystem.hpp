

// Class ShadowTrackerExtra.UTSkillAppearance_ParticleSystem
// //Class ShadowTrackerExtra.UTSkillAppearance_ParticleSystem
//0x00A8 (0x0200 - 0x0158)
class UUTSkillAppearance_ParticleSystem : public UUTSkillAction
{
public:
	struct FUTSkillAppearance_ParticleSystem_Item      Item;                                                     // 0x0158(0x0068) (Edit, BlueprintVisible)
	TWeakObjectPtr<class UParticleSystemComponent>     AppearanceInstance;                                       // 0x01C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x38];                                      // 0x01C8(0x0038) MISSED OFFSET

	// Function ShadowTrackerExtra.UTSkillAppearance_ParticleSystem.OnHurtAppearanceParticleSystemFinished
	// (Native, Public)
	void OnHurtAppearanceParticleSystemFinished(class UParticleSystemComponent* PSC);// sub_1AD94C0()

	// Function ShadowTrackerExtra.UTSkillAppearance_ParticleSystem.OnAppearanceParticleSystemFinished
	// (Native, Public)
	void OnAppearanceParticleSystemFinished(class UParticleSystemComponent* PSC);// sub_1AD9430()


}

