
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

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.IsEquipGrenade
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           bSuccessGrenadeEquip           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMainBackPackPanel_BP_C::IsEquipGrenade(const struct FVector2D& Location, bool* bSuccessGrenadeEquip)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.IsEquipGrenade");

	UMainBackPackPanel_BP_C_IsEquipGrenade_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccessGrenadeEquip != nullptr)
		*bSuccessGrenadeEquip = params.bSuccessGrenadeEquip;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.UseItemByID
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMainBackPackPanel_BP_C::UseItemByID(int ItemID, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.UseItemByID");

	UMainBackPackPanel_BP_C_UseItemByID_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ShowWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainBackPackPanel_BP_C::ShowWeapon(bool isShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ShowWeapon");

	UMainBackPackPanel_BP_C_ShowWeapon_Params params;
	params.isShow = isShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.OnDragEnterLeaveLogicForClothingGroup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSearchedPickUpItemResult ItemData                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UMainBackPackPanel_BP_C::OnDragEnterLeaveLogicForClothingGroup(const struct FSearchedPickUpItemResult& ItemData)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.OnDragEnterLeaveLogicForClothingGroup");

	UMainBackPackPanel_BP_C_OnDragEnterLeaveLogicForClothingGroup_Params params;
	params.ItemData = ItemData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.OnDragDetectedInsideClothingGroup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UMainBackPackPanel_BP_C::OnDragDetectedInsideClothingGroup(const struct FVector2D& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.OnDragDetectedInsideClothingGroup");

	UMainBackPackPanel_BP_C_OnDragDetectedInsideClothingGroup_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.HighLightRightPlace
// (Public, BlueprintCallable, BlueprintEvent)

void UMainBackPackPanel_BP_C::HighLightRightPlace()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.HighLightRightPlace");

	UMainBackPackPanel_BP_C_HighLightRightPlace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BackpackToolTipUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBackPackItem_BP_C*      ItemBp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainBackPackPanel_BP_C::BackpackToolTipUpdate(class UBackPackItem_BP_C* ItemBp)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BackpackToolTipUpdate");

	UMainBackPackPanel_BP_C_BackpackToolTipUpdate_Params params;
	params.ItemBp = ItemBp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.GroundToolTipUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPickUpItem_S_BP_C*      ItemBp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainBackPackPanel_BP_C::GroundToolTipUpdate(class UPickUpItem_S_BP_C* ItemBp)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.GroundToolTipUpdate");

	UMainBackPackPanel_BP_C_GroundToolTipUpdate_Params params;
	params.ItemBp = ItemBp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.MainWeaponHighlight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSearchedPickUpItemResult ItemData                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UMainBackPackPanel_BP_C::MainWeaponHighlight(const struct FSearchedPickUpItemResult& ItemData)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.MainWeaponHighlight");

	UMainBackPackPanel_BP_C_MainWeaponHighlight_Params params;
	params.ItemData = ItemData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.PickUpGround
// (Public, BlueprintCallable, BlueprintEvent)

void UMainBackPackPanel_BP_C::PickUpGround()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.PickUpGround");

	UMainBackPackPanel_BP_C_PickUpGround_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ShowToolTipsGround
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMainBackPackPanel_BP_C::ShowToolTipsGround()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ShowToolTipsGround");

	UMainBackPackPanel_BP_C_ShowToolTipsGround_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.RecordClickItemGround
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPickUpItem_S_BP_C*      ItemBeClicked                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsClicked                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainBackPackPanel_BP_C::RecordClickItemGround(class UPickUpItem_S_BP_C* ItemBeClicked, bool IsClicked)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.RecordClickItemGround");

	UMainBackPackPanel_BP_C_RecordClickItemGround_Params params;
	params.ItemBeClicked = ItemBeClicked;
	params.IsClicked = IsClicked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.IsMainWeapon
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSearchedPickUpItemResult PickupItem                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsMainWeapon                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMainBackPackPanel_BP_C::IsMainWeapon(const struct FSearchedPickUpItemResult& PickupItem, bool* IsMainWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.IsMainWeapon");

	UMainBackPackPanel_BP_C_IsMainWeapon_Params params;
	params.PickupItem = PickupItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsMainWeapon != nullptr)
		*IsMainWeapon = params.IsMainWeapon;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.SilderEnter
// (Public, BlueprintCallable, BlueprintEvent)

void UMainBackPackPanel_BP_C::SilderEnter()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.SilderEnter");

	UMainBackPackPanel_BP_C_SilderEnter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ShowRenderTexture
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMainBackPackPanel_BP_C::ShowRenderTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ShowRenderTexture");

	UMainBackPackPanel_BP_C_ShowRenderTexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.OnSpawnActorInSceneCaptureWorld
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  SpawnedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainBackPackPanel_BP_C::OnSpawnActorInSceneCaptureWorld(class AActor* SpawnedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.OnSpawnActorInSceneCaptureWorld");

	UMainBackPackPanel_BP_C_OnSpawnActorInSceneCaptureWorld_Params params;
	params.SpawnedActor = SpawnedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.UpdateRenderTexture
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMainBackPackPanel_BP_C::UpdateRenderTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.UpdateRenderTexture");

	UMainBackPackPanel_BP_C_UpdateRenderTexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.NotifyInputCount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMainBackPackPanel_BP_C::NotifyInputCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.NotifyInputCount");

	UMainBackPackPanel_BP_C_NotifyInputCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.TestRenderTexture
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMainBackPackPanel_BP_C::TestRenderTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.TestRenderTexture");

	UMainBackPackPanel_BP_C_TestRenderTexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.IsAbleItemDrop
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsBackPackItem                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           IsDisable                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMainBackPackPanel_BP_C::IsAbleItemDrop(bool IsBackPackItem, const struct FVector2D& Location, bool* IsDisable)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.IsAbleItemDrop");

	UMainBackPackPanel_BP_C_IsAbleItemDrop_Params params;
	params.IsBackPackItem = IsBackPackItem;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsDisable != nullptr)
		*IsDisable = params.IsDisable;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.OnDragOver
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation**     Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMainBackPackPanel_BP_C::OnDragOver(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.OnDragOver");

	UMainBackPackPanel_BP_C_OnDragOver_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ShowDropCountSliderByStuffGround
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSearchedPickUpItemResult Stuff                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           ForceDrop                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainBackPackPanel_BP_C::ShowDropCountSliderByStuffGround(const struct FSearchedPickUpItemResult& Stuff, bool ForceDrop)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ShowDropCountSliderByStuffGround");

	UMainBackPackPanel_BP_C_ShowDropCountSliderByStuffGround_Params params;
	params.Stuff = Stuff;
	params.ForceDrop = ForceDrop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.OnItemGroundDragDrop
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSearchedPickUpItemResult ItemData                       (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<EBackPackDragOrigin> DragItemOrigin                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UMainBackPackPanel_BP_C::OnItemGroundDragDrop(const struct FSearchedPickUpItemResult& ItemData, TEnumAsByte<EBackPackDragOrigin> DragItemOrigin, const struct FVector2D& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.OnItemGroundDragDrop");

	UMainBackPackPanel_BP_C_OnItemGroundDragDrop_Params params;
	params.ItemData = ItemData;
	params.DragItemOrigin = DragItemOrigin;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.SetBackpackCapacity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBackpackComponent*      BackpackComponent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainBackPackPanel_BP_C::SetBackpackCapacity(class UBackpackComponent* BackpackComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.SetBackpackCapacity");

	UMainBackPackPanel_BP_C_SetBackpackCapacity_Params params;
	params.BackpackComponent = BackpackComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ShowNoneListToolTip
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush             Brush                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FBattleItemData         ItemData                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UMainBackPackPanel_BP_C::ShowNoneListToolTip(const struct FSlateBrush& Brush, const struct FBattleItemData& ItemData)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ShowNoneListToolTip");

	UMainBackPackPanel_BP_C_ShowNoneListToolTip_Params params;
	params.Brush = Brush;
	params.ItemData = ItemData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ShowNoneListItemToolTipEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush             Brush                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FBattleItemData         BattleItemData                 (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           isShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainBackPackPanel_BP_C::ShowNoneListItemToolTipEvent(const struct FSlateBrush& Brush, const struct FBattleItemData& BattleItemData, bool isShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ShowNoneListItemToolTipEvent");

	UMainBackPackPanel_BP_C_ShowNoneListItemToolTipEvent_Params params;
	params.Brush = Brush;
	params.BattleItemData = BattleItemData;
	params.isShow = isShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.UpdateItemSortList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsPriority                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainBackPackPanel_BP_C::UpdateItemSortList(bool IsPriority)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.UpdateItemSortList");

	UMainBackPackPanel_BP_C_UpdateItemSortList_Params params;
	params.IsPriority = IsPriority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.OnPlayerNameChange
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PlayerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UMainBackPackPanel_BP_C::OnPlayerNameChange(const struct FString& PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.OnPlayerNameChange");

	UMainBackPackPanel_BP_C_OnPlayerNameChange_Params params;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.GetGrenadeSocketName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EGrenadeType>      grenadeType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMainBackPackPanel_BP_C::GetGrenadeSocketName(TEnumAsByte<EGrenadeType> grenadeType, struct FName* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.GetGrenadeSocketName");

	UMainBackPackPanel_BP_C_GetGrenadeSocketName_Params params;
	params.grenadeType = grenadeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.SwapWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESurviveWeaponPropSlot         Slot1                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ESurviveWeaponPropSlot         Slot2                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainBackPackPanel_BP_C::SwapWeapon(ESurviveWeaponPropSlot Slot1, ESurviveWeaponPropSlot Slot2)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.SwapWeapon");

	UMainBackPackPanel_BP_C_SwapWeapon_Params params;
	params.Slot1 = Slot1;
	params.Slot2 = Slot2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.UnBindBackPackCompEvents
// (Public, BlueprintCallable, BlueprintEvent)

void UMainBackPackPanel_BP_C::UnBindBackPackCompEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.UnBindBackPackCompEvents");

	UMainBackPackPanel_BP_C_UnBindBackPackCompEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BindBackPackCompEvents
// (Public, BlueprintCallable, BlueprintEvent)

void UMainBackPackPanel_BP_C::BindBackPackCompEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BindBackPackCompEvents");

	UMainBackPackPanel_BP_C_BindBackPackCompEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ShouldDropItemFunc
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           DefineID                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           OK                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMainBackPackPanel_BP_C::ShouldDropItemFunc(const struct FItemDefineID& DefineID, bool* OK)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ShouldDropItemFunc");

	UMainBackPackPanel_BP_C_ShouldDropItemFunc_Params params;
	params.DefineID = DefineID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OK != nullptr)
		*OK = params.OK;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.OnTouchEnded
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           InTouchEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UMainBackPackPanel_BP_C::OnTouchEnded(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.OnTouchEnded");

	UMainBackPackPanel_BP_C_OnTouchEnded_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InTouchEvent != nullptr)
		*InTouchEvent = params.InTouchEvent;

	return params.ReturnValue;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.OnTouchStarted
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           InTouchEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UMainBackPackPanel_BP_C::OnTouchStarted(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.OnTouchStarted");

	UMainBackPackPanel_BP_C_OnTouchStarted_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InTouchEvent != nullptr)
		*InTouchEvent = params.InTouchEvent;

	return params.ReturnValue;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.OnItemDragCancelled
// (Public, BlueprintCallable, BlueprintEvent)

void UMainBackPackPanel_BP_C::OnItemDragCancelled()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.OnItemDragCancelled");

	UMainBackPackPanel_BP_C_OnItemDragCancelled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.OnItemDragDrop
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBattleItemData         ItemData                       (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<EBackPackDragOrigin> DragItemOrigin                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UMainBackPackPanel_BP_C::OnItemDragDrop(const struct FBattleItemData& ItemData, TEnumAsByte<EBackPackDragOrigin> DragItemOrigin, const struct FVector2D& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.OnItemDragDrop");

	UMainBackPackPanel_BP_C_OnItemDragDrop_Params params;
	params.ItemData = ItemData;
	params.DragItemOrigin = DragItemOrigin;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.OnDrop
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation**     Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMainBackPackPanel_BP_C::OnDrop(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.OnDrop");

	UMainBackPackPanel_BP_C_OnDrop_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ResetSelectItem
// (Public, BlueprintCallable, BlueprintEvent)

void UMainBackPackPanel_BP_C::ResetSelectItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ResetSelectItem");

	UMainBackPackPanel_BP_C_ResetSelectItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.OnEventTakeDamageForUI
// (Public, BlueprintCallable, BlueprintEvent)

void UMainBackPackPanel_BP_C::OnEventTakeDamageForUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.OnEventTakeDamageForUI");

	UMainBackPackPanel_BP_C_OnEventTakeDamageForUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.HideSelf
// (Public, BlueprintCallable, BlueprintEvent)

void UMainBackPackPanel_BP_C::HideSelf()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.HideSelf");

	UMainBackPackPanel_BP_C_HideSelf_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ShowSelf
// (Public, BlueprintCallable, BlueprintEvent)

void UMainBackPackPanel_BP_C::ShowSelf()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ShowSelf");

	UMainBackPackPanel_BP_C_ShowSelf_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ClickCloseBackpack
// (Public, BlueprintCallable, BlueprintEvent)

void UMainBackPackPanel_BP_C::ClickCloseBackpack()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ClickCloseBackpack");

	UMainBackPackPanel_BP_C_ClickCloseBackpack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.SetArmorSlot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBackPackArmorSlot_BP_C* ArmorSlot                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TMap<TEnumAsByte<EBackpackClothArmorType>, struct FBattleItemData> NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UMainBackPackPanel_BP_C::SetArmorSlot(class UBackPackArmorSlot_BP_C* ArmorSlot, TMap<TEnumAsByte<EBackpackClothArmorType>, struct FBattleItemData> NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.SetArmorSlot");

	UMainBackPackPanel_BP_C_SetArmorSlot_Params params;
	params.ArmorSlot = ArmorSlot;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ResetAttachSlots
// (Public, BlueprintCallable, BlueprintEvent)

void UMainBackPackPanel_BP_C::ResetAttachSlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ResetAttachSlots");

	UMainBackPackPanel_BP_C_ResetAttachSlots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.UnEquipDraggedItem
// (Public, BlueprintCallable, BlueprintEvent)

void UMainBackPackPanel_BP_C::UnEquipDraggedItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.UnEquipDraggedItem");

	UMainBackPackPanel_BP_C_UnEquipDraggedItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.UpdateArmor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBattleItemData> BattleItemData                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMainBackPackPanel_BP_C::UpdateArmor(TArray<struct FBattleItemData>* BattleItemData)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.UpdateArmor");

	UMainBackPackPanel_BP_C_UpdateArmor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BattleItemData != nullptr)
		*BattleItemData = params.BattleItemData;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.GetArmorClothDataDict
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBattleItemData> InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TMap<TEnumAsByte<EBackpackClothArmorType>, struct FBattleItemData> ClothArmDataDict               (Parm, OutParm, ZeroConstructor)

void UMainBackPackPanel_BP_C::GetArmorClothDataDict(TArray<struct FBattleItemData>* InputPin, TMap<TEnumAsByte<EBackpackClothArmorType>, struct FBattleItemData>* ClothArmDataDict)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.GetArmorClothDataDict");

	UMainBackPackPanel_BP_C_GetArmorClothDataDict_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InputPin != nullptr)
		*InputPin = params.InputPin;
	if (ClothArmDataDict != nullptr)
		*ClothArmDataDict = params.ClothArmDataDict;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ClothArmerType2Enum
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SubType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EBackpackClothArmorType> ClothEnum                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMainBackPackPanel_BP_C::ClothArmerType2Enum(int SubType, TEnumAsByte<EBackpackClothArmorType>* ClothEnum)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ClothArmerType2Enum");

	UMainBackPackPanel_BP_C_ClothArmerType2Enum_Params params;
	params.SubType = SubType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClothEnum != nullptr)
		*ClothEnum = params.ClothEnum;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.SetClothSlot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBackPackClothSlot_BP_C* ClothingSlot                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TMap<TEnumAsByte<EBackpackClothArmorType>, struct FBattleItemData> NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UMainBackPackPanel_BP_C::SetClothSlot(class UBackPackClothSlot_BP_C* ClothingSlot, TMap<TEnumAsByte<EBackpackClothArmorType>, struct FBattleItemData> NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.SetClothSlot");

	UMainBackPackPanel_BP_C_SetClothSlot_Params params;
	params.ClothingSlot = ClothingSlot;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.UpdateCloth
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBattleItemData> BattleItemData                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMainBackPackPanel_BP_C::UpdateCloth(TArray<struct FBattleItemData>* BattleItemData)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.UpdateCloth");

	UMainBackPackPanel_BP_C_UpdateCloth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BattleItemData != nullptr)
		*BattleItemData = params.BattleItemData;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.UpdateWeaponBySlot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESurviveWeaponPropSlot         slot_                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainBackPackPanel_BP_C::UpdateWeaponBySlot(ESurviveWeaponPropSlot slot_)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.UpdateWeaponBySlot");

	UMainBackPackPanel_BP_C_UpdateWeaponBySlot_Params params;
	params.slot_ = slot_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.GetWeaponDataBySlot
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESurviveWeaponPropSlot         SlotIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FBattleItemData> weaponList                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FBattleItemData         BattleData                     (Parm, OutParm)
// struct FBP_STRUCT_Item_type    Record                         (Parm, OutParm)

void UMainBackPackPanel_BP_C::GetWeaponDataBySlot(ESurviveWeaponPropSlot SlotIndex, TArray<struct FBattleItemData>* weaponList, struct FBattleItemData* BattleData, struct FBP_STRUCT_Item_type* Record)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.GetWeaponDataBySlot");

	UMainBackPackPanel_BP_C_GetWeaponDataBySlot_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (weaponList != nullptr)
		*weaponList = params.weaponList;
	if (BattleData != nullptr)
		*BattleData = params.BattleData;
	if (Record != nullptr)
		*Record = params.Record;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.Get_ProgressBar_DeleteItemNum_Percent_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMainBackPackPanel_BP_C::Get_ProgressBar_DeleteItemNum_Percent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.Get_ProgressBar_DeleteItemNum_Percent_1");

	UMainBackPackPanel_BP_C_Get_ProgressBar_DeleteItemNum_Percent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ChangeDropCountSliderValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainBackPackPanel_BP_C::ChangeDropCountSliderValue(int NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ChangeDropCountSliderValue");

	UMainBackPackPanel_BP_C_ChangeDropCountSliderValue_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.Get_TextBlock_MaxDeleteItemNum_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UMainBackPackPanel_BP_C::Get_TextBlock_MaxDeleteItemNum_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.Get_TextBlock_MaxDeleteItemNum_Text_1");

	UMainBackPackPanel_BP_C_Get_TextBlock_MaxDeleteItemNum_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.Get_TextBlock_CurrentDeleteItemNum_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UMainBackPackPanel_BP_C::Get_TextBlock_CurrentDeleteItemNum_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.Get_TextBlock_CurrentDeleteItemNum_Text_1");

	UMainBackPackPanel_BP_C_Get_TextBlock_CurrentDeleteItemNum_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.Get Weapon Attach IDBy Specific ID
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            inInt                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    AvailableWeaponAttachment      (Parm, OutParm, ZeroConstructor)

void UMainBackPackPanel_BP_C::Get_Weapon_Attach_IDBy_Specific_ID(int inInt, TArray<int>* AvailableWeaponAttachment)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.Get Weapon Attach IDBy Specific ID");

	UMainBackPackPanel_BP_C_Get_Weapon_Attach_IDBy_Specific_ID_Params params;
	params.inInt = inInt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AvailableWeaponAttachment != nullptr)
		*AvailableWeaponAttachment = params.AvailableWeaponAttachment;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.DropDraggedIem
// (Public, BlueprintCallable, BlueprintEvent)

void UMainBackPackPanel_BP_C::DropDraggedIem()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.DropDraggedIem");

	UMainBackPackPanel_BP_C_DropDraggedIem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.UseDraggedIem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMainBackPackPanel_BP_C::UseDraggedIem()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.UseDraggedIem");

	UMainBackPackPanel_BP_C_UseDraggedIem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.EquipDraggedItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESurviveWeaponPropSlot         TargetWeapon                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainBackPackPanel_BP_C::EquipDraggedItem(ESurviveWeaponPropSlot TargetWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.EquipDraggedItem");

	UMainBackPackPanel_BP_C_EquipDraggedItem_Params params;
	params.TargetWeapon = TargetWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.IsLocalpositionInBorder
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               LocalCoordinate                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UWidget*                 Border                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMainBackPackPanel_BP_C::IsLocalpositionInBorder(const struct FVector2D& LocalCoordinate, class UWidget* Border)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.IsLocalpositionInBorder");

	UMainBackPackPanel_BP_C_IsLocalpositionInBorder_Params params;
	params.LocalCoordinate = LocalCoordinate;
	params.Border = Border;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.OnItemDragBegin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBattleItemData         ItemBeDragged                  (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<EBackPackDragOrigin> DragOrigin                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainBackPackPanel_BP_C::OnItemDragBegin(const struct FBattleItemData& ItemBeDragged, TEnumAsByte<EBackPackDragOrigin> DragOrigin)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.OnItemDragBegin");

	UMainBackPackPanel_BP_C_OnItemDragBegin_Params params;
	params.ItemBeDragged = ItemBeDragged;
	params.DragOrigin = DragOrigin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.GetWeaponAttach
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMainBackPackPanel_BP_C::GetWeaponAttach()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.GetWeaponAttach");

	UMainBackPackPanel_BP_C_GetWeaponAttach_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.RecordClickItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBackPackItem_BP_C*      ItemBeClicked                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsClicked                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainBackPackPanel_BP_C::RecordClickItem(class UBackPackItem_BP_C* ItemBeClicked, bool IsClicked)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.RecordClickItem");

	UMainBackPackPanel_BP_C_RecordClickItem_Params params;
	params.ItemBeClicked = ItemBeClicked;
	params.IsClicked = IsClicked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.GetWeaponSlotEnumByName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ESurviveWeaponPropSlot         Slot                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMainBackPackPanel_BP_C::GetWeaponSlotEnumByName(const struct FName& Name, ESurviveWeaponPropSlot* Slot, bool* Found)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.GetWeaponSlotEnumByName");

	UMainBackPackPanel_BP_C_GetWeaponSlotEnumByName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Slot != nullptr)
		*Slot = params.Slot;
	if (Found != nullptr)
		*Found = params.Found;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.IsDifferentToCache
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemAssociation        Association                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bDifferent                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// ESurviveWeaponPropSlot         Slot                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMainBackPackPanel_BP_C::IsDifferentToCache(const struct FItemAssociation& Association, bool* bDifferent, ESurviveWeaponPropSlot* Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.IsDifferentToCache");

	UMainBackPackPanel_BP_C_IsDifferentToCache_Params params;
	params.Association = Association;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bDifferent != nullptr)
		*bDifferent = params.bDifferent;
	if (Slot != nullptr)
		*Slot = params.Slot;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.HightLightAttachSlots
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           ItemData                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UMainBackPackPanel_BP_C::HightLightAttachSlots(const struct FItemDefineID& ItemData)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.HightLightAttachSlots");

	UMainBackPackPanel_BP_C_HightLightAttachSlots_Params params;
	params.ItemData = ItemData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.UpdateShootingPanelWeaponIcon
// (Public, BlueprintCallable, BlueprintEvent)

void UMainBackPackPanel_BP_C::UpdateShootingPanelWeaponIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.UpdateShootingPanelWeaponIcon");

	UMainBackPackPanel_BP_C_UpdateShootingPanelWeaponIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.HideToolTips
// (Public, BlueprintCallable, BlueprintEvent)

void UMainBackPackPanel_BP_C::HideToolTips()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.HideToolTips");

	UMainBackPackPanel_BP_C_HideToolTips_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ShowToolTips
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMainBackPackPanel_BP_C::ShowToolTips()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ShowToolTips");

	UMainBackPackPanel_BP_C_ShowToolTips_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.HideDropCountSlider
// (Public, BlueprintCallable, BlueprintEvent)

void UMainBackPackPanel_BP_C::HideDropCountSlider()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.HideDropCountSlider");

	UMainBackPackPanel_BP_C_HideDropCountSlider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ShowDropCountSliderByStuff
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBattleItemData         Stuff                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           ForceDrop                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainBackPackPanel_BP_C::ShowDropCountSliderByStuff(const struct FBattleItemData& Stuff, bool ForceDrop)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ShowDropCountSliderByStuff");

	UMainBackPackPanel_BP_C_ShowDropCountSliderByStuff_Params params;
	params.Stuff = Stuff;
	params.ForceDrop = ForceDrop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.GetWeaponDataTableRowByItemID
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBP_STRUCT_Item_type    Result                         (Parm, OutParm)
// bool                           Found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMainBackPackPanel_BP_C::GetWeaponDataTableRowByItemID(int ItemID, struct FBP_STRUCT_Item_type* Result, bool* Found)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.GetWeaponDataTableRowByItemID");

	UMainBackPackPanel_BP_C_GetWeaponDataTableRowByItemID_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (Found != nullptr)
		*Found = params.Found;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.GetWeaponDataTableRow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMainBackPackPanel_BP_C::GetWeaponDataTableRow()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.GetWeaponDataTableRow");

	UMainBackPackPanel_BP_C_GetWeaponDataTableRow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.HighLightChosenTab
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMainBackPackPanel_BP_C::HighLightChosenTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.HighLightChosenTab");

	UMainBackPackPanel_BP_C_HighLightChosenTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.UpdateWeaponItems
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBattleItemData> WeaponItemDataArray            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMainBackPackPanel_BP_C::UpdateWeaponItems(TArray<struct FBattleItemData>* WeaponItemDataArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.UpdateWeaponItems");

	UMainBackPackPanel_BP_C_UpdateWeaponItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WeaponItemDataArray != nullptr)
		*WeaponItemDataArray = params.WeaponItemDataArray;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.UpdateScrollItemListItems
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBattleItemData> BackpackItemDataArray          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMainBackPackPanel_BP_C::UpdateScrollItemListItems(TArray<struct FBattleItemData>* BackpackItemDataArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.UpdateScrollItemListItems");

	UMainBackPackPanel_BP_C_UpdateScrollItemListItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BackpackItemDataArray != nullptr)
		*BackpackItemDataArray = params.BackpackItemDataArray;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.UpdateScrollItemList
// (Public, BlueprintCallable, BlueprintEvent)

void UMainBackPackPanel_BP_C::UpdateScrollItemList()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.UpdateScrollItemList");

	UMainBackPackPanel_BP_C_UpdateScrollItemList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__Button_Medicine_K2Node_ComponentBoundEvent_47_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMainBackPackPanel_BP_C::BndEvt__Button_Medicine_K2Node_ComponentBoundEvent_47_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__Button_Medicine_K2Node_ComponentBoundEvent_47_OnButtonClickedEvent__DelegateSignature");

	UMainBackPackPanel_BP_C_BndEvt__Button_Medicine_K2Node_ComponentBoundEvent_47_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__Button_Fitting_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMainBackPackPanel_BP_C::BndEvt__Button_Fitting_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__Button_Fitting_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature");

	UMainBackPackPanel_BP_C_BndEvt__Button_Fitting_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__Button_AllItem_K2Node_ComponentBoundEvent_82_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMainBackPackPanel_BP_C::BndEvt__Button_AllItem_K2Node_ComponentBoundEvent_82_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__Button_AllItem_K2Node_ComponentBoundEvent_82_OnButtonClickedEvent__DelegateSignature");

	UMainBackPackPanel_BP_C_BndEvt__Button_AllItem_K2Node_ComponentBoundEvent_82_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__Button_Clothing_K2Node_ComponentBoundEvent_111_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMainBackPackPanel_BP_C::BndEvt__Button_Clothing_K2Node_ComponentBoundEvent_111_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__Button_Clothing_K2Node_ComponentBoundEvent_111_OnButtonClickedEvent__DelegateSignature");

	UMainBackPackPanel_BP_C_BndEvt__Button_Clothing_K2Node_ComponentBoundEvent_111_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__Button_CloseBackPackUI_K2Node_ComponentBoundEvent_250_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMainBackPackPanel_BP_C::BndEvt__Button_CloseBackPackUI_K2Node_ComponentBoundEvent_250_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__Button_CloseBackPackUI_K2Node_ComponentBoundEvent_250_OnButtonClickedEvent__DelegateSignature");

	UMainBackPackPanel_BP_C_BndEvt__Button_CloseBackPackUI_K2Node_ComponentBoundEvent_250_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__Slider_DeleteItemNum_K2Node_ComponentBoundEvent_236_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainBackPackPanel_BP_C::BndEvt__Slider_DeleteItemNum_K2Node_ComponentBoundEvent_236_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__Slider_DeleteItemNum_K2Node_ComponentBoundEvent_236_OnFloatValueChangedEvent__DelegateSignature");

	UMainBackPackPanel_BP_C_BndEvt__Slider_DeleteItemNum_K2Node_ComponentBoundEvent_236_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_277_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMainBackPackPanel_BP_C::BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_277_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_277_OnButtonClickedEvent__DelegateSignature");

	UMainBackPackPanel_BP_C_BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_277_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__Button_OK_K2Node_ComponentBoundEvent_304_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMainBackPackPanel_BP_C::BndEvt__Button_OK_K2Node_ComponentBoundEvent_304_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__Button_OK_K2Node_ComponentBoundEvent_304_OnButtonClickedEvent__DelegateSignature");

	UMainBackPackPanel_BP_C_BndEvt__Button_OK_K2Node_ComponentBoundEvent_304_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__Button_DeleteAll_K2Node_ComponentBoundEvent_220_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMainBackPackPanel_BP_C::BndEvt__Button_DeleteAll_K2Node_ComponentBoundEvent_220_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__Button_DeleteAll_K2Node_ComponentBoundEvent_220_OnButtonClickedEvent__DelegateSignature");

	UMainBackPackPanel_BP_C_BndEvt__Button_DeleteAll_K2Node_ComponentBoundEvent_220_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__Button_AddItem_K2Node_ComponentBoundEvent_358_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMainBackPackPanel_BP_C::BndEvt__Button_AddItem_K2Node_ComponentBoundEvent_358_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__Button_AddItem_K2Node_ComponentBoundEvent_358_OnButtonClickedEvent__DelegateSignature");

	UMainBackPackPanel_BP_C_BndEvt__Button_AddItem_K2Node_ComponentBoundEvent_358_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__Button_ReduceItem_K2Node_ComponentBoundEvent_371_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMainBackPackPanel_BP_C::BndEvt__Button_ReduceItem_K2Node_ComponentBoundEvent_371_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__Button_ReduceItem_K2Node_ComponentBoundEvent_371_OnButtonClickedEvent__DelegateSignature");

	UMainBackPackPanel_BP_C_BndEvt__Button_ReduceItem_K2Node_ComponentBoundEvent_371_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void UMainBackPackPanel_BP_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.CustomEvent_1");

	UMainBackPackPanel_BP_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BindWeaponMsgEvent
// (BlueprintCallable, BlueprintEvent)

void UMainBackPackPanel_BP_C::BindWeaponMsgEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BindWeaponMsgEvent");

	UMainBackPackPanel_BP_C_BindWeaponMsgEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.UpdateWeaponBySlot1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESurviveWeaponPropSlot         TargetChangeSlot               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainBackPackPanel_BP_C::UpdateWeaponBySlot1(ESurviveWeaponPropSlot TargetChangeSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.UpdateWeaponBySlot1");

	UMainBackPackPanel_BP_C_UpdateWeaponBySlot1_Params params;
	params.TargetChangeSlot = TargetChangeSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.UpdateWeaponBySlot2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESurviveWeaponPropSlot         TargetChangeSlot               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainBackPackPanel_BP_C::UpdateWeaponBySlot2(ESurviveWeaponPropSlot TargetChangeSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.UpdateWeaponBySlot2");

	UMainBackPackPanel_BP_C_UpdateWeaponBySlot2_Params params;
	params.TargetChangeSlot = TargetChangeSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ReceivedInitWidget
// (Event, Public, BlueprintEvent)

void UMainBackPackPanel_BP_C::ReceivedInitWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ReceivedInitWidget");

	UMainBackPackPanel_BP_C_ReceivedInitWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.DelayEnableCharacterTouch
// (BlueprintCallable, BlueprintEvent)

void UMainBackPackPanel_BP_C::DelayEnableCharacterTouch()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.DelayEnableCharacterTouch");

	UMainBackPackPanel_BP_C_DelayEnableCharacterTouch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.DelayStopFire
// (BlueprintCallable, BlueprintEvent)

void UMainBackPackPanel_BP_C::DelayStopFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.DelayStopFire");

	UMainBackPackPanel_BP_C_DelayStopFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__ButtonSortPriority_K2Node_ComponentBoundEvent_281_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMainBackPackPanel_BP_C::BndEvt__ButtonSortPriority_K2Node_ComponentBoundEvent_281_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__ButtonSortPriority_K2Node_ComponentBoundEvent_281_OnButtonClickedEvent__DelegateSignature");

	UMainBackPackPanel_BP_C_BndEvt__ButtonSortPriority_K2Node_ComponentBoundEvent_281_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__ButtonSortTime_K2Node_ComponentBoundEvent_309_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMainBackPackPanel_BP_C::BndEvt__ButtonSortTime_K2Node_ComponentBoundEvent_309_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__ButtonSortTime_K2Node_ComponentBoundEvent_309_OnButtonClickedEvent__DelegateSignature");

	UMainBackPackPanel_BP_C_BndEvt__ButtonSortTime_K2Node_ComponentBoundEvent_309_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_90_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMainBackPackPanel_BP_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_90_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_90_OnButtonClickedEvent__DelegateSignature");

	UMainBackPackPanel_BP_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_90_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__InputAmountButton_K2Node_ComponentBoundEvent_225_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMainBackPackPanel_BP_C::BndEvt__InputAmountButton_K2Node_ComponentBoundEvent_225_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__InputAmountButton_K2Node_ComponentBoundEvent_225_OnButtonClickedEvent__DelegateSignature");

	UMainBackPackPanel_BP_C_BndEvt__InputAmountButton_K2Node_ComponentBoundEvent_225_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__InputAmountText_K2Node_ComponentBoundEvent_880_OnEditableTextChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMainBackPackPanel_BP_C::BndEvt__InputAmountText_K2Node_ComponentBoundEvent_880_OnEditableTextChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__InputAmountText_K2Node_ComponentBoundEvent_880_OnEditableTextChangedEvent__DelegateSignature");

	UMainBackPackPanel_BP_C_BndEvt__InputAmountText_K2Node_ComponentBoundEvent_880_OnEditableTextChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__MinButton_K2Node_ComponentBoundEvent_1404_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMainBackPackPanel_BP_C::BndEvt__MinButton_K2Node_ComponentBoundEvent_1404_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__MinButton_K2Node_ComponentBoundEvent_1404_OnButtonClickedEvent__DelegateSignature");

	UMainBackPackPanel_BP_C_BndEvt__MinButton_K2Node_ComponentBoundEvent_1404_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__MaxButton_K2Node_ComponentBoundEvent_1421_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMainBackPackPanel_BP_C::BndEvt__MaxButton_K2Node_ComponentBoundEvent_1421_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__MaxButton_K2Node_ComponentBoundEvent_1421_OnButtonClickedEvent__DelegateSignature");

	UMainBackPackPanel_BP_C_BndEvt__MaxButton_K2Node_ComponentBoundEvent_1421_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__CharacterCaptureCheckBox_K2Node_ComponentBoundEvent_352_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainBackPackPanel_BP_C::BndEvt__CharacterCaptureCheckBox_K2Node_ComponentBoundEvent_352_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__CharacterCaptureCheckBox_K2Node_ComponentBoundEvent_352_OnCheckBoxComponentStateChanged__DelegateSignature");

	UMainBackPackPanel_BP_C_BndEvt__CharacterCaptureCheckBox_K2Node_ComponentBoundEvent_352_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ItemOptEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           DefineID                       (BlueprintVisible, BlueprintReadOnly, Parm)
// EBattleItemOperationType       operationType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainBackPackPanel_BP_C::ItemOptEvent(const struct FItemDefineID& DefineID, EBattleItemOperationType operationType, unsigned char Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ItemOptEvent");

	UMainBackPackPanel_BP_C_ItemOptEvent_Params params;
	params.DefineID = DefineID;
	params.operationType = operationType;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.WeaponChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESurviveWeaponPropSlot         TargetChangeSlot               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainBackPackPanel_BP_C::WeaponChange(ESurviveWeaponPropSlot TargetChangeSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.WeaponChange");

	UMainBackPackPanel_BP_C_WeaponChange_Params params;
	params.TargetChangeSlot = TargetChangeSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__InputAmountText_K2Node_ComponentBoundEvent_261_OnEditableTextCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainBackPackPanel_BP_C::BndEvt__InputAmountText_K2Node_ComponentBoundEvent_261_OnEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__InputAmountText_K2Node_ComponentBoundEvent_261_OnEditableTextCommittedEvent__DelegateSignature");

	UMainBackPackPanel_BP_C_BndEvt__InputAmountText_K2Node_ComponentBoundEvent_261_OnEditableTextCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.Custom Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESurviveWeaponPropSlot         Slot1                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ESurviveWeaponPropSlot         Slot2                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainBackPackPanel_BP_C::Custom_Event_1(ESurviveWeaponPropSlot Slot1, ESurviveWeaponPropSlot Slot2)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.Custom Event_1");

	UMainBackPackPanel_BP_C_Custom_Event_1_Params params;
	params.Slot1 = Slot1;
	params.Slot2 = Slot2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ReceiveHide
// (Event, Protected, BlueprintEvent)

void UMainBackPackPanel_BP_C::ReceiveHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ReceiveHide");

	UMainBackPackPanel_BP_C_ReceiveHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ItemStackCountHandlingPressEvent
// (BlueprintCallable, BlueprintEvent)

void UMainBackPackPanel_BP_C::ItemStackCountHandlingPressEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ItemStackCountHandlingPressEvent");

	UMainBackPackPanel_BP_C_ItemStackCountHandlingPressEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ItemStackCountHandlingReleaseEvent
// (BlueprintCallable, BlueprintEvent)

void UMainBackPackPanel_BP_C::ItemStackCountHandlingReleaseEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ItemStackCountHandlingReleaseEvent");

	UMainBackPackPanel_BP_C_ItemStackCountHandlingReleaseEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ReceiveShow
// (Event, Protected, BlueprintEvent)

void UMainBackPackPanel_BP_C::ReceiveShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ReceiveShow");

	UMainBackPackPanel_BP_C_ReceiveShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ChangeWeaponAttachemtEvent
// (BlueprintCallable, BlueprintEvent)

void UMainBackPackPanel_BP_C::ChangeWeaponAttachemtEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ChangeWeaponAttachemtEvent");

	UMainBackPackPanel_BP_C_ChangeWeaponAttachemtEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__WeaponInfoItem_Weapon1_K2Node_ComponentBoundEvent_93_UpdateAvatar__DelegateSignature
// (BlueprintEvent)

void UMainBackPackPanel_BP_C::BndEvt__WeaponInfoItem_Weapon1_K2Node_ComponentBoundEvent_93_UpdateAvatar__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__WeaponInfoItem_Weapon1_K2Node_ComponentBoundEvent_93_UpdateAvatar__DelegateSignature");

	UMainBackPackPanel_BP_C_BndEvt__WeaponInfoItem_Weapon1_K2Node_ComponentBoundEvent_93_UpdateAvatar__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__WeaponInfoItem_Weapon2_K2Node_ComponentBoundEvent_188_UpdateAvatar__DelegateSignature
// (BlueprintEvent)

void UMainBackPackPanel_BP_C::BndEvt__WeaponInfoItem_Weapon2_K2Node_ComponentBoundEvent_188_UpdateAvatar__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__WeaponInfoItem_Weapon2_K2Node_ComponentBoundEvent_188_UpdateAvatar__DelegateSignature");

	UMainBackPackPanel_BP_C_BndEvt__WeaponInfoItem_Weapon2_K2Node_ComponentBoundEvent_188_UpdateAvatar__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__PistolInfoItem_BP_K2Node_ComponentBoundEvent_320_UpdateAvatar__DelegateSignature
// (BlueprintEvent)

void UMainBackPackPanel_BP_C::BndEvt__PistolInfoItem_BP_K2Node_ComponentBoundEvent_320_UpdateAvatar__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__PistolInfoItem_BP_K2Node_ComponentBoundEvent_320_UpdateAvatar__DelegateSignature");

	UMainBackPackPanel_BP_C_BndEvt__PistolInfoItem_BP_K2Node_ComponentBoundEvent_320_UpdateAvatar__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__MeleeInfoItem_BP_K2Node_ComponentBoundEvent_405_UpdateAvatar__DelegateSignature
// (BlueprintEvent)

void UMainBackPackPanel_BP_C::BndEvt__MeleeInfoItem_BP_K2Node_ComponentBoundEvent_405_UpdateAvatar__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__MeleeInfoItem_BP_K2Node_ComponentBoundEvent_405_UpdateAvatar__DelegateSignature");

	UMainBackPackPanel_BP_C_BndEvt__MeleeInfoItem_BP_K2Node_ComponentBoundEvent_405_UpdateAvatar__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ExecuteUbergraph_MainBackPackPanel_BP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainBackPackPanel_BP_C::ExecuteUbergraph_MainBackPackPanel_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ExecuteUbergraph_MainBackPackPanel_BP");

	UMainBackPackPanel_BP_C_ExecuteUbergraph_MainBackPackPanel_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.CloseBackPack__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMainBackPackPanel_BP_C::CloseBackPack__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.CloseBackPack__DelegateSignature");

	UMainBackPackPanel_BP_C_CloseBackPack__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
