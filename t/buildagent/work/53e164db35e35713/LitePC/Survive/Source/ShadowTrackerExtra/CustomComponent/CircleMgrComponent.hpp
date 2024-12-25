

// Class ShadowTrackerExtra.CircleMgrComponent
// //Class ShadowTrackerExtra.CircleMgrComponent
//0x0108 (0x0260 - 0x0158)
class UCircleMgrComponent : public UTimerRegistComponent
{
public:
	unsigned char                                      GM_IsEnableNarrowCircle : 1;                              // 0x0158(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0159(0x0007) MISSED OFFSET
	TArray<struct FCirCleCfg>                          CircleConfigs;                                            // 0x0160(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              DestinyThreshold;                                         // 0x0170(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                RoundNum;                                                 // 0x0174(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnableDebugMultiCircle : 1;                              // 0x0178(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6F];                                      // 0x0179(0x006F) MISSED OFFSET
	class ACirleAreaVolume*                            BindedCirleAreaVolume;                                    // 0x01E8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x70];                                      // 0x01F0(0x0070) MISSED OFFSET

	// Function ShadowTrackerExtra.CircleMgrComponent.SetGMCicleTime
	// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
	void SetGMCicleTime(float CDTimefloat LastTime);// sub_A58790()


}

