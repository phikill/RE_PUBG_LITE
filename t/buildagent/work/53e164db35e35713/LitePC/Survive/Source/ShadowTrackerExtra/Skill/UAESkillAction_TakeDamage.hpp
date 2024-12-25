

// Class ShadowTrackerExtra.UAESkillAction_TakeDamage
// //Class ShadowTrackerExtra.UAESkillAction_TakeDamage
//0x0040 (0x0198 - 0x0158)
class UUAESkillAction_TakeDamage : public UUAESkillAction
{
public:
	float                                              DamageAmount;                                             // 0x0158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FWeaponHitPartCoff                          HitPartCoff;                                              // 0x015C(0x0024) (Edit, BlueprintVisible)
	int                                                SpecificItemID;                                           // 0x0180(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ItemType;                                                 // 0x0184(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMeleeDamageSubType>                   SubDamageType;                                            // 0x0188(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0189(0x0007) MISSED OFFSET
	class UUAESkillPicker*                             DamagePicker;                                             // 0x0190(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

}

