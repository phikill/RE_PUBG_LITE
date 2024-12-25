

// Class ShadowTrackerExtra.UAESkillAction_JumpToRandomPhase
// //Class ShadowTrackerExtra.UAESkillAction_JumpToRandomPhase
//0x0018 (0x0170 - 0x0158)
class UUAESkillAction_JumpToRandomPhase : public UUAESkillAction
{
public:
	int                                                StartIndex;                                               // 0x0158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EndIndex;                                                 // 0x015C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsCanBeCurIndex : 1;                                      // 0x0160(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0161(0x0007) MISSED OFFSET
	class UUAESkillCondition*                          JumpCondtion;                                             // 0x0168(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

}

