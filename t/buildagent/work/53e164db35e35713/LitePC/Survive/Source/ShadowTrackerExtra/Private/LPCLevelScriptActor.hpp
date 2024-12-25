

// Class ShadowTrackerExtra.LPCLevelScriptActor
// //Class ShadowTrackerExtra.LPCLevelScriptActor
//0x0020 (0x03E8 - 0x03C8)
class ALPCLevelScriptActor : public ALevelScriptActor
{
public:
	TArray<struct FWeatherLevelInfo>                   WeatherLevelInfoList;                                     // 0x03C8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	int                                                DefaultWeatherLevelIndex;                                 // 0x03D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SelectedWeatherLevelIndex;                                // 0x03DC(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	int                                                PrevWeatherLevelIndex;                                    // 0x03E0(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03E4(0x0004) MISSED OFFSET

	// Function ShadowTrackerExtra.LPCLevelScriptActor.OnRep_SelectedWeatherIndex
	// (Final, Native, Private)
	void OnRep_SelectedWeatherIndex();// sub_F91040()

	// Function ShadowTrackerExtra.LPCLevelScriptActor.OnRep_PrevWeatherLevelIndex
	// (Final, Native, Private)
	void OnRep_PrevWeatherLevelIndex();// sub_F91020()


}

