

// Class ShadowTrackerExtra.UAESkillAction_ReplaceCharAnim
// //Class ShadowTrackerExtra.UAESkillAction_ReplaceCharAnim
//0x0018 (0x0170 - 0x0158)
class UUAESkillAction_ReplaceCharAnim : public UUAESkillAction
{
public:
	ECharacterAnimType                                 CharacterAnimType;                                        // 0x0158(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0159(0x0007) MISSED OFFSET
	TArray<class UAnimationAsset*>                     PoseAnimList;                                             // 0x0160(0x0010) (Edit, ZeroConstructor)

}

