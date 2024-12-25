

// Class ShadowTrackerExtra.WeaponStateManager
// //Class ShadowTrackerExtra.WeaponStateManager
//0x0060 (0x0170 - 0x0110)
class UWeaponStateManager : public UWeaponLogicBaseComponent
{
public:
	class UWeaponStateBase*                            CurrentState;                                             // 0x0110(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWeaponStateBase*                            DefaultState;                                             // 0x0118(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TMap<TEnumAsByte<EFreshWeaponStateType>, class UWeaponStateBase*> StateMap;                                                 // 0x0120(0x0050) (ExportObject, ZeroConstructor)

	// Function ShadowTrackerExtra.WeaponStateManager.GetCurrentState
	// (Final, Native, Public, BlueprintCallable)
	class UWeaponStateBase* GetCurrentState();// sub_B90D90()

	// Function ShadowTrackerExtra.WeaponStateManager.GetCurrentFreshWeaponStateType
	// (Final, Native, Public, BlueprintCallable)
	TEnumAsByte<EFreshWeaponStateType> GetCurrentFreshWeaponStateType();// sub_B90D60()


}

