
#include "../SDK.h"

// Name: LitePC_0701, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function UICommonFunctionLibrary.UICommonFunctionLibrary_C.SetAndroidPhoneAdaptation
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvasPanelSlot*        Panel                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUICommonFunctionLibrary_C::STATIC_SetAndroidPhoneAdaptation(class UCanvasPanelSlot* Panel, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function UICommonFunctionLibrary.UICommonFunctionLibrary_C.SetAndroidPhoneAdaptation");

	UUICommonFunctionLibrary_C_SetAndroidPhoneAdaptation_Params params;
	params.Panel = Panel;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UICommonFunctionLibrary.UICommonFunctionLibrary_C.SetAdaptation_Lobby
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUICommonFunctionLibrary_C::STATIC_SetAdaptation_Lobby(class UWidget* Widget, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function UICommonFunctionLibrary.UICommonFunctionLibrary_C.SetAdaptation_Lobby");

	UUICommonFunctionLibrary_C_SetAdaptation_Lobby_Params params;
	params.Widget = Widget;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UICommonFunctionLibrary.UICommonFunctionLibrary_C.FormatSecondsToString
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Seconds                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Full_text_for_MIN_SEC          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Ret                            (Parm, OutParm)

void UUICommonFunctionLibrary_C::STATIC_FormatSecondsToString(int Seconds, bool Full_text_for_MIN_SEC, class UObject* __WorldContext, struct FText* Ret)
{
	static auto fn = UObject::FindObject<UFunction>("Function UICommonFunctionLibrary.UICommonFunctionLibrary_C.FormatSecondsToString");

	UUICommonFunctionLibrary_C_FormatSecondsToString_Params params;
	params.Seconds = Seconds;
	params.Full_text_for_MIN_SEC = Full_text_for_MIN_SEC;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function UICommonFunctionLibrary.UICommonFunctionLibrary_C.SetSquareFixedScslr
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUICommonFunctionLibrary_C::STATIC_SetSquareFixedScslr(class UWidget* Widget, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function UICommonFunctionLibrary.UICommonFunctionLibrary_C.SetSquareFixedScslr");

	UUICommonFunctionLibrary_C_SetSquareFixedScslr_Params params;
	params.Widget = Widget;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UICommonFunctionLibrary.UICommonFunctionLibrary_C.SetAdaptation
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUICommonFunctionLibrary_C::STATIC_SetAdaptation(class UWidget* Widget, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function UICommonFunctionLibrary.UICommonFunctionLibrary_C.SetAdaptation");

	UUICommonFunctionLibrary_C_SetAdaptation_Params params;
	params.Widget = Widget;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UICommonFunctionLibrary.UICommonFunctionLibrary_C.SetTabStyle
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isCheck                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTextBlock*              Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UImage*                  Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FColor                  onColor                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FColor                  offColor                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUICommonFunctionLibrary_C::STATIC_SetTabStyle(bool isCheck, class UTextBlock* Text, class UImage* Icon, const struct FColor& onColor, const struct FColor& offColor, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function UICommonFunctionLibrary.UICommonFunctionLibrary_C.SetTabStyle");

	UUICommonFunctionLibrary_C_SetTabStyle_Params params;
	params.isCheck = isCheck;
	params.Text = Text;
	params.Icon = Icon;
	params.onColor = onColor;
	params.offColor = offColor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
