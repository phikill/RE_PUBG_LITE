

// Class ShadowTrackerExtra.OnTimeSpawnChallengeLevelRules
// //Class ShadowTrackerExtra.OnTimeSpawnChallengeLevelRules
//0x0010 (0x0040 - 0x0030)
class UOnTimeSpawnChallengeLevelRules : public UChallengeLevelRules
{
public:
	TArray<class ATriggerItem_TriggerClock*>           TriggerClockArray;                                        // 0x0030(0x0010) (ZeroConstructor)

	// Function ShadowTrackerExtra.OnTimeSpawnChallengeLevelRules.SpawnLevelDirector
	// (Native, Public)
	void SpawnLevelDirector(class AUAELevelDirector* LevelDirectorClass);// sub_1525A30()

	// Function ShadowTrackerExtra.OnTimeSpawnChallengeLevelRules.OnReceiveTriggerMsg
	// (Native, Public)
	void OnReceiveTriggerMsg(class UTriggerAction* TriggerActionconst struct FString& Msg);// sub_1524800()

	// Function ShadowTrackerExtra.OnTimeSpawnChallengeLevelRules.InitLevel
	// (Native, Public)
	void InitLevel();// sub_A57A70()


}

