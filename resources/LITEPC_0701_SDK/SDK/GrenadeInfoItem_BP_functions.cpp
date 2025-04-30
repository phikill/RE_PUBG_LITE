
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

// Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.HighLightBG_Dark
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsHighLight                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGrenadeInfoItem_BP_C::HighLightBG_Dark(bool IsHighLight)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.HighLightBG_Dark");

	UGrenadeInfoItem_BP_C_HighLightBG_Dark_Params params;
	params.IsHighLight = IsHighLight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.IsValidWeapon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGrenadeInfoItem_BP_C::IsValidWeapon(bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.IsValidWeapon");

	UGrenadeInfoItem_BP_C_IsValidWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.OnSpawnActorInSceneCaptureWorld
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  SpawnedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGrenadeInfoItem_BP_C::OnSpawnActorInSceneCaptureWorld(class AActor* SpawnedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.OnSpawnActorInSceneCaptureWorld");

	UGrenadeInfoItem_BP_C_OnSpawnActorInSceneCaptureWorld_Params params;
	params.SpawnedActor = SpawnedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.UpdateRenderTexture
// (Public, BlueprintCallable, BlueprintEvent)

void UGrenadeInfoItem_BP_C::UpdateRenderTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.UpdateRenderTexture");

	UGrenadeInfoItem_BP_C_UpdateRenderTexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UGrenadeInfoItem_BP_C::OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.OnMouseButtonUp");

	UGrenadeInfoItem_BP_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UGrenadeInfoItem_BP_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.OnMouseButtonDown");

	UGrenadeInfoItem_BP_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*      Operation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGrenadeInfoItem_BP_C::OnDragDetected(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.OnDragDetected");

	UGrenadeInfoItem_BP_C_OnDragDetected_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PointerEvent != nullptr)
		*PointerEvent = params.PointerEvent;
	if (Operation != nullptr)
		*Operation = params.Operation;
}


// Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.HighLightBG
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsHighLight                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGrenadeInfoItem_BP_C::HighLightBG(bool IsHighLight)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.HighLightBG");

	UGrenadeInfoItem_BP_C_HighLightBG_Params params;
	params.IsHighLight = IsHighLight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.UpdateWeaponAppearanceInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBP_STRUCT_Item_type    Record                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FBattleItemData         ItemData                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UGrenadeInfoItem_BP_C::UpdateWeaponAppearanceInfo(const struct FBP_STRUCT_Item_type& Record, const struct FBattleItemData& ItemData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.UpdateWeaponAppearanceInfo");

	UGrenadeInfoItem_BP_C_UpdateWeaponAppearanceInfo_Params params;
	params.Record = Record;
	params.ItemData = ItemData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.OnTouchEnded
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           InTouchEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UGrenadeInfoItem_BP_C::OnTouchEnded(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.OnTouchEnded");

	UGrenadeInfoItem_BP_C_OnTouchEnded_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InTouchEvent != nullptr)
		*InTouchEvent = params.InTouchEvent;

	return params.ReturnValue;
}


// Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.OnTouchStarted
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           InTouchEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UGrenadeInfoItem_BP_C::OnTouchStarted(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.OnTouchStarted");

	UGrenadeInfoItem_BP_C_OnTouchStarted_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InTouchEvent != nullptr)
		*InTouchEvent = params.InTouchEvent;

	return params.ReturnValue;
}


// Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGrenadeInfoItem_BP_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.OnMouseLeave");

	UGrenadeInfoItem_BP_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.OnDragCancelled
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          PointerEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation**     Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGrenadeInfoItem_BP_C::OnDragCancelled(struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.OnDragCancelled");

	UGrenadeInfoItem_BP_C_OnDragCancelled_Params params;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGrenadeInfoItem_BP_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.OnMouseEnter");

	UGrenadeInfoItem_BP_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.OnDragEnter
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation**     Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGrenadeInfoItem_BP_C::OnDragEnter(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.OnDragEnter");

	UGrenadeInfoItem_BP_C_OnDragEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.OnDragLeave
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation**     Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGrenadeInfoItem_BP_C::OnDragLeave(struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.OnDragLeave");

	UGrenadeInfoItem_BP_C_OnDragLeave_Params params;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.ReceiveHide
// (Event, Protected, BlueprintEvent)

void UGrenadeInfoItem_BP_C::ReceiveHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.ReceiveHide");

	UGrenadeInfoItem_BP_C_ReceiveHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.ReceiveShow
// (Event, Protected, BlueprintEvent)

void UGrenadeInfoItem_BP_C::ReceiveShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.ReceiveShow");

	UGrenadeInfoItem_BP_C_ReceiveShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.OnRightClickedDown
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FVector2D*              TempScreenPos                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UGrenadeInfoItem_BP_C::OnRightClickedDown(struct FVector2D* TempScreenPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.OnRightClickedDown");

	UGrenadeInfoItem_BP_C_OnRightClickedDown_Params params;
	params.TempScreenPos = TempScreenPos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.ExecuteUbergraph_GrenadeInfoItem_BP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGrenadeInfoItem_BP_C::ExecuteUbergraph_GrenadeInfoItem_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.ExecuteUbergraph_GrenadeInfoItem_BP");

	UGrenadeInfoItem_BP_C_ExecuteUbergraph_GrenadeInfoItem_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.ShowToolTip__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush             Brush                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FBattleItemData         BattleItemData                 (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           isShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGrenadeInfoItem_BP_C::ShowToolTip__DelegateSignature(const struct FSlateBrush& Brush, const struct FBattleItemData& BattleItemData, bool isShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.ShowToolTip__DelegateSignature");

	UGrenadeInfoItem_BP_C_ShowToolTip__DelegateSignature_Params params;
	params.Brush = Brush;
	params.BattleItemData = BattleItemData;
	params.isShow = isShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.ItemBeDragCancelled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UGrenadeInfoItem_BP_C::ItemBeDragCancelled__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.ItemBeDragCancelled__DelegateSignature");

	UGrenadeInfoItem_BP_C_ItemBeDragCancelled__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.ItemBeDragBegin__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBattleItemData         ItemData                       (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<EBackPackDragOrigin> DragOrgin                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGrenadeInfoItem_BP_C::ItemBeDragBegin__DelegateSignature(const struct FBattleItemData& ItemData, TEnumAsByte<EBackPackDragOrigin> DragOrgin)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.ItemBeDragBegin__DelegateSignature");

	UGrenadeInfoItem_BP_C_ItemBeDragBegin__DelegateSignature_Params params;
	params.ItemData = ItemData;
	params.DragOrgin = DragOrgin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
