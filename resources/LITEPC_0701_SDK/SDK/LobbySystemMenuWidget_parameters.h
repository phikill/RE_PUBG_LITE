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

// Function LobbySystemMenuWidget.LobbySystemMenuWidget_C.GetMainCoherentWidget
struct ULobbySystemMenuWidget_C_GetMainCoherentWidget_Params
{
	class UCoherentUIGTWidget*                         Widget;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LobbySystemMenuWidget.LobbySystemMenuWidget_C.ReloadLobby
struct ULobbySystemMenuWidget_C_ReloadLobby_Params
{
};

// Function LobbySystemMenuWidget.LobbySystemMenuWidget_C.GetHUD
struct ULobbySystemMenuWidget_C_GetHUD_Params
{
	class AHUD*                                        HUD;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LobbySystemMenuWidget.LobbySystemMenuWidget_C.ShowPopup
struct ULobbySystemMenuWidget_C_ShowPopup_Params
{
	struct FText                                       Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FScriptDelegate                             PressedDelegate;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function LobbySystemMenuWidget.LobbySystemMenuWidget_C.QuitGame
struct ULobbySystemMenuWidget_C_QuitGame_Params
{
	EPopupButtonID                                     NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbySystemMenuWidget.LobbySystemMenuWidget_C.Construct
struct ULobbySystemMenuWidget_C_Construct_Params
{
};

// Function LobbySystemMenuWidget.LobbySystemMenuWidget_C.BndEvt__ButtonExit_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
struct ULobbySystemMenuWidget_C_BndEvt__ButtonExit_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function LobbySystemMenuWidget.LobbySystemMenuWidget_C.BndEvt__ButtonSettings_K2Node_ComponentBoundEvent_144_OnButtonClickedEvent__DelegateSignature
struct ULobbySystemMenuWidget_C_BndEvt__ButtonSettings_K2Node_ComponentBoundEvent_144_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function LobbySystemMenuWidget.LobbySystemMenuWidget_C.BndEvt__ButtonResume_K2Node_ComponentBoundEvent_174_OnButtonClickedEvent__DelegateSignature
struct ULobbySystemMenuWidget_C_BndEvt__ButtonResume_K2Node_ComponentBoundEvent_174_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function LobbySystemMenuWidget.LobbySystemMenuWidget_C.BndEvt__ButtonReload_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature
struct ULobbySystemMenuWidget_C_BndEvt__ButtonReload_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function LobbySystemMenuWidget.LobbySystemMenuWidget_C.Resume
struct ULobbySystemMenuWidget_C_Resume_Params
{
};

// Function LobbySystemMenuWidget.LobbySystemMenuWidget_C.ExecuteUbergraph_LobbySystemMenuWidget
struct ULobbySystemMenuWidget_C_ExecuteUbergraph_LobbySystemMenuWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
