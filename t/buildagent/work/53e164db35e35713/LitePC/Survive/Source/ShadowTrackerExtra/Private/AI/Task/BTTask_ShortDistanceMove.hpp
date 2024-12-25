

// Class ShadowTrackerExtra.BTTask_ShortDistanceMove
// //Class ShadowTrackerExtra.BTTask_ShortDistanceMove
//0x0048 (0x00E0 - 0x0098)
class UBTTask_ShortDistanceMove : public UBTTask_BlackboardBase
{
public:
	EAIMovePose                                        MoveType;                                                 // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EAIMoveType                                        MovePathType;                                             // 0x0099(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x009A(0x0002) MISSED OFFSET
	int                                                SampleNumber;                                             // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ControllPoint1;                                           // 0x00A0(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   ControllPoint2;                                           // 0x00A8(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   DirectionAngleRange;                                      // 0x00B0(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   MoveTargetDistRange;                                      // 0x00B8(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   ExecutionDuration;                                        // 0x00C0(0x0008) (Edit, IsPlainOldData)
	float                                              RePlanTime;                                               // 0x00C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      AlwaysSuccess : 1;                                        // 0x00CC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00CD(0x0003) MISSED OFFSET
	float                                              AcceptRadius;                                             // 0x00D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      StopOnOverlap : 1;                                        // 0x00D4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02 : 8;                                        // 0x00D5(0x0001)
	unsigned char                                      UsePathfinding : 1;                                       // 0x00D5(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03 : 8;                                        // 0x00D6(0x0001)
	unsigned char                                      AllowPartialPath : 1;                                     // 0x00D6(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04 : 8;                                        // 0x00D7(0x0001)
	unsigned char                                      ProjectDestinationToNavigation : 1;                       // 0x00D7(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ExceptionRandomRadius;                                    // 0x00D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      DebugDrawPath : 1;                                        // 0x00DC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x00DD(0x0003) MISSED OFFSET

}

