
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

// Function LobbySystemMenuWidget.LobbySystemMenuWidget_C.GetMainCoherentWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCoherentUIGTWidget*     Widget                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULobbySystemMenuWidget_C::GetMainCoherentWidget(class UCoherentUIGTWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbySystemMenuWidget.LobbySystemMenuWidget_C.GetMainCoherentWidget");

	ULobbySystemMenuWidget_C_GetMainCoherentWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function LobbySystemMenuWidget.LobbySystemMenuWidget_C.ReloadLobby
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULobbySystemMenuWidget_C::ReloadLobby()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbySystemMenuWidget.LobbySystemMenuWidget_C.ReloadLobby");

	ULobbySystemMenuWidget_C_ReloadLobby_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbySystemMenuWidget.LobbySystemMenuWidget_C.GetHUD
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AHUD*                    HUD                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULobbySystemMenuWidget_C::GetHUD(class AHUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbySystemMenuWidget.LobbySystemMenuWidget_C.GetHUD");

	ULobbySystemMenuWidget_C_GetHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HUD != nullptr)
		*HUD = params.HUD;
}


// Function LobbySystemMenuWidget.LobbySystemMenuWidget_C.ShowPopup
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Title                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Message                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FScriptDelegate         PressedDelegate                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ULobbySystemMenuWidget_C::ShowPopup(const struct FText& Title, const struct FText& Message, struct FScriptDelegate* PressedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbySystemMenuWidget.LobbySystemMenuWidget_C.ShowPopup");

	ULobbySystemMenuWidget_C_ShowPopup_Params params;
	params.Title = Title;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PressedDelegate != nullptr)
		*PressedDelegate = params.PressedDelegate;
}


// Function LobbySystemMenuWidget.LobbySystemMenuWidget_C.QuitGame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPopupButtonID                 NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobbySystemMenuWidget_C::QuitGame(EPopupButtonID NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbySystemMenuWidget.LobbySystemMenuWidget_C.QuitGame");

	ULobbySystemMenuWidget_C_QuitGame_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbySystemMenuWidget.LobbySystemMenuWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULobbySystemMenuWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbySystemMenuWidget.LobbySystemMenuWidget_C.Construct");

	ULobbySystemMenuWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbySystemMenuWidget.LobbySystemMenuWidget_C.BndEvt__ButtonExit_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void ULobbySystemMenuWidget_C::BndEvt__ButtonExit_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbySystemMenuWidget.LobbySystemMenuWidget_C.BndEvt__ButtonExit_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");

	ULobbySystemMenuWidget_C_BndEvt__ButtonExit_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbySystemMenuWidget.LobbySystemMenuWidget_C.BndEvt__ButtonSettings_K2Node_ComponentBoundEvent_144_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void ULobbySystemMenuWidget_C::BndEvt__ButtonSettings_K2Node_ComponentBoundEvent_144_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbySystemMenuWidget.LobbySystemMenuWidget_C.BndEvt__ButtonSettings_K2Node_ComponentBoundEvent_144_OnButtonClickedEvent__DelegateSignature");

	ULobbySystemMenuWidget_C_BndEvt__ButtonSettings_K2Node_ComponentBoundEvent_144_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbySystemMenuWidget.LobbySystemMenuWidget_C.BndEvt__ButtonResume_K2Node_ComponentBoundEvent_174_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void ULobbySystemMenuWidget_C::BndEvt__ButtonResume_K2Node_ComponentBoundEvent_174_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbySystemMenuWidget.LobbySystemMenuWidget_C.BndEvt__ButtonResume_K2Node_ComponentBoundEvent_174_OnButtonClickedEvent__DelegateSignature");

	ULobbySystemMenuWidget_C_BndEvt__ButtonResume_K2Node_ComponentBoundEvent_174_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbySystemMenuWidget.LobbySystemMenuWidget_C.BndEvt__ButtonReload_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void ULobbySystemMenuWidget_C::BndEvt__ButtonReload_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbySystemMenuWidget.LobbySystemMenuWidget_C.BndEvt__ButtonReload_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature");

	ULobbySystemMenuWidget_C_BndEvt__ButtonReload_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbySystemMenuWidget.LobbySystemMenuWidget_C.Resume
// (BlueprintCallable, BlueprintEvent)

void ULobbySystemMenuWidget_C::Resume()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbySystemMenuWidget.LobbySystemMenuWidget_C.Resume");

	ULobbySystemMenuWidget_C_Resume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbySystemMenuWidget.LobbySystemMenuWidget_C.ExecuteUbergraph_LobbySystemMenuWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobbySystemMenuWidget_C::ExecuteUbergraph_LobbySystemMenuWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbySystemMenuWidget.LobbySystemMenuWidget_C.ExecuteUbergraph_LobbySystemMenuWidget");

	ULobbySystemMenuWidget_C_ExecuteUbergraph_LobbySystemMenuWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
