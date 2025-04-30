
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

// Function PickUpItem_S_BP.PickUpItem_S_BP_C.UpdateItemDataByWrap
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBattleSearchBoxSortingInfo Info                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UPickUpItem_S_BP_C::UpdateItemDataByWrap(const struct FBattleSearchBoxSortingInfo& Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpItem_S_BP.PickUpItem_S_BP_C.UpdateItemDataByWrap");

	UPickUpItem_S_BP_C_UpdateItemDataByWrap_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpItem_S_BP.PickUpItem_S_BP_C.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*      Operation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPickUpItem_S_BP_C::OnDragDetected(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpItem_S_BP.PickUpItem_S_BP_C.OnDragDetected");

	UPickUpItem_S_BP_C_OnDragDetected_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PointerEvent != nullptr)
		*PointerEvent = params.PointerEvent;
	if (Operation != nullptr)
		*Operation = params.Operation;
}


// Function PickUpItem_S_BP.PickUpItem_S_BP_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UPickUpItem_S_BP_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpItem_S_BP.PickUpItem_S_BP_C.OnMouseButtonDown");

	UPickUpItem_S_BP_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function PickUpItem_S_BP.PickUpItem_S_BP_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UPickUpItem_S_BP_C::OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpItem_S_BP.PickUpItem_S_BP_C.OnMouseButtonUp");

	UPickUpItem_S_BP_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function PickUpItem_S_BP.PickUpItem_S_BP_C.RefreshIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickUpItem_S_BP_C::RefreshIcon(class UObject* Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpItem_S_BP.PickUpItem_S_BP_C.RefreshIcon");

	UPickUpItem_S_BP_C_RefreshIcon_Params params;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpItem_S_BP.PickUpItem_S_BP_C.ShowDurable
// (Public, BlueprintCallable, BlueprintEvent)

void UPickUpItem_S_BP_C::ShowDurable()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpItem_S_BP.PickUpItem_S_BP_C.ShowDurable");

	UPickUpItem_S_BP_C_ShowDurable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpItem_S_BP.PickUpItem_S_BP_C.UpdateUseless
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Useful                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickUpItem_S_BP_C::UpdateUseless(bool Useful)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpItem_S_BP.PickUpItem_S_BP_C.UpdateUseless");

	UPickUpItem_S_BP_C_UpdateUseless_Params params;
	params.Useful = Useful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpItem_S_BP.PickUpItem_S_BP_C.GetUseless
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           useless                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPickUpItem_S_BP_C::GetUseless(bool* useless)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpItem_S_BP.PickUpItem_S_BP_C.GetUseless");

	UPickUpItem_S_BP_C_GetUseless_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (useless != nullptr)
		*useless = params.useless;
}


// Function PickUpItem_S_BP.PickUpItem_S_BP_C.OnTouchGesture
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           GestureEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UPickUpItem_S_BP_C::OnTouchGesture(struct FGeometry* MyGeometry, struct FPointerEvent* GestureEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpItem_S_BP.PickUpItem_S_BP_C.OnTouchGesture");

	UPickUpItem_S_BP_C_OnTouchGesture_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GestureEvent != nullptr)
		*GestureEvent = params.GestureEvent;

	return params.ReturnValue;
}


// Function PickUpItem_S_BP.PickUpItem_S_BP_C.HandlePickup
// (Public, BlueprintCallable, BlueprintEvent)

void UPickUpItem_S_BP_C::HandlePickup()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpItem_S_BP.PickUpItem_S_BP_C.HandlePickup");

	UPickUpItem_S_BP_C_HandlePickup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpItem_S_BP.PickUpItem_S_BP_C.OnTouchStarted
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           InTouchEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UPickUpItem_S_BP_C::OnTouchStarted(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpItem_S_BP.PickUpItem_S_BP_C.OnTouchStarted");

	UPickUpItem_S_BP_C_OnTouchStarted_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InTouchEvent != nullptr)
		*InTouchEvent = params.InTouchEvent;

	return params.ReturnValue;
}


// Function PickUpItem_S_BP.PickUpItem_S_BP_C.OnTouchEnded
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           InTouchEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UPickUpItem_S_BP_C::OnTouchEnded(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpItem_S_BP.PickUpItem_S_BP_C.OnTouchEnded");

	UPickUpItem_S_BP_C_OnTouchEnded_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InTouchEvent != nullptr)
		*InTouchEvent = params.InTouchEvent;

	return params.ReturnValue;
}


