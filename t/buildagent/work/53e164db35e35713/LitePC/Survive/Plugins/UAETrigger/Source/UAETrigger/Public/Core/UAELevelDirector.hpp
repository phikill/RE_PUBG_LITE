

// Class UAETrigger.UAELevelDirector
// //Class UAETrigger.UAELevelDirector
//0x0080 (0x0440 - 0x03C0)
class AUAELevelDirector : public AActor
{
public:
	struct FUAELevelDirectorRepData                    LevelDirectorRepData;                                     // 0x03C0(0x0018) (Net, Transient)
	class UTriggersFlowTree*                           TriggersFlowTree;                                         // 0x03D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TMap<struct FString, class UUAETriggerObject*>     TriggerObjectMap;                                         // 0x03E0(0x0050) (ZeroConstructor)
	class UVariableSet*                                AllVariableSet;                                           // 0x0430(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0438(0x0008) MISSED OFFSET

	// Function UAETrigger.UAELevelDirector.StartLevelDirector
	// (Final, Native, Public, BlueprintCallable)
	unsigned char StartLevelDirector();// sub_2441FA0()

	// Function UAETrigger.UAELevelDirector.SetTriggerRunType
	// (Final, Native, Public, BlueprintCallable)
	void SetTriggerRunType(const struct FString& TriggerNameEUAETriggerRunType RunType);// sub_2441E80()

	// Function UAETrigger.UAELevelDirector.RequestTriggerComplete
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void RequestTriggerComplete(class UUAETriggerObject* CompleteTrigger);// sub_2441DC0()

	// Function UAETrigger.UAELevelDirector.OnRep_LevelDirectorData
	// (Final, Native, Private)
	void OnRep_LevelDirectorData();// sub_2441DA0()

	// Function UAETrigger.UAELevelDirector.InitialLevelDirector
	// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	unsigned char InitialLevelDirector();// sub_F15C40()

	// Function UAETrigger.UAELevelDirector.GetDataSet
	// (Final, Native, Public, BlueprintCallable)
	class UVariableSet* GetDataSet();// sub_2441D70()

	// Function UAETrigger.UAELevelDirector.FlowControllSubControll
	// (Final, Native, Public, BlueprintCallable)
	unsigned char FlowControllSubControll(TArray<struct FString> TriggerNames);// sub_2441BF0()

	// Function UAETrigger.UAELevelDirector.FlowControllOr
	// (Final, Native, Public, BlueprintCallable)
	unsigned char FlowControllOr(TArray<struct FString> TriggerNames);// sub_2441A70()

	// Function UAETrigger.UAELevelDirector.FlowControllOneSequence
	// (Final, Native, Public, BlueprintCallable)
	unsigned char FlowControllOneSequence(const struct FString& TriggerName);// sub_2441980()

	// Function UAETrigger.UAELevelDirector.FlowControllMultiSequence
	// (Final, Native, Public, BlueprintCallable)
	unsigned char FlowControllMultiSequence(TArray<struct FString> TriggerNames);// sub_2441800()

	// Function UAETrigger.UAELevelDirector.FlowControllAnd
	// (Final, Native, Public, BlueprintCallable)
	unsigned char FlowControllAnd(TArray<struct FString> TriggerNames);// sub_2441680()

	// Function UAETrigger.UAELevelDirector.AddTrigger
	// (Final, Native, Public, BlueprintCallable)
	unsigned char AddTrigger(const struct FString& TriggerNameclass UObject* TriggerClass);// sub_2441550()

	// Function UAETrigger.UAELevelDirector.AddEventToTrigger
	// (Final, Native, Public, BlueprintCallable)
	void AddEventToTrigger(const struct FString& TriggerNameclass UObject* Event);// sub_2441070()

	// Function UAETrigger.UAELevelDirector.AddConditionToTrigger
	// (Final, Native, Public, BlueprintCallable)
	class UTriggerCondition* AddConditionToTrigger(const struct FString& TriggerNameclass UObject* Condition);// sub_2440F40()

	// Function UAETrigger.UAELevelDirector.AddActionToTrigger
	// (Final, Native, Public, BlueprintCallable)
	class UTriggerAction* AddActionToTrigger(const struct FString& TriggerNameclass UObject* Action);// sub_2440E10()


}

