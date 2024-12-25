

// Class ShadowTrackerExtra.FreeForAllGameMode
// //Class ShadowTrackerExtra.FreeForAllGameMode
//0x0080 (0x1870 - 0x17F0)
class AFreeForAllGameMode : public ADeathMatchGameMode
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x17F0(0x0018) MISSED OFFSET
	float                                              DeadTombBoxLifeTime;                                      // 0x1808(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x180C(0x0004) MISSED OFFSET
	TMap<TEnumAsByte<EBackpackItemType>, int>          OverrideDropItemLifeTimes;                                // 0x1810(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData02[0x10];                                      // 0x1860(0x0010) MISSED OFFSET

}

