

// Class ShadowTrackerExtra.ActorCacheMgr
// //Class ShadowTrackerExtra.ActorCacheMgr
//0x0050 (0x0410 - 0x03C0)
class AActorCacheMgr : public AActor
{
public:
	TMap<class AActor*, class UActorCachePool*>        DataMap;                                                  // 0x03C0(0x0050) (ZeroConstructor)

	// Function ShadowTrackerExtra.ActorCacheMgr.GetActor
	// (Final, Native, Public, BlueprintCallable)
	class AActor* GetActor(class AActor* Type);// sub_1B380F0()

	// Function ShadowTrackerExtra.ActorCacheMgr.AddToPool
	// (Final, Native, Public, BlueprintCallable)
	unsigned char AddToPool(class AActor* Typeclass AActor* Target);// sub_1B379B0()


}

