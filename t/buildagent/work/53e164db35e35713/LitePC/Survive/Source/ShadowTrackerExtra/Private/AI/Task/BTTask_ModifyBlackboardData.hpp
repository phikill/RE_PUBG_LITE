

// Class ShadowTrackerExtra.BTTask_ModifyBlackboardData
// //Class ShadowTrackerExtra.BTTask_ModifyBlackboardData
//0x0018 (0x00B0 - 0x0098)
class UBTTask_ModifyBlackboardData : public UBTTask_BlackboardBase
{
public:
	EModifyBlackboardDataValueType                     ValueType;                                                // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
	struct FString                                     SetValue;                                                 // 0x00A0(0x0010) (Edit, ZeroConstructor)

}

