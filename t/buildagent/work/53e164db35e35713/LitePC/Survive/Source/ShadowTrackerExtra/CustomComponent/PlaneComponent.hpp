

// Class ShadowTrackerExtra.PlaneComponent
// //Class ShadowTrackerExtra.PlaneComponent
//0x0020 (0x0128 - 0x0108)
class UPlaneComponent : public UActorComponent
{
public:
	TArray<struct FPlaneData>                          PlayersOnPlaneDataList;                                   // 0x0108(0x0010) (ZeroConstructor)
	class APawn*                                       PlaneClass;                                               // 0x0118(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UBehaviorTree*                               PlaneBT;                                                  // 0x0120(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

}

