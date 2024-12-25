

// Class Gameplay.GlobalConfigActor
// //Class Gameplay.GlobalConfigActor
//0x0010 (0x03D0 - 0x03C0)
class AGlobalConfigActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03C0(0x0008) MISSED OFFSET
	unsigned char                                      bInitComponents : 1;                                      // 0x03C8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03C9(0x0007) MISSED OFFSET

	// Function Gameplay.GlobalConfigActor.Init
	// (Native, Public, BlueprintCallable)
	void Init();// sub_1991750()


}

