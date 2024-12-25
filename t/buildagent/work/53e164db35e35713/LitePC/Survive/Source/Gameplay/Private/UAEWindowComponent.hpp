

// Class Gameplay.UAEWindowComponent
// //Class Gameplay.UAEWindowComponent
//0x0070 (0x07C0 - 0x0750)
class UUAEWindowComponent : public UStaticMeshComponent
{
public:
	class APawn*                                       LastInstigatorPawn;                                       // 0x0750(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UStaticMesh*                                 BrokenMesh;                                               // 0x0758(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             BrokenEffect;                                             // 0x0760(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0768(0x0058) MISSED OFFSET

	// Function Gameplay.UAEWindowComponent.NotifyServerBroken
	// (Event, Protected, BlueprintEvent)
	void NotifyServerBroken();// sub_1B0A820()

	// Function Gameplay.UAEWindowComponent.NotifyRepDataUpdated
	// (Final, Native, Protected)
	void NotifyRepDataUpdated(unsigned char bInitialunsigned char bLocal);// sub_E03C80()

	// Function Gameplay.UAEWindowComponent.LocalHandleWindowBrokenBP
	// (Event, Protected, BlueprintEvent)
	void LocalHandleWindowBrokenBP(unsigned char bInitialunsigned char bLocal);// sub_1B0A820()

	// Function Gameplay.UAEWindowComponent.LocalHandleWindowBroken
	// (Final, Native, Protected, BlueprintCallable)
	void LocalHandleWindowBroken(unsigned char bInitialunsigned char bLocal);// sub_E03BB0()

	// Function Gameplay.UAEWindowComponent.HandleBroken
	// (Final, Native, Public, BlueprintCallable)
	void HandleBroken(class APlayerController* Instigatorunsigned char bLocal);// sub_E03760()

	// Function Gameplay.UAEWindowComponent.GetRepData
	// (Final, Native, Public, BlueprintCallable)
	struct FUAEWindowRepData GetRepData();// sub_E02DF0()


}

