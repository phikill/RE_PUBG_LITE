

// Class ShadowTrackerExtra.BTTask_MoveToOcclusion
// //Class ShadowTrackerExtra.BTTask_MoveToOcclusion
//0x0040 (0x0108 - 0x00C8)
class UBTTask_MoveToOcclusion : public UBTTask_MagicMove
{
public:
	float                                              SearchRadius;                                             // 0x00C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              UseLastPointRadius;                                       // 0x00CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NearDistanceValue;                                        // 0x00D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PointInNearDistanceValue;                                 // 0x00D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bChoosePointByEnemy : 1;                                  // 0x00D8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00 : 8;                                        // 0x00D9(0x0001)
	unsigned char                                      bForceStand : 1;                                          // 0x00D9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x00DA(0x0002) MISSED OFFSET
	float                                              CirclePainThreshold;                                      // 0x00DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBlackboardKeySelector                      EnemyBlackboardKey;                                       // 0x00E0(0x0028) (Edit)

}

