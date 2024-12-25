

// Class ShadowTrackerExtra.AirAttackComponent
// //Class ShadowTrackerExtra.AirAttackComponent
//0x0078 (0x01D0 - 0x0158)
class UAirAttackComponent : public UTimerRegistComponent
{
public:
	struct FVector                                     MapOriginal;                                              // 0x0158(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              MapRadius;                                                // 0x0164(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlightHeight;                                             // 0x0168(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SeaLevelHeight;                                           // 0x016C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DelayTime;                                                // 0x0170(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                WaveCount;                                                // 0x0174(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                WaveInternal;                                             // 0x0178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAirAttackCfg                               AirAttackConfig;                                          // 0x017C(0x0014) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                TryCount;                                                 // 0x0190(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0194(0x003C) MISSED OFFSET

}

