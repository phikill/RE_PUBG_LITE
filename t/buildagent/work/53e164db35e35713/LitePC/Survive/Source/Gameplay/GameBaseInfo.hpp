

// ScriptStruct Gameplay.GameBaseInfo
// 0x0080
struct FGameBaseInfo
{
	struct FString                                     GameSvrId;                                                // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     GameAppID;                                                // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     OpenID;                                                   // 0x0020(0x0010) (ZeroConstructor)
	int8_t                                             AreaID;                                                   // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	int8_t                                             PlatID;                                                   // 0x0031(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0032(0x0006) MISSED OFFSET
	struct FString                                     ZoneID;                                                   // 0x0038(0x0010) (ZeroConstructor)
	uint64_t                                           BattleID;                                                 // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     UserName;                                                 // 0x0050(0x0010) (ZeroConstructor)
	uint64_t                                           RoleID;                                                   // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	int8_t                                             RoleType;                                                 // 0x0068(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	struct FString                                     PicUrl;                                                   // 0x0070(0x0010) (ZeroConstructor)
};

