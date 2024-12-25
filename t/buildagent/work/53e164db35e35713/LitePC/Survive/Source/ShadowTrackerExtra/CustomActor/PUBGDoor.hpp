

// Class ShadowTrackerExtra.PUBGDoor
// //Class ShadowTrackerExtra.PUBGDoor
//0x00D0 (0x04A0 - 0x03D0)
class APUBGDoor : public AUAENetActor
{
public:
	class UDoorInteractionComponent*                   InteractionTsl;                                           // 0x03D0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      bDebugDraw : 1;                                           // 0x03D8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03D9(0x0003) MISSED OFFSET
	float                                              autoOpenDistanceSquared;                                  // 0x03DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              autoOpenAngel;                                            // 0x03E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              forwardSpeedRatio;                                        // 0x03E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                DoorState;                                                // 0x03E8(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      DoorBroken : 1;                                           // 0x03EC(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03ED(0x0003) MISSED OFFSET
	class UStaticMeshComponent*                        doorMesh;                                                 // 0x03F0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              InteractValidAngle;                                       // 0x03F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03FC(0x0004) MISSED OFFSET
	class UBoxComponent*                               interactionBox;                                           // 0x0400(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      bDoubleDoor : 1;                                          // 0x0408(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0409(0x0003) MISSED OFFSET
	int                                                DoorStateEx;                                              // 0x040C(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      DoorBrokenEx : 1;                                         // 0x0410(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0411(0x0007) MISSED OFFSET
	class UStaticMeshComponent*                        doorMeshEx;                                               // 0x0418(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               interactionBoxEx;                                         // 0x0420(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	float                                              InteractDelay;                                            // 0x0428(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NetCullingDistanceOnVeryLowDevice;                        // 0x042C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	struct FQuat                                       PrevQuat;                                                 // 0x0430(0x0010) (IsPlainOldData)
	struct FRotator                                    PrevRotation;                                             // 0x0440(0x000C) (IsPlainOldData)
	struct FVector                                     PrevOrigin;                                               // 0x044C(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData05[0x8];                                       // 0x0458(0x0008) MISSED OFFSET
	struct FQuat                                       PrevQuatEx;                                               // 0x0460(0x0010) (IsPlainOldData)
	struct FRotator                                    PrevRotationEx;                                           // 0x0470(0x000C) (IsPlainOldData)
	struct FVector                                     PrevOriginEx;                                             // 0x047C(0x000C) (IsPlainOldData)
	unsigned char                                      bAutoOpenTriggered : 1;                                   // 0x0488(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06 : 8;                                        // 0x0489(0x0001)
	unsigned char                                      bAutoOpenStated : 1;                                      // 0x0489(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07 : 8;                                        // 0x048A(0x0001)
	unsigned char                                      bTriggeredDoor : 1;                                       // 0x048A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08 : 8;                                        // 0x048B(0x0001)
	unsigned char                                      bAutoOpenTriggeredEx : 1;                                 // 0x048B(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09 : 8;                                        // 0x048C(0x0001)
	unsigned char                                      bAutoOpenStatedEx : 1;                                    // 0x048C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10 : 8;                                        // 0x048D(0x0001)
	unsigned char                                      bTriggeredDoorEx : 1;                                     // 0x048D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x2];                                       // 0x048E(0x0002) MISSED OFFSET
	class ACharacter*                                  PlayerCharacter;                                          // 0x0490(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              autoOpenAngelCosinValue;                                  // 0x0498(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsInDoorCollisionBox : 1;                                 // 0x049C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12 : 8;                                        // 0x049D(0x0001)
	unsigned char                                      IsInDoorCollisionBoxEx : 1;                               // 0x049D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x2];                                       // 0x049E(0x0002) MISSED OFFSET

	// Function ShadowTrackerExtra.PUBGDoor.SetDoorBroken
	// (Final, Native, Public, BlueprintCallable)
	void SetDoorBroken(unsigned char bExtraDoorclass ASTExtraPlayerController* InstigatedPlayerController);// sub_A8AB50()

	// Function ShadowTrackerExtra.PUBGDoor.RefreshUIOnClient
	// (Final, Native, Public, BlueprintCallable)
	void RefreshUIOnClient();// sub_A8AAF0()

	// Function ShadowTrackerExtra.PUBGDoor.PushCharacterOnDoorWayEx
	// (Final, Native, Public, BlueprintCallable)
	void PushCharacterOnDoorWayEx();// sub_A8AAD0()

	// Function ShadowTrackerExtra.PUBGDoor.PushCharacterOnDoorWay
	// (Final, Native, Public, BlueprintCallable)
	void PushCharacterOnDoorWay();// sub_A8AAB0()

