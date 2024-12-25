

// ScriptStruct Client.GameWidgetConfig
// 0x0030
struct FGameWidgetConfig
{
	struct FString                                     Path;                                                     // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     Container;                                                // 0x0010(0x0010) (ZeroConstructor)
	int                                                ZOrder;                                                   // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	class UObject*                                     WidgetClass;                                              // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
};

