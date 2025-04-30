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

// BlueprintGeneratedClass BP_LitePCSurviveHUD.BP_LitePCSurviveHUD_C
// 0x0070 (0x0810 - 0x07A0)
class ABP_LitePCSurviveHUD_C : public ABP_BattleRoyaleHUD_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07A0(0x0008) (Transient, DuplicateTransient)
	TMap<struct FString, class UUserWidget*>           WidgetContainer;                                          // 0x07A8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    SettingChangedDispatcher;                                 // 0x07F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UUserWidget*                                 EmoteWheelRef;                                            // 0x0808(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_LitePCSurviveHUD.BP_LitePCSurviveHUD_C");
		return ptr;
	}


	class UUserWidget* FindWidget(const struct FString& Name);
	void BroadCastSettingChanged();
	void CreateWidgetAndAddToContainer(class UClass* Widget, int ZOrder, ESlateVisibility InVisibility, class UUserWidget** Widget_Pin);
	void RegisterWidgetList();
	void UserConstructionScript();
	void OnSettingChanged();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_LitePCSurviveHUD(int EntryPoint);
	void SettingChangedDispatcher__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
