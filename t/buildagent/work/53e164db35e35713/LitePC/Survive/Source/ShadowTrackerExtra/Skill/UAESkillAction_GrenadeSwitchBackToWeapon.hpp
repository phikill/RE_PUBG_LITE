

// Class ShadowTrackerExtra.UAESkillAction_GrenadeSwitchBackToWeapon
// //Class ShadowTrackerExtra.UAESkillAction_GrenadeSwitchBackToWeapon
//0x0000 (0x0158 - 0x0158)
class UUAESkillAction_GrenadeSwitchBackToWeapon : public UUAESkillAction
{
public:

	// Function Skill.UTSkillAction.UpdateAction
	// (Native, Public)
	void UpdateAction(float DeltaSeconds);// sub_24263E0()

	// Function Skill.UTSkillAction.UndoAction
	// (Native, Public)
	void UndoAction();// sub_2426380()

	// Function Skill.UTSkillAction.Reset
	// (Native, Public)
	void Reset();// sub_2425320()

	// Function Skill.UTSkillAction.RealDoAction
	// (Native, Public)
	unsigned char RealDoAction();// sub_2424620()

	// Function Skill.UTSkillAction.JudgeNeedPhaseWait
	// (Native, Public)
	unsigned char JudgeNeedPhaseWait();// sub_24248C0()

	// Function Skill.UTSkillAction.DoAction
	// (Native, Public)
	unsigned char DoAction();// sub_2423CE0()


}

