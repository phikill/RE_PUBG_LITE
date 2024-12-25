

// Class ShadowTrackerExtra.FireWeaponState
// //Class ShadowTrackerExtra.FireWeaponState
//0x0028 (0x0190 - 0x0168)
class UFireWeaponState : public UWeaponStateBase
{
public:
	class ASTExtraShootWeapon*                         OwnerShootWeapon;                                         // 0x0168(0x0008) (ZeroConstructor, IsPlainOldData)
	class ASTExtraBaseCharacter*                       WeaponOwner;                                              // 0x0170(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x11];                                      // 0x0178(0x0011) MISSED OFFSET
	unsigned char                                      OpenPressBtnStay : 1;                                     // 0x0189(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x018A(0x0006) MISSED OFFSET

}

