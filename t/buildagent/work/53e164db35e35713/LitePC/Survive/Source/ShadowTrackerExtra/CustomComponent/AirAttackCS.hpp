

// Class ShadowTrackerExtra.AirAttackCS
// //Class ShadowTrackerExtra.AirAttackCS
//0x0008 (0x0160 - 0x0158)
class UAirAttackCS : public UTimerRegistComponent
{
public:
	class ASTExtraExplosionEffect*                     ExplosionEffectTemplate;                                  // 0x0158(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	// Function ShadowTrackerExtra.AirAttackCS.OnAirAttack
	// (Final, Native, Protected)
	void OnAirAttack(TEnumAsByte<EAirAttackInfo> airattacktypeint waveindex);// sub_1B38260()

	// Function ShadowTrackerExtra.AirAttackCS.DoBombHarmAtLocation
	// (Final, Native, Private, HasOutParms, HasDefaults, BlueprintCallable)
	void DoBombHarmAtLocation(struct FVector* bombLocation);// sub_1B37F30()

	// Function ShadowTrackerExtra.AirAttackCS.AirAttackThrowBomb
	// (Final, Native, Private)
	void AirAttackThrowBomb(int Index);// sub_1B37A70()


}

