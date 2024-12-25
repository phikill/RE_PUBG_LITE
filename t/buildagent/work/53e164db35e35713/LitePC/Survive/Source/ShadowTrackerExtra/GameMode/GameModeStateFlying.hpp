

// Class ShadowTrackerExtra.GameModeStateFlying
// //Class ShadowTrackerExtra.GameModeStateFlying
//0x0028 (0x0068 - 0x0040)
class UGameModeStateFlying : public UGameModeState
{
public:
	class APawn*                                       PlaneClass;                                               // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UBehaviorTree*                               PlaneBT;                                                  // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ForceJumpCheckDist;                                       // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0054(0x0014) MISSED OFFSET

}

