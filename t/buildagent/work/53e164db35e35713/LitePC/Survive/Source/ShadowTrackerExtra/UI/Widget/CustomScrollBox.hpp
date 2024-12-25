

// Class ShadowTrackerExtra.CustomScrollBox
// //Class ShadowTrackerExtra.CustomScrollBox
//0x0688 (0x07B0 - 0x0128)
class UCustomScrollBox : public UPanelWidget
{
public:
	struct FScrollBoxStyle                             WidgetStyle;                                              // 0x0128(0x01E8) (Edit, BlueprintVisible)
	struct FScrollBarStyle                             WidgetBarStyle;                                           // 0x0310(0x0440) (Edit, BlueprintVisible)
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x0750(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateWidgetStyleAsset*                      BarStyle;                                                 // 0x0758(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	TEnumAsByte<EOrientation>                          Orientation;                                              // 0x0760(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ESlateVisibility                                   ScrollBarVisibility;                                      // 0x0761(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EConsumeMouseWheel                                 ConsumeMouseWheel;                                        // 0x0762(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0763(0x0001) MISSED OFFSET
	struct FVector2D                                   ScrollbarThickness;                                       // 0x0764(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      AlwaysShowScrollbar : 1;                                  // 0x076C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01 : 8;                                        // 0x076D(0x0001)
	unsigned char                                      AllowOverscroll : 1;                                      // 0x076D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EDescendantScrollDestination                       NavigationDestination;                                    // 0x076E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x076F(0x0001) MISSED OFFSET
	float                                              NavigationScrollPadding;                                  // 0x0770(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0774(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnUserScrolled;                                           // 0x0778(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMoveOut;                                                // 0x0788(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData04[0x18];                                      // 0x0798(0x0018) MISSED OFFSET

	// Function ShadowTrackerExtra.CustomScrollBox.SetScrollOffset
	// (Final, Native, Public, BlueprintCallable)
	void SetScrollOffset(float NewScrollOffset);// sub_A58AA0()

	// Function ShadowTrackerExtra.CustomScrollBox.SetScrollBarVisibility
	// (Final, Native, Public, BlueprintCallable)
	void SetScrollBarVisibility(ESlateVisibility NewScrollBarVisibility);// sub_A58A20()

	// Function ShadowTrackerExtra.CustomScrollBox.SetScrollbarThickness
	// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	void SetScrollbarThickness(const struct FVector2D& NewScrollbarThickness);// sub_A58B20()

	// Function ShadowTrackerExtra.CustomScrollBox.SetOrientation
	// (Final, Native, Public, BlueprintCallable)
	void SetOrientation(TEnumAsByte<EOrientation> NewOrientation);// sub_A58890()

	// Function ShadowTrackerExtra.CustomScrollBox.SetAlwaysShowScrollbar
	// (Final, Native, Public, BlueprintCallable)
	void SetAlwaysShowScrollbar(unsigned char NewAlwaysShowScrollbar);// sub_A585F0()

	// Function ShadowTrackerExtra.CustomScrollBox.SetAllowOverscroll
	// (Final, Native, Public, BlueprintCallable)
	void SetAllowOverscroll(unsigned char NewAllowOverscroll);// sub_A58560()

	// Function ShadowTrackerExtra.CustomScrollBox.ScrollWidgetIntoView
	// (Final, Native, Public, BlueprintCallable)
	void ScrollWidgetIntoView(class UWidget* WidgetToFindunsigned char AnimateScrollEDescendantScrollDestination ScrollDesintion);// sub_A58390()

	// Function ShadowTrackerExtra.CustomScrollBox.ScrollToStart
	// (Final, Native, Public, BlueprintCallable)
	void ScrollToStart();// sub_A58370()

	// Function ShadowTrackerExtra.CustomScrollBox.ScrollToEnd
	// (Final, Native, Public, BlueprintCallable)
	void ScrollToEnd();// sub_A58350()

	// Function ShadowTrackerExtra.CustomScrollBox.GetScrollOffset
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetScrollOffset();// sub_A57E40()

	// Function ShadowTrackerExtra.CustomScrollBox.GetMaxScrollOffset
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetMaxScrollOffset();// sub_A57E10()


}

