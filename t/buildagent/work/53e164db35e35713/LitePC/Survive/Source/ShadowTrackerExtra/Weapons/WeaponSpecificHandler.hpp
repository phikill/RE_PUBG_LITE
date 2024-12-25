

// Class ShadowTrackerExtra.WeaponSpecificHandler
// //Class ShadowTrackerExtra.WeaponSpecificHandler
//0x0038 (0x0148 - 0x0110)
class UWeaponSpecificHandler : public UWeaponLogicBaseComponent
{
public:
	struct FItemDefineID                               ItemDefineID;                                             // 0x0110(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FName                                       LogicSocket;                                              // 0x0128(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttachSocket;                                             // 0x0130(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ESurviveWeaponPropSlot                             SurviveWeaponPropSlot;                                    // 0x0138(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0139(0x0003) MISSED OFFSET
	float                                              AIMinAttackDist;                                          // 0x013C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AIMaxAttackDist;                                          // 0x0140(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AIAttackDist;                                             // 0x0144(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	// Function ShadowTrackerExtra.WeaponSpecificHandler.GetBackpackItemHandle
	// (Final, Native, Public, BlueprintCallable)
	class UItemHandleBase* GetBackpackItemHandle();// sub_B90D00()


}

