

// Class ShadowTrackerExtra.PlayerTombBox
// //Class ShadowTrackerExtra.PlayerTombBox
//0x0058 (0x0418 - 0x03C0)
class APlayerTombBox : public AActor
{
public:
	struct FName                                       TombName;                                                 // 0x03C0(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	class ASTExtraBaseCharacter*                       TargetPlayer;                                             // 0x03C8(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	class ASTExtraBaseCharacter*                       DamageCauser;                                             // 0x03D0(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                DeadTime;                                                 // 0x03D8(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bDisableCollision : 1;                                    // 0x03DC(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03DD(0x0003) MISSED OFFSET
	class AActor*                                      AttachedActor;                                            // 0x03E0(0x0008) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsLastDiedInTeam : 1;                                    // 0x03E8(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03E9(0x0007) MISSED OFFSET
	class APickUpListWrapperActor*                     ListWrapperActor;                                         // 0x03F0(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x03F8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      bAirDropInnerBox : 1;                                     // 0x0400(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0401(0x0007) MISSED OFFSET
	class UBuoyancyForceComponent*                     BuoyancyForceComponent;                                   // 0x0408(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0410(0x0008) MISSED OFFSET

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

