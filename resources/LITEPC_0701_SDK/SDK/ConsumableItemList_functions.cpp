
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

// Function ConsumableItemList.ConsumableItemList_C.IsCustomUIDataValid
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               SaveDataSize                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UConsumableItemList_C::IsCustomUIDataValid(class UWidget* Widget, const struct FVector2D& SaveDataSize, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableItemList.ConsumableItemList_C.IsCustomUIDataValid");

	UConsumableItemList_C_IsCustomUIDataValid_Params params;
	params.Widget = Widget;
	params.SaveDataSize = SaveDataSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function ConsumableItemList.ConsumableItemList_C.IsInSortCD
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsInCD                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UConsumableItemList_C::IsInSortCD(bool* IsInCD)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableItemList.ConsumableItemList_C.IsInSortCD");

	UConsumableItemList_C_IsInSortCD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsInCD != nullptr)
		*IsInCD = params.IsInCD;
}


// Function ConsumableItemList.ConsumableItemList_C.RefreshItemImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsumableItemList_C::RefreshItemImage(class UObject* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableItemList.ConsumableItemList_C.RefreshItemImage");

	UConsumableItemList_C_RefreshItemImage_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsumableItemList.ConsumableItemList_C.Reconnect_ResetUIByPlayerControllerState
// (Public, BlueprintCallable, BlueprintEvent)

void UConsumableItemList_C::Reconnect_ResetUIByPlayerControllerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableItemList.ConsumableItemList_C.Reconnect_ResetUIByPlayerControllerState");

	UConsumableItemList_C_Reconnect_ResetUIByPlayerControllerState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsumableItemList.ConsumableItemList_C.ResetItemPriorityInArray
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FCompatableComsumableItemType> In                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FCompatableComsumableItemType> Out                            (Parm, OutParm, ZeroConstructor)

void UConsumableItemList_C::ResetItemPriorityInArray(TArray<struct FCompatableComsumableItemType>* In, TArray<struct FCompatableComsumableItemType>* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableItemList.ConsumableItemList_C.ResetItemPriorityInArray");

	UConsumableItemList_C_ResetItemPriorityInArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (In != nullptr)
		*In = params.In;
	if (Out != nullptr)
		*Out = params.Out;
}


// Function ConsumableItemList.ConsumableItemList_C.OnItemClick
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsumableItemList_C::OnItemClick(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableItemList.ConsumableItemList_C.OnItemClick");

	UConsumableItemList_C_OnItemClick_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsumableItemList.ConsumableItemList_C.SetSortModeBySetting
// (Public, BlueprintCallable, BlueprintEvent)

void UConsumableItemList_C::SetSortModeBySetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableItemList.ConsumableItemList_C.SetSortModeBySetting");

	UConsumableItemList_C_SetSortModeBySetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsumableItemList.ConsumableItemList_C.SetItemPriorityBySortMode
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FCompatableComsumableItemType InData                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FCompatableComsumableItemType OutData                        (Parm, OutParm)

void UConsumableItemList_C::SetItemPriorityBySortMode(const struct FCompatableComsumableItemType& InData, struct FCompatableComsumableItemType* OutData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableItemList.ConsumableItemList_C.SetItemPriorityBySortMode");

	UConsumableItemList_C_SetItemPriorityBySortMode_Params params;
	params.InData = InData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutData != nullptr)
		*OutData = params.OutData;
}


// Function ConsumableItemList.ConsumableItemList_C.HandleHPChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurHP                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsumableItemList_C::HandleHPChange(float CurHP)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableItemList.ConsumableItemList_C.HandleHPChange");

	UConsumableItemList_C_HandleHPChange_Params params;
	params.CurHP = CurHP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsumableItemList.ConsumableItemList_C.UpdateInterativeTriangle
// (Public, BlueprintCallable, BlueprintEvent)

void UConsumableItemList_C::UpdateInterativeTriangle()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableItemList.ConsumableItemList_C.UpdateInterativeTriangle");

	UConsumableItemList_C_UpdateInterativeTriangle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsumableItemList.ConsumableItemList_C.UpdateItemPressOrRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsPress                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsumableItemList_C::UpdateItemPressOrRelease(int Index, bool IsPress)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableItemList.ConsumableItemList_C.UpdateItemPressOrRelease");

	UConsumableItemList_C_UpdateItemPressOrRelease_Params params;
	params.Index = Index;
	params.IsPress = IsPress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsumableItemList.ConsumableItemList_C.CollapseFolder
// (Public, BlueprintCallable, BlueprintEvent)

