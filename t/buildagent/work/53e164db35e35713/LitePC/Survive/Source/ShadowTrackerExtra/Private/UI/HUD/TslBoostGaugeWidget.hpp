

// Class ShadowTrackerExtra.TslBoostGaugeWidget
// //Class ShadowTrackerExtra.TslBoostGaugeWidget
//0x0110 (0x0448 - 0x0338)
class UTslBoostGaugeWidget : public UUmgBaseWidget
{
public:
	class UMaterialInstanceDynamic*                    MID_Gauge0_21;                                            // 0x0338(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_Gauge20_61;                                           // 0x0340(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_Gauge60_91;                                           // 0x0348(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_Gauge90_101;                                          // 0x0350(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FUmgWidgetBinder_Animation                  VanishingAnimBinder;                                      // 0x0358(0x0020) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Animation                  WarningAnimBinder;                                        // 0x0378(0x0020) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Animation                  EmergingAnimBinder;                                       // 0x0398(0x0020) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Gerneral                   Boost0_20ImageBinder;                                     // 0x03B8(0x0020) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Gerneral                   Boost20_60ImageBinder;                                    // 0x03D8(0x0020) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Gerneral                   Boost60_90ImageBinder;                                    // 0x03F8(0x0020) (Edit, DisableEditOnInstance)
	struct FUmgWidgetBinder_Gerneral                   Boost90_100ImageBinder;                                   // 0x0418(0x0020) (Edit, DisableEditOnInstance)
	float                                              DisplayingBoost;                                          // 0x0438(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsWarning : 1;                                           // 0x043C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00 : 8;                                        // 0x043D(0x0001)
	unsigned char                                      bIsVanished : 1;                                          // 0x043D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x043E(0x0002) MISSED OFFSET
	float                                              SaveBoostGauge;                                           // 0x0440(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SaveBoostGaugeMax;                                        // 0x0444(0x0004) (ZeroConstructor, IsPlainOldData)

}

