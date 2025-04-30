
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

// Function PickUpItem_BP.PickUpItem_BP_C.UpdateItemData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBattleSearchItemSortingInfo ItemData                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UPickUpItem_BP_C::UpdateItemData(const struct FBattleSearchItemSortingInfo& ItemData)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpItem_BP.PickUpItem_BP_C.UpdateItemData");

	UPickUpItem_BP_C_UpdateItemData_Params params;
	params.ItemData = ItemData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpItem_BP.PickUpItem_BP_C.RefreshIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickUpItem_BP_C::RefreshIcon(class UObject* Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpItem_BP.PickUpItem_BP_C.RefreshIcon");

	UPickUpItem_BP_C_RefreshIcon_Params params;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpItem_BP.PickUpItem_BP_C.ShowDurable
// (Public, BlueprintCallable, BlueprintEvent)

void UPickUpItem_BP_C::ShowDurable()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpItem_BP.PickUpItem_BP_C.ShowDurable");

	UPickUpItem_BP_C_ShowDurable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpItem_BP.PickUpItem_BP_C.UpdateUseless
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Useful                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickUpItem_BP_C::UpdateUseless(bool Useful)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpItem_BP.PickUpItem_BP_C.UpdateUseless");

	UPickUpItem_BP_C_UpdateUseless_Params params;
	params.Useful = Useful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpItem_BP.PickUpItem_BP_C.GetUseless
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           useless                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPickUpItem_BP_C::GetUseless(bool* useless)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpItem_BP.PickUpItem_BP_C.GetUseless");

	UPickUpItem_BP_C_GetUseless_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (useless != nullptr)
		*useless = params.useless;
}


// Function PickUpItem_BP.PickUpItem_BP_C.UpdateItemDataByWrap
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBattleSearchBoxSortingInfo Info                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UPickUpItem_BP_C::UpdateItemDataByWrap(const struct FBattleSearchBoxSortingInfo& Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpItem_BP.PickUpItem_BP_C.UpdateItemDataByWrap");

	UPickUpItem_BP_C_UpdateItemDataByWrap_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpItem_BP.PickUpItem_BP_C.OnTouchGesture
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           GestureEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UPickUpItem_BP_C::OnTouchGesture(struct FGeometry* MyGeometry, struct FPointerEvent* GestureEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpItem_BP.PickUpItem_BP_C.OnTouchGesture");

	UPickUpItem_BP_C_OnTouchGesture_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GestureEvent != nullptr)
		*GestureEvent = params.GestureEvent;

	return params.ReturnValue;
}


// Function PickUpItem_BP.PickUpItem_BP_C.HandlePickup
// (Public, BlueprintCallable, BlueprintEvent)

void UPickUpItem_BP_C::HandlePickup()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpItem_BP.PickUpItem_BP_C.HandlePickup");

	UPickUpItem_BP_C_HandlePickup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpItem_BP.PickUpItem_BP_C.OnTouchStarted
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           InTouchEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UPickUpItem_BP_C::OnTouchStarted(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpItem_BP.PickUpItem_BP_C.OnTouchStarted");

	UPickUpItem_BP_C_OnTouchStarted_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InTouchEvent != nullptr)
		*InTouchEvent = params.InTouchEvent;

	return params.ReturnValue;
}


// Function PickUpItem_BP.PickUpItem_BP_C.OnTouchEnded
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           InTouchEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UPickUpItem_BP_C::OnTouchEnded(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpItem_BP.PickUpItem_BP_C.OnTouchEnded");

	UPickUpItem_BP_C_OnTouchEnded_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InTouchEvent != nullptr)
		*InTouchEvent = params.InTouchEvent;

	return params.ReturnValue;
}


// Function PickUpItem_BP.PickUpItem_BP_C.BndEvt__Button_ClickItem_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPickUpItem_BP_C::BndEvt__Button_ClickItem_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpItem_BP.PickUpItem_BP_C.BndEvt__Button_ClickItem_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature");

	UPickUpItem_BP_C_BndEvt__Button_ClickItem_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpItem_BP.PickUpItem_BP_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPickUpItem_BP_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpItem_BP.PickUpItem_BP_C.OnMouseLeave");

	UPickUpItem_BP_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpItem_BP.PickUpItem_BP_C.ExecuteUbergraph_PickUpItem_BP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickUpItem_BP_C::ExecuteUbergraph_PickUpItem_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpItem_BP.PickUpItem_BP_C.ExecuteUbergraph_PickUpItem_BP");

	UPickUpItem_BP_C_ExecuteUbergraph_PickUpItem_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
