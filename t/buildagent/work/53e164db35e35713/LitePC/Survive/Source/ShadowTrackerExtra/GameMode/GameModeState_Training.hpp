

// Class ShadowTrackerExtra.GameModeState_Training
// //Class ShadowTrackerExtra.GameModeState_Training
//0x0018 (0x0058 - 0x0040)
class UGameModeState_Training : public UGameModeState
{
public:
	float                                              AboutToOverTime;                                          // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	int                                                AboutToOverMsgID;                                         // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	float                                              PostLoginMsgDelay;                                        // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PostLoginMsgID;                                           // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	// Function ShadowTrackerExtra.GameModeState_Training.BroadcastAboutToOver
	// (Final, Native, Protected)
	void BroadcastAboutToOver();// sub_316520()


}

