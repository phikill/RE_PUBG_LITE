

// Class ShadowTrackerExtra.BTService_SensedEnemy
// //Class ShadowTrackerExtra.BTService_SensedEnemy
//0x0070 (0x00E0 - 0x0070)
class UBTService_SensedEnemy : public UBTService
{
public:
	float                                              IsNotSeeTargetTime;                                       // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SensedRadius;                                             // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EquipWeaponSensedRadius;                                  // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EquipWeaponNightSensedRadius;                             // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EmergencyRadius;                                          // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	TMap<int, float>                                   AISensedEnemyPoseRatio;                                   // 0x0088(0x0050) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET

}

