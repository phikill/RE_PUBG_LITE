

// Class ShadowTrackerExtra.BTTaskNode_EquipOrUnWeapon
// //Class ShadowTrackerExtra.BTTaskNode_EquipOrUnWeapon
//0x0008 (0x0078 - 0x0070)
class UBTTaskNode_EquipOrUnWeapon : public UBTTaskNode
{
public:
	unsigned char                                      Equip : 1;                                                // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00 : 8;                                        // 0x0071(0x0001)
	unsigned char                                      FailedWhenEquipSuccess : 1;                               // 0x0071(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0072(0x0006) MISSED OFFSET

}

