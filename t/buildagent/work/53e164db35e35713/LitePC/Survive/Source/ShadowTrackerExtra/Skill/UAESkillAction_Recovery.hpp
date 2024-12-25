

// Class ShadowTrackerExtra.UAESkillAction_Recovery
// //Class ShadowTrackerExtra.UAESkillAction_Recovery
//0x0028 (0x0180 - 0x0158)
class UUAESkillAction_Recovery : public UUAESkillAction
{
public:
	struct FString                                     PropertyName;                                             // 0x0158(0x0010) (Edit, ZeroConstructor)
	int                                                ItemID;                                                   // 0x0168(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERecoveryType>                         RecoveryType;                                             // 0x016C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x016D(0x0003) MISSED OFFSET
	float                                              RecoveryValue;                                            // 0x0170(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RecoveryLimit;                                            // 0x0174(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      RunOnServer : 1;                                          // 0x0178(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERecoveryReasonType>                   ReasonType;                                               // 0x0179(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x017A(0x0006) MISSED OFFSET

}