void UConsumableItemList_C::CollapseFolder()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableItemList.ConsumableItemList_C.CollapseFolder");

	UConsumableItemList_C_CollapseFolder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsumableItemList.ConsumableItemList_C.ResetCurUsingItemType
// (Public, BlueprintCallable, BlueprintEvent)

void UConsumableItemList_C::ResetCurUsingItemType()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableItemList.ConsumableItemList_C.ResetCurUsingItemType");

	UConsumableItemList_C_ResetCurUsingItemType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsumableItemList.ConsumableItemList_C.GetConsumableItemUIWidgetGroupByIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UImage*                  BG                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UImage*                  ItemImage                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UButton*                 Btn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTextBlock*              CountText                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UGridPanel*              Grid                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UBorder*                 Border                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UConsumableItemList_C::GetConsumableItemUIWidgetGroupByIndex(int Index, class UImage** BG, class UImage** ItemImage, class UButton** Btn, class UTextBlock** CountText, class UGridPanel** Grid, class UBorder** Border)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableItemList.ConsumableItemList_C.GetConsumableItemUIWidgetGroupByIndex");

	UConsumableItemList_C_GetConsumableItemUIWidgetGroupByIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BG != nullptr)
		*BG = params.BG;
	if (ItemImage != nullptr)
		*ItemImage = params.ItemImage;
	if (Btn != nullptr)
		*Btn = params.Btn;
	if (CountText != nullptr)
		*CountText = params.CountText;
	if (Grid != nullptr)
		*Grid = params.Grid;
	if (Border != nullptr)
		*Border = params.Border;
}


// Function ConsumableItemList.ConsumableItemList_C.UpdateFloderListImage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UConsumableItemList_C::UpdateFloderListImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableItemList.ConsumableItemList_C.UpdateFloderListImage");

	UConsumableItemList_C_UpdateFloderListImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsumableItemList.ConsumableItemList_C.UpdateFirstItemImage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UConsumableItemList_C::UpdateFirstItemImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableItemList.ConsumableItemList_C.UpdateFirstItemImage");

	UConsumableItemList_C_UpdateFirstItemImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsumableItemList.ConsumableItemList_C.IsFirstItemRunOut
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UConsumableItemList_C::IsFirstItemRunOut(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableItemList.ConsumableItemList_C.IsFirstItemRunOut");

	UConsumableItemList_C_IsFirstItemRunOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function ConsumableItemList.ConsumableItemList_C.GetConsumItemTypeBySpecificID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FItemDefineID           DefineID                       (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<EConsumeItemType>  Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UConsumableItemList_C::GetConsumItemTypeBySpecificID(const struct FItemDefineID& DefineID, TEnumAsByte<EConsumeItemType>* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableItemList.ConsumableItemList_C.GetConsumItemTypeBySpecificID");

	UConsumableItemList_C_GetConsumItemTypeBySpecificID_Params params;
	params.DefineID = DefineID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
}


// Function ConsumableItemList.ConsumableItemList_C.UpdateConsumableItemArray
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UConsumableItemList_C::UpdateConsumableItemArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableItemList.ConsumableItemList_C.UpdateConsumableItemArray");

	UConsumableItemList_C_UpdateConsumableItemArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsumableItemList.ConsumableItemList_C.IsAConsumableItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FItemDefineID           DefineID                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsComsumableItem               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UConsumableItemList_C::IsAConsumableItem(const struct FItemDefineID& DefineID, bool* IsComsumableItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableItemList.ConsumableItemList_C.IsAConsumableItem");

	UConsumableItemList_C_IsAConsumableItem_Params params;
	params.DefineID = DefineID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsComsumableItem != nullptr)
		*IsComsumableItem = params.IsComsumableItem;
}


// Function ConsumableItemList.ConsumableItemList_C.GetConsumableItemDataTableMap
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TMap<int, struct FBP_STRUCT_Item_type> DataTableRowMap                (Parm, OutParm, ZeroConstructor)

void UConsumableItemList_C::GetConsumableItemDataTableMap(TMap<int, struct FBP_STRUCT_Item_type>* DataTableRowMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableItemList.ConsumableItemList_C.GetConsumableItemDataTableMap");

	UConsumableItemList_C_GetConsumableItemDataTableMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DataTableRowMap != nullptr)
		*DataTableRowMap = params.DataTableRowMap;
}


// Function ConsumableItemList.ConsumableItemList_C.GetPlayerCharacter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ASTExtraPlayerCharacter* PlayerCharacter                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UConsumableItemList_C::GetPlayerCharacter(class ASTExtraPlayerCharacter** PlayerCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableItemList.ConsumableItemList_C.GetPlayerCharacter");

	UConsumableItemList_C_GetPlayerCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerCharacter != nullptr)
		*PlayerCharacter = params.PlayerCharacter;
}


