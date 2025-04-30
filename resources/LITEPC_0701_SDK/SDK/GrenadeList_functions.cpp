
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

// Function GrenadeList.GrenadeList_C.Reconnect_ResetUIByPlayerControllerState
// (Public, BlueprintCallable, BlueprintEvent)

void UGrenadeList_C::Reconnect_ResetUIByPlayerControllerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeList.GrenadeList_C.Reconnect_ResetUIByPlayerControllerState");

	UGrenadeList_C_Reconnect_ResetUIByPlayerControllerState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeList.GrenadeList_C.GetGrenadePriorityByType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EGrenadeType>      Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Priority                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGrenadeList_C::GetGrenadePriorityByType(TEnumAsByte<EGrenadeType> Type, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeList.GrenadeList_C.GetGrenadePriorityByType");

	UGrenadeList_C_GetGrenadePriorityByType_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;
}


// Function GrenadeList.GrenadeList_C.SetGrenadeOrder
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBattleItemData> Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UGrenadeList_C::SetGrenadeOrder(TArray<struct FBattleItemData>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeList.GrenadeList_C.SetGrenadeOrder");

	UGrenadeList_C_SetGrenadeOrder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function GrenadeList.GrenadeList_C.SwitchToFistIfCurGrenadeCountIsZero
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGrenadeList_C::SwitchToFistIfCurGrenadeCountIsZero()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeList.GrenadeList_C.SwitchToFistIfCurGrenadeCountIsZero");

	UGrenadeList_C_SwitchToFistIfCurGrenadeCountIsZero_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeList.GrenadeList_C.MarkDownUsingStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESurviveWeaponPropSlot         Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGrenadeList_C::MarkDownUsingStatus(ESurviveWeaponPropSlot Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeList.GrenadeList_C.MarkDownUsingStatus");

	UGrenadeList_C_MarkDownUsingStatus_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeList.GrenadeList_C.GetIsArrayHasGrenade
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           HasGrenade                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGrenadeList_C::GetIsArrayHasGrenade(bool* HasGrenade)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeList.GrenadeList_C.GetIsArrayHasGrenade");

	UGrenadeList_C_GetIsArrayHasGrenade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasGrenade != nullptr)
		*HasGrenade = params.HasGrenade;
}


// Function GrenadeList.GrenadeList_C.GetIsAGrenadeByItemID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsAGrenade                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGrenadeList_C::GetIsAGrenadeByItemID(int ItemID, bool* IsAGrenade)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeList.GrenadeList_C.GetIsAGrenadeByItemID");

	UGrenadeList_C_GetIsAGrenadeByItemID_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsAGrenade != nullptr)
		*IsAGrenade = params.IsAGrenade;
}


// Function GrenadeList.GrenadeList_C.GetSlateBrushByItemID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateBrush             WeaponSlateBrushNormal         (Parm, OutParm)
// struct FSlateBrush             WeaponSlateBrushHightLight     (Parm, OutParm)

void UGrenadeList_C::GetSlateBrushByItemID(int ItemID, struct FSlateBrush* WeaponSlateBrushNormal, struct FSlateBrush* WeaponSlateBrushHightLight)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeList.GrenadeList_C.GetSlateBrushByItemID");

	UGrenadeList_C_GetSlateBrushByItemID_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WeaponSlateBrushNormal != nullptr)
		*WeaponSlateBrushNormal = params.WeaponSlateBrushNormal;
	if (WeaponSlateBrushHightLight != nullptr)
		*WeaponSlateBrushHightLight = params.WeaponSlateBrushHightLight;
}


// Function GrenadeList.GrenadeList_C.UpdateDataToSlot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGrenadeList_C::UpdateDataToSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeList.GrenadeList_C.UpdateDataToSlot");

	UGrenadeList_C_UpdateDataToSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeList.GrenadeList_C.HandleBackPackItemUpdate
// (Public, BlueprintCallable, BlueprintEvent)

void UGrenadeList_C::HandleBackPackItemUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeList.GrenadeList_C.HandleBackPackItemUpdate");

	UGrenadeList_C_HandleBackPackItemUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeList.GrenadeList_C.GetGrenadeTypeByItemID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGrenadeType>      Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGrenadeList_C::GetGrenadeTypeByItemID(int ItemID, TEnumAsByte<EGrenadeType>* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeList.GrenadeList_C.GetGrenadeTypeByItemID");

	UGrenadeList_C_GetGrenadeTypeByItemID_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
}


