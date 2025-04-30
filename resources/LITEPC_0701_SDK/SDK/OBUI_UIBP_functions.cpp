
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

// Function OBUI_UIBP.OBUI_UIBP_C.OnOBPlayerKillNumsChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UOBUI_UIBP_C::OnOBPlayerKillNumsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function OBUI_UIBP.OBUI_UIBP_C.OnOBPlayerKillNumsChanged");

	UOBUI_UIBP_C_OnOBPlayerKillNumsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OBUI_UIBP.OBUI_UIBP_C.OnAliveTeamNumChangeHandle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UOBUI_UIBP_C::OnAliveTeamNumChangeHandle()
{
	static auto fn = UObject::FindObject<UFunction>("Function OBUI_UIBP.OBUI_UIBP_C.OnAliveTeamNumChangeHandle");

	UOBUI_UIBP_C_OnAliveTeamNumChangeHandle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OBUI_UIBP.OBUI_UIBP_C.RefreshDropBoxList
// (Public, BlueprintCallable, BlueprintEvent)

void UOBUI_UIBP_C::RefreshDropBoxList()
{
	static auto fn = UObject::FindObject<UFunction>("Function OBUI_UIBP.OBUI_UIBP_C.RefreshDropBoxList");

	UOBUI_UIBP_C_RefreshDropBoxList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OBUI_UIBP.OBUI_UIBP_C.OnPlayerNumChangeHandle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UOBUI_UIBP_C::OnPlayerNumChangeHandle()
{
	static auto fn = UObject::FindObject<UFunction>("Function OBUI_UIBP.OBUI_UIBP_C.OnPlayerNumChangeHandle");

	UOBUI_UIBP_C_OnPlayerNumChangeHandle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OBUI_UIBP.OBUI_UIBP_C.OnFreeCameraChange
// (Public, BlueprintCallable, BlueprintEvent)

void UOBUI_UIBP_C::OnFreeCameraChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function OBUI_UIBP.OBUI_UIBP_C.OnFreeCameraChange");

	UOBUI_UIBP_C_OnFreeCameraChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OBUI_UIBP.OBUI_UIBP_C.OnNotViewThePlane
// (Public, BlueprintCallable, BlueprintEvent)

void UOBUI_UIBP_C::OnNotViewThePlane()
{
	static auto fn = UObject::FindObject<UFunction>("Function OBUI_UIBP.OBUI_UIBP_C.OnNotViewThePlane");

	UOBUI_UIBP_C_OnNotViewThePlane_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OBUI_UIBP.OBUI_UIBP_C.OnViewThePlane
// (Public, BlueprintCallable, BlueprintEvent)

void UOBUI_UIBP_C::OnViewThePlane()
{
	static auto fn = UObject::FindObject<UFunction>("Function OBUI_UIBP.OBUI_UIBP_C.OnViewThePlane");

	UOBUI_UIBP_C_OnViewThePlane_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OBUI_UIBP.OBUI_UIBP_C.RefreshTeammateHealth
// (Public, BlueprintCallable, BlueprintEvent)

void UOBUI_UIBP_C::RefreshTeammateHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function OBUI_UIBP.OBUI_UIBP_C.RefreshTeammateHealth");

	UOBUI_UIBP_C_RefreshTeammateHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OBUI_UIBP.OBUI_UIBP_C.RefreshTotalPlayerPos
// (Public, BlueprintCallable, BlueprintEvent)

void UOBUI_UIBP_C::RefreshTotalPlayerPos()
{
	static auto fn = UObject::FindObject<UFunction>("Function OBUI_UIBP.OBUI_UIBP_C.RefreshTotalPlayerPos");

	UOBUI_UIBP_C_RefreshTotalPlayerPos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OBUI_UIBP.OBUI_UIBP_C.OnViewTargetChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UOBUI_UIBP_C::OnViewTargetChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function OBUI_UIBP.OBUI_UIBP_C.OnViewTargetChanged");

	UOBUI_UIBP_C_OnViewTargetChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OBUI_UIBP.OBUI_UIBP_C.SetWidgetVisibility
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 WidgetTarget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOBUI_UIBP_C::SetWidgetVisibility(class UWidget* WidgetTarget, bool IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function OBUI_UIBP.OBUI_UIBP_C.SetWidgetVisibility");

	UOBUI_UIBP_C_SetWidgetVisibility_Params params;
	params.WidgetTarget = WidgetTarget;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OBUI_UIBP.OBUI_UIBP_C.InitVariables
// (Private, BlueprintCallable, BlueprintEvent)

void UOBUI_UIBP_C::InitVariables()
{
	static auto fn = UObject::FindObject<UFunction>("Function OBUI_UIBP.OBUI_UIBP_C.InitVariables");

	UOBUI_UIBP_C_InitVariables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OBUI_UIBP.OBUI_UIBP_C.RefreshNearPlayerList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UOBUI_UIBP_C::RefreshNearPlayerList()
{
	static auto fn = UObject::FindObject<UFunction>("Function OBUI_UIBP.OBUI_UIBP_C.RefreshNearPlayerList");

	UOBUI_UIBP_C_RefreshNearPlayerList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OBUI_UIBP.OBUI_UIBP_C.RefreshTotalPlayerList
// (Public, BlueprintCallable, BlueprintEvent)

void UOBUI_UIBP_C::RefreshTotalPlayerList()
{
	static auto fn = UObject::FindObject<UFunction>("Function OBUI_UIBP.OBUI_UIBP_C.RefreshTotalPlayerList");

	UOBUI_UIBP_C_RefreshTotalPlayerList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OBUI_UIBP.OBUI_UIBP_C.ShowOBUI
// (Public, BlueprintCallable, BlueprintEvent)

void UOBUI_UIBP_C::ShowOBUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function OBUI_UIBP.OBUI_UIBP_C.ShowOBUI");

	UOBUI_UIBP_C_ShowOBUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OBUI_UIBP.OBUI_UIBP_C.OnEntireMapOpenEvenHandle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UOBUI_UIBP_C::OnEntireMapOpenEvenHandle()
{
	static auto fn = UObject::FindObject<UFunction>("Function OBUI_UIBP.OBUI_UIBP_C.OnEntireMapOpenEvenHandle");

	UOBUI_UIBP_C_OnEntireMapOpenEvenHandle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OBUI_UIBP.OBUI_UIBP_C.OnEntireMapCloseEvenHandle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UOBUI_UIBP_C::OnEntireMapCloseEvenHandle()
{
	static auto fn = UObject::FindObject<UFunction>("Function OBUI_UIBP.OBUI_UIBP_C.OnEntireMapCloseEvenHandle");

	UOBUI_UIBP_C_OnEntireMapCloseEvenHandle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OBUI_UIBP.OBUI_UIBP_C.RefreshData
// (Public, BlueprintCallable, BlueprintEvent)

void UOBUI_UIBP_C::RefreshData()
{
	static auto fn = UObject::FindObject<UFunction>("Function OBUI_UIBP.OBUI_UIBP_C.RefreshData");

	UOBUI_UIBP_C_RefreshData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OBUI_UIBP.OBUI_UIBP_C.ReceiveShow
// (Event, Protected, BlueprintEvent)

void UOBUI_UIBP_C::ReceiveShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function OBUI_UIBP.OBUI_UIBP_C.ReceiveShow");

	UOBUI_UIBP_C_ReceiveShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OBUI_UIBP.OBUI_UIBP_C.BndEvt__Button_BackToLobby_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOBUI_UIBP_C::BndEvt__Button_BackToLobby_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OBUI_UIBP.OBUI_UIBP_C.BndEvt__Button_BackToLobby_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UOBUI_UIBP_C_BndEvt__Button_BackToLobby_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OBUI_UIBP.OBUI_UIBP_C.BndEvt__Button_SwitchPlayer_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOBUI_UIBP_C::BndEvt__Button_SwitchPlayer_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OBUI_UIBP.OBUI_UIBP_C.BndEvt__Button_SwitchPlayer_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature");

	UOBUI_UIBP_C_BndEvt__Button_SwitchPlayer_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OBUI_UIBP.OBUI_UIBP_C.BndEvt__Button_MiniMap_K2Node_ComponentBoundEvent_86_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOBUI_UIBP_C::BndEvt__Button_MiniMap_K2Node_ComponentBoundEvent_86_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OBUI_UIBP.OBUI_UIBP_C.BndEvt__Button_MiniMap_K2Node_ComponentBoundEvent_86_OnButtonClickedEvent__DelegateSignature");

	UOBUI_UIBP_C_BndEvt__Button_MiniMap_K2Node_ComponentBoundEvent_86_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OBUI_UIBP.OBUI_UIBP_C.ReceivedInitWidget
// (Event, Public, BlueprintEvent)

void UOBUI_UIBP_C::ReceivedInitWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function OBUI_UIBP.OBUI_UIBP_C.ReceivedInitWidget");

	UOBUI_UIBP_C_ReceivedInitWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OBUI_UIBP.OBUI_UIBP_C.BndEvt__Button_FreeCam_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOBUI_UIBP_C::BndEvt__Button_FreeCam_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OBUI_UIBP.OBUI_UIBP_C.BndEvt__Button_FreeCam_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature");

	UOBUI_UIBP_C_BndEvt__Button_FreeCam_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OBUI_UIBP.OBUI_UIBP_C.BndEvt__Button_UP_K2Node_ComponentBoundEvent_33_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UOBUI_UIBP_C::BndEvt__Button_UP_K2Node_ComponentBoundEvent_33_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OBUI_UIBP.OBUI_UIBP_C.BndEvt__Button_UP_K2Node_ComponentBoundEvent_33_OnButtonPressedEvent__DelegateSignature");

	UOBUI_UIBP_C_BndEvt__Button_UP_K2Node_ComponentBoundEvent_33_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OBUI_UIBP.OBUI_UIBP_C.BndEvt__Button_UP_K2Node_ComponentBoundEvent_66_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UOBUI_UIBP_C::BndEvt__Button_UP_K2Node_ComponentBoundEvent_66_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OBUI_UIBP.OBUI_UIBP_C.BndEvt__Button_UP_K2Node_ComponentBoundEvent_66_OnButtonReleasedEvent__DelegateSignature");

	UOBUI_UIBP_C_BndEvt__Button_UP_K2Node_ComponentBoundEvent_66_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OBUI_UIBP.OBUI_UIBP_C.BndEvt__Button_Down_K2Node_ComponentBoundEvent_84_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UOBUI_UIBP_C::BndEvt__Button_Down_K2Node_ComponentBoundEvent_84_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OBUI_UIBP.OBUI_UIBP_C.BndEvt__Button_Down_K2Node_ComponentBoundEvent_84_OnButtonPressedEvent__DelegateSignature");

	UOBUI_UIBP_C_BndEvt__Button_Down_K2Node_ComponentBoundEvent_84_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OBUI_UIBP.OBUI_UIBP_C.BndEvt__Button_Down_K2Node_ComponentBoundEvent_103_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UOBUI_UIBP_C::BndEvt__Button_Down_K2Node_ComponentBoundEvent_103_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OBUI_UIBP.OBUI_UIBP_C.BndEvt__Button_Down_K2Node_ComponentBoundEvent_103_OnButtonReleasedEvent__DelegateSignature");

	UOBUI_UIBP_C_BndEvt__Button_Down_K2Node_ComponentBoundEvent_103_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OBUI_UIBP.OBUI_UIBP_C.ExecuteUbergraph_OBUI_UIBP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOBUI_UIBP_C::ExecuteUbergraph_OBUI_UIBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OBUI_UIBP.OBUI_UIBP_C.ExecuteUbergraph_OBUI_UIBP");

	UOBUI_UIBP_C_ExecuteUbergraph_OBUI_UIBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
