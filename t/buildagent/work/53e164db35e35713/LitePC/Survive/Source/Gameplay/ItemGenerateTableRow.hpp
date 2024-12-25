

// ScriptStruct Gameplay.ItemGenerateTableRow
// 0x0038 (0x0040 - 0x0008)
struct FItemGenerateTableRow : public FTableRowBase
{
	int                                                ID;                                                       // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     Value;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Catetory;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FItemGenerateSpawnData>              AllGenerateSpawnDatas;                                    // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

