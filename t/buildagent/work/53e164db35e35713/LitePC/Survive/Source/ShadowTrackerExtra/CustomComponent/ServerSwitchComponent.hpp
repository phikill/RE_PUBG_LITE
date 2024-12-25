

// Class ShadowTrackerExtra.ServerSwitchComponent
// //Class ShadowTrackerExtra.ServerSwitchComponent
//0x0058 (0x0160 - 0x0108)
class UServerSwitchComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnFPSMonitorConfigSwitchRecv;                             // 0x0108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFPSLowWarning;                                          // 0x0118(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FFPSMonitorConfigSwitch                     FPSMonitorConfigSwitch;                                   // 0x0128(0x0014) (Config)
	float                                              LowFPSWarningTipsLastTime;                                // 0x013C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bLocalSwitcherFPSLowWarning : 1;                          // 0x0140(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0141(0x001F) MISSED OFFSET

	// Function ShadowTrackerExtra.ServerSwitchComponent.RequireConfigRPC
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void RequireConfigRPC();// sub_11E8F60()

	// Function ShadowTrackerExtra.ServerSwitchComponent.OnUserQualitySettingChanged
	// (Final, Native, Private)
	void OnUserQualitySettingChanged(int renderlevel);// sub_11E81C0()

	// Function ShadowTrackerExtra.ServerSwitchComponent.CountingDown
	// (Final, Native, Private)
	void CountingDown();// sub_11E7960()

	// Function ShadowTrackerExtra.ServerSwitchComponent.AnswerconfigRPC
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void AnswerconfigRPC(const struct FFPSMonitorConfigSwitch& configswitch);// sub_11E78A0()


}

