

// Class ShadowTrackerExtra.VehicleAvatarComponent
// //Class ShadowTrackerExtra.VehicleAvatarComponent
//0x0038 (0x0280 - 0x0248)
class UVehicleAvatarComponent : public UItemAvatarComponentBase
{
public:
	struct FScriptMulticastDelegate                    VehicleAvatarEqiuped;                                     // 0x0248(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      bFPPMeshLoading : 1;                                      // 0x0258(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00 : 8;                                        // 0x0259(0x0001)
	unsigned char                                      bFPPMeshLoaded : 1;                                       // 0x0259(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x025A(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    VehicleLoadedFPPMesh;                                     // 0x0260(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<struct FVehicleBoostParticle>               VehicleBoostParticles;                                    // 0x0270(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	// Function ShadowTrackerExtra.VehicleAvatarComponent.SetBoostParticleSystem
	// (Final, Native, Public)
	void SetBoostParticleSystem();// sub_1B20360()

	// Function ShadowTrackerExtra.VehicleAvatarComponent.PreChangeVehicleFPPMode
	// (Final, Native, Public, BlueprintCallable)
	void PreChangeVehicleFPPMode();// sub_1B1E8E0()

	// Function ShadowTrackerExtra.VehicleAvatarComponent.PreChangeVehicleBrokenMataterial
	// (Final, Native, Public, BlueprintCallable)
	void PreChangeVehicleBrokenMataterial();// sub_1B1E8C0()

	// Function ShadowTrackerExtra.VehicleAvatarComponent.PreChangeVehicleAvatar
	// (Final, Native, Public, BlueprintCallable)
	void PreChangeVehicleAvatar(int InItemID);// sub_1B1E840()

	// Function ShadowTrackerExtra.VehicleAvatarComponent.PreChangeItemAvatar
	// (Final, Native, Public, BlueprintCallable)
	void PreChangeItemAvatar(int InItemID);// sub_F8C310()

	// Function ShadowTrackerExtra.VehicleAvatarComponent.PostChangeItemAvatar
	// (Final, Native, Public, BlueprintCallable)
	void PostChangeItemAvatar();// sub_457970()

	// Function ShadowTrackerExtra.VehicleAvatarComponent.GetVehicleFPPStaticMeshPath
	// (Final, Native, Public, HasDefaults)
	struct FSoftObjectPath GetVehicleFPPStaticMeshPath();// sub_1B1DB70()

	// Function ShadowTrackerExtra.VehicleAvatarComponent.GetVehicleFPPSkeletalMeshPath
	// (Final, Native, Public, HasDefaults)
	struct FSoftObjectPath GetVehicleFPPSkeletalMeshPath();// sub_1B1DB20()

	// Function ShadowTrackerExtra.VehicleAvatarComponent.GetVehicleFPPMatPath
	// (Final, Native, Public)
	TArray<struct FItemAvatarMatPath> GetVehicleFPPMatPath();// sub_1B1DAA0()

	// Function ShadowTrackerExtra.VehicleAvatarComponent.GetVehicleBrokenMatPath
	// (Final, Native, Public)
	TArray<struct FItemAvatarMatPath> GetVehicleBrokenMatPath();// sub_1B1DA20()

	// Function ShadowTrackerExtra.VehicleAvatarComponent.GetItemAvatarHandle
	// (Event, Public, BlueprintEvent)
	class UBackpackCommonAvatarHandle* GetItemAvatarHandle(int ItemID);// sub_1B0A820()

	// Function ShadowTrackerExtra.VehicleAvatarComponent.GetBoostParticles
	// (Final, Native, Public)
	TArray<struct FVehicleBoostParticle> GetBoostParticles();// sub_1B1D580()

	// Function ShadowTrackerExtra.VehicleAvatarComponent.ExitFPPVehicle
	// (Final, Native, Public)
	void ExitFPPVehicle();// sub_1B1D450()

	// Function ShadowTrackerExtra.VehicleAvatarComponent.EnterFPPVehicle
	// (Final, Native, Public)
	void EnterFPPVehicle();// sub_1B1D430()


}

