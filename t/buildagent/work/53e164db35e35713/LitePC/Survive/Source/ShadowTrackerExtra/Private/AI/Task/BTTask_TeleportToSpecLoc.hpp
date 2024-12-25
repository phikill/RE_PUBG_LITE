

// Class ShadowTrackerExtra.BTTask_TeleportToSpecLoc
// //Class ShadowTrackerExtra.BTTask_TeleportToSpecLoc
//0x0020 (0x00B8 - 0x0098)
class UBTTask_TeleportToSpecLoc : public UBTTask_BlackboardBase
{
public:
	float                                              RangeMin;                                                 // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RangeMax;                                                 // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      OnlyTeleportToLand : 1;                                   // 0x00A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	float                                              OriginCheckSquare;                                        // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DestCheckSquare;                                          // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TraceHeight;                                              // 0x00AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bForceSuccess : 1;                                        // 0x00B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET

}

