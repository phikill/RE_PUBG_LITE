

// Class ShadowTrackerExtra.UTSkillAppearance_SoundCue
// //Class ShadowTrackerExtra.UTSkillAppearance_SoundCue
//0x0080 (0x01D8 - 0x0158)
class UUTSkillAppearance_SoundCue : public UUTSkillAction
{
public:
	struct FUTSkillAppearance_SoundCue_Item            Item;                                                     // 0x0158(0x0018) (Edit, BlueprintVisible)
	TMap<TEnumAsByte<EPhysicalSurface>, class UAkAudioEvent*> PhysSoundMap;                                             // 0x0170(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x18];                                      // 0x01C0(0x0018) MISSED OFFSET

}

