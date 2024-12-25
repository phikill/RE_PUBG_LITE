

// Class ShadowTrackerExtra.BTTask_DealNextBuildingPathNode
// //Class ShadowTrackerExtra.BTTask_DealNextBuildingPathNode
//0x0010 (0x00A8 - 0x0098)
class UBTTask_DealNextBuildingPathNode : public UBTTask_BlackboardBase
{
public:
	float                                              findSpotXYOffset;                                         // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              findSpotZOffset;                                          // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bForceNextBuilding : 1;                                   // 0x00A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET

}

