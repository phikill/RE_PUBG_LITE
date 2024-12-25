

// Class ShadowTrackerExtra.MyLandscape
// //Class ShadowTrackerExtra.MyLandscape
//0x0098 (0x0458 - 0x03C0)
class AMyLandscape : public AActor
{
public:
	class URuntimeMeshComponent*                       Mesh;                                                     // 0x03C0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMyLandscapeGeometry*                        LandscapeGeometry;                                        // 0x03C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterial*                                   LandscapeMat;                                             // 0x03D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x60];                                      // 0x03D8(0x0060) MISSED OFFSET
	TArray<class ULevelStreaming*>                     LevelStreamings;                                          // 0x0438(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0448(0x0010) MISSED OFFSET

	// Function ShadowTrackerExtra.MyLandscape.GameEventFighting
	// (Final, Native, Private)
	void GameEventFighting();// sub_A14FE0()

	// Function ShadowTrackerExtra.MyLandscape.AboutToSwitchViewTargetPlayer
	// (Final, Native, Private)
	void AboutToSwitchViewTargetPlayer();// sub_A14D30()


}

