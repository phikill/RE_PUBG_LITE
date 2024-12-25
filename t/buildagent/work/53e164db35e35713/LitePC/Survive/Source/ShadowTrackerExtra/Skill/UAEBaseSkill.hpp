

// Class ShadowTrackerExtra.UAEBaseSkill
// //Class ShadowTrackerExtra.UAEBaseSkill
//0x0018 (0x04F0 - 0x04D8)
class AUAEBaseSkill : public AUTSkill
{
public:
	struct FScriptMulticastDelegate                    OnSkillCustomEvent;                                       // 0x04D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x04E8(0x0008) MISSED OFFSET

	// Function ShadowTrackerExtra.UAEBaseSkill.OnEvent
	// (Native, Public, BlueprintCallable)
	unsigned char OnEvent(TEnumAsByte<EUTSkillEventType> TheEventType);// sub_16AA970()


}

