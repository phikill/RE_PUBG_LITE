

// Class ShadowTrackerExtra.BTService_ChooseEnemy
// //Class ShadowTrackerExtra.BTService_ChooseEnemy
//0x00F0 (0x0160 - 0x0070)
class UBTService_ChooseEnemy : public UBTService
{
public:
	float                                              MaxRememberEnemyTimeInSeconds;                            // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxRememberLastAttackedMeTimeInSeconds;                   // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxTraceLastAttackedMeDistance;                           // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinTimeWhenCannotSeeTarget;                               // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinTimeLockTarget;                                        // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SensedRadius;                                             // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EquipWeaponSensedRadius;                                  // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EquipWeaponNightSensedRadius;                             // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EmergencyRadius;                                          // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	TArray<struct FWeaponType2Range>                   WeaponType2Ranges;                                        // 0x0098(0x0010) (Edit, ZeroConstructor)
	TArray<struct FWeaponTypeToRange>                  DefaultWeaponTypeToRanges;                                // 0x00A8(0x0010) (Edit, ZeroConstructor)
	TMap<EWeatherStatusType, struct FWeatherToRange>   WeatherToRange;                                           // 0x00B8(0x0050) (Edit, ZeroConstructor)
	TMap<EWeatherStatusType, EWeatherStatusType>       WeatherTypeToWeatherRange;                                // 0x0108(0x0050) (Edit, ZeroConstructor)
	float                                              PVESensedRadius;                                          // 0x0158(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x015C(0x0004) MISSED OFFSET

}

