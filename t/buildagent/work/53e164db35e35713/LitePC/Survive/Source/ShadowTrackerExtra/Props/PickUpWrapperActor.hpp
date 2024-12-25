

// Class ShadowTrackerExtra.DestructiblePickUpWrapperActor
// //Class ShadowTrackerExtra.DestructiblePickUpWrapperActor
//0x0040 (0x05B0 - 0x0570)
class ADestructiblePickUpWrapperActor : public APickUpWrapperActor
{
public:
	class UCurveFloat*                                 ExplosionDamageCurve;                                     // 0x0570(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 ExplosionDamageType;                                      // 0x0578(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class ASTExtraExplosionEffect*                     ExplosionTemplate;                                        // 0x0580(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	uint16_t                                           HealthMax;                                                // 0x0588(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x058A(0x0002) MISSED OFFSET
	float                                              ExplosionLifeSpan;                                        // 0x058C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ExplosionDelay;                                           // 0x0590(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0594(0x000C) MISSED OFFSET
	struct FTimerHandle                                ExplosionDelayHandle;                                     // 0x05A0(0x0008) (Transient)
	uint16_t                                           Health;                                                   // 0x05A8(0x0002) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bExploded : 1;                                            // 0x05AA(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x05AB(0x0005) MISSED OFFSET

	// Function ShadowTrackerExtra.DestructiblePickUpWrapperActor.OnRep_Explode
	// (Final, Native, Private)
	void OnRep_Explode();// sub_1637570()


}

