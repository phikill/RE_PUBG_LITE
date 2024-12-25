

// Class ShadowTrackerExtra.BTService_DistantJudge
// //Class ShadowTrackerExtra.BTService_DistantJudge
//0x0040 (0x00B0 - 0x0070)
class UBTService_DistantJudge : public UBTService
{
public:
	struct FBlackboardKeySelector                      WatchTargetBlackBoardKey;                                 // 0x0070(0x0028) (Edit)
	TArray<struct FAIDistantJudgeNoftify>              DistantJudges;                                            // 0x0098(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      ResetModifyBBData : 1;                                    // 0x00A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET

}

