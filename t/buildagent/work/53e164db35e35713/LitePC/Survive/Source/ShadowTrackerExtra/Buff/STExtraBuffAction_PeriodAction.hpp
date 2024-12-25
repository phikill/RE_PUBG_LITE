

// Class ShadowTrackerExtra.STExtraBuffAction_PeriodAction
// //Class ShadowTrackerExtra.STExtraBuffAction_PeriodAction
//0x0018 (0x0170 - 0x0158)
class USTExtraBuffAction_PeriodAction : public UUTSkillAction
{
public:
	class UUTSkillAction*                              Action;                                                   // 0x0158(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Interval;                                                 // 0x0160(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CurrentTickDeltaTime;                                     // 0x0164(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0168(0x0008) MISSED OFFSET

}

