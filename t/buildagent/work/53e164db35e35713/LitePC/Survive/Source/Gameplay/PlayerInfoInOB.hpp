

// ScriptStruct Gameplay.PlayerInfoInOB
// 0x0020 (0x0040 - 0x0020)
struct FPlayerInfoInOB : public FPlayerBaseInfoInOB
{
	struct FString                                     PlayerName;                                               // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                TeamID;                                                   // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class APawn>                        Character;                                                // 0x0034(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

