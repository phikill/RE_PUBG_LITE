

// Class ShadowTrackerExtra.TriggerItem_TriggerClock
// //Class ShadowTrackerExtra.TriggerItem_TriggerClock
//0x0040 (0x0408 - 0x03C8)
class ATriggerItem_TriggerClock : public ATriggerBase
{
public:
	struct FString                                     ClockTag;                                                 // 0x03C8(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      IsStartOnBegin : 1;                                       // 0x03D8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03D9(0x0007) MISSED OFFSET
	TArray<float>                                      TriggerSecondsArray;                                      // 0x03E0(0x0010) (Edit, ZeroConstructor)
	struct FTimerHandle                                TimerHandle_Trigger;                                      // 0x03F0(0x0008)
	int                                                CurSecondsArrayIndex;                                     // 0x03F8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x03FC(0x000C) MISSED OFFSET

	// Function ShadowTrackerExtra.TriggerItem_TriggerClock.Stop
	// (Final, Native, Protected)
	void Stop();// sub_149CAC0()

	// Function ShadowTrackerExtra.TriggerItem_TriggerClock.Start
	// (Final, Native, Public)
	void Start();// sub_149CA80()

	// Function ShadowTrackerExtra.TriggerItem_TriggerClock.OnTime
	// (Final, Native, Protected)
	void OnTime();// sub_149B750()


}

