

// Class Client.LuaClassObj
// //Class Client.LuaClassObj
//0x0010 (0x03E8 - 0x03D8)
class ALuaClassObj : public ALuaContext
{
public:
	class UGameBusinessManager*                        pManager;                                                 // 0x03D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03E0(0x0008) MISSED OFFSET

	// Function Client.LuaClassObj.SubUIWidgetList
	// (Final, Native, Public, HasOutParms, BlueprintCallable)
	void SubUIWidgetList(TArray<struct FGameWidgetConfig> InWidgetConfigListTArray<struct FString> GameStatusStrListunsigned char bPersistentUIunsigned char InStatusConcernunsigned char bDynamicWidget);// sub_662B80()

	// Function Client.LuaClassObj.SubShowHideEvent
	// (Final, Native, Public, HasOutParms, BlueprintCallable)
	void SubShowHideEvent(TArray<struct FString> WidgetPathList);// sub_662AB0()

	// Function Client.LuaClassObj.SubCollapseWidgetList
	// (Final, Native, Public, HasOutParms, BlueprintCallable)
	void SubCollapseWidgetList(const struct FString& RootWidgetNameTArray<struct FString>* ChildWidgetNames);// sub_662990()

	// Function Client.LuaClassObj.HandleUIMessageNoFetch
	// (Final, Native, Public, BlueprintCallable)
	void HandleUIMessageNoFetch(const struct FString& UIMessage);// sub_6628F0()

	// Function Client.LuaClassObj.HandleUIMessage
	// (Final, Native, Public, BlueprintCallable)
	void HandleUIMessage(const struct FString& UIMessage);// sub_662850()

	// Function Client.LuaClassObj.HandleDynamicCreation
	// (Final, Native, Public, BlueprintCallable)
	void HandleDynamicCreation();// sub_662830()

	// Function Client.LuaClassObj.GetGameStatus
	// (Final, Native, Public, BlueprintCallable)
	struct FString GetGameStatus();// sub_6627B0()


}

