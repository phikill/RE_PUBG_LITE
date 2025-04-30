
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

// Function FitingSlotItem_BP.FitingSlotItem_BP_C.OnRightClickEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFitingSlotItem_BP_C::OnRightClickEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function FitingSlotItem_BP.FitingSlotItem_BP_C.OnRightClickEvent");

	UFitingSlotItem_BP_C_OnRightClickEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FitingSlotItem_BP.FitingSlotItem_BP_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UFitingSlotItem_BP_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function FitingSlotItem_BP.FitingSlotItem_BP_C.OnMouseButtonDown");

	UFitingSlotItem_BP_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function FitingSlotItem_BP.FitingSlotItem_BP_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UFitingSlotItem_BP_C::OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function FitingSlotItem_BP.FitingSlotItem_BP_C.OnMouseButtonUp");

	UFitingSlotItem_BP_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function FitingSlotItem_BP.FitingSlotItem_BP_C.GetGunBattleData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBattleItemData         BattleData                     (Parm, OutParm)

void UFitingSlotItem_BP_C::GetGunBattleData(struct FBattleItemData* BattleData)
{
	static auto fn = UObject::FindObject<UFunction>("Function FitingSlotItem_BP.FitingSlotItem_BP_C.GetGunBattleData");

	UFitingSlotItem_BP_C_GetGunBattleData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BattleData != nullptr)
		*BattleData = params.BattleData;
}


// Function FitingSlotItem_BP.FitingSlotItem_BP_C.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*      Operation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFitingSlotItem_BP_C::OnDragDetected(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function FitingSlotItem_BP.FitingSlotItem_BP_C.OnDragDetected");

	UFitingSlotItem_BP_C_OnDragDetected_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PointerEvent != nullptr)
		*PointerEvent = params.PointerEvent;
	if (Operation != nullptr)
		*Operation = params.Operation;
}


// Function FitingSlotItem_BP.FitingSlotItem_BP_C.OnTouchEnded
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           InTouchEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UFitingSlotItem_BP_C::OnTouchEnded(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function FitingSlotItem_BP.FitingSlotItem_BP_C.OnTouchEnded");

	UFitingSlotItem_BP_C_OnTouchEnded_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InTouchEvent != nullptr)
		*InTouchEvent = params.InTouchEvent;

	return params.ReturnValue;
}


// Function FitingSlotItem_BP.FitingSlotItem_BP_C.OnTouchStarted
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           InTouchEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UFitingSlotItem_BP_C::OnTouchStarted(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function FitingSlotItem_BP.FitingSlotItem_BP_C.OnTouchStarted");

	UFitingSlotItem_BP_C_OnTouchStarted_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InTouchEvent != nullptr)
		*InTouchEvent = params.InTouchEvent;

	return params.ReturnValue;
}


// Function FitingSlotItem_BP.FitingSlotItem_BP_C.HighLightSocket
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           highLight                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FItemDefineID           DefineID                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UFitingSlotItem_BP_C::HighLightSocket(bool highLight, const struct FItemDefineID& DefineID)
{
	static auto fn = UObject::FindObject<UFunction>("Function FitingSlotItem_BP.FitingSlotItem_BP_C.HighLightSocket");

	UFitingSlotItem_BP_C_HighLightSocket_Params params;
	params.highLight = highLight;
	params.DefineID = DefineID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FitingSlotItem_BP.FitingSlotItem_BP_C.UpdateSlotItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            resID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FItemDefineID           DefineID                       (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<EBackPackDragOrigin> DragOrigin                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFitingSlotItem_BP_C::UpdateSlotItem(int resID, const struct FItemDefineID& DefineID, TEnumAsByte<EBackPackDragOrigin> DragOrigin)
{
	static auto fn = UObject::FindObject<UFunction>("Function FitingSlotItem_BP.FitingSlotItem_BP_C.UpdateSlotItem");

	UFitingSlotItem_BP_C_UpdateSlotItem_Params params;
	params.resID = resID;
	params.DefineID = DefineID;
	params.DragOrigin = DragOrigin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FitingSlotItem_BP.FitingSlotItem_BP_C.OnDragCancelled
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          PointerEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation**     Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFitingSlotItem_BP_C::OnDragCancelled(struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function FitingSlotItem_BP.FitingSlotItem_BP_C.OnDragCancelled");

	UFitingSlotItem_BP_C_OnDragCancelled_Params params;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FitingSlotItem_BP.FitingSlotItem_BP_C.BndEvt__Button_SlotClick_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UFitingSlotItem_BP_C::BndEvt__Button_SlotClick_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FitingSlotItem_BP.FitingSlotItem_BP_C.BndEvt__Button_SlotClick_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UFitingSlotItem_BP_C_BndEvt__Button_SlotClick_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FitingSlotItem_BP.FitingSlotItem_BP_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UFitingSlotItem_BP_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function FitingSlotItem_BP.FitingSlotItem_BP_C.OnMouseLeave");

	UFitingSlotItem_BP_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FitingSlotItem_BP.FitingSlotItem_BP_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UFitingSlotItem_BP_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function FitingSlotItem_BP.FitingSlotItem_BP_C.OnMouseEnter");

	UFitingSlotItem_BP_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FitingSlotItem_BP.FitingSlotItem_BP_C.ExecuteUbergraph_FitingSlotItem_BP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFitingSlotItem_BP_C::ExecuteUbergraph_FitingSlotItem_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FitingSlotItem_BP.FitingSlotItem_BP_C.ExecuteUbergraph_FitingSlotItem_BP");

	UFitingSlotItem_BP_C_ExecuteUbergraph_FitingSlotItem_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FitingSlotItem_BP.FitingSlotItem_BP_C.OnLeaveSlot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UFitingSlotItem_BP_C::OnLeaveSlot__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FitingSlotItem_BP.FitingSlotItem_BP_C.OnLeaveSlot__DelegateSignature");

	UFitingSlotItem_BP_C_OnLeaveSlot__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FitingSlotItem_BP.FitingSlotItem_BP_C.ShowToolTip__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush             Brush                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FBattleItemData         BattleItemData                 (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           isShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFitingSlotItem_BP_C::ShowToolTip__DelegateSignature(const struct FSlateBrush& Brush, const struct FBattleItemData& BattleItemData, bool isShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function FitingSlotItem_BP.FitingSlotItem_BP_C.ShowToolTip__DelegateSignature");

	UFitingSlotItem_BP_C_ShowToolTip__DelegateSignature_Params params;
	params.Brush = Brush;
	params.BattleItemData = BattleItemData;
	params.isShow = isShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FitingSlotItem_BP.FitingSlotItem_BP_C.ItemBeDragCancel__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UFitingSlotItem_BP_C::ItemBeDragCancel__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FitingSlotItem_BP.FitingSlotItem_BP_C.ItemBeDragCancel__DelegateSignature");

	UFitingSlotItem_BP_C_ItemBeDragCancel__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FitingSlotItem_BP.FitingSlotItem_BP_C.ItemBeDragBegin__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBattleItemData         ItemData                       (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<EBackPackDragOrigin> DragOrigin                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFitingSlotItem_BP_C::ItemBeDragBegin__DelegateSignature(const struct FBattleItemData& ItemData, TEnumAsByte<EBackPackDragOrigin> DragOrigin)
{
	static auto fn = UObject::FindObject<UFunction>("Function FitingSlotItem_BP.FitingSlotItem_BP_C.ItemBeDragBegin__DelegateSignature");

	UFitingSlotItem_BP_C_ItemBeDragBegin__DelegateSignature_Params params;
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
