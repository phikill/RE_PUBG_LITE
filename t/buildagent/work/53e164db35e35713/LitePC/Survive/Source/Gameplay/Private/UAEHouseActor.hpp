

// Class Gameplay.UAEHouseActor
// //Class Gameplay.UAEHouseActor
//0x00D8 (0x04A8 - 0x03D0)
class AUAEHouseActor : public AUAENetActor
{
public:
	float                                              WindowHideDistanceSquared;                                // 0x03D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WindowLoadDistanceSquared;                                // 0x03D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WindowLoadDistanceSquaredOnVeryLowDevice;                 // 0x03D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WindowLoadDistanceSquaredOnServer;                        // 0x03DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FUAEWindowRepData>                   WindowList;                                               // 0x03E0(0x0010) (Net, ZeroConstructor)
	TMap<int, class UUAEWindowComponent*>              WindowComponents;                                         // 0x03F0(0x0050) (ExportObject, ZeroConstructor, Transient)
	unsigned char                                      bEnableWindow : 1;                                        // 0x0440(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x67];                                      // 0x0441(0x0067) MISSED OFFSET

	// Function Gameplay.UAEHouseActor.OnRep_WindowList
	// (Final, Native, Private)
	void OnRep_WindowList();// sub_E03E30()

	// Function Gameplay.UAEHouseActor.BroadcastWindowRepDataUpdated
	// (Net, NetReliable, Native, Event, NetMulticast, Public)
	void BroadcastWindowRepDataUpdated(const struct FUAEWindowRepData& InRepData);// sub_E021B0()


}

