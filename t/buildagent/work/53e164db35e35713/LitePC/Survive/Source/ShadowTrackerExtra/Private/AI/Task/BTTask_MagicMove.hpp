

// Class ShadowTrackerExtra.BTTask_MagicMove
// //Class ShadowTrackerExtra.BTTask_MagicMove
//0x0018 (0x00C8 - 0x00B0)
class UBTTask_MagicMove : public UBTTask_MoveTo
{
public:
	EAIMovePose                                        MoveType;                                                 // 0x00B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00B1(0x0003) MISSED OFFSET
	float                                              AcceptRadius;                                             // 0x00B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GenerateNavRadius;                                        // 0x00B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeLimit;                                                // 0x00BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ForceSuccess : 1;                                         // 0x00C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01 : 8;                                        // 0x00C1(0x0001)
	unsigned char                                      MoveWithOutPathFinding : 1;                               // 0x00C1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02 : 8;                                        // 0x00C2(0x0001)
	unsigned char                                      GotoExceptionWhenFailed : 1;                              // 0x00C2(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x5];                                       // 0x00C3(0x0005) MISSED OFFSET

}

