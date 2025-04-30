
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

// Function BackPackItem_BP.BackPackItem_BP_C.OnRep_ItemData
// (BlueprintCallable, BlueprintEvent)

void UBackPackItem_BP_C::OnRep_ItemData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackItem_BP.BackPackItem_BP_C.OnRep_ItemData");

	UBackPackItem_BP_C_OnRep_ItemData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackPackItem_BP.BackPackItem_BP_C.UseItemTimer
// (Public, BlueprintCallable, BlueprintEvent)

void UBackPackItem_BP_C::UseItemTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackItem_BP.BackPackItem_BP_C.UseItemTimer");

	UBackPackItem_BP_C_UseItemTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackPackItem_BP.BackPackItem_BP_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBackPackItem_BP_C::OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackItem_BP.BackPackItem_BP_C.OnMouseButtonUp");

	UBackPackItem_BP_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function BackPackItem_BP.BackPackItem_BP_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBackPackItem_BP_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackItem_BP.BackPackItem_BP_C.OnMouseButtonDown");

	UBackPackItem_BP_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function BackPackItem_BP.BackPackItem_BP_C.RefreshIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBackPackItem_BP_C::RefreshIcon(class UObject* Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackItem_BP.BackPackItem_BP_C.RefreshIcon");

	UBackPackItem_BP_C_RefreshIcon_Params params;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackPackItem_BP.BackPackItem_BP_C.ShowHandleBtns
// (Public, BlueprintCallable, BlueprintEvent)

void UBackPackItem_BP_C::ShowHandleBtns()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackItem_BP.BackPackItem_BP_C.ShowHandleBtns");

	UBackPackItem_BP_C_ShowHandleBtns_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackPackItem_BP.BackPackItem_BP_C.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*      Operation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBackPackItem_BP_C::OnDragDetected(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackItem_BP.BackPackItem_BP_C.OnDragDetected");

	UBackPackItem_BP_C_OnDragDetected_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PointerEvent != nullptr)
		*PointerEvent = params.PointerEvent;
	if (Operation != nullptr)
		*Operation = params.Operation;
}


// Function BackPackItem_BP.BackPackItem_BP_C.Get_Image_ItemSelectFG_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBackPackItem_BP_C::Get_Image_ItemSelectFG_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackItem_BP.BackPackItem_BP_C.Get_Image_ItemSelectFG_Visibility_1");

	UBackPackItem_BP_C_Get_Image_ItemSelectFG_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BackPackItem_BP.BackPackItem_BP_C.DropAllItem
// (Public, BlueprintCallable, BlueprintEvent)

void UBackPackItem_BP_C::DropAllItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackItem_BP.BackPackItem_BP_C.DropAllItem");

	UBackPackItem_BP_C_DropAllItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackPackItem_BP.BackPackItem_BP_C.getBPIDbyDefineID
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           itemDefineID_                  (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            BPID_                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBackPackItem_BP_C::getBPIDbyDefineID(const struct FItemDefineID& itemDefineID_, int* BPID_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackItem_BP.BackPackItem_BP_C.getBPIDbyDefineID");

	UBackPackItem_BP_C_getBPIDbyDefineID_Params params;
	params.itemDefineID_ = itemDefineID_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BPID_ != nullptr)
		*BPID_ = params.BPID_;
}


// Function BackPackItem_BP.BackPackItem_BP_C.CanGunAddAttachment
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           gunID_                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FItemDefineID           attachID_                      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           opyEmpty                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           canAdd                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBackPackItem_BP_C::CanGunAddAttachment(const struct FItemDefineID& gunID_, const struct FItemDefineID& attachID_, bool opyEmpty, bool* canAdd)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackItem_BP.BackPackItem_BP_C.CanGunAddAttachment");

	UBackPackItem_BP_C_CanGunAddAttachment_Params params;
	params.gunID_ = gunID_;
	params.attachID_ = attachID_;
	params.opyEmpty = opyEmpty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canAdd != nullptr)
		*canAdd = params.canAdd;
}


// Function BackPackItem_BP.BackPackItem_BP_C.IsGun
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           defineID_                      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           isGun_                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBackPackItem_BP_C::IsGun(const struct FItemDefineID& defineID_, bool* isGun_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackItem_BP.BackPackItem_BP_C.IsGun");

	UBackPackItem_BP_C_IsGun_Params params;
	params.defineID_ = defineID_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isGun_ != nullptr)
		*isGun_ = params.isGun_;
}


// Function BackPackItem_BP.BackPackItem_BP_C.FindWeapon
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm, OutParm)

void UBackPackItem_BP_C::FindWeapon(struct FItemDefineID* DefineID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackItem_BP.BackPackItem_BP_C.FindWeapon");

	UBackPackItem_BP_C_FindWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DefineID != nullptr)
		*DefineID = params.DefineID;
}


