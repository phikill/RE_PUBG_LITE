

// ScriptStruct Gameplay.ClientJumpFlow
// 0x0080
struct FClientJumpFlow
{
	int64_t                                            ClientStartTime;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        MrpcsFlow;                                                // 0x0008(0x0010) (ZeroConstructor)
	struct FString                                     MapName;                                                  // 0x0018(0x0010) (ZeroConstructor)
	int8_t                                             WeatherID;                                                // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	int64_t                                            GameStartTime;                                            // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           StartJumpTime;                                            // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           EndJumpTime;                                              // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerJumpTime;                                           // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerOpenTime;                                           // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerLandTime;                                           // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerJumpPositionX;                                      // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerJumpPositionY;                                      // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerJumpPositionZ;                                      // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlaneJumpPositionX;                                       // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlaneJumpPositionY;                                       // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlaneJumpPositionZ;                                       // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerLandPositionX;                                      // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerLandPositionY;                                      // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerLandPositionZ;                                      // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerLandDistance;                                       // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerSpeedMax1;                                          // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerSpeedMax2;                                          // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
};

