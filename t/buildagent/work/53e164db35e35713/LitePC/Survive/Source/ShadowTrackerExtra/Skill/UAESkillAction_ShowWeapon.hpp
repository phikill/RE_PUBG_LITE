

// Class ShadowTrackerExtra.UAESkillAction_ShowWeapon
// //Class ShadowTrackerExtra.UAESkillAction_ShowWeapon
//0x0018 (0x0170 - 0x0158)
class UUAESkillAction_ShowWeapon : public UUAESkillAction
{
public:
	unsigned char                                      bShowWeapon : 1;                                          // 0x0158(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00 : 8;                                        // 0x0159(0x0001)
	unsigned char                                      bUndoClear : 1;                                           // 0x0159(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01 : 8;                                        // 0x015A(0x0001)
	unsigned char                                      bPhaseFinishClear : 1;                                    // 0x015A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x015B(0x0005) MISSED OFFSET
	struct FName                                       WeaponName;                                               // 0x0160(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0168(0x0008) MISSED OFFSET

}

