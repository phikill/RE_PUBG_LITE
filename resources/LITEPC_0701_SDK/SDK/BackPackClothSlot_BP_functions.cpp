
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

// Function BackPackClothSlot_BP.BackPackClothSlot_BP_C.ResetHighLightSlot
// (Public, BlueprintCallable, BlueprintEvent)

void UBackPackClothSlot_BP_C::ResetHighLightSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackClothSlot_BP.BackPackClothSlot_BP_C.ResetHighLightSlot");

	UBackPackClothSlot_BP_C_ResetHighLightSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackPackClothSlot_BP.BackPackClothSlot_BP_C.HighLightSlot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           DefineID                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UBackPackClothSlot_BP_C::HighLightSlot(const struct FItemDefineID& DefineID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackClothSlot_BP.BackPackClothSlot_BP_C.HighLightSlot");

	UBackPackClothSlot_BP_C_HighLightSlot_Params params;
	params.DefineID = DefineID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackPackClothSlot_BP.BackPackClothSlot_BP_C.ShowItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBattleItemData         ItemData                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UBackPackClothSlot_BP_C::ShowItem(const struct FBattleItemData& ItemData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackClothSlot_BP.BackPackClothSlot_BP_C.ShowItem");

	UBackPackClothSlot_BP_C_ShowItem_Params params;
	params.ItemData = ItemData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackPackClothSlot_BP.BackPackClothSlot_BP_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBackPackClothSlot_BP_C::OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackClothSlot_BP.BackPackClothSlot_BP_C.OnMouseButtonUp");

	UBackPackClothSlot_BP_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function BackPackClothSlot_BP.BackPackClothSlot_BP_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBackPackClothSlot_BP_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackClothSlot_BP.BackPackClothSlot_BP_C.OnMouseButtonDown");

	UBackPackClothSlot_BP_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function BackPackClothSlot_BP.BackPackClothSlot_BP_C.GetSmallIcon
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsFound                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 ItemSmallIcon                  (Parm, OutParm, ZeroConstructor)

void UBackPackClothSlot_BP_C::GetSmallIcon(int ItemID, bool* IsFound, struct FString* ItemSmallIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackClothSlot_BP.BackPackClothSlot_BP_C.GetSmallIcon");

	UBackPackClothSlot_BP_C_GetSmallIcon_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsFound != nullptr)
		*IsFound = params.IsFound;
	if (ItemSmallIcon != nullptr)
		*ItemSmallIcon = params.ItemSmallIcon;
}


// Function BackPackClothSlot_BP.BackPackClothSlot_BP_C.OnTouchEnded
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           InTouchEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBackPackClothSlot_BP_C::OnTouchEnded(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackClothSlot_BP.BackPackClothSlot_BP_C.OnTouchEnded");

	UBackPackClothSlot_BP_C_OnTouchEnded_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InTouchEvent != nullptr)
		*InTouchEvent = params.InTouchEvent;

	return params.ReturnValue;
}


// Function BackPackClothSlot_BP.BackPackClothSlot_BP_C.OnTouchStarted
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           InTouchEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBackPackClothSlot_BP_C::OnTouchStarted(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackClothSlot_BP.BackPackClothSlot_BP_C.OnTouchStarted");

	UBackPackClothSlot_BP_C_OnTouchStarted_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InTouchEvent != nullptr)
		*InTouchEvent = params.InTouchEvent;

	return params.ReturnValue;
}


// Function BackPackClothSlot_BP.BackPackClothSlot_BP_C.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*      Operation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBackPackClothSlot_BP_C::OnDragDetected(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackClothSlot_BP.BackPackClothSlot_BP_C.OnDragDetected");

	UBackPackClothSlot_BP_C_OnDragDetected_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PointerEvent != nullptr)
		*PointerEvent = params.PointerEvent;
	if (Operation != nullptr)
		*Operation = params.Operation;
}


// Function BackPackClothSlot_BP.BackPackClothSlot_BP_C.GetNameByClothArmorType
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBackPackClothSlot_BP_C::GetNameByClothArmorType()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackClothSlot_BP.BackPackClothSlot_BP_C.GetNameByClothArmorType");

	UBackPackClothSlot_BP_C_GetNameByClothArmorType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BackPackClothSlot_BP.BackPackClothSlot_BP_C.ShowNull
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBackPackClothSlot_BP_C::ShowNull()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackClothSlot_BP.BackPackClothSlot_BP_C.ShowNull");

	UBackPackClothSlot_BP_C_ShowNull_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackPackClothSlot_BP.BackPackClothSlot_BP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBackPackClothSlot_BP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackClothSlot_BP.BackPackClothSlot_BP_C.Construct");

	UBackPackClothSlot_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackPackClothSlot_BP.BackPackClothSlot_BP_C.OnDragCancelled
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          PointerEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation**     Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBackPackClothSlot_BP_C::OnDragCancelled(struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackClothSlot_BP.BackPackClothSlot_BP_C.OnDragCancelled");

	UBackPackClothSlot_BP_C_OnDragCancelled_Params params;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackPackClothSlot_BP.BackPackClothSlot_BP_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBackPackClothSlot_BP_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackClothSlot_BP.BackPackClothSlot_BP_C.OnMouseLeave");

	UBackPackClothSlot_BP_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackPackClothSlot_BP.BackPackClothSlot_BP_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBackPackClothSlot_BP_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackClothSlot_BP.BackPackClothSlot_BP_C.OnMouseEnter");

	UBackPackClothSlot_BP_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackPackClothSlot_BP.BackPackClothSlot_BP_C.ExecuteUbergraph_BackPackClothSlot_BP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBackPackClothSlot_BP_C::ExecuteUbergraph_BackPackClothSlot_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackClothSlot_BP.BackPackClothSlot_BP_C.ExecuteUbergraph_BackPackClothSlot_BP");

	UBackPackClothSlot_BP_C_ExecuteUbergraph_BackPackClothSlot_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackPackClothSlot_BP.BackPackClothSlot_BP_C.ShowToolTip__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush             Brush                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FBattleItemData         BattleItemData                 (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           isShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBackPackClothSlot_BP_C::ShowToolTip__DelegateSignature(const struct FSlateBrush& Brush, const struct FBattleItemData& BattleItemData, bool isShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackClothSlot_BP.BackPackClothSlot_BP_C.ShowToolTip__DelegateSignature");

	UBackPackClothSlot_BP_C_ShowToolTip__DelegateSignature_Params params;
	params.Brush = Brush;
	params.BattleItemData = BattleItemData;
	params.isShow = isShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackPackClothSlot_BP.BackPackClothSlot_BP_C.ItemBeDragCancelled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBackPackClothSlot_BP_C::ItemBeDragCancelled__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackClothSlot_BP.BackPackClothSlot_BP_C.ItemBeDragCancelled__DelegateSignature");

	UBackPackClothSlot_BP_C_ItemBeDragCancelled__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackPackClothSlot_BP.BackPackClothSlot_BP_C.ItemBeDragBegin__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBattleItemData         ItemData                       (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<EBackPackDragOrigin> DragOrigin                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBackPackClothSlot_BP_C::ItemBeDragBegin__DelegateSignature(const struct FBattleItemData& ItemData, TEnumAsByte<EBackPackDragOrigin> DragOrigin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackClothSlot_BP.BackPackClothSlot_BP_C.ItemBeDragBegin__DelegateSignature");

	UBackPackClothSlot_BP_C_ItemBeDragBegin__DelegateSignature_Params params;
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
