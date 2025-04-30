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

// Function WidgetBP_LobbyWebView.WidgetBP_LobbyWebView_C.WebViewBroadcast
struct UWidgetBP_LobbyWebView_C_WebViewBroadcast_Params
{
	struct FString                                     EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     Parameter;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function WidgetBP_LobbyWebView.WidgetBP_LobbyWebView_C.WebViewUnload
struct UWidgetBP_LobbyWebView_C_WebViewUnload_Params
{
	int                                                ViewIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WidgetBP_LobbyWebView.WidgetBP_LobbyWebView_C.WebViewInputFocus
struct UWidgetBP_LobbyWebView_C_WebViewInputFocus_Params
{
	int                                                ViewIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WidgetBP_LobbyWebView.WidgetBP_LobbyWebView_C.HandleEventFromWeb
struct UWidgetBP_LobbyWebView_C_HandleEventFromWeb_Params
{
	class UCoherentUIGTJSPayload*                      payload;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WidgetBP_LobbyWebView.WidgetBP_LobbyWebView_C.WebViewShow
struct UWidgetBP_LobbyWebView_C_WebViewShow_Params
{
	int                                                VeiwIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WidgetBP_LobbyWebView.WidgetBP_LobbyWebView_C.WebViewLoad
struct UWidgetBP_LobbyWebView_C_WebViewLoad_Params
{
	int                                                ViewIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     URL;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function WidgetBP_LobbyWebView.WidgetBP_LobbyWebView_C.PreConstruct
struct UWidgetBP_LobbyWebView_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WidgetBP_LobbyWebView.WidgetBP_LobbyWebView_C.Construct
struct UWidgetBP_LobbyWebView_C_Construct_Params
{
};

// Function WidgetBP_LobbyWebView.WidgetBP_LobbyWebView_C.Tick
struct UWidgetBP_LobbyWebView_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WidgetBP_LobbyWebView.WidgetBP_LobbyWebView_C.SetDeviceId
struct UWidgetBP_LobbyWebView_C_SetDeviceId_Params
{
	struct FString                                     ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function WidgetBP_LobbyWebView.WidgetBP_LobbyWebView_C.RegistButtonClickEvent
struct UWidgetBP_LobbyWebView_C_RegistButtonClickEvent_Params
{
	bool                                               NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WidgetBP_LobbyWebView.WidgetBP_LobbyWebView_C.J_1
struct UWidgetBP_LobbyWebView_C_J_1_Params
{
	class UCoherentUIGTJSPayload*                      payload;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WidgetBP_LobbyWebView.WidgetBP_LobbyWebView_C.BndEvt__CoherentUIGTWidget_0_K2Node_ComponentBoundEvent_0_UIGTReadyForBindingsSignature__DelegateSignature
struct UWidgetBP_LobbyWebView_C_BndEvt__CoherentUIGTWidget_0_K2Node_ComponentBoundEvent_0_UIGTReadyForBindingsSignature__DelegateSignature_Params
{
};

// Function WidgetBP_LobbyWebView.WidgetBP_LobbyWebView_C.Destruct
struct UWidgetBP_LobbyWebView_C_Destruct_Params
{
};

// Function WidgetBP_LobbyWebView.WidgetBP_LobbyWebView_C.ExecuteUbergraph_WidgetBP_LobbyWebView
struct UWidgetBP_LobbyWebView_C_ExecuteUbergraph_WidgetBP_LobbyWebView_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
