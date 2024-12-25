

// ScriptStruct Gameplay.TLog_PropEquipUnequipFlow
// 0x0018
struct FTLog_PropEquipUnequipFlow
{
	int                                                ItemSpesificID;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ETLog_BackpackEquipmentSlotType                    NULL;                                                     // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEquip : 1;                                               // 0x0005(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	struct FString                                     TimeStr;                                                  // 0x0008(0x0010) (Edit, ZeroConstructor)
};

