

// Class ShadowTrackerExtra.DrivingChallengeLevelRules
// //Class ShadowTrackerExtra.DrivingChallengeLevelRules
//0x0018 (0x0048 - 0x0030)
class UDrivingChallengeLevelRules : public UChallengeLevelRules
{
public:
	TArray<class ATriggerItem_DrivingCheckPoint*>      DrivingCheckPointsArray;                                  // 0x0030(0x0010) (ZeroConstructor)
	int                                                CurrentUnpassIndex;                                       // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TotalPassNum;                                             // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)

	// Function ShadowTrackerExtra.DrivingChallengeLevelRules.ValidNewCheckPoint
	// (Final, Native, Private)
	unsigned char ValidNewCheckPoint();// sub_1637E80()

	// Function ShadowTrackerExtra.DrivingChallengeLevelRules.SignCheckPointPassed
	// (Final, Native, Private)
	void SignCheckPointPassed(const struct FString& Msg);// sub_1637C60()

	// Function ShadowTrackerExtra.DrivingChallengeLevelRules.SignAndSetDrivingCheckPoint
	// (Final, Native, Private)
	void SignAndSetDrivingCheckPoint(const struct FString& Msg);// sub_1637B80()

	// Function ShadowTrackerExtra.DrivingChallengeLevelRules.OnReceiveTriggerMsg
	// (Native, Public)
	void OnReceiveTriggerMsg(class UTriggerAction* TriggerActionconst struct FString& Msg);// sub_1524800()

	// Function ShadowTrackerExtra.DrivingChallengeLevelRules.InitLevel
	// (Native, Public)
	void InitLevel();// sub_A57A70()


}