// Function GrenadeList.GrenadeList_C.GetGrenadeAndMeleeWeaponDataTableMap
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TMap<int, struct FBP_STRUCT_Item_type> DataTableRowMap                (Parm, OutParm, ZeroConstructor)

void UGrenadeList_C::GetGrenadeAndMeleeWeaponDataTableMap(TMap<int, struct FBP_STRUCT_Item_type>* DataTableRowMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeList.GrenadeList_C.GetGrenadeAndMeleeWeaponDataTableMap");

	UGrenadeList_C_GetGrenadeAndMeleeWeaponDataTableMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DataTableRowMap != nullptr)
		*DataTableRowMap = params.DataTableRowMap;
}


// Function GrenadeList.GrenadeList_C.GetGrenadeAndMeleeWeaponDataArray
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBattleItemData> GrenadeAndMelee                (Parm, OutParm, ZeroConstructor)

void UGrenadeList_C::GetGrenadeAndMeleeWeaponDataArray(TArray<struct FBattleItemData>* GrenadeAndMelee)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeList.GrenadeList_C.GetGrenadeAndMeleeWeaponDataArray");

	UGrenadeList_C_GetGrenadeAndMeleeWeaponDataArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GrenadeAndMelee != nullptr)
		*GrenadeAndMelee = params.GrenadeAndMelee;
}


// Function GrenadeList.GrenadeList_C.GetPlayerCharacter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ASTExtraPlayerCharacter* PlayerCharacter                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGrenadeList_C::GetPlayerCharacter(class ASTExtraPlayerCharacter** PlayerCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeList.GrenadeList_C.GetPlayerCharacter");

	UGrenadeList_C_GetPlayerCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerCharacter != nullptr)
		*PlayerCharacter = params.PlayerCharacter;
}


// Function GrenadeList.GrenadeList_C.GetPlayerEquipWeaponBySlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESurviveWeaponPropSlot         Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ASTExtraWeapon*          Weapon                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGrenadeList_C::GetPlayerEquipWeaponBySlot(ESurviveWeaponPropSlot Slot, class ASTExtraWeapon** Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeList.GrenadeList_C.GetPlayerEquipWeaponBySlot");

	UGrenadeList_C_GetPlayerEquipWeaponBySlot_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Weapon != nullptr)
		*Weapon = params.Weapon;
}


// Function GrenadeList.GrenadeList_C.IsGrenadeCountZero
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsZero                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGrenadeList_C::IsGrenadeCountZero(bool* IsZero)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeList.GrenadeList_C.IsGrenadeCountZero");

	UGrenadeList_C_IsGrenadeCountZero_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsZero != nullptr)
		*IsZero = params.IsZero;
}


// Function GrenadeList.GrenadeList_C.ChangeGrenadeVisibilityByGrenadeCounts
// (Public, BlueprintCallable, BlueprintEvent)

void UGrenadeList_C::ChangeGrenadeVisibilityByGrenadeCounts()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeList.GrenadeList_C.ChangeGrenadeVisibilityByGrenadeCounts");

	UGrenadeList_C_ChangeGrenadeVisibilityByGrenadeCounts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeList.GrenadeList_C.HandleSlotChosen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGrenadeList_C::HandleSlotChosen(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeList.GrenadeList_C.HandleSlotChosen");

	UGrenadeList_C_HandleSlotChosen_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeList.GrenadeList_C.AutoSwitchGrenadeToCurUse
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SwitchSuccess                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGrenadeList_C::AutoSwitchGrenadeToCurUse(bool* SwitchSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeList.GrenadeList_C.AutoSwitchGrenadeToCurUse");

	UGrenadeList_C_AutoSwitchGrenadeToCurUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SwitchSuccess != nullptr)
		*SwitchSuccess = params.SwitchSuccess;
}


// Function GrenadeList.GrenadeList_C.AutoCollapseGrenadeSlot
// (Public, BlueprintCallable, BlueprintEvent)

