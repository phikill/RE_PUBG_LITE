
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

// Function BP_LitePCSurviveHUD.BP_LitePCSurviveHUD_C.FindWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UUserWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUserWidget* ABP_LitePCSurviveHUD_C::FindWidget(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LitePCSurviveHUD.BP_LitePCSurviveHUD_C.FindWidget");

	ABP_LitePCSurviveHUD_C_FindWidget_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_LitePCSurviveHUD.BP_LitePCSurviveHUD_C.BroadCastSettingChanged
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LitePCSurviveHUD_C::BroadCastSettingChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LitePCSurviveHUD.BP_LitePCSurviveHUD_C.BroadCastSettingChanged");

	ABP_LitePCSurviveHUD_C_BroadCastSettingChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LitePCSurviveHUD.BP_LitePCSurviveHUD_C.CreateWidgetAndAddToContainer
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ZOrder                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ESlateVisibility               InVisibility                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget*             Widget_Pin                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_LitePCSurviveHUD_C::CreateWidgetAndAddToContainer(class UClass* Widget, int ZOrder, ESlateVisibility InVisibility, class UUserWidget** Widget_Pin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LitePCSurviveHUD.BP_LitePCSurviveHUD_C.CreateWidgetAndAddToContainer");

	ABP_LitePCSurviveHUD_C_CreateWidgetAndAddToContainer_Params params;
	params.Widget = Widget;
	params.ZOrder = ZOrder;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget_Pin != nullptr)
		*Widget_Pin = params.Widget_Pin;
}


// Function BP_LitePCSurviveHUD.BP_LitePCSurviveHUD_C.RegisterWidgetList
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_LitePCSurviveHUD_C::RegisterWidgetList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LitePCSurviveHUD.BP_LitePCSurviveHUD_C.RegisterWidgetList");

	ABP_LitePCSurviveHUD_C_RegisterWidgetList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LitePCSurviveHUD.BP_LitePCSurviveHUD_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_LitePCSurviveHUD_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LitePCSurviveHUD.BP_LitePCSurviveHUD_C.UserConstructionScript");

	ABP_LitePCSurviveHUD_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LitePCSurviveHUD.BP_LitePCSurviveHUD_C.OnSettingChanged
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LitePCSurviveHUD_C::OnSettingChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LitePCSurviveHUD.BP_LitePCSurviveHUD_C.OnSettingChanged");

	ABP_LitePCSurviveHUD_C_OnSettingChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LitePCSurviveHUD.BP_LitePCSurviveHUD_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_LitePCSurviveHUD_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LitePCSurviveHUD.BP_LitePCSurviveHUD_C.ReceiveBeginPlay");

	ABP_LitePCSurviveHUD_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LitePCSurviveHUD.BP_LitePCSurviveHUD_C.ExecuteUbergraph_BP_LitePCSurviveHUD
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LitePCSurviveHUD_C::ExecuteUbergraph_BP_LitePCSurviveHUD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LitePCSurviveHUD.BP_LitePCSurviveHUD_C.ExecuteUbergraph_BP_LitePCSurviveHUD");

	ABP_LitePCSurviveHUD_C_ExecuteUbergraph_BP_LitePCSurviveHUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LitePCSurviveHUD.BP_LitePCSurviveHUD_C.SettingChangedDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_LitePCSurviveHUD_C::SettingChangedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LitePCSurviveHUD.BP_LitePCSurviveHUD_C.SettingChangedDispatcher__DelegateSignature");

	ABP_LitePCSurviveHUD_C_SettingChangedDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
