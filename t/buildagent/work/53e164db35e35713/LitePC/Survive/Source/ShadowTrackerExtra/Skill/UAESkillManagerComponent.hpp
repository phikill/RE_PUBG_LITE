

// Class ShadowTrackerExtra.UAESkillManagerComponent
// //Class ShadowTrackerExtra.UAESkillManagerComponent
//0x0078 (0x0258 - 0x01E0)
class UUAESkillManagerComponent : public UUTSkillManagerComponent
{
public:
	TArray<struct FUTSkillEntryConfig>                 SkillEntryConfigs;                                        // 0x01E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x68];                                      // 0x01F0(0x0068) MISSED OFFSET

	// Function ShadowTrackerExtra.UAESkillManagerComponent.TriggerEvent
	// (Native, Public, BlueprintCallable)
	void TriggerEvent(int SkillIDTEnumAsByte<EUTSkillEventType> EventType);// sub_445950()

	// Function ShadowTrackerExtra.UAESkillManagerComponent.TriggerCurSkillEvent
	// (Native, Public, BlueprintCallable)
	void TriggerCurSkillEvent(TEnumAsByte<EUAESkillEvent> UAEEvent);// sub_4457D0()

	// Function ShadowTrackerExtra.UAESkillManagerComponent.TouchCancelSkillLock
	// (Final, Native, Public, BlueprintCallable)
	void TouchCancelSkillLock();// sub_4457B0()

	// Function ShadowTrackerExtra.UAESkillManagerComponent.ShouldDropBagItem
	// (Final, Native, Public, HasOutParms, BlueprintCallable)
	unsigned char ShouldDropBagItem(const struct FItemDefineID& SkillItemID);// sub_444D70()

	// Function ShadowTrackerExtra.UAESkillManagerComponent.SetSkillOwner
	// (Final, Native, Public, BlueprintCallable)
	void SetSkillOwner(class APawn* Pawn);// sub_444B80()

	// Function ShadowTrackerExtra.UAESkillManagerComponent.ServerTriggerCurSkillEvent
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void ServerTriggerCurSkillEvent(TEnumAsByte<EUAESkillEvent> UAEEvent);// sub_444A50()

	// Function ShadowTrackerExtra.UAESkillManagerComponent.InsertGrenadeIDToName
	// (Final, Native, Public, BlueprintCallable)
	void InsertGrenadeIDToName(int GrenadeIDconst struct FName& Name);// sub_443CD0()

	// Function ShadowTrackerExtra.UAESkillManagerComponent.InsertGrenadeIDInOrder
	// (Final, Native, Public, BlueprintCallable)
	void InsertGrenadeIDInOrder(int GrenadeID);// sub_443C50()

	// Function ShadowTrackerExtra.UAESkillManagerComponent.GetSkillByEntry
	// (Native, Public, BlueprintCallable, BlueprintPure, Const)
	class AUTSkill* GetSkillByEntry(EUTSkillEntry Entry);// sub_442D30()


}

