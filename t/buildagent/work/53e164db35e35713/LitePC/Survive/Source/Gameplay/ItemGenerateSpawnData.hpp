

// ScriptStruct Gameplay.ItemGenerateSpawnData
// 0x0068
struct FItemGenerateSpawnData
{
	int                                                KeyID;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     ItemValue;                                                // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     ItemCategory;                                             // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ItemWeight;                                               // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FString                                     ItemPath;                                                 // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ItemStackCount;                                           // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FString                                     ItemTogetherPath;                                         // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ItemTogetherStackCount;                                   // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemTogetherCountMin;                                     // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemTogetherCountMax;                                     // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
};

