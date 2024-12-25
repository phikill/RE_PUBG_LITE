

// Class ShadowTrackerExtra.UAESkillCondition_PlayerState
// //Class ShadowTrackerExtra.UAESkillCondition_PlayerState
//0x0018 (0x0158 - 0x0140)
class UUAESkillCondition_PlayerState : public UUAESkillCondition
{
public:
	TEnumAsByte<EOperatorType>                         OperatorType;                                             // 0x0140(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0141(0x0007) MISSED OFFSET
	TArray<EPawnState>                                 ArrPlayerState;                                           // 0x0148(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

}

