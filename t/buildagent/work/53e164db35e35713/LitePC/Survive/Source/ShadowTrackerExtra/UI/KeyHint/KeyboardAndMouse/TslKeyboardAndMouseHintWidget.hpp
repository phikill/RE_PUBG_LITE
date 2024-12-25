

// Class ShadowTrackerExtra.TslKeyboardAndMouseHintWidget
// //Class ShadowTrackerExtra.TslKeyboardAndMouseHintWidget
//0x0048 (0x0380 - 0x0338)
class UTslKeyboardAndMouseHintWidget : public UUmgBaseWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0338(0x0008) MISSED OFFSET
	TArray<class UTslKeyboardAndMouseHintSet*>         KeyHintSetCache;                                          // 0x0340(0x0010) (ExportObject, ZeroConstructor)
	struct FUmgWidgetBinder_Gerneral                   HintSetSwitcher_Binder;                                   // 0x0350(0x0020) (Edit, DisableEditOnInstance)
	TArray<struct FTslKeyHintData>                     KeyHintDatas;                                             // 0x0370(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)

	// Function ShadowTrackerExtra.TslKeyboardAndMouseHintWidget.OnGameUserSettingApplied
	// (Final, Native, Private)
	void OnGameUserSettingApplied();// sub_9287C0()


}

