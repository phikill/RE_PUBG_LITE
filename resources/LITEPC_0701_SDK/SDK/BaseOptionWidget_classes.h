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

// WidgetBlueprintGeneratedClass BaseOptionWidget.BaseOptionWidget_C
// 0x0024 (0x03A4 - 0x0380)
class UBaseOptionWidget_C : public UTslBaseOptionWidget
{
public:
	TArray<struct FKey>                                PrevOptionKeyList;                                        // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FKey>                                NextOptionKeyList;                                        // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              KeyUpTime;                                                // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BaseOptionWidget.BaseOptionWidget_C");
		return ptr;
	}


	void OnPrevOrNextFocusableWidget(bool Next, class UWidget** FocusableWidget);
	void GetCurrentFocusWidget(class UWidget** FocusWidget);
	void ProcessKeyUp(const struct FKey& Key, struct FEventReply* EventReplay);
	void ProcessKeyDown(const struct FKey& Key, struct FEventReply* EventReply);
	struct FEventReply OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent);
	struct FEventReply OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent);
	struct FEventReply OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
