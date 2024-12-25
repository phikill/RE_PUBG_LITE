

// Class UAETrigger.UAETriggerObject
// //Class UAETrigger.UAETriggerObject
//0x0108 (0x0130 - 0x0028)
class UUAETriggerObject : public UObject
{
public:
	EUAETriggerRunType                                 RunType;                                                  // 0x0028(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FString                                     TriggerName;                                              // 0x0030(0x0010) (Edit, ZeroConstructor, EditConst)
	unsigned char                                      bEnableTick : 1;                                          // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	float                                              TickInterval;                                             // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OuterActor;                                               // 0x0048(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x50];                                      // 0x0050(0x0050) MISSED OFFSET
	TArray<class UObject*>                             TriggerEventsClass;                                       // 0x00A0(0x0010) (ZeroConstructor)
	TArray<class UTriggerCondition*>                   TriggerConditions;                                        // 0x00B0(0x0010) (ZeroConstructor)
	TArray<class UTriggerAction*>                      TriggerActions;                                           // 0x00C0(0x0010) (ZeroConstructor)
	class UFlowNodeBase*                               CarrierFlowNode;                                          // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x50];                                      // 0x00D8(0x0050) UNKNOWN PROPERTY: SetProperty UAETrigger.UAETriggerObject.TriggeredEvents
	unsigned char                                      UnknownData04[0x8];                                       // 0x0128(0x0008) MISSED OFFSET

}