// Function ConsumableItemList.ConsumableItemList_C.SimulateExpand
// (BlueprintCallable, BlueprintEvent)

void UConsumableItemList_C::SimulateExpand()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableItemList.ConsumableItemList_C.SimulateExpand");

	UConsumableItemList_C_SimulateExpand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsumableItemList.ConsumableItemList_C.BndEvt__InterativeBtn_K2Node_ComponentBoundEvent_767_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UConsumableItemList_C::BndEvt__InterativeBtn_K2Node_ComponentBoundEvent_767_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableItemList.ConsumableItemList_C.BndEvt__InterativeBtn_K2Node_ComponentBoundEvent_767_OnButtonReleasedEvent__DelegateSignature");

	UConsumableItemList_C_BndEvt__InterativeBtn_K2Node_ComponentBoundEvent_767_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsumableItemList.ConsumableItemList_C.BndEvt__InterativeBtn_K2Node_ComponentBoundEvent_757_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UConsumableItemList_C::BndEvt__InterativeBtn_K2Node_ComponentBoundEvent_757_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableItemList.ConsumableItemList_C.BndEvt__InterativeBtn_K2Node_ComponentBoundEvent_757_OnButtonPressedEvent__DelegateSignature");

	UConsumableItemList_C_BndEvt__InterativeBtn_K2Node_ComponentBoundEvent_757_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsumableItemList.ConsumableItemList_C.ReceivedInitWidget
// (Event, Public, BlueprintEvent)

