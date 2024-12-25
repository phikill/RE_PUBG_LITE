

// Class ShadowTrackerExtra.BTTask_Escape
// //Class ShadowTrackerExtra.BTTask_Escape
//0x0040 (0x0120 - 0x00E0)
class UBTTask_Escape : public UBTTask_ShortDistanceMove
{
public:
	float                                              TryLineTestZOffset;                                       // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TryLineTestDistance;                                      // 0x00E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxTrySampleTimes;                                        // 0x00E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinTrySampleDistance;                                     // 0x00EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinTryEscapeDistance;                                     // 0x00F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EscapeStopDistance;                                       // 0x00F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBlackboardKeySelector                      EnemyBlackboardKey;                                       // 0x00F8(0x0028) (Edit)

}