// Function BackPackItem_BP.BackPackItem_BP_C.OnTouchEnded
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           InTouchEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBackPackItem_BP_C::OnTouchEnded(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackItem_BP.BackPackItem_BP_C.OnTouchEnded");

	UBackPackItem_BP_C_OnTouchEnded_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InTouchEvent != nullptr)
		*InTouchEvent = params.InTouchEvent;

	return params.ReturnValue;
}


// Function BackPackItem_BP.BackPackItem_BP_C.OnTouchStarted
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           InTouchEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBackPackItem_BP_C::OnTouchStarted(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackItem_BP.BackPackItem_BP_C.OnTouchStarted");

	UBackPackItem_BP_C_OnTouchStarted_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InTouchEvent != nullptr)
		*InTouchEvent = params.InTouchEvent;

	return params.ReturnValue;
}


// Function BackPackItem_BP.BackPackItem_BP_C.EquipItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBackPackItem_BP_C::EquipItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackItem_BP.BackPackItem_BP_C.EquipItem");

	UBackPackItem_BP_C_EquipItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackPackItem_BP.BackPackItem_BP_C.ResetHandleBtns
// (Public, BlueprintCallable, BlueprintEvent)

void UBackPackItem_BP_C::ResetHandleBtns()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackItem_BP.BackPackItem_BP_C.ResetHandleBtns");

	UBackPackItem_BP_C_ResetHandleBtns_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackPackItem_BP.BackPackItem_BP_C.HandleItemClick
// (Public, BlueprintCallable, BlueprintEvent)

