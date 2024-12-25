

// Class Client.UTRichTextBlock
// //Class Client.UTRichTextBlock
//0x0760 (0x0870 - 0x0110)
class UUTRichTextBlock : public UWidget
{
public:
	struct FString                                     ContentText;                                              // 0x0110(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0120(0x0010) MISSED OFFSET
	struct FSlateFontInfo                              Font;                                                     // 0x0130(0x0058) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bSupportHyLink : 1;                                       // 0x0188(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01 : 8;                                        // 0x0189(0x0001)
	unsigned char                                      bSupportImage : 1;                                        // 0x0189(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x018A(0x0002) MISSED OFFSET
	struct FLinearColor                                TextColor;                                                // 0x018C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	TEnumAsByte<ETextJustify>                          Justification;                                            // 0x019C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      AutoWrapText : 1;                                         // 0x019D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x019E(0x0002) MISSED OFFSET
	struct FScrollBarStyle                             ScrollBarStyle;                                           // 0x01A0(0x0440) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FMargin                                     HScrollBarPadding;                                        // 0x05E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FMargin                                     VScrollBarPadding;                                        // 0x05F0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	float                                              WrapTextAt;                                               // 0x0600(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     Margin;                                                   // 0x0604(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              LineHeightPercentage;                                     // 0x0614(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     HyperlinkDecoratorTag;                                    // 0x0618(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     HyperlinkCallBackFunctionName;                            // 0x0628(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     HyperlinkCallBackTableName;                               // 0x0638(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData04[0x218];                                     // 0x0648(0x0218) MISSED OFFSET
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // 0x0860(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x8];                                       // 0x0868(0x0008) MISSED OFFSET

	// Function Client.UTRichTextBlock.SetText
	// (Final, Native, Public, BlueprintCallable)
	void SetText(const struct FText& InText);// sub_38A080()

	// Function Client.UTRichTextBlock.SetGameFrontendHUD
	// (Final, Native, Public, BlueprintCallable)
	void SetGameFrontendHUD(class UGameFrontendHUD* InHUD);// sub_38A000()

	// Function Client.UTRichTextBlock.GetText
	// (Final, Native, Public, BlueprintCallable)
	struct FText GetText();// sub_389F80()


}

