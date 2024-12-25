

// Class ShadowTrackerExtra.BTTask_MoveAround
// //Class ShadowTrackerExtra.BTTask_MoveAround
//0x0060 (0x00F8 - 0x0098)
class UBTTask_MoveAround : public UBTTask_BlackboardBase
{
public:
	float                                              MoveRadius;                                               // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RotationSpeed;                                            // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EAIMovePose                                        MoveType;                                                 // 0x00A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	struct FVector2D                                   WaitTimeRange;                                            // 0x00A4(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   ExecutionDuration;                                        // 0x00AC(0x0008) (Edit, IsPlainOldData)
	float                                              AcceptRadius;                                             // 0x00B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIncludeNeighborVerts : 1;                                // 0x00B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01 : 8;                                        // 0x00B9(0x0001)
	unsigned char                                      bSetFocus : 1;                                            // 0x00B9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02 : 8;                                        // 0x00BA(0x0001)
	unsigned char                                      bCanMoveWhenNoTarget : 1;                                 // 0x00BA(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x00BB(0x0001) MISSED OFFSET
	struct FVector2D                                   DirectionAngleRange;                                      // 0x00BC(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   MoveTargetDistRange;                                      // 0x00C4(0x0008) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      EnemyBlackboardKey;                                       // 0x00D0(0x0028) (Edit)

}

