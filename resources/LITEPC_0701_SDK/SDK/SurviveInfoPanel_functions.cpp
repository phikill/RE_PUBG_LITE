
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

// Function SurviveInfoPanel.SurviveInfoPanel_C.ForceUpdate_KillNums
// (Public, BlueprintCallable, BlueprintEvent)

void USurviveInfoPanel_C::ForceUpdate_KillNums()
{
	static auto fn = UObject::FindObject<UFunction>("Function SurviveInfoPanel.SurviveInfoPanel_C.ForceUpdate_KillNums");

	USurviveInfoPanel_C_ForceUpdate_KillNums_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SurviveInfoPanel.SurviveInfoPanel_C.ForceUpdate_SurviveNums
// (Public, BlueprintCallable, BlueprintEvent)

void USurviveInfoPanel_C::ForceUpdate_SurviveNums()
{
	static auto fn = UObject::FindObject<UFunction>("Function SurviveInfoPanel.SurviveInfoPanel_C.ForceUpdate_SurviveNums");

	USurviveInfoPanel_C_ForceUpdate_SurviveNums_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SurviveInfoPanel.SurviveInfoPanel_C.RefreshKillNum
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void USurviveInfoPanel_C::RefreshKillNum()
{
	static auto fn = UObject::FindObject<UFunction>("Function SurviveInfoPanel.SurviveInfoPanel_C.RefreshKillNum");

	USurviveInfoPanel_C_RefreshKillNum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SurviveInfoPanel.SurviveInfoPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USurviveInfoPanel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SurviveInfoPanel.SurviveInfoPanel_C.Construct");

	USurviveInfoPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SurviveInfoPanel.SurviveInfoPanel_C.PlayerNumChange
// (BlueprintCallable, BlueprintEvent)

void USurviveInfoPanel_C::PlayerNumChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function SurviveInfoPanel.SurviveInfoPanel_C.PlayerNumChange");

	USurviveInfoPanel_C_PlayerNumChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SurviveInfoPanel.SurviveInfoPanel_C.PlayerBeKilledChange
// (BlueprintCallable, BlueprintEvent)

void USurviveInfoPanel_C::PlayerBeKilledChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function SurviveInfoPanel.SurviveInfoPanel_C.PlayerBeKilledChange");

	USurviveInfoPanel_C_PlayerBeKilledChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SurviveInfoPanel.SurviveInfoPanel_C.PlayerKillsChange
// (BlueprintCallable, BlueprintEvent)

void USurviveInfoPanel_C::PlayerKillsChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function SurviveInfoPanel.SurviveInfoPanel_C.PlayerKillsChange");

	USurviveInfoPanel_C_PlayerKillsChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SurviveInfoPanel.SurviveInfoPanel_C.BindEvents
// (BlueprintCallable, BlueprintEvent)

void USurviveInfoPanel_C::BindEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function SurviveInfoPanel.SurviveInfoPanel_C.BindEvents");

	USurviveInfoPanel_C_BindEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SurviveInfoPanel.SurviveInfoPanel_C.RebindEvents
// (BlueprintCallable, BlueprintEvent)

void USurviveInfoPanel_C::RebindEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function SurviveInfoPanel.SurviveInfoPanel_C.RebindEvents");

	USurviveInfoPanel_C_RebindEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SurviveInfoPanel.SurviveInfoPanel_C.ReceivedInitWidget
// (Event, Public, BlueprintEvent)

void USurviveInfoPanel_C::ReceivedInitWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function SurviveInfoPanel.SurviveInfoPanel_C.ReceivedInitWidget");

	USurviveInfoPanel_C_ReceivedInitWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SurviveInfoPanel.SurviveInfoPanel_C.ExecuteUbergraph_SurviveInfoPanel
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USurviveInfoPanel_C::ExecuteUbergraph_SurviveInfoPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SurviveInfoPanel.SurviveInfoPanel_C.ExecuteUbergraph_SurviveInfoPanel");

	USurviveInfoPanel_C_ExecuteUbergraph_SurviveInfoPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
