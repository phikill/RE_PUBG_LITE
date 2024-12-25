

// ScriptStruct Gameplay.PlayerRouteFlow
// 0x0060
struct FPlayerRouteFlow
{
	struct FString                                     GameAppID;                                                // 0x0000(0x0010) (ZeroConstructor)
	int8_t                                             PlatID;                                                   // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FString                                     OpenID;                                                   // 0x0018(0x0010) (ZeroConstructor)
	uint64_t                                           UID;                                                      // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           BattleID;                                                 // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	int8_t                                             SeasonID;                                                 // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	TArray<struct FPosAndTime>                         Route;                                                    // 0x0040(0x0010) (ZeroConstructor)
	struct FPosAndTime                                 End;                                                      // 0x0050(0x0010)
};

