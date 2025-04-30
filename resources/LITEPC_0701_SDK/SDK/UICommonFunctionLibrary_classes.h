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

// BlueprintGeneratedClass UICommonFunctionLibrary.UICommonFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UUICommonFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass UICommonFunctionLibrary.UICommonFunctionLibrary_C");
		return ptr;
	}


	void STATIC_SetAndroidPhoneAdaptation(class UCanvasPanelSlot* Panel, class UObject* __WorldContext);
	void STATIC_SetAdaptation_Lobby(class UWidget* Widget, class UObject* __WorldContext);
	void STATIC_FormatSecondsToString(int Seconds, bool Full_text_for_MIN_SEC, class UObject* __WorldContext, struct FText* Ret);
	void STATIC_SetSquareFixedScslr(class UWidget* Widget, class UObject* __WorldContext);
	void STATIC_SetAdaptation(class UWidget* Widget, class UObject* __WorldContext);
	void STATIC_SetTabStyle(bool isCheck, class UTextBlock* Text, class UImage* Icon, const struct FColor& onColor, const struct FColor& offColor, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
