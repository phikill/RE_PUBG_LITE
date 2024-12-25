

// Class ShadowTrackerExtra.BTService_AdvancedShooting
// //Class ShadowTrackerExtra.BTService_AdvancedShooting
//0x0040 (0x00B0 - 0x0070)
class UBTService_AdvancedShooting : public UBTService
{
public:
	EAIWeaponShootType                                 WeaponShotType;                                           // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	float                                              DeviationScale;                                           // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   RandomShootFreqRange;                                     // 0x0078(0x0008) (Edit, IsPlainOldData)
	struct FBlackboardKeySelector                      ReloadBlackBoardKey;                                      // 0x0080(0x0028) (Edit)
	unsigned char                                      bSetCanSeeTargetFlag : 1;                                 // 0x00A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET

}

