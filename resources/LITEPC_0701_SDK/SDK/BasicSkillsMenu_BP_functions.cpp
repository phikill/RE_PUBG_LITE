
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

// Function BasicSkillsMenu_BP.BasicSkillsMenu_BP_C.IsCustomUIDataValid
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               SaveDataSize                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBasicSkillsMenu_BP_C::IsCustomUIDataValid(class UWidget* Widget, const struct FVector2D& SaveDataSize, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicSkillsMenu_BP.BasicSkillsMenu_BP_C.IsCustomUIDataValid");

	UBasicSkillsMenu_BP_C_IsCustomUIDataValid_Params params;
	params.Widget = Widget;
	params.SaveDataSize = SaveDataSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function BasicSkillsMenu_BP.BasicSkillsMenu_BP_C.SetInteractKeyText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EInteractType                  InType                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasicSkillsMenu_BP_C::SetInteractKeyText(EInteractType InType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicSkillsMenu_BP.BasicSkillsMenu_BP_C.SetInteractKeyText");

	UBasicSkillsMenu_BP_C_SetInteractKeyText_Params params;
	params.InType = InType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasicSkillsMenu_BP.BasicSkillsMenu_BP_C.OnInteractWithWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EInteractType                  InType                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasicSkillsMenu_BP_C::OnInteractWithWidget(EInteractType InType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicSkillsMenu_BP.BasicSkillsMenu_BP_C.OnInteractWithWidget");

	UBasicSkillsMenu_BP_C_OnInteractWithWidget_Params params;
	params.InType = InType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasicSkillsMenu_BP.BasicSkillsMenu_BP_C.HideCanDriveTips
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBP_STRUCT_GuideText_type NewParam1                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UBasicSkillsMenu_BP_C::HideCanDriveTips(bool NewParam, const struct FBP_STRUCT_GuideText_type& NewParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicSkillsMenu_BP.BasicSkillsMenu_BP_C.HideCanDriveTips");

	UBasicSkillsMenu_BP_C_HideCanDriveTips_Params params;
	params.NewParam = NewParam;
	params.NewParam1 = NewParam1;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasicSkillsMenu_BP.BasicSkillsMenu_BP_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBasicSkillsMenu_BP_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicSkillsMenu_BP.BasicSkillsMenu_BP_C.Destruct");

	UBasicSkillsMenu_BP_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasicSkillsMenu_BP.BasicSkillsMenu_BP_C.SetSettingControlUI
// (Public, BlueprintCallable, BlueprintEvent)

void UBasicSkillsMenu_BP_C::SetSettingControlUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicSkillsMenu_BP.BasicSkillsMenu_BP_C.SetSettingControlUI");

	UBasicSkillsMenu_BP_C_SetSettingControlUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasicSkillsMenu_BP.BasicSkillsMenu_BP_C.BndEvt__BtnRescue_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBasicSkillsMenu_BP_C::BndEvt__BtnRescue_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicSkillsMenu_BP.BasicSkillsMenu_BP_C.BndEvt__BtnRescue_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature");

	UBasicSkillsMenu_BP_C_BndEvt__BtnRescue_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasicSkillsMenu_BP.BasicSkillsMenu_BP_C.SetCustomizeUIInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SAVEGAME_UIElemLayout_C* SaveGame                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            LayoutIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasicSkillsMenu_BP_C::SetCustomizeUIInfo(class UBP_SAVEGAME_UIElemLayout_C* SaveGame, int LayoutIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicSkillsMenu_BP.BasicSkillsMenu_BP_C.SetCustomizeUIInfo");

	UBasicSkillsMenu_BP_C_SetCustomizeUIInfo_Params params;
	params.SaveGame = SaveGame;
	params.LayoutIndex = LayoutIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasicSkillsMenu_BP.BasicSkillsMenu_BP_C.ReceivedInitWidget
// (Event, Public, BlueprintEvent)

void UBasicSkillsMenu_BP_C::ReceivedInitWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicSkillsMenu_BP.BasicSkillsMenu_BP_C.ReceivedInitWidget");

	UBasicSkillsMenu_BP_C_ReceivedInitWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasicSkillsMenu_BP.BasicSkillsMenu_BP_C.OnInteract
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EInteractType                  InteractType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasicSkillsMenu_BP_C::OnInteract(EInteractType InteractType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicSkillsMenu_BP.BasicSkillsMenu_BP_C.OnInteract");

	UBasicSkillsMenu_BP_C_OnInteract_Params params;
	params.InteractType = InteractType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasicSkillsMenu_BP.BasicSkillsMenu_BP_C.ExecuteUbergraph_BasicSkillsMenu_BP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasicSkillsMenu_BP_C::ExecuteUbergraph_BasicSkillsMenu_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicSkillsMenu_BP.BasicSkillsMenu_BP_C.ExecuteUbergraph_BasicSkillsMenu_BP");

	UBasicSkillsMenu_BP_C_ExecuteUbergraph_BasicSkillsMenu_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasicSkillsMenu_BP.BasicSkillsMenu_BP_C.ED_AutoOpenDoor__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            openMode                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasicSkillsMenu_BP_C::ED_AutoOpenDoor__DelegateSignature(int openMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicSkillsMenu_BP.BasicSkillsMenu_BP_C.ED_AutoOpenDoor__DelegateSignature");

	UBasicSkillsMenu_BP_C_ED_AutoOpenDoor__DelegateSignature_Params params;
	params.openMode = openMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasicSkillsMenu_BP.BasicSkillsMenu_BP_C.ED_CommonBtn__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ECommonBtn>        Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasicSkillsMenu_BP_C::ED_CommonBtn__DelegateSignature(TEnumAsByte<ECommonBtn> Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicSkillsMenu_BP.BasicSkillsMenu_BP_C.ED_CommonBtn__DelegateSignature");

	UBasicSkillsMenu_BP_C_ED_CommonBtn__DelegateSignature_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
