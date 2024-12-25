

// Class Client.GameBusinessManager
// //Class Client.GameBusinessManager
//0x0078 (0x0130 - 0x00B8)
class UGameBusinessManager : public ULogicManagerBase
{
public:
	TArray<struct FGameWidgetConfig>                   WidgetConfigList;                                         // 0x00B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x00C8(0x0050) MISSED OFFSET
	class AUAEPlayerController*                        OwningController;                                         // 0x0118(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0120(0x0008) MISSED OFFSET
	class ALuaClassObj*                                LuaObject;                                                // 0x0128(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	// Function Client.GameBusinessManager.GetWidget
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	class UUAEUserWidget* GetWidget(int Index);// sub_1A630F0()

	// Function Client.GameBusinessManager.GetLuaObject
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	class ALuaClassObj* GetLuaObject();// sub_1A630C0()

	// Function Client.GameBusinessManager.GetGameFrontendHUD
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	class UGameFrontendHUD* GetGameFrontendHUD();// sub_1A63090()


}

