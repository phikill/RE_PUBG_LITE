

// Class ShadowTrackerExtra.CustomParticleSystemComponent
// //Class ShadowTrackerExtra.CustomParticleSystemComponent
//0x0010 (0x0920 - 0x0910)
class UCustomParticleSystemComponent : public UParticleSystemComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0910(0x0008) MISSED OFFSET
	unsigned char                                      bShowImpactInfo : 1;                                      // 0x0918(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0919(0x0007) MISSED OFFSET

	// Function ShadowTrackerExtra.CustomParticleSystemComponent.AddCollisionIgnoreActor
	// (Final, Native, Public, BlueprintCallable)
	void AddCollisionIgnoreActor(class AActor* IgnoreActor);// sub_A573F0()


}

