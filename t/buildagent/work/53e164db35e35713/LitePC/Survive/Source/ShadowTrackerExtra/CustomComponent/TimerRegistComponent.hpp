

// Class ShadowTrackerExtra.TimerRegistComponent
// //Class ShadowTrackerExtra.TimerRegistComponent
//0x0050 (0x0158 - 0x0108)
class UTimerRegistComponent : public UActorComponent
{
public:
	unsigned char                                      bEnable : 1;                                              // 0x0108(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0109(0x0007) MISSED OFFSET
	TArray<struct FRegisterTimer>                      TimerRegister;                                            // 0x0110(0x0010) (ZeroConstructor)
	struct FString                                     TimerName;                                                // 0x0120(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0130(0x0004) MISSED OFFSET
	float                                              resetTimestamp;                                           // 0x0134(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x20];                                      // 0x0138(0x0020) MISSED OFFSET

}

