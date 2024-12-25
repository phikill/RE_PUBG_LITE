

// Class ShadowTrackerExtra.BTService_LookAround
// //Class ShadowTrackerExtra.BTService_LookAround
//0x0020 (0x0090 - 0x0070)
class UBTService_LookAround : public UBTService
{
public:
	struct FVector2D                                   RotationSpeed;                                            // 0x0070(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   RotationAngle;                                            // 0x0078(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   WaitTimeWhenStop;                                         // 0x0080(0x0008) (Edit, IsPlainOldData)
	float                                              AcceptToleranceInDegree;                                  // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x008C(0x0004) MISSED OFFSET

}

