

// ScriptStruct Gameplay.UAEWindowRepData
// 0x0050
struct FUAEWindowRepData
{
	struct FTransform                                  Transform;                                                // 0x0000(0x0030) (IsPlainOldData)
	struct FString                                     PathToLoad;                                               // 0x0030(0x0010) (ZeroConstructor)
	int                                                ID;                                                       // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bBroken : 1;                                              // 0x0044(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	class APawn*                                       LastInstigatorPawn;                                       // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

