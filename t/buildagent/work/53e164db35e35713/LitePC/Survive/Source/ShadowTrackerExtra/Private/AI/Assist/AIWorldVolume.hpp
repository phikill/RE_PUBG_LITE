

// Class ShadowTrackerExtra.AIWorldVolume
// //Class ShadowTrackerExtra.AIWorldVolume
//0x0088 (0x0488 - 0x0400)
class AAIWorldVolume : public AAIWorldVolumeBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0400(0x0008) MISSED OFFSET
	struct FString                                     AIOcclusionFilePath;                                      // 0x0408(0x0010) (Edit, ZeroConstructor)
	struct FString                                     HousePathFilePath;                                        // 0x0418(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      bDebugOnClient : 1;                                       // 0x0428(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5F];                                      // 0x0429(0x005F) MISSED OFFSET

}

