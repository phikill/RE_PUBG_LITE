

// Class ShadowTrackerExtra.BTService_Focus
// //Class ShadowTrackerExtra.BTService_Focus
//0x0008 (0x00A8 - 0x00A0)
class UBTService_Focus : public UBTService_DefaultFocus
{
public:
	EAINewFocusPriority                                AIFocusPriority;                                          // 0x00A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ResetFocus : 1;                                           // 0x00A1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x00A2(0x0006) MISSED OFFSET

}