// Function PickUpItem_S_BP.PickUpItem_S_BP_C.UpdateItemData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBattleSearchItemSortingInfo ItemData                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UPickUpItem_S_BP_C::UpdateItemData(const struct FBattleSearchItemSortingInfo& ItemData)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpItem_S_BP.PickUpItem_S_BP_C.UpdateItemData");

	UPickUpItem_S_BP_C_UpdateItemData_Params params;
	params.ItemData = ItemData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpItem_S_BP.PickUpItem_S_BP_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickUpItem_S_BP_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpItem_S_BP.PickUpItem_S_BP_C.Tick");

	UPickUpItem_S_BP_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpItem_S_BP.PickUpItem_S_BP_C.BndEvt__Button_ClickItem_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPickUpItem_S_BP_C::BndEvt__Button_ClickItem_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpItem_S_BP.PickUpItem_S_BP_C.BndEvt__Button_ClickItem_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature");

	UPickUpItem_S_BP_C_BndEvt__Button_ClickItem_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpItem_S_BP.PickUpItem_S_BP_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPickUpItem_S_BP_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpItem_S_BP.PickUpItem_S_BP_C.OnMouseLeave");

	UPickUpItem_S_BP_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpItem_S_BP.PickUpItem_S_BP_C.OnRightClicked
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FVector2D*              TempScreenPos                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UPickUpItem_S_BP_C::OnRightClicked(struct FVector2D* TempScreenPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpItem_S_BP.PickUpItem_S_BP_C.OnRightClicked");

	UPickUpItem_S_BP_C_OnRightClicked_Params params;
	params.TempScreenPos = TempScreenPos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpItem_S_BP.PickUpItem_S_BP_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPickUpItem_S_BP_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpItem_S_BP.PickUpItem_S_BP_C.OnMouseEnter");

	UPickUpItem_S_BP_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpItem_S_BP.PickUpItem_S_BP_C.ExecuteUbergraph_PickUpItem_S_BP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickUpItem_S_BP_C::ExecuteUbergraph_PickUpItem_S_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpItem_S_BP.PickUpItem_S_BP_C.ExecuteUbergraph_PickUpItem_S_BP");

	UPickUpItem_S_BP_C_ExecuteUbergraph_PickUpItem_S_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpItem_S_BP.PickUpItem_S_BP_C.ItemBePickUp__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSearchedPickUpItemResult PickUpItemData                 (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           ForceDrop                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickUpItem_S_BP_C::ItemBePickUp__DelegateSignature(const struct FSearchedPickUpItemResult& PickUpItemData, bool ForceDrop)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpItem_S_BP.PickUpItem_S_BP_C.ItemBePickUp__DelegateSignature");

	UPickUpItem_S_BP_C_ItemBePickUp__DelegateSignature_Params params;
	params.PickUpItemData = PickUpItemData;
	params.ForceDrop = ForceDrop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpItem_S_BP.PickUpItem_S_BP_C.ToolTipUpdate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPickUpItem_S_BP_C*      ItemBp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickUpItem_S_BP_C::ToolTipUpdate__DelegateSignature(class UPickUpItem_S_BP_C* ItemBp)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpItem_S_BP.PickUpItem_S_BP_C.ToolTipUpdate__DelegateSignature");

	UPickUpItem_S_BP_C_ToolTipUpdate__DelegateSignature_Params params;
	params.ItemBp = ItemBp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpItem_S_BP.PickUpItem_S_BP_C.ItemDragStart__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSearchedPickUpItemResult ItemData                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UPickUpItem_S_BP_C::ItemDragStart__DelegateSignature(const struct FSearchedPickUpItemResult& ItemData)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpItem_S_BP.PickUpItem_S_BP_C.ItemDragStart__DelegateSignature");

	UPickUpItem_S_BP_C_ItemDragStart__DelegateSignature_Params params;
	params.ItemData = ItemData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpItem_S_BP.PickUpItem_S_BP_C.HandleBtnsStateChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPickUpItem_S_BP_C*      ItemBp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsHover                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickUpItem_S_BP_C::HandleBtnsStateChange__DelegateSignature(class UPickUpItem_S_BP_C* ItemBp, bool IsHover)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpItem_S_BP.PickUpItem_S_BP_C.HandleBtnsStateChange__DelegateSignature");

	UPickUpItem_S_BP_C_HandleBtnsStateChange__DelegateSignature_Params params;
	params.ItemBp = ItemBp;
	params.IsHover = IsHover;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
