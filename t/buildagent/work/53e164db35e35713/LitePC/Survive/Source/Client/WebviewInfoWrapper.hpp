

// ScriptStruct Client.WebviewInfoWrapper
// 0x0030
struct FWebviewInfoWrapper
{
	int                                                ErrorCode;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     Reason;                                                   // 0x0008(0x0010) (ZeroConstructor)
	int                                                Extend;                                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Extend2;                                                  // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     MsgData;                                                  // 0x0020(0x0010) (ZeroConstructor)
};