void UConsumableItemList_C::ReceivedInitWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableItemList.ConsumableItemList_C.ReceivedInitWidget");

	UConsumableItemList_C_ReceivedInitWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsumableItemList.ConsumableItemList_C.BndEvt__CurUseFirstItemBtn_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UConsumableItemList_C::BndEvt__CurUseFirstItemBtn_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableItemList.ConsumableItemList_C.BndEvt__CurUseFirstItemBtn_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	UConsumableItemList_C_BndEvt__CurUseFirstItemBtn_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsumableItemList.ConsumableItemList_C.BndEvt__CurUseFirstItemBtn_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UConsumableItemList_C::BndEvt__CurUseFirstItemBtn_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableItemList.ConsumableItemList_C.BndEvt__CurUseFirstItemBtn_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature");

	UConsumableItemList_C_BndEvt__CurUseFirstItemBtn_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsumableItemList.ConsumableItemList_C.BndEvt__ConsumeItem1Btn_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UConsumableItemList_C::BndEvt__ConsumeItem1Btn_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableItemList.ConsumableItemList_C.BndEvt__ConsumeItem1Btn_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");

	UConsumableItemList_C_BndEvt__ConsumeItem1Btn_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsumableItemList.ConsumableItemList_C.BndEvt__ConsumeItem1Btn_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UConsumableItemList_C::BndEvt__ConsumeItem1Btn_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableItemList.ConsumableItemList_C.BndEvt__ConsumeItem1Btn_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature");

	UConsumableItemList_C_BndEvt__ConsumeItem1Btn_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsumableItemList.ConsumableItemList_C.BndEvt__ConsumeItem2Btn_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UConsumableItemList_C::BndEvt__ConsumeItem2Btn_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableItemList.ConsumableItemList_C.BndEvt__ConsumeItem2Btn_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature");

	UConsumableItemList_C_BndEvt__ConsumeItem2Btn_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsumableItemList.ConsumableItemList_C.BndEvt__ConsumeItem2Btn_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UConsumableItemList_C::BndEvt__ConsumeItem2Btn_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableItemList.ConsumableItemList_C.BndEvt__ConsumeItem2Btn_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature");

	UConsumableItemList_C_BndEvt__ConsumeItem2Btn_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsumableItemList.ConsumableItemList_C.BndEvt__ConsumeItem3Btn_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UConsumableItemList_C::BndEvt__ConsumeItem3Btn_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableItemList.ConsumableItemList_C.BndEvt__ConsumeItem3Btn_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature");

	UConsumableItemList_C_BndEvt__ConsumeItem3Btn_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsumableItemList.ConsumableItemList_C.BndEvt__ConsumeItem3Btn_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UConsumableItemList_C::BndEvt__ConsumeItem3Btn_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableItemList.ConsumableItemList_C.BndEvt__ConsumeItem3Btn_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature");

	UConsumableItemList_C_BndEvt__ConsumeItem3Btn_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsumableItemList.ConsumableItemList_C.BndEvt__ConsumeItem4Btn_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UConsumableItemList_C::BndEvt__ConsumeItem4Btn_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableItemList.ConsumableItemList_C.BndEvt__ConsumeItem4Btn_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature");

	UConsumableItemList_C_BndEvt__ConsumeItem4Btn_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsumableItemList.ConsumableItemList_C.BndEvt__ConsumeItem4Btn_K2Node_ComponentBoundEvent_10_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UConsumableItemList_C::BndEvt__ConsumeItem4Btn_K2Node_ComponentBoundEvent_10_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableItemList.ConsumableItemList_C.BndEvt__ConsumeItem4Btn_K2Node_ComponentBoundEvent_10_OnButtonReleasedEvent__DelegateSignature");

	UConsumableItemList_C_BndEvt__ConsumeItem4Btn_K2Node_ComponentBoundEvent_10_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsumableItemList.ConsumableItemList_C.BndEvt__ConsumeItem5Btn_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UConsumableItemList_C::BndEvt__ConsumeItem5Btn_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableItemList.ConsumableItemList_C.BndEvt__ConsumeItem5Btn_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature");

	UConsumableItemList_C_BndEvt__ConsumeItem5Btn_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsumableItemList.ConsumableItemList_C.BndEvt__ConsumeItem5Btn_K2Node_ComponentBoundEvent_12_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UConsumableItemList_C::BndEvt__ConsumeItem5Btn_K2Node_ComponentBoundEvent_12_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableItemList.ConsumableItemList_C.BndEvt__ConsumeItem5Btn_K2Node_ComponentBoundEvent_12_OnButtonReleasedEvent__DelegateSignature");

	UConsumableItemList_C_BndEvt__ConsumeItem5Btn_K2Node_ComponentBoundEvent_12_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsumableItemList.ConsumableItemList_C.IntelligentSort
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           BoolValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsumableItemList_C::IntelligentSort(bool BoolValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableItemList.ConsumableItemList_C.IntelligentSort");

	UConsumableItemList_C_IntelligentSort_Params params;
	params.BoolValue = BoolValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsumableItemList.ConsumableItemList_C.SetSettingControlUI
// (Public, BlueprintCallable, BlueprintEvent)

void UConsumableItemList_C::SetSettingControlUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableItemList.ConsumableItemList_C.SetSettingControlUI");

	UConsumableItemList_C_SetSettingControlUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsumableItemList.ConsumableItemList_C.OnLocalCharacterHPChangeDel_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          currentHP                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ratioHP                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsumableItemList_C::OnLocalCharacterHPChangeDel_Event(float currentHP, float ratioHP)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableItemList.ConsumableItemList_C.OnLocalCharacterHPChangeDel_Event");

	UConsumableItemList_C_OnLocalCharacterHPChangeDel_Event_Params params;
	params.currentHP = currentHP;
	params.ratioHP = ratioHP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsumableItemList.ConsumableItemList_C.ItemUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           DefineID                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UConsumableItemList_C::ItemUpdated(const struct FItemDefineID& DefineID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableItemList.ConsumableItemList_C.ItemUpdated");

	UConsumableItemList_C_ItemUpdated_Params params;
	params.DefineID = DefineID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsumableItemList.ConsumableItemList_C.HandleItemUpdate
// (BlueprintCallable, BlueprintEvent)

void UConsumableItemList_C::HandleItemUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableItemList.ConsumableItemList_C.HandleItemUpdate");

	UConsumableItemList_C_HandleItemUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsumableItemList.ConsumableItemList_C.UseFirstItem
// (BlueprintCallable, BlueprintEvent)

void UConsumableItemList_C::UseFirstItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableItemList.ConsumableItemList_C.UseFirstItem");

	UConsumableItemList_C_UseFirstItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsumableItemList.ConsumableItemList_C.SetCustomizeUIInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SAVEGAME_UIElemLayout_C* SaveGame                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            LayoutIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsumableItemList_C::SetCustomizeUIInfo(class UBP_SAVEGAME_UIElemLayout_C* SaveGame, int LayoutIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableItemList.ConsumableItemList_C.SetCustomizeUIInfo");

	UConsumableItemList_C_SetCustomizeUIInfo_Params params;
	params.SaveGame = SaveGame;
	params.LayoutIndex = LayoutIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsumableItemList.ConsumableItemList_C.ExecuteUbergraph_ConsumableItemList
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsumableItemList_C::ExecuteUbergraph_ConsumableItemList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableItemList.ConsumableItemList_C.ExecuteUbergraph_ConsumableItemList");

	UConsumableItemList_C_ExecuteUbergraph_ConsumableItemList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