void UGrenadeList_C::AutoCollapseGrenadeSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeList.GrenadeList_C.AutoCollapseGrenadeSlot");

	UGrenadeList_C_AutoCollapseGrenadeSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeList.GrenadeList_C.SetAutoCollapse
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGrenadeList_C::SetAutoCollapse()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeList.GrenadeList_C.SetAutoCollapse");

	UGrenadeList_C_SetAutoCollapse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeList.GrenadeList_C.SortUnUseSlot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGrenadeList_C::SortUnUseSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeList.GrenadeList_C.SortUnUseSlot");

	UGrenadeList_C_SortUnUseSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeList.GrenadeList_C.SetGrenadeSlotDataByIndex
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGrenadeSlotData        InputData                      (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGrenadeList_C::SetGrenadeSlotDataByIndex(const struct FGrenadeSlotData& InputData, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeList.GrenadeList_C.SetGrenadeSlotDataByIndex");

	UGrenadeList_C_SetGrenadeSlotDataByIndex_Params params;
	params.InputData = InputData;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeList.GrenadeList_C.SwitchSloatDataWithCurUse
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGrenadeList_C::SwitchSloatDataWithCurUse(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeList.GrenadeList_C.SwitchSloatDataWithCurUse");

	UGrenadeList_C_SwitchSloatDataWithCurUse_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeList.GrenadeList_C.GetBtnIncludeWidgetByIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UImage*                  BG                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UImage*                  GrenadeImage                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UButton*                 GrenadeBtn                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTextBlock*              Text                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UGridPanel*              Grid                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UBorder*                 Border                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGrenadeList_C::GetBtnIncludeWidgetByIndex(int Index, class UImage** BG, class UImage** GrenadeImage, class UButton** GrenadeBtn, class UTextBlock** Text, class UGridPanel** Grid, class UBorder** Border)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeList.GrenadeList_C.GetBtnIncludeWidgetByIndex");

	UGrenadeList_C_GetBtnIncludeWidgetByIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BG != nullptr)
		*BG = params.BG;
	if (GrenadeImage != nullptr)
		*GrenadeImage = params.GrenadeImage;
	if (GrenadeBtn != nullptr)
		*GrenadeBtn = params.GrenadeBtn;
	if (Text != nullptr)
		*Text = params.Text;
	if (Grid != nullptr)
		*Grid = params.Grid;
	if (Border != nullptr)
		*Border = params.Border;
}


// Function GrenadeList.GrenadeList_C.GetGrenadeSlotDataIndexByIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGrenadeSlotData        Data                           (Parm, OutParm)

void UGrenadeList_C::GetGrenadeSlotDataIndexByIndex(int Index, struct FGrenadeSlotData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeList.GrenadeList_C.GetGrenadeSlotDataIndexByIndex");

	UGrenadeList_C_GetGrenadeSlotDataIndexByIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
}


// Function GrenadeList.GrenadeList_C.UpdateGrenadeBtnBGAndImage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsHighLight                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGrenadeList_C::UpdateGrenadeBtnBGAndImage(int Index, bool IsHighLight)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeList.GrenadeList_C.UpdateGrenadeBtnBGAndImage");

	UGrenadeList_C_UpdateGrenadeBtnBGAndImage_Params params;
	params.Index = Index;
	params.IsHighLight = IsHighLight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeList.GrenadeList_C.SetGrenadeVisibilityByCurStatus
// (Public, BlueprintCallable, BlueprintEvent)

void UGrenadeList_C::SetGrenadeVisibilityByCurStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeList.GrenadeList_C.SetGrenadeVisibilityByCurStatus");

	UGrenadeList_C_SetGrenadeVisibilityByCurStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeList.GrenadeList_C.SetInteractiveTriangleByCurStatus
// (Public, BlueprintCallable, BlueprintEvent)

void UGrenadeList_C::SetInteractiveTriangleByCurStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeList.GrenadeList_C.SetInteractiveTriangleByCurStatus");

	UGrenadeList_C_SetInteractiveTriangleByCurStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeList.GrenadeList_C.GetGrenadeIconByType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGrenadeType>      InputType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateBrush             Normal                         (Parm, OutParm)
// struct FSlateBrush             HightLight                     (Parm, OutParm)

void UGrenadeList_C::GetGrenadeIconByType(TEnumAsByte<EGrenadeType> InputType, struct FSlateBrush* Normal, struct FSlateBrush* HightLight)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeList.GrenadeList_C.GetGrenadeIconByType");

	UGrenadeList_C_GetGrenadeIconByType_Params params;
	params.InputType = InputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Normal != nullptr)
		*Normal = params.Normal;
	if (HightLight != nullptr)
		*HightLight = params.HightLight;
}


