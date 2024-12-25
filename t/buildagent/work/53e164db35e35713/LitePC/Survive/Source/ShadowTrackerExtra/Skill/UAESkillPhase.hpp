

// Class ShadowTrackerExtra.UAESkillPhase
// //Class ShadowTrackerExtra.UAESkillPhase
//0x0000 (0x01E0 - 0x01E0)
class UUAESkillPhase : public UUTSkillPhase
{
public:

	// Function Skill.UTSkillPhase.TryJumpToPhase
	// (Final, Native, Public)
	unsigned char TryJumpToPhase(int PhaseID);// sub_24262B0()

	// Function Skill.UTSkillPhase.StopPhase
	// (Native, Public)
	void StopPhase();// sub_2425AE0()

	// Function Skill.UTSkillPhase.StartPhase
	// (Native, Public)
	void StartPhase();// sub_2425A80()

	// Function Skill.UTSkillPhase.RepeatPhase
	// (Native, Public)
	void RepeatPhase();// sub_24252C0()

	// Function Skill.UTSkillPhase.PlaySkillHurtEffect
	// (Native, Public)
	unsigned char PlaySkillHurtEffect(class APawn* Victim);// sub_24247E0()

	// Function Skill.UTSkillPhase.PlaySkillHurtAppearances
	// (Native, Public)
	unsigned char PlaySkillHurtAppearances(class APawn* Victim);// sub_2424F00()

	// Function Skill.UTSkillPhase.PickTargets
	// (Native, Public)
	void PickTargets();// sub_2424D70()

	// Function Skill.UTSkillPhase.OnEvent
	// (Native, Public)
	unsigned char OnEvent(TEnumAsByte<EUTSkillEventType> TheEventType);// sub_2424AF0()

	// Function Skill.UTSkillPhase.OnCustomEvent
	// (Native, Public)
	unsigned char OnCustomEvent(TEnumAsByte<EUTSkillEventType> TheEventType);// sub_2424930()

	// Function Skill.UTSkillPhase.GetChargePhaseRate
	// (Final, Native, Public)
	float GetChargePhaseRate();// sub_2423EF0()

	// Function Skill.UTSkillPhase.ForceStopPhase
	// (Native, Public)
	unsigned char ForceStopPhase();// sub_2423E80()

	// Function Skill.UTSkillPhase.ClearAttachments
	// (Final, Native, Public)
	unsigned char ClearAttachments();// sub_2423C20()


}

