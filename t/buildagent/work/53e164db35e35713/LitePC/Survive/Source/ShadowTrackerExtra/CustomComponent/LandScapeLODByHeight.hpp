

// Class ShadowTrackerExtra.LandScapeLODByHeight
// //Class ShadowTrackerExtra.LandScapeLODByHeight
//0x0030 (0x0138 - 0x0108)
class ULandScapeLODByHeight : public UActorComponent
{
public:
	TArray<struct FHeightLOD>                          heightLODMapping;                                         // 0x0108(0x0010) (Edit, ZeroConstructor)
	int                                                CheckInternal;                                            // 0x0118(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CurrentGroundHeight;                                      // 0x011C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0120(0x0008) MISSED OFFSET
	class APlayerController*                           Player;                                                   // 0x0128(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0130(0x0008) MISSED OFFSET

	// Function ShadowTrackerExtra.LandScapeLODByHeight.Stop
	// (Final, Native, Public, BlueprintCallable)
	void Stop();// sub_F8CB80()

	// Function ShadowTrackerExtra.LandScapeLODByHeight.Start
	// (Final, Native, Public, BlueprintCallable)
	void Start();// sub_F8CB60()

	// Function ShadowTrackerExtra.LandScapeLODByHeight.MappingLODByHeight
	// (Final, Native, Private)
	void MappingLODByHeight();// sub_F8BEB0()


}

