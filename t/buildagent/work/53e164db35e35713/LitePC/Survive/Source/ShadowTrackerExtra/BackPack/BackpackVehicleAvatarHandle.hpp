

// Class ShadowTrackerExtra.BackpackVehicleAvatarHandle
// //Class ShadowTrackerExtra.BackpackVehicleAvatarHandle
//0x00B8 (0x01E0 - 0x0128)
class UBackpackVehicleAvatarHandle : public UBackpackCommonAvatarHandle
{
public:
	TArray<ESTExtraVehicleShapeType>                   SupportChangeTypes;                                       // 0x0128(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FItemAvatarData>                     BrokenMatData;                                            // 0x0138(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FVehicleBoostParticle>               BoostParticles;                                           // 0x0148(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0158(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ShadowTrackerExtra.BackpackVehicleAvatarHandle.FPPSkeletalMesh
	unsigned char                                      UnknownData01[0x28];                                      // 0x0180(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ShadowTrackerExtra.BackpackVehicleAvatarHandle.FPPStaticMesh
	TArray<struct FItemAvatarData>                     FPPMatData;                                               // 0x01A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData02[0x28];                                      // 0x01B8(0x0028) UNKNOWN PROPERTY: SoftClassProperty ShadowTrackerExtra.BackpackVehicleAvatarHandle.lobbyWheeledVehicle

}

