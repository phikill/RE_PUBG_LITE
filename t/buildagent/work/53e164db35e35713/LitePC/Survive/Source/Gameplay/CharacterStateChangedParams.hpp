

// ScriptStruct Gameplay.CharacterStateChangedParams
// 0x0020
struct FCharacterStateChangedParams
{
	struct FString                                     PlayerName;                                               // 0x0000(0x0010) (ZeroConstructor)
	uint32_t                                           PlayerKey;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FName                                       CharacterState;                                           // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
};

