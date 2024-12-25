

// Class UAETrigger.TriggersFlowTree
// //Class UAETrigger.TriggersFlowTree
//0x0030 (0x0058 - 0x0028)
class UTriggersFlowTree : public UObject
{
public:
	class UFlowNodeBase*                               RootNode;                                                 // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UFlowNodeBase*                               TailNode;                                                 // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UFlowNodeBase*                               CurrentNode;                                              // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET
	class AUAELevelDirector*                           OwnerLevelDirector;                                       // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)

}

