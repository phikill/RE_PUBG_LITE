

// Class Client.InGameUIManager
// //Class Client.InGameUIManager
//0x0028 (0x0158 - 0x0130)
class UInGameUIManager : public UGameBusinessManager
{
public:
	TArray<class UObject*>                             InGameUIList;                                             // 0x0130(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0140(0x0018) MISSED OFFSET

	// Function Client.InGameUIManager.SubUIWidgetList
	// (Final, Native, Public, HasOutParms, BlueprintCallable)
	void SubUIWidgetList(TArray<struct FGameWidgetConfig> InWidgetConfigListTArray<struct FString> GameStatusStrListunsigned char InPersistentUIunsigned char InUsedByControlerunsigned char InOberverOnly);// sub_72FF50()

	// Function Client.InGameUIManager.HandleUIMessage
	// (Final, Native, Public, BlueprintCallable)
	void HandleUIMessage(const struct FString& UIMessage);// sub_72FEB0()

	// Function Client.InGameUIManager.HandleDynamicCreation
	// (Final, Native, Public, BlueprintCallable)
	void HandleDynamicCreation();// sub_72FE90()


}

