
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

// Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.ResetHighLightSlot
// (Public, BlueprintCallable, BlueprintEvent)

void UBackPackArmorSlot_BP_C::ResetHighLightSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.ResetHighLightSlot");

	UBackPackArmorSlot_BP_C_ResetHighLightSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.HighLightSlot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           DefineID                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UBackPackArmorSlot_BP_C::HighLightSlot(const struct FItemDefineID& DefineID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.HighLightSlot");

	UBackPackArmorSlot_BP_C_HighLightSlot_Params params;
	params.DefineID = DefineID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.ShowItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBattleItemData         ItemData                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UBackPackArmorSlot_BP_C::ShowItem(const struct FBattleItemData& ItemData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.ShowItem");

	UBackPackArmorSlot_BP_C_ShowItem_Params params;
	params.ItemData = ItemData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBackPackArmorSlot_BP_C::OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.OnMouseButtonUp");

	UBackPackArmorSlot_BP_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.OnTouchStarted
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           InTouchEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBackPackArmorSlot_BP_C::OnTouchStarted(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.OnTouchStarted");

	UBackPackArmorSlot_BP_C_OnTouchStarted_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InTouchEvent != nullptr)
		*InTouchEvent = params.InTouchEvent;

	return params.ReturnValue;
}


// Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBackPackArmorSlot_BP_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.OnMouseButtonDown");

	UBackPackArmorSlot_BP_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.OnTouchEnded
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           InTouchEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBackPackArmorSlot_BP_C::OnTouchEnded(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.OnTouchEnded");

	UBackPackArmorSlot_BP_C_OnTouchEnded_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InTouchEvent != nullptr)
		*InTouchEvent = params.InTouchEvent;

	return params.ReturnValue;
}


// Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.GetArmorHP
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CrtHP                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            MaxHP                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBackPackArmorSlot_BP_C::GetArmorHP(int* CrtHP, int* MaxHP)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.GetArmorHP");

	UBackPackArmorSlot_BP_C_GetArmorHP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CrtHP != nullptr)
		*CrtHP = params.CrtHP;
	if (MaxHP != nullptr)
		*MaxHP = params.MaxHP;
}


// Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*      Operation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBackPackArmorSlot_BP_C::OnDragDetected(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.OnDragDetected");

	UBackPackArmorSlot_BP_C_OnDragDetected_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PointerEvent != nullptr)
		*PointerEvent = params.PointerEvent;
	if (Operation != nullptr)
		*Operation = params.Operation;
}


// Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.SetArmorName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShowDefault                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBackPackArmorSlot_BP_C::SetArmorName(bool ShowDefault)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.SetArmorName");

	UBackPackArmorSlot_BP_C_SetArmorName_Params params;
	params.ShowDefault = ShowDefault;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.SetArmorHP
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            HPCrt                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            HPMax                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBackPackArmorSlot_BP_C::SetArmorHP(int HPCrt, int HPMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.SetArmorHP");

	UBackPackArmorSlot_BP_C_SetArmorHP_Params params;
	params.HPCrt = HPCrt;
	params.HPMax = HPMax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.ShowArmor
// (Public, BlueprintCallable, BlueprintEvent)

void UBackPackArmorSlot_BP_C::ShowArmor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.ShowArmor");

	UBackPackArmorSlot_BP_C_ShowArmor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.GetNameByClothArmorType
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBackPackArmorSlot_BP_C::GetNameByClothArmorType()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.GetNameByClothArmorType");

	UBackPackArmorSlot_BP_C_GetNameByClothArmorType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.ShowNull
// (Public, BlueprintCallable, BlueprintEvent)

void UBackPackArmorSlot_BP_C::ShowNull()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.ShowNull");

	UBackPackArmorSlot_BP_C_ShowNull_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBackPackArmorSlot_BP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.Construct");

	UBackPackArmorSlot_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBackPackArmorSlot_BP_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.Tick");

	UBackPackArmorSlot_BP_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.OnDragCancelled
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          PointerEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation**     Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBackPackArmorSlot_BP_C::OnDragCancelled(struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.OnDragCancelled");

	UBackPackArmorSlot_BP_C_OnDragCancelled_Params params;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBackPackArmorSlot_BP_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.OnMouseLeave");

	UBackPackArmorSlot_BP_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBackPackArmorSlot_BP_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.OnMouseEnter");

	UBackPackArmorSlot_BP_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.ExecuteUbergraph_BackPackArmorSlot_BP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBackPackArmorSlot_BP_C::ExecuteUbergraph_BackPackArmorSlot_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.ExecuteUbergraph_BackPackArmorSlot_BP");

	UBackPackArmorSlot_BP_C_ExecuteUbergraph_BackPackArmorSlot_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.ShowToolTip__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush             Brush                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FBattleItemData         BattleItemData                 (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           isShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBackPackArmorSlot_BP_C::ShowToolTip__DelegateSignature(const struct FSlateBrush& Brush, const struct FBattleItemData& BattleItemData, bool isShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.ShowToolTip__DelegateSignature");

	UBackPackArmorSlot_BP_C_ShowToolTip__DelegateSignature_Params params;
	params.Brush = Brush;
	params.BattleItemData = BattleItemData;
	params.isShow = isShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.ItemBeDragCancelled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBackPackArmorSlot_BP_C::ItemBeDragCancelled__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.ItemBeDragCancelled__DelegateSignature");

	UBackPackArmorSlot_BP_C_ItemBeDragCancelled__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.ItemBeDragBegin__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBattleItemData         ItemData                       (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<EBackPackDragOrigin> DragOrigin                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBackPackArmorSlot_BP_C::ItemBeDragBegin__DelegateSignature(const struct FBattleItemData& ItemData, TEnumAsByte<EBackPackDragOrigin> DragOrigin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.ItemBeDragBegin__DelegateSignature");

	UBackPackArmorSlot_BP_C_ItemBeDragBegin__DelegateSignature_Params params;
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
