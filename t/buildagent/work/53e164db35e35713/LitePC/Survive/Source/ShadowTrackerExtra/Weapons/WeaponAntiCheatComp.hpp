

// Class ShadowTrackerExtra.WeaponAntiCheatComp
// //Class ShadowTrackerExtra.WeaponAntiCheatComp
//0x0098 (0x01A8 - 0x0110)
class UWeaponAntiCheatComp : public UWeaponLogicBaseComponent
{
public:
	class ASTExtraShootWeapon*                         OwnerShootWeapon;                                         // 0x0110(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0118(0x0028) MISSED OFFSET
	float                                              ShootRateCheckInterval;                                   // 0x0140(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      ShootRateCheckTag : 1;                                    // 0x0144(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0145(0x0003) MISSED OFFSET
	float                                              ShootRateCheckMulCoff;                                    // 0x0148(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      ShootHitTargetIntervalCheckTag : 1;                       // 0x014C(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x014D(0x0003) MISSED OFFSET
	float                                              ShootHitTargetIntervalMulCoff;                            // 0x0150(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0x54];                                      // 0x0154(0x0054) MISSED OFFSET

	// Function ShadowTrackerExtra.WeaponAntiCheatComp.OnWeaponStopFire
	// (Final, Native, Protected)
	void OnWeaponStopFire();// sub_1D2E220()

	// Function ShadowTrackerExtra.WeaponAntiCheatComp.OnWeaponStartFire
	// (Final, Native, Protected)
	void OnWeaponStartFire();// sub_1D2E200()

	// Function ShadowTrackerExtra.WeaponAntiCheatComp.OnWeaponShootHit
	// (Final, Native, Protected, HasOutParms)
	void OnWeaponShootHit(const struct FShootWeaponDamageEvent& DamageDetailconst struct FBulletHitInfoUploadData& HitDataconst struct FLocalShootHitData& LocalHitData);// sub_1D2E000()

	// Function ShadowTrackerExtra.WeaponAntiCheatComp.OnWeaponReloaded
	// (Final, Native, Protected)
	void OnWeaponReloaded();// sub_1D2DFE0()


}

