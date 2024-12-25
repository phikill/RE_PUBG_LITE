

// Class ShadowTrackerExtra.VoiceCheckObject
// //Class ShadowTrackerExtra.VoiceCheckObject
//0x0058 (0x0080 - 0x0028)
class UVoiceCheckObject : public UObject
{
public:
	int                                                MaxCount;                                                 // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                maxShowCount;                                             // 0x002C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              maxShowAlpha;                                             // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              nowViewDis;                                               // 0x0034(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MoveMaxShowDis;                                           // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeaponMaxShowDis;                                         // 0x003C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VehicleMaxShowDis;                                        // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              glassMaxShowDis;                                          // 0x0044(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FVoiceCheckObjectNode>               imageList;                                                // 0x0048(0x0010) (BlueprintVisible, ZeroConstructor)
	class ASTExtraPlayerController*                    PlayerController;                                         // 0x0058(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FColorBlindColorSet                         VoiceCheckObjectColorSet;                                 // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FColorBlindColorSet                         VehicleVoiceCheckObjectColorSet;                          // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)

	// Function ShadowTrackerExtra.VoiceCheckObject.VoiceTick
	// (Final, Native, Public, BlueprintCallable)
	void VoiceTick(float DeltaTime);// sub_1D2F6F0()

	// Function ShadowTrackerExtra.VoiceCheckObject.AddWeaponShotVoice
	// (Final, Native, Public, HasDefaults, BlueprintCallable)
	void AddWeaponShotVoice(class ASTExtraShootWeapon* Weaponconst struct FVector& posVectorfloat showTimeunsigned char isslience);// sub_1D2CC80()

	// Function ShadowTrackerExtra.VoiceCheckObject.AddVehicleVoice
	// (Final, Native, Public, HasDefaults, BlueprintCallable)
	void AddVehicleVoice(class ASTExtraVehicleBase* Vehicleconst struct FVector& posVectorfloat showTime);// sub_1D2CAE0()

	// Function ShadowTrackerExtra.VoiceCheckObject.AddGlassVoice
	// (Final, Native, Public, HasDefaults, BlueprintCallable)
	void AddGlassVoice(const struct FVector& posVectorfloat showTime);// sub_1D2C890()

	// Function ShadowTrackerExtra.VoiceCheckObject.AddCharacterMoveVoice
	// (Final, Native, Public, HasDefaults, BlueprintCallable)
	void AddCharacterMoveVoice(class ASTExtraBaseCharacter* Characterconst struct FVector& posVectorfloat showTime);// sub_1D2C770()


}

