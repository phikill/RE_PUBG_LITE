

// Class ShadowTrackerExtra.NewPathFollowingComponent
// //Class ShadowTrackerExtra.NewPathFollowingComponent
//0x0020 (0x03E0 - 0x03C0)
class UNewPathFollowingComponent : public UPathFollowingComponent
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x03C0(0x0004) MISSED OFFSET
	float                                              maxCheckDis;                                              // 0x03C4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              maxCheckDisTime;                                          // 0x03C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03CC(0x0004) MISSED OFFSET
	unsigned char                                      isUseFixedPos : 1;                                        // 0x03D0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x03D1(0x0003) MISSED OFFSET
	float                                              PlayerHalfHeight;                                         // 0x03D4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PlayerNewHalfHeight;                                      // 0x03D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxTransferDis;                                           // 0x03DC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

}

