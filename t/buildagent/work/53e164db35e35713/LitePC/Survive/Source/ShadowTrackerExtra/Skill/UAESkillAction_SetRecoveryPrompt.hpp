

// Class ShadowTrackerExtra.UAESkillAction_SetRecoveryPrompt
// //Class ShadowTrackerExtra.UAESkillAction_SetRecoveryPrompt
//0x0038 (0x0190 - 0x0158)
class UUAESkillAction_SetRecoveryPrompt : public UUAESkillAction
{
public:
	struct FHealthPredictShowData                      ShowData;                                                 // 0x0158(0x0020) (Edit)
	struct FString                                     RemovePrePromptKey;                                       // 0x0178(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      RemoveByAddBuff : 1;                                      // 0x0188(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0189(0x0007) MISSED OFFSET

}

