

// ScriptStruct Gameplay.ChararacterJumpPhaseData
// 0x0040
struct FChararacterJumpPhaseData
{
	TEnumAsByte<ECharacterJumpPhase>                   JumpPhase;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     JumpPhaseName;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0018(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Gameplay.ChararacterJumpPhaseData.PhaseAnimSoftPtr
};