// Function GrenadeList.GrenadeList_C.UpdateGrenadeImageAndCounts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGrenadeList_C::UpdateGrenadeImageAndCounts()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeList.GrenadeList_C.UpdateGrenadeImageAndCounts");

	UGrenadeList_C_UpdateGrenadeImageAndCounts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeList.GrenadeList_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGrenadeList_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeList.GrenadeList_C.PreConstruct");

	UGrenadeList_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeList.GrenadeList_C.BndEvt__GrenadeSlot3Btn_K2Node_ComponentBoundEvent_665_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UGrenadeList_C::BndEvt__GrenadeSlot3Btn_K2Node_ComponentBoundEvent_665_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeList.GrenadeList_C.BndEvt__GrenadeSlot3Btn_K2Node_ComponentBoundEvent_665_OnButtonReleasedEvent__DelegateSignature");

	UGrenadeList_C_BndEvt__GrenadeSlot3Btn_K2Node_ComponentBoundEvent_665_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeList.GrenadeList_C.BndEvt__GrenadeSlot3Btn_K2Node_ComponentBoundEvent_674_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UGrenadeList_C::BndEvt__GrenadeSlot3Btn_K2Node_ComponentBoundEvent_674_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeList.GrenadeList_C.BndEvt__GrenadeSlot3Btn_K2Node_ComponentBoundEvent_674_OnButtonPressedEvent__DelegateSignature");

	UGrenadeList_C_BndEvt__GrenadeSlot3Btn_K2Node_ComponentBoundEvent_674_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeList.GrenadeList_C.BndEvt__InterativeBtn_K2Node_ComponentBoundEvent_757_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UGrenadeList_C::BndEvt__InterativeBtn_K2Node_ComponentBoundEvent_757_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeList.GrenadeList_C.BndEvt__InterativeBtn_K2Node_ComponentBoundEvent_757_OnButtonPressedEvent__DelegateSignature");

	UGrenadeList_C_BndEvt__InterativeBtn_K2Node_ComponentBoundEvent_757_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeList.GrenadeList_C.BndEvt__InterativeBtn_K2Node_ComponentBoundEvent_767_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UGrenadeList_C::BndEvt__InterativeBtn_K2Node_ComponentBoundEvent_767_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeList.GrenadeList_C.BndEvt__InterativeBtn_K2Node_ComponentBoundEvent_767_OnButtonReleasedEvent__DelegateSignature");

	UGrenadeList_C_BndEvt__InterativeBtn_K2Node_ComponentBoundEvent_767_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeList.GrenadeList_C.BndEvt__CurUseBtn_K2Node_ComponentBoundEvent_806_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UGrenadeList_C::BndEvt__CurUseBtn_K2Node_ComponentBoundEvent_806_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeList.GrenadeList_C.BndEvt__CurUseBtn_K2Node_ComponentBoundEvent_806_OnButtonPressedEvent__DelegateSignature");

	UGrenadeList_C_BndEvt__CurUseBtn_K2Node_ComponentBoundEvent_806_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeList.GrenadeList_C.BndEvt__CurUseBtn_K2Node_ComponentBoundEvent_825_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UGrenadeList_C::BndEvt__CurUseBtn_K2Node_ComponentBoundEvent_825_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeList.GrenadeList_C.BndEvt__CurUseBtn_K2Node_ComponentBoundEvent_825_OnButtonReleasedEvent__DelegateSignature");

	UGrenadeList_C_BndEvt__CurUseBtn_K2Node_ComponentBoundEvent_825_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeList.GrenadeList_C.BndEvt__GrenadeSlot2Btn_K2Node_ComponentBoundEvent_1440_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UGrenadeList_C::BndEvt__GrenadeSlot2Btn_K2Node_ComponentBoundEvent_1440_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeList.GrenadeList_C.BndEvt__GrenadeSlot2Btn_K2Node_ComponentBoundEvent_1440_OnButtonPressedEvent__DelegateSignature");

	UGrenadeList_C_BndEvt__GrenadeSlot2Btn_K2Node_ComponentBoundEvent_1440_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeList.GrenadeList_C.BndEvt__GrenadeSlot2Btn_K2Node_ComponentBoundEvent_1459_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UGrenadeList_C::BndEvt__GrenadeSlot2Btn_K2Node_ComponentBoundEvent_1459_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeList.GrenadeList_C.BndEvt__GrenadeSlot2Btn_K2Node_ComponentBoundEvent_1459_OnButtonReleasedEvent__DelegateSignature");

	UGrenadeList_C_BndEvt__GrenadeSlot2Btn_K2Node_ComponentBoundEvent_1459_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeList.GrenadeList_C.BndEvt__GrenadeSlot1Btn_K2Node_ComponentBoundEvent_1510_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UGrenadeList_C::BndEvt__GrenadeSlot1Btn_K2Node_ComponentBoundEvent_1510_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeList.GrenadeList_C.BndEvt__GrenadeSlot1Btn_K2Node_ComponentBoundEvent_1510_OnButtonPressedEvent__DelegateSignature");

	UGrenadeList_C_BndEvt__GrenadeSlot1Btn_K2Node_ComponentBoundEvent_1510_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeList.GrenadeList_C.BndEvt__GrenadeSlot1Btn_K2Node_ComponentBoundEvent_1531_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UGrenadeList_C::BndEvt__GrenadeSlot1Btn_K2Node_ComponentBoundEvent_1531_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeList.GrenadeList_C.BndEvt__GrenadeSlot1Btn_K2Node_ComponentBoundEvent_1531_OnButtonReleasedEvent__DelegateSignature");

	UGrenadeList_C_BndEvt__GrenadeSlot1Btn_K2Node_ComponentBoundEvent_1531_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeList.GrenadeList_C.SimulateExpand
