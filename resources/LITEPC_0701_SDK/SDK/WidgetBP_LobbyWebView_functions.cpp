
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

// Function WidgetBP_LobbyWebView.WidgetBP_LobbyWebView_C.WebViewBroadcast
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 Parameter                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UWidgetBP_LobbyWebView_C::WebViewBroadcast(const struct FString& EventName, const struct FString& Parameter)
{
	static auto fn = UObject::FindObject<UFunction>("Function WidgetBP_LobbyWebView.WidgetBP_LobbyWebView_C.WebViewBroadcast");

	UWidgetBP_LobbyWebView_C_WebViewBroadcast_Params params;
	params.EventName = EventName;
	params.Parameter = Parameter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WidgetBP_LobbyWebView.WidgetBP_LobbyWebView_C.WebViewUnload
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ViewIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidgetBP_LobbyWebView_C::WebViewUnload(int ViewIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WidgetBP_LobbyWebView.WidgetBP_LobbyWebView_C.WebViewUnload");

	UWidgetBP_LobbyWebView_C_WebViewUnload_Params params;
	params.ViewIndex = ViewIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WidgetBP_LobbyWebView.WidgetBP_LobbyWebView_C.WebViewInputFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ViewIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidgetBP_LobbyWebView_C::WebViewInputFocus(int ViewIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WidgetBP_LobbyWebView.WidgetBP_LobbyWebView_C.WebViewInputFocus");

	UWidgetBP_LobbyWebView_C_WebViewInputFocus_Params params;
	params.ViewIndex = ViewIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WidgetBP_LobbyWebView.WidgetBP_LobbyWebView_C.HandleEventFromWeb
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCoherentUIGTJSPayload*  payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidgetBP_LobbyWebView_C::HandleEventFromWeb(class UCoherentUIGTJSPayload* payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function WidgetBP_LobbyWebView.WidgetBP_LobbyWebView_C.HandleEventFromWeb");

	UWidgetBP_LobbyWebView_C_HandleEventFromWeb_Params params;
	params.payload = payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WidgetBP_LobbyWebView.WidgetBP_LobbyWebView_C.WebViewShow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            VeiwIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidgetBP_LobbyWebView_C::WebViewShow(int VeiwIndex, bool visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function WidgetBP_LobbyWebView.WidgetBP_LobbyWebView_C.WebViewShow");

	UWidgetBP_LobbyWebView_C_WebViewShow_Params params;
	params.VeiwIndex = VeiwIndex;
	params.visible = visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WidgetBP_LobbyWebView.WidgetBP_LobbyWebView_C.WebViewLoad
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ViewIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 URL                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UWidgetBP_LobbyWebView_C::WebViewLoad(int ViewIndex, const struct FString& URL)
{
	static auto fn = UObject::FindObject<UFunction>("Function WidgetBP_LobbyWebView.WidgetBP_LobbyWebView_C.WebViewLoad");

	UWidgetBP_LobbyWebView_C_WebViewLoad_Params params;
	params.ViewIndex = ViewIndex;
	params.URL = URL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WidgetBP_LobbyWebView.WidgetBP_LobbyWebView_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidgetBP_LobbyWebView_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WidgetBP_LobbyWebView.WidgetBP_LobbyWebView_C.PreConstruct");

	UWidgetBP_LobbyWebView_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WidgetBP_LobbyWebView.WidgetBP_LobbyWebView_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidgetBP_LobbyWebView_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WidgetBP_LobbyWebView.WidgetBP_LobbyWebView_C.Construct");

	UWidgetBP_LobbyWebView_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WidgetBP_LobbyWebView.WidgetBP_LobbyWebView_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidgetBP_LobbyWebView_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WidgetBP_LobbyWebView.WidgetBP_LobbyWebView_C.Tick");

	UWidgetBP_LobbyWebView_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WidgetBP_LobbyWebView.WidgetBP_LobbyWebView_C.SetDeviceId
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UWidgetBP_LobbyWebView_C::SetDeviceId(const struct FString& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WidgetBP_LobbyWebView.WidgetBP_LobbyWebView_C.SetDeviceId");

	UWidgetBP_LobbyWebView_C_SetDeviceId_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WidgetBP_LobbyWebView.WidgetBP_LobbyWebView_C.RegistButtonClickEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidgetBP_LobbyWebView_C::RegistButtonClickEvent(bool NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function WidgetBP_LobbyWebView.WidgetBP_LobbyWebView_C.RegistButtonClickEvent");

	UWidgetBP_LobbyWebView_C_RegistButtonClickEvent_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WidgetBP_LobbyWebView.WidgetBP_LobbyWebView_C.J_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCoherentUIGTJSPayload*  payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidgetBP_LobbyWebView_C::J_1(class UCoherentUIGTJSPayload* payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function WidgetBP_LobbyWebView.WidgetBP_LobbyWebView_C.J_1");

	UWidgetBP_LobbyWebView_C_J_1_Params params;
	params.payload = payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WidgetBP_LobbyWebView.WidgetBP_LobbyWebView_C.BndEvt__CoherentUIGTWidget_0_K2Node_ComponentBoundEvent_0_UIGTReadyForBindingsSignature__DelegateSignature
// (BlueprintEvent)

void UWidgetBP_LobbyWebView_C::BndEvt__CoherentUIGTWidget_0_K2Node_ComponentBoundEvent_0_UIGTReadyForBindingsSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WidgetBP_LobbyWebView.WidgetBP_LobbyWebView_C.BndEvt__CoherentUIGTWidget_0_K2Node_ComponentBoundEvent_0_UIGTReadyForBindingsSignature__DelegateSignature");

	UWidgetBP_LobbyWebView_C_BndEvt__CoherentUIGTWidget_0_K2Node_ComponentBoundEvent_0_UIGTReadyForBindingsSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WidgetBP_LobbyWebView.WidgetBP_LobbyWebView_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidgetBP_LobbyWebView_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WidgetBP_LobbyWebView.WidgetBP_LobbyWebView_C.Destruct");

	UWidgetBP_LobbyWebView_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WidgetBP_LobbyWebView.WidgetBP_LobbyWebView_C.ExecuteUbergraph_WidgetBP_LobbyWebView
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidgetBP_LobbyWebView_C::ExecuteUbergraph_WidgetBP_LobbyWebView(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WidgetBP_LobbyWebView.WidgetBP_LobbyWebView_C.ExecuteUbergraph_WidgetBP_LobbyWebView");

	UWidgetBP_LobbyWebView_C_ExecuteUbergraph_WidgetBP_LobbyWebView_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
