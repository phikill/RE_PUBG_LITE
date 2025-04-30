
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

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.SetOBAirBoxName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPickUpListItem_Row_BPPC_C* Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UPickUpListPanel_BP_C::SetOBAirBoxName(class UPickUpListItem_Row_BPPC_C* Item, const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.SetOBAirBoxName");

	UPickUpListPanel_BP_C_SetOBAirBoxName_Params params;
	params.Item = Item;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.DirectShowBox
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSearchedTombBoxAndWrapperListResult> boxArray                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UPickUpListPanel_BP_C::DirectShowBox(TArray<struct FSearchedTombBoxAndWrapperListResult>* boxArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.DirectShowBox");

	UPickUpListPanel_BP_C_DirectShowBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (boxArray != nullptr)
		*boxArray = params.boxArray;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.UIInGameEvent_BackpackClose
// (Public, BlueprintCallable, BlueprintEvent)

void UPickUpListPanel_BP_C::UIInGameEvent_BackpackClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.UIInGameEvent_BackpackClose");

	UPickUpListPanel_BP_C_UIInGameEvent_BackpackClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.UIInGameEvent_HideQuickChatMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UPickUpListPanel_BP_C::UIInGameEvent_HideQuickChatMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.UIInGameEvent_HideQuickChatMenu");

	UPickUpListPanel_BP_C_UIInGameEvent_HideQuickChatMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.DeadBoxExistVisibilityControl
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsExist                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickUpListPanel_BP_C::DeadBoxExistVisibilityControl(bool IsExist)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.DeadBoxExistVisibilityControl");

	UPickUpListPanel_BP_C_DeadBoxExistVisibilityControl_Params params;
	params.IsExist = IsExist;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.PickUpExistVisibilityControl
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           BtnExist                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickUpListPanel_BP_C::PickUpExistVisibilityControl(bool BtnExist)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.PickUpExistVisibilityControl");

	UPickUpListPanel_BP_C_PickUpExistVisibilityControl_Params params;
	params.BtnExist = BtnExist;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.IsPlayerCanSeeWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewParam1                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPickUpListPanel_BP_C::IsPlayerCanSeeWidget(class UWidget* NewParam, bool* NewParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.IsPlayerCanSeeWidget");

	UPickUpListPanel_BP_C_IsPlayerCanSeeWidget_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam1 != nullptr)
		*NewParam1 = params.NewParam1;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.HideExpandDeadBoxTips
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBP_STRUCT_GuideText_type NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UPickUpListPanel_BP_C::HideExpandDeadBoxTips(bool isShow, const struct FBP_STRUCT_GuideText_type& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.HideExpandDeadBoxTips");

	UPickUpListPanel_BP_C_HideExpandDeadBoxTips_Params params;
	params.isShow = isShow;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.HideExpandPickUpTips
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBP_STRUCT_GuideText_type NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UPickUpListPanel_BP_C::HideExpandPickUpTips(bool isShow, const struct FBP_STRUCT_GuideText_type& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.HideExpandPickUpTips");

	UPickUpListPanel_BP_C_HideExpandPickUpTips_Params params;
	params.isShow = isShow;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.ShowNineOrSix
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Nine                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickUpListPanel_BP_C::ShowNineOrSix(bool bShow, bool Nine, bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.ShowNineOrSix");

	UPickUpListPanel_BP_C_ShowNineOrSix_Params params;
	params.bShow = bShow;
	params.Nine = Nine;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.PlayerSetBoxCol
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            col                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickUpListPanel_BP_C::PlayerSetBoxCol(int col)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.PlayerSetBoxCol");

	UPickUpListPanel_BP_C_PlayerSetBoxCol_Params params;
	params.col = col;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.ShowNineOrSixCol
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPickUpListItem_Row_BP_C* itemRow                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickUpListPanel_BP_C::ShowNineOrSixCol(class UPickUpListItem_Row_BP_C* itemRow, bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.ShowNineOrSixCol");

	UPickUpListPanel_BP_C_ShowNineOrSixCol_Params params;
	params.itemRow = itemRow;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.GetUseful2
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           DefineID                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSearchedPickUpItemResult pickUpItemResult               (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Useful                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPickUpListPanel_BP_C::GetUseful2(const struct FItemDefineID& DefineID, const struct FSearchedPickUpItemResult& pickUpItemResult, bool* Useful)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.GetUseful2");

	UPickUpListPanel_BP_C_GetUseful2_Params params;
	params.DefineID = DefineID;
	params.pickUpItemResult = pickUpItemResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Useful != nullptr)
		*Useful = params.Useful;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.ResetTombCheckSum
// (Public, BlueprintCallable, BlueprintEvent)

void UPickUpListPanel_BP_C::ResetTombCheckSum()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.ResetTombCheckSum");

	UPickUpListPanel_BP_C_ResetTombCheckSum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.NotifyBox
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickUpListPanel_BP_C::NotifyBox(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.NotifyBox");

	UPickUpListPanel_BP_C_NotifyBox_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.NotifyPickup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickUpListPanel_BP_C::NotifyPickup(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.NotifyPickup");

	UPickUpListPanel_BP_C_NotifyPickup_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.FindTombRowByName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UPickUpListItem_Row_BPPC_C* itemRow                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           find                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPickUpListPanel_BP_C::FindTombRowByName(const struct FString& Name, class UPickUpListItem_Row_BPPC_C** itemRow, bool* find)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.FindTombRowByName");

	UPickUpListPanel_BP_C_FindTombRowByName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (itemRow != nullptr)
		*itemRow = params.itemRow;
	if (find != nullptr)
		*find = params.find;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.isDurableFull
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBP_STRUCT_Item_type    Record                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSearchedPickUpItemResult PickupItem                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           full                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPickUpListPanel_BP_C::isDurableFull(const struct FBP_STRUCT_Item_type& Record, const struct FSearchedPickUpItemResult& PickupItem, bool* full)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.isDurableFull");

	UPickUpListPanel_BP_C_isDurableFull_Params params;
	params.Record = Record;
	params.PickupItem = PickupItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (full != nullptr)
		*full = params.full;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.GetBulletAutoPickupLimit
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            resID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Limit                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPickUpListPanel_BP_C::GetBulletAutoPickupLimit(int resID, int* Limit)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.GetBulletAutoPickupLimit");

	UPickUpListPanel_BP_C_GetBulletAutoPickupLimit_Params params;
	params.resID = resID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Limit != nullptr)
		*Limit = params.Limit;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.DeleteTombs
// (Public, BlueprintCallable, BlueprintEvent)

void UPickUpListPanel_BP_C::DeleteTombs()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.DeleteTombs");

	UPickUpListPanel_BP_C_DeleteTombs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.CheckBoxChange
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSearchedTombBoxAndWrapperListResult Result                         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           change                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPickUpListPanel_BP_C::CheckBoxChange(const struct FSearchedTombBoxAndWrapperListResult& Result, bool* change)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.CheckBoxChange");

	UPickUpListPanel_BP_C_CheckBoxChange_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (change != nullptr)
		*change = params.change;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.CheckChange
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSearchedPickUpItemResult> Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           change                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPickUpListPanel_BP_C::CheckChange(TArray<struct FSearchedPickUpItemResult>* Array, bool* change)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.CheckChange");

	UPickUpListPanel_BP_C_CheckChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
	if (change != nullptr)
		*change = params.change;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.AutoPickGroundItem
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBattleSearchItemSortingInfo> Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UPickUpListPanel_BP_C::AutoPickGroundItem(TArray<struct FBattleSearchItemSortingInfo>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.AutoPickGroundItem");

	UPickUpListPanel_BP_C_AutoPickGroundItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.ItemOpertation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           ItemDefineID                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// EBattleItemOperationType       optType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickUpListPanel_BP_C::ItemOpertation(EBattleItemOperationType optType, unsigned char Reason, struct FItemDefineID* ItemDefineID)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.ItemOpertation");

	UPickUpListPanel_BP_C_ItemOpertation_Params params;
	params.optType = optType;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemDefineID != nullptr)
		*ItemDefineID = params.ItemDefineID;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.PauseAutoPick
// (Public, BlueprintCallable, BlueprintEvent)

void UPickUpListPanel_BP_C::PauseAutoPick()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.PauseAutoPick");

	UPickUpListPanel_BP_C_PauseAutoPick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.InitRegistSettingBool
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PropertyName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FScriptDelegate         Delegate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class USettingConfig_C*        AsSetting_Config               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPickUpListPanel_BP_C::InitRegistSettingBool(const struct FString& PropertyName, const struct FScriptDelegate& Delegate, class USettingConfig_C** AsSetting_Config)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.InitRegistSettingBool");

	UPickUpListPanel_BP_C_InitRegistSettingBool_Params params;
	params.PropertyName = PropertyName;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsSetting_Config != nullptr)
		*AsSetting_Config = params.AsSetting_Config;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.InitRegistSettingInt
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PropertyName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FScriptDelegate         Delegate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class USettingConfig_C*        AsSetting_Config               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPickUpListPanel_BP_C::InitRegistSettingInt(const struct FString& PropertyName, const struct FScriptDelegate& Delegate, class USettingConfig_C** AsSetting_Config)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.InitRegistSettingInt");

	UPickUpListPanel_BP_C_InitRegistSettingInt_Params params;
	params.PropertyName = PropertyName;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsSetting_Config != nullptr)
		*AsSetting_Config = params.AsSetting_Config;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.AutoPickOneItem
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSearchedPickUpItemResult pickUpResult                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           pick                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPickUpListPanel_BP_C::AutoPickOneItem(const struct FSearchedPickUpItemResult& pickUpResult, bool* pick)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.AutoPickOneItem");

	UPickUpListPanel_BP_C_AutoPickOneItem_Params params;
	params.pickUpResult = pickUpResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (pick != nullptr)
		*pick = params.pick;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.BigSortThan
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBP_STRUCT_Item_type    Left                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FBP_STRUCT_Item_type    Right                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bigger                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPickUpListPanel_BP_C::BigSortThan(const struct FBP_STRUCT_Item_type& Left, const struct FBP_STRUCT_Item_type& Right, bool* bigger)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.BigSortThan");

	UPickUpListPanel_BP_C_BigSortThan_Params params;
	params.Left = Left;
	params.Right = Right;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bigger != nullptr)
		*bigger = params.bigger;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.GetUseful
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           DefineID                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSearchedPickUpItemResult pickUpItemResult               (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Useful                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPickUpListPanel_BP_C::GetUseful(const struct FItemDefineID& DefineID, const struct FSearchedPickUpItemResult& pickUpItemResult, bool* Useful)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.GetUseful");

	UPickUpListPanel_BP_C_GetUseful_Params params;
	params.DefineID = DefineID;
	params.pickUpItemResult = pickUpItemResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Useful != nullptr)
		*Useful = params.Useful;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.ClickCloseBoxPanel
// (Public, BlueprintCallable, BlueprintEvent)

void UPickUpListPanel_BP_C::ClickCloseBoxPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.ClickCloseBoxPanel");

	UPickUpListPanel_BP_C_ClickCloseBoxPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.SetBoxColumn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Column                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickUpListPanel_BP_C::SetBoxColumn(int Column)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.SetBoxColumn");

	UPickUpListPanel_BP_C_SetBoxColumn_Params params;
	params.Column = Column;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.ClickCloseCustomPanel
// (Public, BlueprintCallable, BlueprintEvent)

void UPickUpListPanel_BP_C::ClickCloseCustomPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.ClickCloseCustomPanel");

	UPickUpListPanel_BP_C_ClickCloseCustomPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.FillTombBoxList
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSearchedTombBoxAndWrapperListResult> TargetArray                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UPickUpListPanel_BP_C::FillTombBoxList(TArray<struct FSearchedTombBoxAndWrapperListResult>* TargetArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.FillTombBoxList");

	UPickUpListPanel_BP_C_FillTombBoxList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetArray != nullptr)
		*TargetArray = params.TargetArray;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.OnClickBoxTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickUpListPanel_BP_C::OnClickBoxTab(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.OnClickBoxTab");

	UPickUpListPanel_BP_C_OnClickBoxTab_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.MakeFlagToTabBox
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPickUpListPanel_BP_C::MakeFlagToTabBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.MakeFlagToTabBox");

	UPickUpListPanel_BP_C_MakeFlagToTabBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.FillButton
// (Public, BlueprintCallable, BlueprintEvent)

void UPickUpListPanel_BP_C::FillButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.FillButton");

	UPickUpListPanel_BP_C_FillButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.MakeSureBoxListEnough
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FSearchedTombBoxAndWrapperListResult> Result                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UPickUpListPanel_BP_C::MakeSureBoxListEnough(int Count, TArray<struct FSearchedTombBoxAndWrapperListResult>* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.MakeSureBoxListEnough");

	UPickUpListPanel_BP_C_MakeSureBoxListEnough_Params params;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.FillGroundList
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBattleSearchItemSortingInfo> Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UPickUpListPanel_BP_C::FillGroundList(TArray<struct FBattleSearchItemSortingInfo>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.FillGroundList");

	UPickUpListPanel_BP_C_FillGroundList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.ShowPickMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGroudStuffType>   pickType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickUpListPanel_BP_C::ShowPickMode(TEnumAsByte<EGroudStuffType> pickType)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.ShowPickMode");

	UPickUpListPanel_BP_C_ShowPickMode_Params params;
	params.pickType = pickType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.GetIsShowingToolTips
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bShowing                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPickUpListPanel_BP_C::GetIsShowingToolTips(bool* bShowing)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.GetIsShowingToolTips");

	UPickUpListPanel_BP_C_GetIsShowingToolTips_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bShowing != nullptr)
		*bShowing = params.bShowing;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.GetToolTipsSingleton
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UUserWidget*             NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPickUpListPanel_BP_C::GetToolTipsSingleton(class UUserWidget** NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.GetToolTipsSingleton");

	UPickUpListPanel_BP_C_GetToolTipsSingleton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.HideToolTips
// (Public, BlueprintCallable, BlueprintEvent)

void UPickUpListPanel_BP_C::HideToolTips()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.HideToolTips");

	UPickUpListPanel_BP_C_HideToolTips_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.ShowToolTips
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush             Image                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FString                 ItemName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 ItemDesc                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UPickUpListPanel_BP_C::ShowToolTips(const struct FSlateBrush& Image, const struct FString& ItemName, const struct FString& ItemDesc)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.ShowToolTips");

	UPickUpListPanel_BP_C_ShowToolTips_Params params;
	params.Image = Image;
	params.ItemName = ItemName;
	params.ItemDesc = ItemDesc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.UpdateListData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickUpListPanel_BP_C::UpdateListData(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.UpdateListData");

	UPickUpListPanel_BP_C_UpdateListData_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.BndEvt__Button_ClosePickUpListUI_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPickUpListPanel_BP_C::BndEvt__Button_ClosePickUpListUI_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.BndEvt__Button_ClosePickUpListUI_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature");

	UPickUpListPanel_BP_C_BndEvt__Button_ClosePickUpListUI_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.ReceivedInitWidget
// (Event, Public, BlueprintEvent)

void UPickUpListPanel_BP_C::ReceivedInitWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.ReceivedInitWidget");

	UPickUpListPanel_BP_C_ReceivedInitWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.OnClickNormal
// (BlueprintCallable, BlueprintEvent)

void UPickUpListPanel_BP_C::OnClickNormal()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.OnClickNormal");

	UPickUpListPanel_BP_C_OnClickNormal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.AutoPickOne
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSearchedPickUpItemResult pickUpResult                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UPickUpListPanel_BP_C::AutoPickOne(const struct FSearchedPickUpItemResult& pickUpResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.AutoPickOne");

	UPickUpListPanel_BP_C_AutoPickOne_Params params;
	params.pickUpResult = pickUpResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.AutoPickupSwitchEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           BoolValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickUpListPanel_BP_C::AutoPickupSwitchEvent(bool BoolValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.AutoPickupSwitchEvent");

	UPickUpListPanel_BP_C_AutoPickupSwitchEvent_Params params;
	params.BoolValue = BoolValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.DisableAutoPickupSwitcherEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           BoolValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickUpListPanel_BP_C::DisableAutoPickupSwitcherEvent(bool BoolValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.DisableAutoPickupSwitcherEvent");

	UPickUpListPanel_BP_C_DisableAutoPickupSwitcherEvent_Params params;
	params.BoolValue = BoolValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.ItemOptEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           DefineID                       (BlueprintVisible, BlueprintReadOnly, Parm)
// EBattleItemOperationType       operationType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickUpListPanel_BP_C::ItemOptEvent(const struct FItemDefineID& DefineID, EBattleItemOperationType operationType, unsigned char Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.ItemOptEvent");

	UPickUpListPanel_BP_C_ItemOptEvent_Params params;
	params.DefineID = DefineID;
	params.operationType = operationType;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.ItemListUpdateEvent
// (BlueprintCallable, BlueprintEvent)

void UPickUpListPanel_BP_C::ItemListUpdateEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.ItemListUpdateEvent");

	UPickUpListPanel_BP_C_ItemListUpdateEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.UpdateWeapon1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESurviveWeaponPropSlot         TargetChangeSlot               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickUpListPanel_BP_C::UpdateWeapon1(ESurviveWeaponPropSlot TargetChangeSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.UpdateWeapon1");

	UPickUpListPanel_BP_C_UpdateWeapon1_Params params;
	params.TargetChangeSlot = TargetChangeSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.UpdateWeapon2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESurviveWeaponPropSlot         TargetChangeSlot               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickUpListPanel_BP_C::UpdateWeapon2(ESurviveWeaponPropSlot TargetChangeSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.UpdateWeapon2");

	UPickUpListPanel_BP_C_UpdateWeapon2_Params params;
	params.TargetChangeSlot = TargetChangeSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.OnMoveOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bMoveOut                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickUpListPanel_BP_C::OnMoveOut(bool bMoveOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.OnMoveOut");

	UPickUpListPanel_BP_C_OnMoveOut_Params params;
	params.bMoveOut = bMoveOut;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.BndEvt__Button_Sixpalaces_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPickUpListPanel_BP_C::BndEvt__Button_Sixpalaces_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.BndEvt__Button_Sixpalaces_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature");

	UPickUpListPanel_BP_C_BndEvt__Button_Sixpalaces_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.BndEvt__Button_Ninepalaces_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPickUpListPanel_BP_C::BndEvt__Button_Ninepalaces_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.BndEvt__Button_Ninepalaces_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature");

	UPickUpListPanel_BP_C_BndEvt__Button_Ninepalaces_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.BndEvt__Button_OBmode_HideList_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPickUpListPanel_BP_C::BndEvt__Button_OBmode_HideList_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.BndEvt__Button_OBmode_HideList_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature");

	UPickUpListPanel_BP_C_BndEvt__Button_OBmode_HideList_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.HandleBtnsStateChangeEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPickUpItem_S_BP_C*      ItemBp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsHover                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickUpListPanel_BP_C::HandleBtnsStateChangeEvent(class UPickUpItem_S_BP_C* ItemBp, bool IsHover)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.HandleBtnsStateChangeEvent");

	UPickUpListPanel_BP_C_HandleBtnsStateChangeEvent_Params params;
	params.ItemBp = ItemBp;
	params.IsHover = IsHover;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.ReceiveShow
// (Event, Protected, BlueprintEvent)

void UPickUpListPanel_BP_C::ReceiveShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.ReceiveShow");

	UPickUpListPanel_BP_C_ReceiveShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.ItemDragStartEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSearchedPickUpItemResult ItemData                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UPickUpListPanel_BP_C::ItemDragStartEvent(const struct FSearchedPickUpItemResult& ItemData)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.ItemDragStartEvent");

	UPickUpListPanel_BP_C_ItemDragStartEvent_Params params;
	params.ItemData = ItemData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.ToolTipUpdateEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPickUpItem_S_BP_C*      ItemBp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickUpListPanel_BP_C::ToolTipUpdateEvent(class UPickUpItem_S_BP_C* ItemBp)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.ToolTipUpdateEvent");

	UPickUpListPanel_BP_C_ToolTipUpdateEvent_Params params;
	params.ItemBp = ItemBp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.ItemBePickUpEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSearchedPickUpItemResult PickUpItemData                 (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           ForceDrop                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickUpListPanel_BP_C::ItemBePickUpEvent(const struct FSearchedPickUpItemResult& PickUpItemData, bool ForceDrop)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.ItemBePickUpEvent");

	UPickUpListPanel_BP_C_ItemBePickUpEvent_Params params;
	params.PickUpItemData = PickUpItemData;
	params.ForceDrop = ForceDrop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.ExecuteUbergraph_PickUpListPanel_BP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickUpListPanel_BP_C::ExecuteUbergraph_PickUpListPanel_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.ExecuteUbergraph_PickUpListPanel_BP");

	UPickUpListPanel_BP_C_ExecuteUbergraph_PickUpListPanel_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.ItemBePickUp__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSearchedPickUpItemResult PickUpItemData                 (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           ForceDrop                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickUpListPanel_BP_C::ItemBePickUp__DelegateSignature(const struct FSearchedPickUpItemResult& PickUpItemData, bool ForceDrop)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.ItemBePickUp__DelegateSignature");

	UPickUpListPanel_BP_C_ItemBePickUp__DelegateSignature_Params params;
	params.PickUpItemData = PickUpItemData;
	params.ForceDrop = ForceDrop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.ToolTipUpdate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPickUpItem_S_BP_C*      ItemBp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickUpListPanel_BP_C::ToolTipUpdate__DelegateSignature(class UPickUpItem_S_BP_C* ItemBp)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.ToolTipUpdate__DelegateSignature");

	UPickUpListPanel_BP_C_ToolTipUpdate__DelegateSignature_Params params;
	params.ItemBp = ItemBp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.ItemDragStart__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSearchedPickUpItemResult ItemData                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UPickUpListPanel_BP_C::ItemDragStart__DelegateSignature(const struct FSearchedPickUpItemResult& ItemData)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.ItemDragStart__DelegateSignature");

	UPickUpListPanel_BP_C_ItemDragStart__DelegateSignature_Params params;
	params.ItemData = ItemData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.HandleBtnsStateChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPickUpItem_S_BP_C*      ItemBp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsHover                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickUpListPanel_BP_C::HandleBtnsStateChange__DelegateSignature(class UPickUpItem_S_BP_C* ItemBp, bool IsHover)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.HandleBtnsStateChange__DelegateSignature");

	UPickUpListPanel_BP_C_HandleBtnsStateChange__DelegateSignature_Params params;
	params.ItemBp = ItemBp;
	params.IsHover = IsHover;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpListPanel_BP.PickUpListPanel_BP_C.CollapseStuffList__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bDeadBox                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickUpListPanel_BP_C::CollapseStuffList__DelegateSignature(bool bDeadBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListPanel_BP.PickUpListPanel_BP_C.CollapseStuffList__DelegateSignature");

	UPickUpListPanel_BP_C_CollapseStuffList__DelegateSignature_Params params;
	params.bDeadBox = bDeadBox;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
