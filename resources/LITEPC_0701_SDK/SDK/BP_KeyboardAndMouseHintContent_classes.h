#pragma once

// Name: LitePC_0701, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass BP_KeyboardAndMouseHintContent.BP_KeyboardAndMouseHintContent_C
// 0x0040 (0x0380 - 0x0340)
class UBP_KeyboardAndMouseHintContent_C : public UTslKeyboardAndMouseHintContentWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0340(0x0008) (Transient, DuplicateTransient)
	class UBP_KeyboardAndMouseCombination_4KeysInRow_C* _4KeysInRow;                                              // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  DisplayNameText;                                          // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBP_KeyboardAndMouseCombination_General_C*   GeneralCombination;                                       // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetSwitcher*                             KeyTypeWidgetSwitcher;                                    // 0x0360(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FKey                                        KeyNone;                                                  // 0x0368(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_KeyboardAndMouseHintContent.BP_KeyboardAndMouseHintContent_C");
		return ptr;
	}


	void On_HorizontalBox_Prepass_1(class UWidget* BoundWidget);
	void ScopeZoomHandler();
	void ADSHandler();
	void AimingHandler();
	void PrimaryWeaponsHandler();
	void ActionAndAxisHandler(const struct FName& ActionName, const struct FName& AxisName, float AxisScale);
	void AxisMoveHandler(const struct FName& ForwardAxisName, const struct FName& RightwardAxisName);
	void DecorateDummyBinding();
	void DecorateActionBinding(const struct FTslInputKey& Key);
	void AxisKeyToIcon(const struct FName& AxisName, float Scale, bool* bValid, class UTexture2D** FuncKeyIcon, class UTexture2D** MainKeyIcon);
	void TslInputKeyToIconSet(const struct FTslInputKey& TslInputKey, bool* bValid, class UTexture2D** FuncKeyIcon, class UTexture2D** MainKeyIcon);
	void FunctionKeyToIcon(bool bCtrl, bool bAlt, bool bShift, class UTexture2D** Icon);
	void MainKeyToIcon(const struct FKey& Key, class UTexture2D** Icon);
	void UpdateDesign_Normal();
	void ExecuteUbergraph_BP_KeyboardAndMouseHintContent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