void UBackPackItem_BP_C::HandleItemClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackItem_BP.BackPackItem_BP_C.HandleItemClick");

	UBackPackItem_BP_C_HandleItemClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackPackItem_BP.BackPackItem_BP_C.UseItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBackPackItem_BP_C::UseItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackItem_BP.BackPackItem_BP_C.UseItem");

	UBackPackItem_BP_C_UseItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackPackItem_BP.BackPackItem_BP_C.UpdateItemData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBattleItemData         ItemData                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsUseless                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBackPackItem_BP_C::UpdateItemData(const struct FBattleItemData& ItemData, bool IsUseless)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackItem_BP.BackPackItem_BP_C.UpdateItemData");

	UBackPackItem_BP_C_UpdateItemData_Params params;
	params.ItemData = ItemData;
	params.IsUseless = IsUseless;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackPackItem_BP.BackPackItem_BP_C.BndEvt__Button_Use_K2Node_ComponentBoundEvent_270_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBackPackItem_BP_C::BndEvt__Button_Use_K2Node_ComponentBoundEvent_270_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackItem_BP.BackPackItem_BP_C.BndEvt__Button_Use_K2Node_ComponentBoundEvent_270_OnButtonClickedEvent__DelegateSignature");

	UBackPackItem_BP_C_BndEvt__Button_Use_K2Node_ComponentBoundEvent_270_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackPackItem_BP.BackPackItem_BP_C.BndEvt__Button_Equip_K2Node_ComponentBoundEvent_298_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBackPackItem_BP_C::BndEvt__Button_Equip_K2Node_ComponentBoundEvent_298_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackItem_BP.BackPackItem_BP_C.BndEvt__Button_Equip_K2Node_ComponentBoundEvent_298_OnButtonClickedEvent__DelegateSignature");

	UBackPackItem_BP_C_BndEvt__Button_Equip_K2Node_ComponentBoundEvent_298_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackPackItem_BP.BackPackItem_BP_C.BndEvt__Button_ThrowPart_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBackPackItem_BP_C::BndEvt__Button_ThrowPart_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackItem_BP.BackPackItem_BP_C.BndEvt__Button_ThrowPart_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");

	UBackPackItem_BP_C_BndEvt__Button_ThrowPart_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackPackItem_BP.BackPackItem_BP_C.BndEvt__Button_Drop_K2Node_ComponentBoundEvent_76_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBackPackItem_BP_C::BndEvt__Button_Drop_K2Node_ComponentBoundEvent_76_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackItem_BP.BackPackItem_BP_C.BndEvt__Button_Drop_K2Node_ComponentBoundEvent_76_OnButtonClickedEvent__DelegateSignature");

	UBackPackItem_BP_C_BndEvt__Button_Drop_K2Node_ComponentBoundEvent_76_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackPackItem_BP.BackPackItem_BP_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBackPackItem_BP_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackItem_BP.BackPackItem_BP_C.OnMouseLeave");

	UBackPackItem_BP_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackPackItem_BP.BackPackItem_BP_C.BndEvt__Button_DropAll_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBackPackItem_BP_C::BndEvt__Button_DropAll_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackItem_BP.BackPackItem_BP_C.BndEvt__Button_DropAll_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature");

	UBackPackItem_BP_C_BndEvt__Button_DropAll_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackPackItem_BP.BackPackItem_BP_C.OnRightClicked
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FVector2D*              TempScreenPos                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBackPackItem_BP_C::OnRightClicked(struct FVector2D* TempScreenPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackItem_BP.BackPackItem_BP_C.OnRightClicked");

	UBackPackItem_BP_C_OnRightClicked_Params params;
	params.TempScreenPos = TempScreenPos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackPackItem_BP.BackPackItem_BP_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBackPackItem_BP_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackItem_BP.BackPackItem_BP_C.OnMouseEnter");

	UBackPackItem_BP_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackPackItem_BP.BackPackItem_BP_C.Custom Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsShowPrompt                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          LastTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PromptText                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          TotalTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBackPackItem_BP_C::Custom_Event_1(bool IsShowPrompt, float LastTime, const struct FString& PromptText, float TotalTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackItem_BP.BackPackItem_BP_C.Custom Event_1");

	UBackPackItem_BP_C_Custom_Event_1_Params params;
	params.IsShowPrompt = IsShowPrompt;
	params.LastTime = LastTime;
	params.PromptText = PromptText;
	params.TotalTime = TotalTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackPackItem_BP.BackPackItem_BP_C.Custom Event_2
// (BlueprintCallable, BlueprintEvent)

void UBackPackItem_BP_C::Custom_Event_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackItem_BP.BackPackItem_BP_C.Custom Event_2");

	UBackPackItem_BP_C_Custom_Event_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackPackItem_BP.BackPackItem_BP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBackPackItem_BP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackItem_BP.BackPackItem_BP_C.Construct");

	UBackPackItem_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackPackItem_BP.BackPackItem_BP_C.ReceivedInitWidget
// (Event, Public, BlueprintEvent)

void UBackPackItem_BP_C::ReceivedInitWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackItem_BP.BackPackItem_BP_C.ReceivedInitWidget");

	UBackPackItem_BP_C_ReceivedInitWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackPackItem_BP.BackPackItem_BP_C.ExecuteUbergraph_BackPackItem_BP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBackPackItem_BP_C::ExecuteUbergraph_BackPackItem_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackItem_BP.BackPackItem_BP_C.ExecuteUbergraph_BackPackItem_BP");

	UBackPackItem_BP_C_ExecuteUbergraph_BackPackItem_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackPackItem_BP.BackPackItem_BP_C.ToolTipUpdate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBackPackItem_BP_C*      ItemBp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBackPackItem_BP_C::ToolTipUpdate__DelegateSignature(class UBackPackItem_BP_C* ItemBp)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackItem_BP.BackPackItem_BP_C.ToolTipUpdate__DelegateSignature");

	UBackPackItem_BP_C_ToolTipUpdate__DelegateSignature_Params params;
	params.ItemBp = ItemBp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackPackItem_BP.BackPackItem_BP_C.ItemBeDragCancelled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBackPackItem_BP_C::ItemBeDragCancelled__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackItem_BP.BackPackItem_BP_C.ItemBeDragCancelled__DelegateSignature");

	UBackPackItem_BP_C_ItemBeDragCancelled__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackPackItem_BP.BackPackItem_BP_C.ItemBeDragBegin__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBattleItemData         ItemData                       (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<EBackPackDragOrigin> DragOrigin                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBackPackItem_BP_C::ItemBeDragBegin__DelegateSignature(const struct FBattleItemData& ItemData, TEnumAsByte<EBackPackDragOrigin> DragOrigin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackItem_BP.BackPackItem_BP_C.ItemBeDragBegin__DelegateSignature");

	UBackPackItem_BP_C_ItemBeDragBegin__DelegateSignature_Params params;
	params.ItemData = ItemData;
	params.DragOrigin = DragOrigin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackPackItem_BP.BackPackItem_BP_C.ItemBeDropped__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBattleItemData         ItemData                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsForceDrop                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBackPackItem_BP_C::ItemBeDropped__DelegateSignature(const struct FBattleItemData& ItemData, bool IsForceDrop)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackItem_BP.BackPackItem_BP_C.ItemBeDropped__DelegateSignature");

	UBackPackItem_BP_C_ItemBeDropped__DelegateSignature_Params params;
	params.ItemData = ItemData;
	params.IsForceDrop = IsForceDrop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackPackItem_BP.BackPackItem_BP_C.HandleBtnsStateChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBackPackItem_BP_C*      ItemBp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsClicked                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBackPackItem_BP_C::HandleBtnsStateChange__DelegateSignature(class UBackPackItem_BP_C* ItemBp, bool IsClicked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackItem_BP.BackPackItem_BP_C.HandleBtnsStateChange__DelegateSignature");

	UBackPackItem_BP_C_HandleBtnsStateChange__DelegateSignature_Params params;
	params.ItemBp = ItemBp;
	params.IsClicked = IsClicked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
