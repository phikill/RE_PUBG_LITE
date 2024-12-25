

// Class ShadowTrackerExtra.UAESkillAction_SwitchWeapon
// //Class ShadowTrackerExtra.UAESkillAction_SwitchWeapon
//0x0008 (0x0160 - 0x0158)
class UUAESkillAction_SwitchWeapon : public UUAESkillAction
{
public:
	ESurviveWeaponPropSlot                             WeaponSlot;                                               // 0x0158(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      SwitchBackWhenFinish : 1;                                 // 0x0159(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x015A(0x0006) MISSED OFFSET

}

