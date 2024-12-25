

// Class ShadowTrackerExtra.CharacterWeaponManagerComponent
// //Class ShadowTrackerExtra.CharacterWeaponManagerComponent
//0x0058 (0x05D0 - 0x0578)
class UCharacterWeaponManagerComponent : public UWeaponManagerComponent
{
public:
	float                                              AttachCheckInterval;                                      // 0x0578(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AttachCheckDistance;                                      // 0x057C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RefreshUIIntervalAfterReconnect;                          // 0x0580(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RefreshUITimesAfterReconnect;                             // 0x0584(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ASTExtraPlayerCharacter*                     OwnerCharacter;                                           // 0x0588(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0590(0x0018) MISSED OFFSET
	TArray<struct FWeaponReconnectReplicateDataWrapper> PreWeaponReconnectReplicateDataWrapperList;               // 0x05A8(0x0010) (ZeroConstructor)
	TArray<struct FWeaponReconnectReplicateDataWrapper> WeaponReconnectReplicateDataWrapperList;                  // 0x05B8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x05C8(0x0008) MISSED OFFSET

	// Function ShadowTrackerExtra.CharacterWeaponManagerComponent.UpdateDataWhenBagChangedOnServer
	// (Final, Native, Protected)
	void UpdateDataWhenBagChangedOnServer(const struct FItemDefineID& DefineIDEBattleItemOperationType operationTypeunsigned char Reason);// sub_1D5A170()

	// Function ShadowTrackerExtra.CharacterWeaponManagerComponent.UpdateDataWhenBagChangedOnAutonomous
	// (Final, Native, Protected)
	void UpdateDataWhenBagChangedOnAutonomous();// sub_1D5A150()

	// Function ShadowTrackerExtra.CharacterWeaponManagerComponent.OnRecoverOnServer
	// (Native, Protected)
	void OnRecoverOnServer();// sub_16AAD00()

	// Function ShadowTrackerExtra.CharacterWeaponManagerComponent.OnReconnectOnServer
	// (Native, Protected)
	void OnReconnectOnServer();// sub_B919A0()

	// Function ShadowTrackerExtra.CharacterWeaponManagerComponent.OnReconnectOnClient
	// (Native, Protected)
	void OnReconnectOnClient();// sub_B91980()

	// Function ShadowTrackerExtra.CharacterWeaponManagerComponent.OnDisconnectToClientOnServer
	// (Final, Native, Protected)
	void OnDisconnectToClientOnServer();// sub_1D59640()

	// Function ShadowTrackerExtra.CharacterWeaponManagerComponent.GetBagLevel
	// (Native, Public, BlueprintCallable)
	int GetBagLevel();// sub_B90D30()


}


