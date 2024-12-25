

// Class Gameplay.GroupSpotSceneComponent
// //Class Gameplay.GroupSpotSceneComponent
//0x0020 (0x02F0 - 0x02D0)
class UGroupSpotSceneComponent : public UItemSceneComponent
{
public:
	TEnumAsByte<ESpotGroupType>                        GroupType;                                                // 0x02D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bNearItem : 1;                                            // 0x02D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x02D2(0x0002) MISSED OFFSET
	int                                                WorldCompositionID;                                       // 0x02D4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LastGenerateItemTime;                                     // 0x02D8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              GenerateItemTimeCD;                                       // 0x02DC(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bPickup : 1;                                              // 0x02E0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01 : 8;                                        // 0x02E1(0x0001)
	unsigned char                                      bRepeatGenerateItem : 1;                                  // 0x02E1(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02 : 8;                                        // 0x02E2(0x0001)
	unsigned char                                      bIsValidGroup : 1;                                        // 0x02E2(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xD];                                       // 0x02E3(0x000D) MISSED OFFSET

	// Function Gameplay.GroupSpotSceneComponent.SetGroupValid
	// (Native, Public)
	void SetGroupValid(unsigned char Valid);// sub_1993650()

	// Function Gameplay.GroupSpotSceneComponent.IsValidGroup
	// (Native, Public)
	unsigned char IsValidGroup();// sub_1991AC0()

	// Function Gameplay.GroupSpotSceneComponent.FindWorldCompositionID
	// (Final, Native, Public)
	int FindWorldCompositionID();// sub_1990A20()

	// Function Gameplay.GroupSpotSceneComponent.DoPickUp
	// (Final, Native, Public)
	void DoPickUp();// sub_19906E0()


}

