

// Class ShadowTrackerExtra.SceneCaptureCharacter
// //Class ShadowTrackerExtra.SceneCaptureCharacter
//0x0040 (0x0830 - 0x07F0)
class ASceneCaptureCharacter : public ACharacter
{
public:
	class UCharacterAvatarComponent*                   AvatarComponent;                                          // 0x07F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCharacterWeaponManagerComponent*            WeaponManagerComponent;                                   // 0x07F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0800(0x0030) MISSED OFFSET

	// Function ShadowTrackerExtra.SceneCaptureCharacter.SpawnAndBackpackWeaponOnServer
	// (Final, Native, Public, BlueprintCallable)
	class ASTExtraWeapon* SpawnAndBackpackWeaponOnServer(class ASTExtraWeapon* Templateconst struct FItemDefineID& IDconst struct FName& LogicSocketunsigned char bAutoUseunsigned char bResetBulletNum);// sub_A8AC10()

	// Function ShadowTrackerExtra.SceneCaptureCharacter.GetWeaponManager
	// (Final, Native, Public, BlueprintCallable)
	class UWeaponManagerComponent* GetWeaponManager();// sub_A89D60()

	// Function ShadowTrackerExtra.SceneCaptureCharacter.GetSlotID
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	int GetSlotID();// sub_A89D30()

	// Function ShadowTrackerExtra.SceneCaptureCharacter.GetNickName
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	struct FString GetNickName();// sub_A89BF0()

	// Function ShadowTrackerExtra.SceneCaptureCharacter.GetNetId
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	struct FString GetNetId();// sub_A89B70()


}

