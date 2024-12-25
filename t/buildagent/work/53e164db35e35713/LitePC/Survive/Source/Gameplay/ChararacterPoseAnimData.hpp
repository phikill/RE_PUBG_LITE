

// ScriptStruct Gameplay.ChararacterPoseAnimData
// 0x0040
struct FChararacterPoseAnimData
{
	ECharacterPoseType                                 PoseType;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x0001(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Gameplay.ChararacterPoseAnimData.PoseAnimSoftPtr
	struct FString                                     PoseName;                                                 // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

