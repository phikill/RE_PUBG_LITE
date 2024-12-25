

// Class ShadowTrackerExtra.GameModeDataAsset
// //Class ShadowTrackerExtra.GameModeDataAsset
//0x0020 (0x0050 - 0x0030)
class UGameModeDataAsset : public UDataAsset
{
public:
	TArray<float>                                      Probabilities;                                            // 0x0030(0x0010) (Edit, ZeroConstructor)
	TArray<struct FGameModeParam>                      GameModeParams;                                           // 0x0040(0x0010) (Edit, ZeroConstructor)

}

