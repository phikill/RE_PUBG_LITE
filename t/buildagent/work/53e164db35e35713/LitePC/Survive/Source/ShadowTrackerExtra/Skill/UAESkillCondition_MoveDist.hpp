

// Class ShadowTrackerExtra.UAESkillCondition_MoveDist
// //Class ShadowTrackerExtra.UAESkillCondition_MoveDist
//0x0018 (0x0158 - 0x0140)
class UUAESkillCondition_MoveDist : public UUAESkillCondition
{
public:
	TEnumAsByte<EOperatorType>                         OperatorType;                                             // 0x0140(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0141(0x0003) MISSED OFFSET
	float                                              DistValue;                                                // 0x0144(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0148(0x0010) MISSED OFFSET

}

