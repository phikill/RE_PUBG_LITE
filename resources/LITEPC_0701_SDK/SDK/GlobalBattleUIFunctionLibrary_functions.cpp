
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

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetLayoutDetailByType
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SAVEGAME_UIElemLayout_C* SaveGameObj                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            LayoutIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EBP_UIENUM_UIElemTypes> ElemKey                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBP_STRUCT_UIElemLayoutDetail LayoutDetail                   (Parm, OutParm)
// bool                           IsFound                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalBattleUIFunctionLibrary_C::STATIC_GetLayoutDetailByType(int LayoutIndex, TEnumAsByte<EBP_UIENUM_UIElemTypes> ElemKey, class UObject* __WorldContext, class UBP_SAVEGAME_UIElemLayout_C** SaveGameObj, struct FBP_STRUCT_UIElemLayoutDetail* LayoutDetail, bool* IsFound)
{
	static auto fn = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetLayoutDetailByType");

	UGlobalBattleUIFunctionLibrary_C_GetLayoutDetailByType_Params params;
	params.LayoutIndex = LayoutIndex;
	params.ElemKey = ElemKey;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SaveGameObj != nullptr)
		*SaveGameObj = params.SaveGameObj;
	if (LayoutDetail != nullptr)
		*LayoutDetail = params.LayoutDetail;
	if (IsFound != nullptr)
		*IsFound = params.IsFound;
}


// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.IsWidgetVisible
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           visible                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalBattleUIFunctionLibrary_C::STATIC_IsWidgetVisible(class UWidget* Widget, class UObject* __WorldContext, bool* visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.IsWidgetVisible");

	UGlobalBattleUIFunctionLibrary_C_IsWidgetVisible_Params params;
	params.Widget = Widget;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (visible != nullptr)
		*visible = params.visible;
}


// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetTimeByInt
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Second                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Time                           (Parm, OutParm, ZeroConstructor)

void UGlobalBattleUIFunctionLibrary_C::STATIC_GetTimeByInt(int Second, class UObject* __WorldContext, struct FString* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetTimeByInt");

	UGlobalBattleUIFunctionLibrary_C_GetTimeByInt_Params params;
	params.Second = Second;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;
}


// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.CreateUAEUserWidget
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Class                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UUAEUserWidget*          Parent                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UUAEUserWidget*          Widget                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalBattleUIFunctionLibrary_C::STATIC_CreateUAEUserWidget(class UClass* Class, class UUAEUserWidget* Parent, class UObject* __WorldContext, class UUAEUserWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.CreateUAEUserWidget");

	UGlobalBattleUIFunctionLibrary_C_CreateUAEUserWidget_Params params;
	params.Class = Class;
	params.Parent = Parent;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetLocalizeText
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Text                           (Parm, OutParm, ZeroConstructor)

void UGlobalBattleUIFunctionLibrary_C::STATIC_GetLocalizeText(const struct FString& Key, class UObject* __WorldContext, struct FString* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetLocalizeText");

	UGlobalBattleUIFunctionLibrary_C_GetLocalizeText_Params params;
	params.Key = Key;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.SaveUIElemLayoutSG
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*               SaveGameObject                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGlobalBattleUIFunctionLibrary_C::STATIC_SaveUIElemLayoutSG(class UObject* __WorldContext, class USaveGame** SaveGameObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.SaveUIElemLayoutSG");

	UGlobalBattleUIFunctionLibrary_C_SaveUIElemLayoutSG_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SaveGameObject != nullptr)
		*SaveGameObject = params.SaveGameObject;

	return params.ReturnValue;
}


// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.LoadUIElemLayoutSG
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBP_SAVEGAME_UIElemLayout_C* UIElemSaveGame                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalBattleUIFunctionLibrary_C::STATIC_LoadUIElemLayoutSG(class UObject* __WorldContext, class UBP_SAVEGAME_UIElemLayout_C** UIElemSaveGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.LoadUIElemLayoutSG");

	UGlobalBattleUIFunctionLibrary_C_LoadUIElemLayoutSG_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UIElemSaveGame != nullptr)
		*UIElemSaveGame = params.UIElemSaveGame;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