	// Function ShadowTrackerExtra.PUBGDoor.OpenDoorBy
	// (Final, Native, Public)
	void OpenDoorBy(class ACharacter* Characterunsigned char extraDoor);// sub_A8A9E0()

	// Function ShadowTrackerExtra.PUBGDoor.OnRep_RepDoorStateEx
	// (Final, Native, Public)
	void OnRep_RepDoorStateEx();// sub_A8A9C0()

	// Function ShadowTrackerExtra.PUBGDoor.OnRep_RepDoorState
	// (Final, Native, Public)
	void OnRep_RepDoorState();// sub_A8A9A0()

	// Function ShadowTrackerExtra.PUBGDoor.OnRep_RepDoorBrokenEx
	// (Final, Native, Public)
	void OnRep_RepDoorBrokenEx();// sub_A8A980()

	// Function ShadowTrackerExtra.PUBGDoor.OnRep_RepDoorBroken
	// (Final, Native, Public)
	void OnRep_RepDoorBroken();// sub_A8A960()

	// Function ShadowTrackerExtra.PUBGDoor.OnInteractBy
	// (Native, Protected)
	void OnInteractBy(class ASTExtraBaseCharacter* OtherCharacter);// sub_A8A710()

	// Function ShadowTrackerExtra.PUBGDoor.OnEndOverlapEx
	// (Final, Native, Public)
	void OnEndOverlapEx(class UPrimitiveComponent* activatedCompclass AActor* OtherActorclass UPrimitiveComponent* OtherCompint OtherBodyIndex);// sub_A8A5D0()

	// Function ShadowTrackerExtra.PUBGDoor.OnEndOverlap
	// (Final, Native, Public)
	void OnEndOverlap(class UPrimitiveComponent* activatedCompclass AActor* OtherActorclass UPrimitiveComponent* OtherCompint OtherBodyIndex);// sub_A8A490()

	// Function ShadowTrackerExtra.PUBGDoor.OnDoorRPC
	// (Final, Native, Public, BlueprintCallable)
	void OnDoorRPC(class ACharacter* Characterunsigned char bAimingExtraDoor);// sub_A8A3C0()

	// Function ShadowTrackerExtra.PUBGDoor.OnBeginOverlapEx
	// (Final, Native, Public, HasOutParms)
	void OnBeginOverlapEx(class UPrimitiveComponent* activatedCompclass AActor* OtherActorclass UPrimitiveComponent* OtherCompint OtherBodyIndexunsigned char bFromSweepconst struct FHitResult& SweepResult);// sub_A8A1D0()

	// Function ShadowTrackerExtra.PUBGDoor.OnBeginOverlap
	// (Final, Native, Public, HasOutParms)
	void OnBeginOverlap(class UPrimitiveComponent* activatedCompclass AActor* OtherActorclass UPrimitiveComponent* OtherCompint OtherBodyIndexunsigned char bFromSweepconst struct FHitResult& SweepResult);// sub_A89FE0()

	// Function ShadowTrackerExtra.PUBGDoor.IsAimingExtraDoor
	// (Final, Native, Public, BlueprintCallable)
	unsigned char IsAimingExtraDoor(class ACharacter* Character);// sub_A89F50()

	// Function ShadowTrackerExtra.PUBGDoor.Init
	// (Final, Native, Public, BlueprintCallable)
	void Init(class UBoxComponent* interactionBoxclass UStaticMeshComponent* doorMeshunsigned char inDoubleDoorclass UBoxComponent* interactionBoxExclass UStaticMeshComponent* doorMeshEx);// sub_A89D90()

	// Function ShadowTrackerExtra.PUBGDoor.ForceNetUpdate
	// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	void ForceNetUpdate();// sub_A89A10()

	// Function ShadowTrackerExtra.PUBGDoor.CloseDoorBy
	// (Final, Native, Public)
	void CloseDoorBy(class ACharacter* Characterunsigned char extraDoor);// sub_A89940()

	// Function ShadowTrackerExtra.PUBGDoor.BP_DoorBroken
	// (Event, Public, BlueprintEvent)
	void BP_DoorBroken(unsigned char isBeginPlayunsigned char bExtraDoor);// sub_1B0A820()

	// Function ShadowTrackerExtra.PUBGDoor.ActionDoorOnClient
	// (Event, Public, BlueprintEvent)
	void ActionDoorOnClient(int doorStateDstunsigned char bExtraDoor);// sub_1B0A820()

	// Function ShadowTrackerExtra.PUBGDoor.ActionDoorImmediatly
	// (Event, Public, BlueprintEvent)
	void ActionDoorImmediatly(int doorStateDstunsigned char bExtraDoor);// sub_1B0A820()


}

