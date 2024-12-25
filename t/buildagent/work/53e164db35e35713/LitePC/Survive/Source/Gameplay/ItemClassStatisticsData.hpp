

// ScriptStruct Gameplay.ItemClassStatisticsData
// 0x0030 (0x0038 - 0x0008)
struct FItemClassStatisticsData : public FTableRowBase
{
	struct FString                                     ItemPath;                                                 // 0x0008(0x0010) (ZeroConstructor)
	unsigned char                                      bValidPath : 1;                                           // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	int                                                ItemCount;                                                // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     ItemTogetherPath;                                         // 0x0020(0x0010) (ZeroConstructor)
	int                                                ItemTogetherCount;                                        // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bValidTogetherPath : 1;                                   // 0x0034(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
};

