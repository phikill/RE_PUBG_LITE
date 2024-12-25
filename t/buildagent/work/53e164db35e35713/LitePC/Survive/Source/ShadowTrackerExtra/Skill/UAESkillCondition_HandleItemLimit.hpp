

// Class ShadowTrackerExtra.UAESkillCondition_HandleItemLimit
// //Class ShadowTrackerExtra.UAESkillCondition_HandleItemLimit
//0x0018 (0x0158 - 0x0140)
class UUAESkillCondition_HandleItemLimit : public UUAESkillCondition
{
public:
	TEnumAsByte<EOperatorType>                         OperatorType;                                             // 0x0140(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0141(0x0003) MISSED OFFSET
	int                                                NeedItemNum;                                              // 0x0144(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemID;                                                   // 0x0148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Type;                                                     // 0x014C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCheckBothSide : 1;                                       // 0x0150(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0151(0x0007) MISSED OFFSET

}

