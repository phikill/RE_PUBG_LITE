

// Class ShadowTrackerExtra.FakeTombBox
// //Class ShadowTrackerExtra.FakeTombBox
//0x0000 (0x0418 - 0x0418)
class AFakeTombBox : public APlayerTombBox
{
public:

	// Function ShadowTrackerExtra.PlayerTombBox.SwitchToDeadTombBox
	// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	void SwitchToDeadTombBox();// sub_394D10()

	// Function ShadowTrackerExtra.PlayerTombBox.OnRep_AttachmentReplication
	// (Native, Public)
	void OnRep_AttachmentReplication();// sub_C56030()

	// Function ShadowTrackerExtra.PlayerTombBox.OnRep_AttachedActor
	// (Final, Native, Protected)
	void OnRep_AttachedActor();// sub_108F120()

	// Function ShadowTrackerExtra.PlayerTombBox.HideDeadTombApparence
	// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	void HideDeadTombApparence();// sub_394CF0()

	// Function ShadowTrackerExtra.PlayerTombBox.GeneratePlayerBackpackWrappers
	// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	void GeneratePlayerBackpackWrappers();// sub_394D50()

	// Function ShadowTrackerExtra.PlayerTombBox.GenerateAirDropBoxWrappers
	// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	void GenerateAirDropBoxWrappers(TArray<struct FAirDropBoxGenerateWrapperItemData> DataListconst struct FText& AirBoxName);// sub_108EFA0()


}

