

// Class ShadowTrackerExtra.UAESkillAction_RandomAction
// //Class ShadowTrackerExtra.UAESkillAction_RandomAction
//0x0018 (0x0170 - 0x0158)
class UUAESkillAction_RandomAction : public UUAESkillAction
{
public:
	TArray<struct FRandomActionGroup>                  SkillCandidates;                                          // 0x0158(0x0010) (Edit, ZeroConstructor)
	int                                                RandomeIndex;                                             // 0x0168(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x016C(0x0004) MISSED OFFSET

}

