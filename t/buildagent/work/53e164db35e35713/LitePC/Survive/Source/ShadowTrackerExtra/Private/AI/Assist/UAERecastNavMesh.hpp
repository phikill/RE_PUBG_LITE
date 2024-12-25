

// Class ShadowTrackerExtra.UAERecastNavMesh
// //Class ShadowTrackerExtra.UAERecastNavMesh
//0x0050 (0x06D0 - 0x0680)
class AUAERecastNavMesh : public ARecastNavMesh
{
public:
	struct FString                                     NavDataPath;                                              // 0x0680(0x0010) (Edit, ZeroConstructor)
	struct FString                                     NewNavDataPath;                                           // 0x0690(0x0010) (Edit, ZeroConstructor)
	TArray<struct FString>                             PVENavDataPath;                                           // 0x06A0(0x0010) (Edit, ZeroConstructor)
	TArray<struct FString>                             PVENavLinkPath;                                           // 0x06B0(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      LoadInPIE : 1;                                            // 0x06C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00 : 8;                                        // 0x06C1(0x0001)
	unsigned char                                      LoadInDS : 1;                                             // 0x06C1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01 : 8;                                        // 0x06C2(0x0001)
	unsigned char                                      LoadInClient : 1;                                         // 0x06C2(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02 : 8;                                        // 0x06C3(0x0001)
	unsigned char                                      LoadInEditor : 1;                                         // 0x06C3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xC];                                       // 0x06C4(0x000C) MISSED OFFSET

}

