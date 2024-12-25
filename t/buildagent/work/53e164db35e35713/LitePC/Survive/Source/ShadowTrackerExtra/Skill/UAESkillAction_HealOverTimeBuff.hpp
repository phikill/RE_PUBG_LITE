

// Class ShadowTrackerExtra.UAESkillAction_HealOverTimeBuff
// //Class ShadowTrackerExtra.UAESkillAction_HealOverTimeBuff
//0x0038 (0x0190 - 0x0158)
class UUAESkillAction_HealOverTimeBuff : public UUAESkillAction
{
public:
	float                                              HealPerTick;                                              // 0x0158(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HealLimit;                                                // 0x015C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bUseStrictHealLimit : 1;                                  // 0x0160(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0161(0x0003) MISSED OFFSET
	float                                              BuffTickInterval;                                         // 0x0164(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BuffTickDeltaTime;                                        // 0x0168(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ItemID;                                                   // 0x016C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                BuffCount;                                                // 0x0170(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              ValidityTime;                                             // 0x0174(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              FirstServerTime;                                          // 0x0178(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class USTBaseBuff>                  OwningBuffObj;                                            // 0x017C(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class ASTExtraBaseCharacter>        TslCharacter;                                             // 0x0184(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x018C(0x0004) MISSED OFFSET

}

