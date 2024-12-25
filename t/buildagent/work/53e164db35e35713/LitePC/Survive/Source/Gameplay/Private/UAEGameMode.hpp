

// Class Gameplay.UAEGameMode
// //Class Gameplay.UAEGameMode
//0x0990 (0x0E20 - 0x0490)
class AUAEGameMode : public AGameMode
{
public:
	float                                              GridCheckSize;                                            // 0x0490(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeepCheckSize;                                            // 0x0494(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxPlayerLimit;                                           // 0x0498(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnableClimbing : 1;                                      // 0x049C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x049D(0x0007) MISSED OFFSET
	int                                                MaxAllowReplicatedCharacterCount;                         // 0x04A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AINoRepTimeInReady;                                       // 0x04A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04AC(0x0004) MISSED OFFSET
	class AUAEOBState*                                 ObserverPlayerStateClass;                                 // 0x04B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoClear, IsPlainOldData)
	struct FString                                     ItemTableName;                                            // 0x04B8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     ItemClassPath;                                            // 0x04C8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     PickupBoxConfigClassPath;                                 // 0x04D8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     PickupBoxConfigDataTableName;                             // 0x04E8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     VehicleTableName;                                         // 0x04F8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     VehicleClassPath;                                         // 0x0508(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<struct FString, float>                        BattleCustomConfig;                                       // 0x0518(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class UGroupSpotSceneComponent*>            ItemGroupComponents;                                      // 0x0568(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData02[0x708];                                     // 0x0578(0x0708) MISSED OFFSET
	unsigned char                                      bEnableDamage : 1;                                        // 0x0C80(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0xCF];                                      // 0x0C81(0x00CF) MISSED OFFSET
	float                                              OBInfoTimeStep;                                           // 0x0D50(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3C];                                      // 0x0D54(0x003C) MISSED OFFSET
	TArray<class AUAEPlayerController*>                ObserverControllerList;                                   // 0x0D90(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData05[0x80];                                      // 0x0DA0(0x0080) MISSED OFFSET

	// Function Gameplay.UAEGameMode.SaveSpotGroupPropertyData
	// (Final, Native, Public)
	void SaveSpotGroupPropertyData();// sub_1580360()

	// Function Gameplay.UAEGameMode.RegisterItemGroupSpotsByTag
	// (Native, Public)
	void RegisterItemGroupSpotsByTag(const struct FName& Tagclass UGroupSpotSceneComponent* GroupSpotComponent);// sub_1580290()

	// Function Gameplay.UAEGameMode.RegisterItemGroupSpots
	// (Native, Public)
	void RegisterItemGroupSpots(class UGroupSpotSceneComponent* GroupSpotComponent);// sub_390A90()

	// Function Gameplay.UAEGameMode.OnMsg
	// (Native, Public, BlueprintCallable)
	void OnMsg(const struct FString& Msg);// sub_15801B0()

	// Function Gameplay.UAEGameMode.OnAirDropBoxLanded
	// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	void OnAirDropBoxLanded(int boxIdconst struct FVector& Pos);// sub_157FFB0()

	// Function Gameplay.UAEGameMode.OnAirDropBoxEmpty
	// (Native, Public)
	void OnAirDropBoxEmpty(int boxId);// sub_157FF20()

	// Function Gameplay.UAEGameMode.InitGenerator
	// (Native, Public)
	void InitGenerator();// sub_157FC40()

	// Function Gameplay.UAEGameMode.GetPlayerStateListWithTeamID
	// (Final, Native, Public, Const)
	TArray<class AUAEPlayerState*> GetPlayerStateListWithTeamID(int TeamID);// sub_157FA50()

	// Function Gameplay.UAEGameMode.GetPlayerControllerListWithTeamID
	// (Final, Native, Public, Const)
	TArray<class AUAEPlayerController*> GetPlayerControllerListWithTeamID(int TeamID);// sub_157F900()

	// Function Gameplay.UAEGameMode.FindPlayerStateWithPlayerKey
	// (Final, Native, Public, Const)
	class AUAEPlayerState* FindPlayerStateWithPlayerKey(uint32_t PlayerKey);// sub_157F260()

	// Function Gameplay.UAEGameMode.FindPlayerControllerWithPlayerKey
	// (Final, Native, Public, Const)
	class AUAEPlayerController* FindPlayerControllerWithPlayerKey(uint32_t PlayerKey);// sub_157F1D0()

	// Function Gameplay.UAEGameMode.AddAirDropBox
	// (Native, Public, HasOutParms, HasDefaults)
	void AddAirDropBox(int boxIdconst struct FVector& Pos);// sub_157F070()


}

