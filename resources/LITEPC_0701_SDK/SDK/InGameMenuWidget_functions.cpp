
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

// Function InGameMenuWidget.InGameMenuWidget_C.QuitGame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPopupButtonID                 NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInGameMenuWidget_C::QuitGame(EPopupButtonID NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuWidget.InGameMenuWidget_C.QuitGame");

	UInGameMenuWidget_C_QuitGame_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget.InGameMenuWidget_C.GoToLobby
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPopupButtonID                 NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInGameMenuWidget_C::GoToLobby(EPopupButtonID NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuWidget.InGameMenuWidget_C.GoToLobby");

	UInGameMenuWidget_C_GoToLobby_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget.InGameMenuWidget_C.ShowPopup
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Title                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Message                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FScriptDelegate         PressedDelegate                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UInGameMenuWidget_C::ShowPopup(const struct FText& Title, const struct FText& Message, struct FScriptDelegate* PressedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuWidget.InGameMenuWidget_C.ShowPopup");

	UInGameMenuWidget_C_ShowPopup_Params params;
	params.Title = Title;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PressedDelegate != nullptr)
		*PressedDelegate = params.PressedDelegate;
}


// Function InGameMenuWidget.InGameMenuWidget_C.GetHUD
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AHUD*                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AHUD* UInGameMenuWidget_C::GetHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuWidget.InGameMenuWidget_C.GetHUD");

	UInGameMenuWidget_C_GetHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InGameMenuWidget.InGameMenuWidget_C.HideInGameMenu
// (BlueprintCallable, BlueprintEvent)

void UInGameMenuWidget_C::HideInGameMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuWidget.InGameMenuWidget_C.HideInGameMenu");

	UInGameMenuWidget_C_HideInGameMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget.InGameMenuWidget_C.BndEvt__Button_GotoLobby_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UInGameMenuWidget_C::BndEvt__Button_GotoLobby_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuWidget.InGameMenuWidget_C.BndEvt__Button_GotoLobby_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UInGameMenuWidget_C_BndEvt__Button_GotoLobby_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget.InGameMenuWidget_C.BndEvt__Button_Exit_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UInGameMenuWidget_C::BndEvt__Button_Exit_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuWidget.InGameMenuWidget_C.BndEvt__Button_Exit_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature");

	UInGameMenuWidget_C_BndEvt__Button_Exit_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget.InGameMenuWidget_C.BndEvt__Button_Resume_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UInGameMenuWidget_C::BndEvt__Button_Resume_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuWidget.InGameMenuWidget_C.BndEvt__Button_Resume_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature");

	UInGameMenuWidget_C_BndEvt__Button_Resume_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget.InGameMenuWidget_C.BndEvt__Button_Option_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UInGameMenuWidget_C::BndEvt__Button_Option_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuWidget.InGameMenuWidget_C.BndEvt__Button_Option_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature");

	UInGameMenuWidget_C_BndEvt__Button_Option_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget.InGameMenuWidget_C.ExecuteUbergraph_InGameMenuWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInGameMenuWidget_C::ExecuteUbergraph_InGameMenuWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuWidget.InGameMenuWidget_C.ExecuteUbergraph_InGameMenuWidget");

	UInGameMenuWidget_C_ExecuteUbergraph_InGameMenuWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
