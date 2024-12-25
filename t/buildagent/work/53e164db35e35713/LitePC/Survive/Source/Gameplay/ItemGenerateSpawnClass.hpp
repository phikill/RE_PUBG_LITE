

// ScriptStruct Gameplay.ItemGenerateSpawnClass
// 0x0038
struct FItemGenerateSpawnClass
{
	class UObject*                                     ItemClass;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemCount;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     ItemValue;                                                // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     ItemCategory;                                             // 0x0020(0x0010) (ZeroConstructor)
	unsigned char                                      bRepeatGenerateItem : 1;                                  // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

