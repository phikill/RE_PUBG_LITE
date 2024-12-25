

// Class UAETrigger.TriggerEvent
// //Class UAETrigger.TriggerEvent
//0x0068 (0x0090 - 0x0028)
class UTriggerEvent : public UObject
{
public:
	class UObject*                                     EventInstigator;                                          // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
	TMap<struct FString, struct FTriggerEventListenerTrigger> RelevantListener;                                         // 0x0040(0x0050) (ZeroConstructor)

}

