

// Class ShadowTrackerExtra.TslBaseHUD
// //Class ShadowTrackerExtra.TslBaseHUD
//0x0168 (0x0610 - 0x04A8)
class ATslBaseHUD : public AHUD
{
public:
	class UUserWidget*                                 MainUMGHudClass;                                          // 0x04A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UAkAudioBank*>                        AutoLoadAudioBanks;                                       // 0x04B0(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x04C0(0x0008) MISSED OFFSET
	TArray<class UActionInputEventHolder*>             ActionInputEventHolderArray;                              // 0x04C8(0x0010) (ZeroConstructor, Transient)
	TMap<struct FString, struct FTslWidgetState>       WidgetStateMap;                                           // 0x04D8(0x0050) (ZeroConstructor, Transient)
	class UUserWidget*                                 MainUMGHud;                                               // 0x0528(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TArray<class UBlockInputUserWidget*>               BlockInputWidgetList;                                     // 0x0530(0x0010) (ExportObject, ZeroConstructor, Transient)
	TArray<struct FString>                             UseMouseWidgetStack;                                      // 0x0540(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	unsigned char                                      IsTimelineMaximize : 1;                                   // 0x0550(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x87];                                      // 0x0551(0x0087) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnHostChangedWithRegion;                                  // 0x05D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnOptionWidgetClosedDelegate;                             // 0x05E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotifyBlockingWidgetOpened;                             // 0x05F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0608(0x0008) MISSED OFFSET

	// Function ShadowTrackerExtra.TslBaseHUD.WidgetToggle
	// (Final, Exec, Native, Public)
	void WidgetToggle(const struct FString& WidgetName);// sub_149D090()

	// Function ShadowTrackerExtra.TslBaseHUD.WidgetShow
	// (Final, Native, Public, BlueprintCallable)
	void WidgetShow(const struct FString& WidgetNameEWidgetShowType ShowTypeclass UObject* OptionalParam);// sub_149CF40()

	// Function ShadowTrackerExtra.TslBaseHUD.WidgetCreate
	// (Final, Native, Public, BlueprintCallable)
	void WidgetCreate(const struct FString& WidgetNameconst struct FTslWidgetConfig& Config);// sub_149CCC0()

	// Function ShadowTrackerExtra.TslBaseHUD.UpdateHud
	// (Final, Native, Public, BlueprintCallable)
	void UpdateHud();// sub_149CC80()

	// Function ShadowTrackerExtra.TslBaseHUD.UnbindActionKeyDelegateEvent
	// (Final, Native, Public, BlueprintCallable)
	void UnbindActionKeyDelegateEvent(const struct FName& ActionNameTEnumAsByte<EInputEvent> InputEvent);// sub_149CBC0()

	// Function ShadowTrackerExtra.TslBaseHUD.TestShowDialog
	// (Final, Exec, Native, Public)
	void TestShowDialog(const struct FString& Message);// sub_149CAE0()

	// Function ShadowTrackerExtra.TslBaseHUD.ShowSystemMenuWidgetCanvasPanel
	// (Native, Public, BlueprintCallable)
	void ShowSystemMenuWidgetCanvasPanel(unsigned char bShow);// sub_FB07A0()

	// Function ShadowTrackerExtra.TslBaseHUD.ShowPopupDialog
	// (Final, Native, Public, HasOutParms, BlueprintCallable)
	void ShowPopupDialog(const struct FString& PopupWidgetNameEPopupStyle PopupStyleconst struct FText& Messageconst struct FScriptDelegate& PressedDelegate);// sub_149C5F0()

	// Function ShadowTrackerExtra.TslBaseHUD.ShowDefaultHud
	// (Final, Native, Public, BlueprintCallable)
	void ShowDefaultHud();// sub_149C5D0()

	// Function ShadowTrackerExtra.TslBaseHUD.RemoveInternalHudExplicity
	// (Final, Native, Protected)
	void RemoveInternalHudExplicity(class AActor* HudActor);// sub_149B930()

	// Function ShadowTrackerExtra.TslBaseHUD.PrintShowWidgetList
	// (Final, Exec, Native, Public)
	void PrintShowWidgetList();// sub_149B910()

	// Function ShadowTrackerExtra.TslBaseHUD.PrintCreatedWidgetList
	// (Final, Exec, Native, Public)
	void PrintCreatedWidgetList();// sub_149B8F0()

	// Function ShadowTrackerExtra.TslBaseHUD.OnShowHud
	// (Native, Public, BlueprintCallable)
	void OnShowHud();// sub_C55FF0()

	// Function ShadowTrackerExtra.TslBaseHUD.OnHiddenHud
	// (Native, Public, BlueprintCallable)
	void OnHiddenHud();// sub_C56010()

	// Function ShadowTrackerExtra.TslBaseHUD.IsWidgetShow
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char IsWidgetShow(const struct FString& WidgetName);// sub_149B4A0()

	// Function ShadowTrackerExtra.TslBaseHUD.IsMouseUse
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char IsMouseUse();// sub_149B470()

	// Function ShadowTrackerExtra.TslBaseHUD.HideWidgetByEscape
	// (Final, Native, Public, BlueprintCallable)
	unsigned char HideWidgetByEscape();// sub_149B2F0()

	// Function ShadowTrackerExtra.TslBaseHUD.HidePopupDialog
	// (Final, Native, Public, BlueprintCallable)
	void HidePopupDialog(const struct FString& PopupWidgetName);// sub_149B210()

	// Function ShadowTrackerExtra.TslBaseHUD.GoToLobby
	// (Final, Native, Public, BlueprintCallable)
	void GoToLobby(unsigned char bInSkipServerRPC);// sub_149B180()

	// Function ShadowTrackerExtra.TslBaseHUD.GetWidget
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	class UUserWidget* GetWidget(const struct FString& WidgetName);// sub_149B090()

	// Function ShadowTrackerExtra.TslBaseHUD.GetMainUMGHud
	// (Final, Native, Public, BlueprintCallable, BlueprintPure)
	class UUserWidget* GetMainUMGHud();// sub_149ADB0()

	// Function ShadowTrackerExtra.TslBaseHUD.DestroyAllWidgets
	// (Final, Native, Public, BlueprintCallable)
	void DestroyAllWidgets();// sub_149A6F0()

	// Function ShadowTrackerExtra.TslBaseHUD.BindActionKeyDelegateEvent
	// (Final, Native, Public, BlueprintCallable)
	void BindActionKeyDelegateEvent(const struct FName& ActionNameTEnumAsByte<EInputEvent> InputEventconst struct FScriptDelegate& ActionKeyDelegate);// sub_149A4E0()

	// Function ShadowTrackerExtra.TslBaseHUD.AddTestScreenResolutions
	// (Final, Exec, Native, Public)
	void AddTestScreenResolutions(int Widthint Height);// sub_149A390()


}

