

// Class UAETrigger.FlowNodeBase
// //Class UAETrigger.FlowNodeBase
//0x0048 (0x0070 - 0x0028)
class UFlowNodeBase : public UObject
{
public:
	class UFlowNodeBase*                               NextFlowNode;                                             // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FUFlowNodeRepData                           RepData;                                                  // 0x0030(0x0018)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
	class UTriggersFlowTree*                           CarriedFlowTree;                                          // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	EFlowNodeType                                      NodeType;                                                 // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	TArray<class UUAETriggerObject*>                   TriggerObjects;                                           // 0x0060(0x0010) (ZeroConstructor)

}

