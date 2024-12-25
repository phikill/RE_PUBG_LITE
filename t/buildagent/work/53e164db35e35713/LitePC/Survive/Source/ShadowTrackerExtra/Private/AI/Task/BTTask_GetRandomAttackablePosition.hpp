

// Class ShadowTrackerExtra.BTTask_GetRandomAttackablePosition
// //Class ShadowTrackerExtra.BTTask_GetRandomAttackablePosition
//0x0010 (0x00A8 - 0x0098)
class UBTTask_GetRandomAttackablePosition : public UBTTask_BlackboardBase
{
public:
	float                                              AttackableRadius;                                         // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              KeepDistanceFromTarget;                                   // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RandomMoveRadius;                                         // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                RetryTimes;                                               // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

}

