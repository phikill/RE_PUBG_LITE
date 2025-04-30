#pragma once

#include "../SDK.h"

// Name: LitePC_0701, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function InGameMenuWidget.InGameMenuWidget_C.QuitGame
struct UInGameMenuWidget_C_QuitGame_Params
{
	EPopupButtonID                                     NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InGameMenuWidget.InGameMenuWidget_C.GoToLobby
struct UInGameMenuWidget_C_GoToLobby_Params
{
	EPopupButtonID                                     NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InGameMenuWidget.InGameMenuWidget_C.ShowPopup
struct UInGameMenuWidget_C_ShowPopup_Params
{
	struct FText                                       Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FScriptDelegate                             PressedDelegate;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function InGameMenuWidget.InGameMenuWidget_C.GetHUD
struct UInGameMenuWidget_C_GetHUD_Params
{
	class AHUD*                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InGameMenuWidget.InGameMenuWidget_C.HideInGameMenu
struct UInGameMenuWidget_C_HideInGameMenu_Params
{
};

// Function InGameMenuWidget.InGameMenuWidget_C.BndEvt__Button_GotoLobby_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
struct UInGameMenuWidget_C_BndEvt__Button_GotoLobby_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function InGameMenuWidget.InGameMenuWidget_C.BndEvt__Button_Exit_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
struct UInGameMenuWidget_C_BndEvt__Button_Exit_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function InGameMenuWidget.InGameMenuWidget_C.BndEvt__Button_Resume_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature
struct UInGameMenuWidget_C_BndEvt__Button_Resume_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function InGameMenuWidget.InGameMenuWidget_C.BndEvt__Button_Option_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature
struct UInGameMenuWidget_C_BndEvt__Button_Option_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function InGameMenuWidget.InGameMenuWidget_C.ExecuteUbergraph_InGameMenuWidget
struct UInGameMenuWidget_C_ExecuteUbergraph_InGameMenuWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
