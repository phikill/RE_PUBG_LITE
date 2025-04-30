
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

// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.HighLightBG_Dark
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsHighLightDark                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainWeaponInfoItem_BP_C::HighLightBG_Dark(bool IsHighLightDark)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.HighLightBG_Dark");

	UMainWeaponInfoItem_BP_C_HighLightBG_Dark_Params params;
	params.IsHighLightDark = IsHighLightDark;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.IsValidWeapon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMainWeaponInfoItem_BP_C::IsValidWeapon(bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.IsValidWeapon");

	UMainWeaponInfoItem_BP_C_IsValidWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.OnSpawnActorInSceneCaptureWorld
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  SpawnedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainWeaponInfoItem_BP_C::OnSpawnActorInSceneCaptureWorld(class AActor* SpawnedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.OnSpawnActorInSceneCaptureWorld");

	UMainWeaponInfoItem_BP_C_OnSpawnActorInSceneCaptureWorld_Params params;
	params.SpawnedActor = SpawnedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.UpdateRenderTexture
// (Public, BlueprintCallable, BlueprintEvent)

void UMainWeaponInfoItem_BP_C::UpdateRenderTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.UpdateRenderTexture");

	UMainWeaponInfoItem_BP_C_UpdateRenderTexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.IsAttachSlotMouseOver
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsMouseOver                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMainWeaponInfoItem_BP_C::IsAttachSlotMouseOver(bool* IsMouseOver)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.IsAttachSlotMouseOver");

	UMainWeaponInfoItem_BP_C_IsAttachSlotMouseOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsMouseOver != nullptr)
		*IsMouseOver = params.IsMouseOver;
}


// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UMainWeaponInfoItem_BP_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.OnMouseButtonDown");

	UMainWeaponInfoItem_BP_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UMainWeaponInfoItem_BP_C::OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.OnMouseButtonUp");

	UMainWeaponInfoItem_BP_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*      Operation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMainWeaponInfoItem_BP_C::OnDragDetected(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.OnDragDetected");

	UMainWeaponInfoItem_BP_C_OnDragDetected_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PointerEvent != nullptr)
		*PointerEvent = params.PointerEvent;
	if (Operation != nullptr)
		*Operation = params.Operation;
}


// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.BindWeaponChangeEvent
// (Public, BlueprintCallable, BlueprintEvent)

void UMainWeaponInfoItem_BP_C::BindWeaponChangeEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.BindWeaponChangeEvent");

	UMainWeaponInfoItem_BP_C_BindWeaponChangeEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.UpdateBullet
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMainWeaponInfoItem_BP_C::UpdateBullet()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.UpdateBullet");

	UMainWeaponInfoItem_BP_C_UpdateBullet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.UpdateUsingSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESurviveWeaponPropSlot         Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainWeaponInfoItem_BP_C::UpdateUsingSlot(ESurviveWeaponPropSlot Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.UpdateUsingSlot");

	UMainWeaponInfoItem_BP_C_UpdateUsingSlot_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.ResertHighLightAttachSlot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMainWeaponInfoItem_BP_C::ResertHighLightAttachSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.ResertHighLightAttachSlot");

	UMainWeaponInfoItem_BP_C_ResertHighLightAttachSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.HighLightAttachSlot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           DefineID                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UMainWeaponInfoItem_BP_C::HighLightAttachSlot(const struct FItemDefineID& DefineID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.HighLightAttachSlot");

	UMainWeaponInfoItem_BP_C_HighLightAttachSlot_Params params;
	params.DefineID = DefineID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.UpdateSlotVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UMainWeaponInfoItem_BP_C::UpdateSlotVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.UpdateSlotVisibility");

	UMainWeaponInfoItem_BP_C_UpdateSlotVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.UpdateWeaponAttachment
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMainWeaponInfoItem_BP_C::UpdateWeaponAttachment()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.UpdateWeaponAttachment");

	UMainWeaponInfoItem_BP_C_UpdateWeaponAttachment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.HighLightBG
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsHighLight                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainWeaponInfoItem_BP_C::HighLightBG(bool IsHighLight)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.HighLightBG");

	UMainWeaponInfoItem_BP_C_HighLightBG_Params params;
	params.IsHighLight = IsHighLight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.OnTouchEnded
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           InTouchEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UMainWeaponInfoItem_BP_C::OnTouchEnded(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.OnTouchEnded");

	UMainWeaponInfoItem_BP_C_OnTouchEnded_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InTouchEvent != nullptr)
		*InTouchEvent = params.InTouchEvent;

	return params.ReturnValue;
}


// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.OnTouchStarted
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           InTouchEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UMainWeaponInfoItem_BP_C::OnTouchStarted(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.OnTouchStarted");

	UMainWeaponInfoItem_BP_C_OnTouchStarted_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InTouchEvent != nullptr)
		*InTouchEvent = params.InTouchEvent;

	return params.ReturnValue;
}


// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.UpdateWeaponAppearanceInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBP_STRUCT_Item_type    WeaponData                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FBattleItemData         BattleData                     (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<EBackPackDragOrigin> DragOrigin                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainWeaponInfoItem_BP_C::UpdateWeaponAppearanceInfo(const struct FBP_STRUCT_Item_type& WeaponData, const struct FBattleItemData& BattleData, TEnumAsByte<EBackPackDragOrigin> DragOrigin)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.UpdateWeaponAppearanceInfo");

	UMainWeaponInfoItem_BP_C_UpdateWeaponAppearanceInfo_Params params;
	params.WeaponData = WeaponData;
	params.BattleData = BattleData;
	params.DragOrigin = DragOrigin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.ReceivedInitWidget
// (Event, Public, BlueprintEvent)

void UMainWeaponInfoItem_BP_C::ReceivedInitWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.ReceivedInitWidget");

	UMainWeaponInfoItem_BP_C_ReceivedInitWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.InitItemArray
// (BlueprintCallable, BlueprintEvent)

void UMainWeaponInfoItem_BP_C::InitItemArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.InitItemArray");

	UMainWeaponInfoItem_BP_C_InitItemArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.OnDragCancelled
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          PointerEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation**     Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainWeaponInfoItem_BP_C::OnDragCancelled(struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.OnDragCancelled");

	UMainWeaponInfoItem_BP_C_OnDragCancelled_Params params;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.FittingItemBeDragBegin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBattleItemData         ItemData                       (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<EBackPackDragOrigin> DragOrigin                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainWeaponInfoItem_BP_C::FittingItemBeDragBegin(const struct FBattleItemData& ItemData, TEnumAsByte<EBackPackDragOrigin> DragOrigin)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.FittingItemBeDragBegin");

	UMainWeaponInfoItem_BP_C_FittingItemBeDragBegin_Params params;
	params.ItemData = ItemData;
	params.DragOrigin = DragOrigin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.FittingItemBeDragCancel
// (BlueprintCallable, BlueprintEvent)

void UMainWeaponInfoItem_BP_C::FittingItemBeDragCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.FittingItemBeDragCancel");

	UMainWeaponInfoItem_BP_C_FittingItemBeDragCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMainWeaponInfoItem_BP_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.OnMouseLeave");

	UMainWeaponInfoItem_BP_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.ShowToolTipAttachment
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush             Brush                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FBattleItemData         BattleItemData                 (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           isShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainWeaponInfoItem_BP_C::ShowToolTipAttachment(const struct FSlateBrush& Brush, const struct FBattleItemData& BattleItemData, bool isShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.ShowToolTipAttachment");

	UMainWeaponInfoItem_BP_C_ShowToolTipAttachment_Params params;
	params.Brush = Brush;
	params.BattleItemData = BattleItemData;
	params.isShow = isShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMainWeaponInfoItem_BP_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.OnMouseEnter");

	UMainWeaponInfoItem_BP_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.BndEvt__FitingSlotItem_BP_K2Node_ComponentBoundEvent_21_OnLeaveSlot__DelegateSignature
// (BlueprintEvent)

void UMainWeaponInfoItem_BP_C::BndEvt__FitingSlotItem_BP_K2Node_ComponentBoundEvent_21_OnLeaveSlot__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.BndEvt__FitingSlotItem_BP_K2Node_ComponentBoundEvent_21_OnLeaveSlot__DelegateSignature");

	UMainWeaponInfoItem_BP_C_BndEvt__FitingSlotItem_BP_K2Node_ComponentBoundEvent_21_OnLeaveSlot__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.BndEvt__FitingSlotItem_BP_C_0_K2Node_ComponentBoundEvent_46_OnLeaveSlot__DelegateSignature
// (BlueprintEvent)

void UMainWeaponInfoItem_BP_C::BndEvt__FitingSlotItem_BP_C_0_K2Node_ComponentBoundEvent_46_OnLeaveSlot__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.BndEvt__FitingSlotItem_BP_C_0_K2Node_ComponentBoundEvent_46_OnLeaveSlot__DelegateSignature");

	UMainWeaponInfoItem_BP_C_BndEvt__FitingSlotItem_BP_C_0_K2Node_ComponentBoundEvent_46_OnLeaveSlot__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.BndEvt__FitingSlotItem_BP_C_1_K2Node_ComponentBoundEvent_64_OnLeaveSlot__DelegateSignature
// (BlueprintEvent)

void UMainWeaponInfoItem_BP_C::BndEvt__FitingSlotItem_BP_C_1_K2Node_ComponentBoundEvent_64_OnLeaveSlot__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.BndEvt__FitingSlotItem_BP_C_1_K2Node_ComponentBoundEvent_64_OnLeaveSlot__DelegateSignature");

	UMainWeaponInfoItem_BP_C_BndEvt__FitingSlotItem_BP_C_1_K2Node_ComponentBoundEvent_64_OnLeaveSlot__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.BndEvt__FitingSlotItem_BP_C_2_K2Node_ComponentBoundEvent_83_OnLeaveSlot__DelegateSignature
// (BlueprintEvent)

void UMainWeaponInfoItem_BP_C::BndEvt__FitingSlotItem_BP_C_2_K2Node_ComponentBoundEvent_83_OnLeaveSlot__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.BndEvt__FitingSlotItem_BP_C_2_K2Node_ComponentBoundEvent_83_OnLeaveSlot__DelegateSignature");

	UMainWeaponInfoItem_BP_C_BndEvt__FitingSlotItem_BP_C_2_K2Node_ComponentBoundEvent_83_OnLeaveSlot__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.BndEvt__FitingSlotItem_BP_C_3_K2Node_ComponentBoundEvent_103_OnLeaveSlot__DelegateSignature
// (BlueprintEvent)

void UMainWeaponInfoItem_BP_C::BndEvt__FitingSlotItem_BP_C_3_K2Node_ComponentBoundEvent_103_OnLeaveSlot__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.BndEvt__FitingSlotItem_BP_C_3_K2Node_ComponentBoundEvent_103_OnLeaveSlot__DelegateSignature");

	UMainWeaponInfoItem_BP_C_BndEvt__FitingSlotItem_BP_C_3_K2Node_ComponentBoundEvent_103_OnLeaveSlot__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.OnDragEnter
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation**     Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainWeaponInfoItem_BP_C::OnDragEnter(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.OnDragEnter");

	UMainWeaponInfoItem_BP_C_OnDragEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.OnDragLeave
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation**     Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainWeaponInfoItem_BP_C::OnDragLeave(struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.OnDragLeave");

	UMainWeaponInfoItem_BP_C_OnDragLeave_Params params;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.ReceiveHide
// (Event, Protected, BlueprintEvent)

void UMainWeaponInfoItem_BP_C::ReceiveHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.ReceiveHide");

	UMainWeaponInfoItem_BP_C_ReceiveHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.ReceiveShow
// (Event, Protected, BlueprintEvent)

void UMainWeaponInfoItem_BP_C::ReceiveShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.ReceiveShow");

	UMainWeaponInfoItem_BP_C_ReceiveShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.UpdateAvatar_Event
// (BlueprintCallable, BlueprintEvent)

void UMainWeaponInfoItem_BP_C::UpdateAvatar_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.UpdateAvatar_Event");

	UMainWeaponInfoItem_BP_C_UpdateAvatar_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.ExecuteUbergraph_MainWeaponInfoItem_BP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainWeaponInfoItem_BP_C::ExecuteUbergraph_MainWeaponInfoItem_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.ExecuteUbergraph_MainWeaponInfoItem_BP");

	UMainWeaponInfoItem_BP_C_ExecuteUbergraph_MainWeaponInfoItem_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.UpdateAvatar__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMainWeaponInfoItem_BP_C::UpdateAvatar__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.UpdateAvatar__DelegateSignature");

	UMainWeaponInfoItem_BP_C_UpdateAvatar__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.ShowToolTip__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush             Brush                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FBattleItemData         BattleItemData                 (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           isShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainWeaponInfoItem_BP_C::ShowToolTip__DelegateSignature(const struct FSlateBrush& Brush, const struct FBattleItemData& BattleItemData, bool isShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.ShowToolTip__DelegateSignature");

	UMainWeaponInfoItem_BP_C_ShowToolTip__DelegateSignature_Params params;
	params.Brush = Brush;
	params.BattleItemData = BattleItemData;
	params.isShow = isShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.ItemBeDragCancelled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMainWeaponInfoItem_BP_C::ItemBeDragCancelled__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.ItemBeDragCancelled__DelegateSignature");

	UMainWeaponInfoItem_BP_C_ItemBeDragCancelled__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.ItemBeDragBegin__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBattleItemData         ItemData                       (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<EBackPackDragOrigin> DragOrigin                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainWeaponInfoItem_BP_C::ItemBeDragBegin__DelegateSignature(const struct FBattleItemData& ItemData, TEnumAsByte<EBackPackDragOrigin> DragOrigin)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.ItemBeDragBegin__DelegateSignature");

	UMainWeaponInfoItem_BP_C_ItemBeDragBegin__DelegateSignature_Params params;
	params.ItemData = ItemData;
	params.DragOrigin = DragOrigin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
