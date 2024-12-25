

// ScriptStruct Gameplay.TLog_PickUpItemFlow
// 0x0028
struct FTLog_PickUpItemFlow
{
	int                                                ItemSpesificID;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0008(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     TimeStr;                                                  // 0x0018(0x0010) (Edit, ZeroConstructor)
};

