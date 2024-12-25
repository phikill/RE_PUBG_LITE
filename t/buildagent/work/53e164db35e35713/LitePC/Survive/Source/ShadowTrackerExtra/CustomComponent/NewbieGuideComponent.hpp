

// Class ShadowTrackerExtra.NewbieGuideComponent
// //Class ShadowTrackerExtra.NewbieGuideComponent
//0x0058 (0x0160 - 0x0108)
class UNewbieGuideComponent : public UActorComponent
{
public:
	int                                                CurTipsID;                                                // 0x0108(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsStartShowingGuide : 1;                                  // 0x010C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00 : 8;                                        // 0x010D(0x0001)
	unsigned char                                      OpenNewbieGuideSwitch : 1;                                // 0x010D(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x010E(0x0002) MISSED OFFSET
	float                                              GuideInterval;                                            // 0x0110(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxGuideLevel;                                            // 0x0114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FNewbieGuideItem>                    Items;                                                    // 0x0118(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class ASTExtraPlayerController*                    OwnerController;                                          // 0x0128(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        FinishedTips;                                             // 0x0130(0x0010) (ZeroConstructor)
	TArray<int>                                        FinishedCounts;                                           // 0x0140(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0150(0x0010) MISSED OFFSET

	// Function ShadowTrackerExtra.NewbieGuideComponent.SendNewbieMsg
	// (Final, Native, Public, BlueprintCallable)
	void SendNewbieMsg(int tipsIDunsigned char isStartint tipsIndex);// sub_A152F0()

	// Function ShadowTrackerExtra.NewbieGuideComponent.InitComponent
	// (Final, Native, Public, BlueprintCallable)
	void InitComponent(class ASTExtraPlayerController* _OwnerControllerTArray<int> _FinishedTipsTArray<int> _FinishedCountsTEnumAsByte<ENewbieGuidePlayerCategory> curPlayerCategory);// sub_A15000()


}

