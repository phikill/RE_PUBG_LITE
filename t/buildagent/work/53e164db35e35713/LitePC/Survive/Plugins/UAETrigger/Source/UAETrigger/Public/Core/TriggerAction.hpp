

// Class UAETrigger.TriggerAction
// //Class UAETrigger.TriggerAction
//0x0010 (0x0038 - 0x0028)
class UTriggerAction : public UObject
{
public:
	unsigned char                                      bEnableActionTick : 1;                                    // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	class UUAETriggerObject*                           ParentTrigger;                                            // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)

}

