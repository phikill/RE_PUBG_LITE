

// ScriptStruct Gameplay.WorldTileSpotArray
// 0x0018
struct FWorldTileSpotArray
{
	int                                                WorldCompositionID;                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<class USpotSceneComponent*>                 AllSpotComponents;                                        // 0x0008(0x0010) (ExportObject, ZeroConstructor)
};

