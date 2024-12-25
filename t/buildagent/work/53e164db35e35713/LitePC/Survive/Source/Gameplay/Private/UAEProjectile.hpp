

// Class Gameplay.UAEProjectile
// //Class Gameplay.UAEProjectile
//0x0018 (0x03D8 - 0x03C0)
class AUAEProjectile : public AActor
{
public:
	unsigned char                                      IsServerAlreadyExplodedCpp : 1;                           // 0x03C0(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03C1(0x0003) MISSED OFFSET
	int                                                ItemDefineID;                                             // 0x03C4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x03C8(0x0010) MISSED OFFSET

	// Function Gameplay.UAEProjectile.SetRotationAndLocationByNormal
	// (Final, Native, Public, BlueprintCallable)
	void SetRotationAndLocationByNormal(class USceneComponent* Comp);// sub_E04E50()

	// Function Gameplay.UAEProjectile.ServerFireWeapon
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void ServerFireWeapon(const struct FAttackId& AttackId);// sub_E04A10()

	// Function Gameplay.UAEProjectile.SendFireWeapon
	// (Final, Native, Public, BlueprintCallable)
	void SendFireWeapon();// sub_E048E0()

	// Function Gameplay.UAEProjectile.OnStartFly
	// (Final, Native, Public, BlueprintCallable)
	void OnStartFly();// sub_E03E50()

	// Function Gameplay.UAEProjectile.OnRep_IsServerAlreadyExplodedCpp
	// (Final, Native, Public)
	void OnRep_IsServerAlreadyExplodedCpp();// sub_E03DB0()

	// Function Gameplay.UAEProjectile.IsServerAlreadyExplodedCppNotify
	// (Native, Event, Public, BlueprintEvent)
	void IsServerAlreadyExplodedCppNotify();// sub_394D30()

	// Function Gameplay.UAEProjectile.IsOwnerAutomous
	// (Final, Native, Public, BlueprintCallable)
	unsigned char IsOwnerAutomous();// sub_E03A60()

	// Function Gameplay.UAEProjectile.GlassDetect
	// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	void GlassDetect(const struct FVector& Startconst struct FVector& End);// sub_E03680()

	// Function Gameplay.UAEProjectile.GetStartFlyPos
	// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	void GetStartFlyPos(struct FVector* Out);// sub_E02ED0()


}

