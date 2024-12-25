

// Class ShadowTrackerExtra.UAESkillCondition_PropertyLimit
// //Class ShadowTrackerExtra.UAESkillCondition_PropertyLimit
//0x0020 (0x0160 - 0x0140)
class UUAESkillCondition_PropertyLimit : public UUAESkillCondition
{
public:
	struct FString                                     PropertyName;                                             // 0x0140(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TEnumAsByte<EOperatorType>                         OperatorType;                                             // 0x0150(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EValueType>                            ValueType;                                                // 0x0151(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0152(0x0002) MISSED OFFSET
	float                                              PropertyValue;                                            // 0x0154(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ShowPrompt : 1;                                           // 0x0158(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0159(0x0003) MISSED OFFSET
	int                                                PromptID;                                                 // 0x015C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

}

