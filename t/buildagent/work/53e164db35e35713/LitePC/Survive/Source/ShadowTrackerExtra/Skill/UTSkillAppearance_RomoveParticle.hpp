

// Class ShadowTrackerExtra.UTSkillAppearance_RomoveParticle
// //Class ShadowTrackerExtra.UTSkillAppearance_RomoveParticle
//0x0010 (0x0168 - 0x0158)
class UUTSkillAppearance_RomoveParticle : public UUAESkillAction
{
public:
	struct FName                                       ParticleCompTagName;                                      // 0x0158(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bPhaseFinishRemove : 1;                                   // 0x0160(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00 : 8;                                        // 0x0161(0x0001)
	unsigned char                                      bUndoRemove : 1;                                          // 0x0161(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0162(0x0006) MISSED OFFSET

	// Function ShadowTrackerExtra.UTSkillAppearance_RomoveParticle.UndoAction
	// (Native, Public)
	void UndoAction();// sub_1993F00()

	// Function ShadowTrackerExtra.UTSkillAppearance_RomoveParticle.Reset
	// (Native, Public)
	void Reset();// sub_E03E90()

	// Function ShadowTrackerExtra.UTSkillAppearance_RomoveParticle.RealDoAction
	// (Native, Public)
	unsigned char RealDoAction();// sub_669C50()


}

