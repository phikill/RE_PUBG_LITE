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

// WidgetBlueprintGeneratedClass WidgetBP_LobbyWebView.WidgetBP_LobbyWebView_C
// 0x0040 (0x0240 - 0x0200)
class UWidgetBP_LobbyWebView_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0200(0x0008) (Transient, DuplicateTransient)
	class UCoherentUIGTWidget*                         CoherentUIGTWidget_1;                                     // 0x0208(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  Text_CurrentBuildVersion;                                 // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FString                                     ID;                                                       // 0x0218(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                TickForWebViewVisibilityChange;                           // 0x0228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x022C(0x0004) MISSED OFFSET
	TArray<class UCoherentUIGTWidget*>                 ViewArray;                                                // 0x0230(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WidgetBP_LobbyWebView.WidgetBP_LobbyWebView_C");
		return ptr;
	}


	void WebViewBroadcast(const struct FString& EventName, const struct FString& Parameter);
	void WebViewUnload(int ViewIndex);
	void WebViewInputFocus(int ViewIndex);
	void HandleEventFromWeb(class UCoherentUIGTJSPayload* payload);
	void WebViewShow(int VeiwIndex, bool visible);
	void WebViewLoad(int ViewIndex, const struct FString& URL);
	void PreConstruct(bool* IsDesignTime);
	void Construct();
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void SetDeviceId(const struct FString& ID);
	void RegistButtonClickEvent(bool NewParam);
	void J_1(class UCoherentUIGTJSPayload* payload);
	void BndEvt__CoherentUIGTWidget_0_K2Node_ComponentBoundEvent_0_UIGTReadyForBindingsSignature__DelegateSignature();
	void Destruct();
	void ExecuteUbergraph_WidgetBP_LobbyWebView(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
