

// Class ShadowTrackerExtra.STExtraShootWeaponComponent
// //Class ShadowTrackerExtra.STExtraShootWeaponComponent
//0x01C8 (0x02D8 - 0x0110)
class USTExtraShootWeaponComponent : public UWeaponLogicBaseComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0110(0x0008) MISSED OFFSET
	class ASTExtraShootWeapon*                         OwnerShootWeapon;                                         // 0x0118(0x0008) (ZeroConstructor, IsPlainOldData)
	class UBulletTrackComponent*                       ShootWeaponBulletsTrackComponent;                         // 0x0120(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0128(0x0004) MISSED OFFSET
	float                                              DrawShootPoint3DSize;                                     // 0x012C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0xD0];                                      // 0x0130(0x00D0) MISSED OFFSET
	class UBulletTrackComponent*                       ShootWeaponScopeBulletsTrackComponent;                    // 0x0200(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0208(0x0010) MISSED OFFSET
	float                                              DrawShootPointOnScreenTime;                               // 0x0218(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bDrawShootPointOnScreen : 1;                              // 0x021C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04 : 8;                                        // 0x021D(0x0001)
	unsigned char                                      bIsContinuousShooting : 1;                                // 0x021D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x021E(0x0002) MISSED OFFSET
	int                                                ContinuousShootingBulletsNum;                             // 0x0220(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0224(0x0004) MISSED OFFSET
	struct FName                                       NormalBulletsTrackCompTag;                                // 0x0228(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DrawShootLineTime;                                        // 0x0230(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0234(0x0004) MISSED OFFSET
	class UShootWeaponEntity*                          ShootWeaponEntityComponent;                               // 0x0238(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnShoot;                                                  // 0x0240(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData08[0x4];                                       // 0x0250(0x0004) MISSED OFFSET
	float                                              DrawShootPointOnScreenSize;                               // 0x0254(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x8];                                       // 0x0258(0x0008) MISSED OFFSET
	struct FName                                       ScopeBulletsTrackCompTag;                                 // 0x0260(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bDrawShootLine : 1;                                       // 0x0268(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x6F];                                      // 0x0269(0x006F) MISSED OFFSET

	// DelegateFunction ShadowTrackerExtra.STExtraShootWeaponComponent.ShootDelegate__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void ShootDelegate__DelegateSignature();// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraShootWeaponComponent.OnWeaponClipMaxBulletChanged
	// (Final, Native, Public)
	void OnWeaponClipMaxBulletChanged();// sub_C56250()

	// Function ShadowTrackerExtra.STExtraShootWeaponComponent.OnWeaponBulletChanged
	// (Final, Native, Protected)
	void OnWeaponBulletChanged();// sub_C56230()

	// DelegateFunction ShadowTrackerExtra.STExtraShootWeaponComponent.OnContinuousShootStateChangedDelegate__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnContinuousShootStateChangedDelegate__DelegateSignature(unsigned char bIsContinuousShooting);// sub_1B0A820()

	// DelegateFunction ShadowTrackerExtra.STExtraShootWeaponComponent.OnContinuousShootDelegate__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnContinuousShootDelegate__DelegateSignature(int BulletsNum);// sub_1B0A820()


}