// (BlueprintCallable, BlueprintEvent)

void UGrenadeList_C::SimulateExpand()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeList.GrenadeList_C.SimulateExpand");

	UGrenadeList_C_SimulateExpand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeList.GrenadeList_C.BndEvt__Slot4Btn_K2Node_ComponentBoundEvent_35_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UGrenadeList_C::BndEvt__Slot4Btn_K2Node_ComponentBoundEvent_35_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeList.GrenadeList_C.BndEvt__Slot4Btn_K2Node_ComponentBoundEvent_35_OnButtonPressedEvent__DelegateSignature");

	UGrenadeList_C_BndEvt__Slot4Btn_K2Node_ComponentBoundEvent_35_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeList.GrenadeList_C.BndEvt__Slot4Btn_K2Node_ComponentBoundEvent_58_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UGrenadeList_C::BndEvt__Slot4Btn_K2Node_ComponentBoundEvent_58_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeList.GrenadeList_C.BndEvt__Slot4Btn_K2Node_ComponentBoundEvent_58_OnButtonReleasedEvent__DelegateSignature");

	UGrenadeList_C_BndEvt__Slot4Btn_K2Node_ComponentBoundEvent_58_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeList.GrenadeList_C.WeaponChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESurviveWeaponPropSlot         TargetChangeSlot               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGrenadeList_C::WeaponChange(ESurviveWeaponPropSlot TargetChangeSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeList.GrenadeList_C.WeaponChange");

	UGrenadeList_C_WeaponChange_Params params;
	params.TargetChangeSlot = TargetChangeSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeList.GrenadeList_C.ReceivedInitWidget
// (Event, Public, BlueprintEvent)

void UGrenadeList_C::ReceivedInitWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeList.GrenadeList_C.ReceivedInitWidget");

	UGrenadeList_C_ReceivedInitWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeList.GrenadeList_C.ItemUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           DefineID                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UGrenadeList_C::ItemUpdated(const struct FItemDefineID& DefineID)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeList.GrenadeList_C.ItemUpdated");

	UGrenadeList_C_ItemUpdated_Params params;
	params.DefineID = DefineID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeList.GrenadeList_C.ExecuteUbergraph_GrenadeList
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGrenadeList_C::ExecuteUbergraph_GrenadeList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeList.GrenadeList_C.ExecuteUbergraph_GrenadeList");

	UGrenadeList_C_ExecuteUbergraph_GrenadeList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeList.GrenadeList_C.OnUseFist__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UGrenadeList_C::OnUseFist__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeList.GrenadeList_C.OnUseFist__DelegateSignature");

	UGrenadeList_C_OnUseFist__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeList.GrenadeList_C.OnUseMelee__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UGrenadeList_C::OnUseMelee__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeList.GrenadeList_C.OnUseMelee__DelegateSignature");

	UGrenadeList_C_OnUseMelee__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeList.GrenadeList_C.OnGrenadeEmpty__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UGrenadeList_C::OnGrenadeEmpty__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeList.GrenadeList_C.OnGrenadeEmpty__DelegateSignature");

	UGrenadeList_C_OnGrenadeEmpty__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeList.GrenadeList_C.OnUseGrenade__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGrenadeType>      grenadeType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGrenadeList_C::OnUseGrenade__DelegateSignature(TEnumAsByte<EGrenadeType> grenadeType)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeList.GrenadeList_C.OnUseGrenade__DelegateSignature");

	UGrenadeList_C_OnUseGrenade__DelegateSignature_Params params;
	params.grenadeType = grenadeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
