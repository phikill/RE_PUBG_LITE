

// ScriptStruct UAETrigger.UAETriggerVariable
// 0x0020
struct FUAETriggerVariable
{
	EUAETriggerVariableType                            VarType;                                                  // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                IntData;                                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FloatData;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     StringData;                                               // 0x0010(0x0010) (ZeroConstructor)
};

