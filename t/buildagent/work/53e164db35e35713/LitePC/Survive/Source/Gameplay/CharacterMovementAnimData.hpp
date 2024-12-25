

// ScriptStruct Gameplay.CharacterMovementAnimData
// 0x0028
struct FCharacterMovementAnimData
{
	ECharacterAnimType                                 AnimType;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     AnimTypeName;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<struct FChararacterPoseAnimData>            PoseAnimList;                                             // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
};

