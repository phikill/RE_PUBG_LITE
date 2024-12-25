

// Class ShadowTrackerExtra.UAESkill
// //Class ShadowTrackerExtra.UAESkill
//0x0078 (0x0568 - 0x04F0)
class AUAESkill : public AUAEBaseSkill
{
public:
	unsigned char                                      TriggerFromServer : 1;                                    // 0x04F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EPawnState                                         PawnState;                                                // 0x04F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      AutoEnterState : 1;                                       // 0x04F2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00 : 8;                                        // 0x04F3(0x0001)
	unsigned char                                      IsAddHealTimes : 1;                                       // 0x04F3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01 : 8;                                        // 0x04F4(0x0001)
	unsigned char                                      bConvertForColorBlind : 1;                                // 0x04F4(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x04F5(0x0003) MISSED OFFSET
	TMap<struct FName, struct FVector>                 VectorParameters;                                         // 0x04F8(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData03[0x20];                                      // 0x0548(0x0020) MISSED OFFSET

}

