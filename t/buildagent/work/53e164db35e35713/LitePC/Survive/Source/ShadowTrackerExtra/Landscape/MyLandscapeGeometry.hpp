

// Class ShadowTrackerExtra.MyLandscapeGeometry
// //Class ShadowTrackerExtra.MyLandscapeGeometry
//0x00E8 (0x0118 - 0x0030)
class UMyLandscapeGeometry : public UDataAsset
{
public:
	TArray<struct FVector>                             Vertex;                                                   // 0x0030(0x0010) (Edit, ZeroConstructor)
	TArray<struct FVector>                             Normals;                                                  // 0x0040(0x0010) (Edit, ZeroConstructor)
	TArray<struct FVector2D>                           UV;                                                       // 0x0050(0x0010) (Edit, ZeroConstructor)
	TArray<int>                                        Indices;                                                  // 0x0060(0x0010) (Edit, ZeroConstructor)
	TMap<struct FIntPoint, int>                        ComponentIndexOffset;                                     // 0x0070(0x0050) (Edit, ZeroConstructor)
	int                                                ComponentIndexCount;                                      // 0x00C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ComponentVertexCount;                                     // 0x00C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TMap<struct FString, struct FSubLevelComponentMapValue> SubLevelComponentMap;                                     // 0x00C8(0x0050) (Edit, ZeroConstructor)

}

