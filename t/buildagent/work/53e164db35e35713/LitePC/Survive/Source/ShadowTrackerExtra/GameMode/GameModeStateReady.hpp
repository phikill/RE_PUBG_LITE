

// Class ShadowTrackerExtra.GameModeStateReady
// //Class ShadowTrackerExtra.GameModeStateReady
//0x0028 (0x0068 - 0x0040)
class UGameModeStateReady : public UGameModeState
{
public:
	float                                              StopJoinTime;                                             // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ForceStartCountDownTime;                                  // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0048(0x0020) MISSED OFFSET

	// Function ShadowTrackerExtra.GameModeStateReady.StopJoin
	// (Final, Native, Public)
	void StopJoin();// sub_317910()


}

