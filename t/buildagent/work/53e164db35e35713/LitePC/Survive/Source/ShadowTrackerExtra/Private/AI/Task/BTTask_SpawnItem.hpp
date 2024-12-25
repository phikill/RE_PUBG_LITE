

// Class ShadowTrackerExtra.BTTask_SpawnItem
// //Class ShadowTrackerExtra.BTTask_SpawnItem
//0x0018 (0x00B0 - 0x0098)
class UBTTask_SpawnItem : public UBTTask_BlackboardBase
{
public:
	float                                              CheckNoPlayerRadiusSquare;                                // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	TArray<struct FAIEquipSpawnGroupDataBase>          SpawnEquipDataBase;                                       // 0x00A0(0x0010) (Edit, ZeroConstructor)

}

