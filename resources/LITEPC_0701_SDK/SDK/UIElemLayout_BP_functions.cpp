
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

// Function UIElemLayout_BP.UIElemLayout_BP_C.ItemVisibleHandle
// (Public, BlueprintCallable, BlueprintEvent)

void UUIElemLayout_BP_C::ItemVisibleHandle()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIElemLayout_BP.UIElemLayout_BP_C.ItemVisibleHandle");

	UUIElemLayout_BP_C_ItemVisibleHandle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIElemLayout_BP.UIElemLayout_BP_C.GetVisibility_27
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUIElemLayout_BP_C::GetVisibility_27()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIElemLayout_BP.UIElemLayout_BP_C.GetVisibility_27");

	UUIElemLayout_BP_C_GetVisibility_27_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UIElemLayout_BP.UIElemLayout_BP_C.GetVisibility_25
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUIElemLayout_BP_C::GetVisibility_25()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIElemLayout_BP.UIElemLayout_BP_C.GetVisibility_25");

	UUIElemLayout_BP_C_GetVisibility_25_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UIElemLayout_BP.UIElemLayout_BP_C.GetVisibility_16
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUIElemLayout_BP_C::GetVisibility_16()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIElemLayout_BP.UIElemLayout_BP_C.GetVisibility_16");

	UUIElemLayout_BP_C_GetVisibility_16_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UIElemLayout_BP.UIElemLayout_BP_C.RevertDatas
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<int, struct FBP_STRUCT_UIElemLayoutDetail> DataFromeSave                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TMap<TEnumAsByte<EBP_UIENUM_UIElemTypes>, struct FBP_STRUCT_UIElemLayoutDetail> DataUsage                      (Parm, OutParm, ZeroConstructor)

void UUIElemLayout_BP_C::RevertDatas(TMap<int, struct FBP_STRUCT_UIElemLayoutDetail>* DataFromeSave, TMap<TEnumAsByte<EBP_UIENUM_UIElemTypes>, struct FBP_STRUCT_UIElemLayoutDetail>* DataUsage)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIElemLayout_BP.UIElemLayout_BP_C.RevertDatas");

	UUIElemLayout_BP_C_RevertDatas_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DataFromeSave != nullptr)
		*DataFromeSave = params.DataFromeSave;
	if (DataUsage != nullptr)
		*DataUsage = params.DataUsage;
}


// Function UIElemLayout_BP.UIElemLayout_BP_C.ConvertDatas
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<TEnumAsByte<EBP_UIENUM_UIElemTypes>, struct FBP_STRUCT_UIElemLayoutDetail> DataUsage                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TMap<int, struct FBP_STRUCT_UIElemLayoutDetail> DataToSave                     (Parm, OutParm, ZeroConstructor)

void UUIElemLayout_BP_C::ConvertDatas(TMap<TEnumAsByte<EBP_UIENUM_UIElemTypes>, struct FBP_STRUCT_UIElemLayoutDetail>* DataUsage, TMap<int, struct FBP_STRUCT_UIElemLayoutDetail>* DataToSave)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIElemLayout_BP.UIElemLayout_BP_C.ConvertDatas");

	UUIElemLayout_BP_C_ConvertDatas_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DataUsage != nullptr)
		*DataUsage = params.DataUsage;
	if (DataToSave != nullptr)
		*DataToSave = params.DataToSave;
}


// Function UIElemLayout_BP.UIElemLayout_BP_C.ApplyMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            FireMode                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUIElemLayout_BP_C::ApplyMode(int FireMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIElemLayout_BP.UIElemLayout_BP_C.ApplyMode");

	UUIElemLayout_BP_C_ApplyMode_Params params;
	params.FireMode = FireMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIElemLayout_BP.UIElemLayout_BP_C.LoadSaveData
// (Public, BlueprintCallable, BlueprintEvent)

void UUIElemLayout_BP_C::LoadSaveData()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIElemLayout_BP.UIElemLayout_BP_C.LoadSaveData");

	UUIElemLayout_BP_C_LoadSaveData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIElemLayout_BP.UIElemLayout_BP_C.ApplyWidgetSaveDataByMode
// (Public, BlueprintCallable, BlueprintEvent)

void UUIElemLayout_BP_C::ApplyWidgetSaveDataByMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIElemLayout_BP.UIElemLayout_BP_C.ApplyWidgetSaveDataByMode");

	UUIElemLayout_BP_C_ApplyWidgetSaveDataByMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIElemLayout_BP.UIElemLayout_BP_C.ChangeScaleSlideValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUIElemLayout_BP_C::ChangeScaleSlideValue(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIElemLayout_BP.UIElemLayout_BP_C.ChangeScaleSlideValue");

	UUIElemLayout_BP_C_ChangeScaleSlideValue_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIElemLayout_BP.UIElemLayout_BP_C.GetTouchDelta
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUIElemLayout_BP_C::GetTouchDelta()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIElemLayout_BP.UIElemLayout_BP_C.GetTouchDelta");

	UUIElemLayout_BP_C_GetTouchDelta_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UIElemLayout_BP.UIElemLayout_BP_C.ShowTip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   FireMode                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UUIElemLayout_BP_C::ShowTip(const struct FText& FireMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIElemLayout_BP.UIElemLayout_BP_C.ShowTip");

	UUIElemLayout_BP_C_ShowTip_Params params;
	params.FireMode = FireMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIElemLayout_BP.UIElemLayout_BP_C.SetModePanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            FireMode                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUIElemLayout_BP_C::SetModePanel(int FireMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIElemLayout_BP.UIElemLayout_BP_C.SetModePanel");

	UUIElemLayout_BP_C_SetModePanel_Params params;
	params.FireMode = FireMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIElemLayout_BP.UIElemLayout_BP_C.CalcLimitPos
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUIElemLayout_BP_C::CalcLimitPos()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIElemLayout_BP.UIElemLayout_BP_C.CalcLimitPos");

	UUIElemLayout_BP_C_CalcLimitPos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIElemLayout_BP.UIElemLayout_BP_C.SaveData
// (Public, BlueprintCallable, BlueprintEvent)

void UUIElemLayout_BP_C::SaveData()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIElemLayout_BP.UIElemLayout_BP_C.SaveData");

	UUIElemLayout_BP_C_SaveData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIElemLayout_BP.UIElemLayout_BP_C.SelectItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EBP_UIENUM_UIElemTypes> ItemType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 ItemWidget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUIElemLayout_BP_C::SelectItem(TEnumAsByte<EBP_UIENUM_UIElemTypes> ItemType, class UWidget* ItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIElemLayout_BP.UIElemLayout_BP_C.SelectItem");

	UUIElemLayout_BP_C_SelectItem_Params params;
	params.ItemType = ItemType;
	params.ItemWidget = ItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIElemLayout_BP.UIElemLayout_BP_C.OnTouchEnded
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           InTouchEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUIElemLayout_BP_C::OnTouchEnded(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIElemLayout_BP.UIElemLayout_BP_C.OnTouchEnded");

	UUIElemLayout_BP_C_OnTouchEnded_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InTouchEvent != nullptr)
		*InTouchEvent = params.InTouchEvent;

	return params.ReturnValue;
}


// Function UIElemLayout_BP.UIElemLayout_BP_C.HideSelf
// (Public, BlueprintCallable, BlueprintEvent)

void UUIElemLayout_BP_C::HideSelf()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIElemLayout_BP.UIElemLayout_BP_C.HideSelf");

	UUIElemLayout_BP_C_HideSelf_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIElemLayout_BP.UIElemLayout_BP_C.ApplyWidgetDataDict
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<TEnumAsByte<EBP_UIENUM_UIElemTypes>, struct FBP_STRUCT_UIElemLayoutDetail> DataDict                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UUIElemLayout_BP_C::ApplyWidgetDataDict(TMap<TEnumAsByte<EBP_UIENUM_UIElemTypes>, struct FBP_STRUCT_UIElemLayoutDetail> DataDict)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIElemLayout_BP.UIElemLayout_BP_C.ApplyWidgetDataDict");

	UUIElemLayout_BP_C_ApplyWidgetDataDict_Params params;
	params.DataDict = DataDict;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIElemLayout_BP.UIElemLayout_BP_C.ShowSelf
// (Public, BlueprintCallable, BlueprintEvent)

void UUIElemLayout_BP_C::ShowSelf()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIElemLayout_BP.UIElemLayout_BP_C.ShowSelf");

	UUIElemLayout_BP_C_ShowSelf_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIElemLayout_BP.UIElemLayout_BP_C.MoveWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               MoveDelta                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UUIElemLayout_BP_C::MoveWidget(const struct FVector2D& MoveDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIElemLayout_BP.UIElemLayout_BP_C.MoveWidget");

	UUIElemLayout_BP_C_MoveWidget_Params params;
	params.MoveDelta = MoveDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIElemLayout_BP.UIElemLayout_BP_C.SliderToWidget_Opacity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          SliderOpacity                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          WidgetOpacity                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUIElemLayout_BP_C::SliderToWidget_Opacity(float SliderOpacity, float* WidgetOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIElemLayout_BP.UIElemLayout_BP_C.SliderToWidget_Opacity");

	UUIElemLayout_BP_C_SliderToWidget_Opacity_Params params;
	params.SliderOpacity = SliderOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WidgetOpacity != nullptr)
		*WidgetOpacity = params.WidgetOpacity;
}


// Function UIElemLayout_BP.UIElemLayout_BP_C.SliderToWidget_Scale
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          SliderScale                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               WidgetScale                    (Parm, OutParm, IsPlainOldData)

void UUIElemLayout_BP_C::SliderToWidget_Scale(float SliderScale, struct FVector2D* WidgetScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIElemLayout_BP.UIElemLayout_BP_C.SliderToWidget_Scale");

	UUIElemLayout_BP_C_SliderToWidget_Scale_Params params;
	params.SliderScale = SliderScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WidgetScale != nullptr)
		*WidgetScale = params.WidgetScale;
}


// Function UIElemLayout_BP.UIElemLayout_BP_C.WidgetToSlider
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               WidgetScale                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          WidgetOpacity                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          SliderScale                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          SliderOpacity                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUIElemLayout_BP_C::WidgetToSlider(const struct FVector2D& WidgetScale, float WidgetOpacity, float* SliderScale, float* SliderOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIElemLayout_BP.UIElemLayout_BP_C.WidgetToSlider");

	UUIElemLayout_BP_C_WidgetToSlider_Params params;
	params.WidgetScale = WidgetScale;
	params.WidgetOpacity = WidgetOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SliderScale != nullptr)
		*SliderScale = params.SliderScale;
	if (SliderOpacity != nullptr)
		*SliderOpacity = params.SliderOpacity;
}


// Function UIElemLayout_BP.UIElemLayout_BP_C.RefreshSettingPanelData
// (Public, BlueprintCallable, BlueprintEvent)

void UUIElemLayout_BP_C::RefreshSettingPanelData()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIElemLayout_BP.UIElemLayout_BP_C.RefreshSettingPanelData");

	UUIElemLayout_BP_C_RefreshSettingPanelData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIElemLayout_BP.UIElemLayout_BP_C.Get_ProgressBar_Opacity_Percent_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUIElemLayout_BP_C::Get_ProgressBar_Opacity_Percent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIElemLayout_BP.UIElemLayout_BP_C.Get_ProgressBar_Opacity_Percent_1");

	UUIElemLayout_BP_C_Get_ProgressBar_Opacity_Percent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UIElemLayout_BP.UIElemLayout_BP_C.Get_ProgressBar_Scale_Percent_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUIElemLayout_BP_C::Get_ProgressBar_Scale_Percent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIElemLayout_BP.UIElemLayout_BP_C.Get_ProgressBar_Scale_Percent_1");

	UUIElemLayout_BP_C_Get_ProgressBar_Scale_Percent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UIElemLayout_BP.UIElemLayout_BP_C.OnTouchMoved
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           InTouchEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUIElemLayout_BP_C::OnTouchMoved(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIElemLayout_BP.UIElemLayout_BP_C.OnTouchMoved");

	UUIElemLayout_BP_C_OnTouchMoved_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InTouchEvent != nullptr)
		*InTouchEvent = params.InTouchEvent;

	return params.ReturnValue;
}


// Function UIElemLayout_BP.UIElemLayout_BP_C.IsPositionInBorder
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Pos                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsIn                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUIElemLayout_BP_C::IsPositionInBorder(const struct FVector2D& Pos, class UWidget* Widget, bool* IsIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIElemLayout_BP.UIElemLayout_BP_C.IsPositionInBorder");

	UUIElemLayout_BP_C_IsPositionInBorder_Params params;
	params.Pos = Pos;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsIn != nullptr)
		*IsIn = params.IsIn;
}


// Function UIElemLayout_BP.UIElemLayout_BP_C.CheckTouchedItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Coordinate                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           IsSelect                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EBP_UIENUM_UIElemTypes> ItemType                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 ItemWidget                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUIElemLayout_BP_C::CheckTouchedItem(const struct FVector2D& Coordinate, bool* IsSelect, TEnumAsByte<EBP_UIENUM_UIElemTypes>* ItemType, class UWidget** ItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIElemLayout_BP.UIElemLayout_BP_C.CheckTouchedItem");

	UUIElemLayout_BP_C_CheckTouchedItem_Params params;
	params.Coordinate = Coordinate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSelect != nullptr)
		*IsSelect = params.IsSelect;
	if (ItemType != nullptr)
		*ItemType = params.ItemType;
	if (ItemWidget != nullptr)
		*ItemWidget = params.ItemWidget;
}


// Function UIElemLayout_BP.UIElemLayout_BP_C.OnTouchStarted
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           InTouchEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUIElemLayout_BP_C::OnTouchStarted(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIElemLayout_BP.UIElemLayout_BP_C.OnTouchStarted");

	UUIElemLayout_BP_C_OnTouchStarted_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InTouchEvent != nullptr)
		*InTouchEvent = params.InTouchEvent;

	return params.ReturnValue;
}


// Function UIElemLayout_BP.UIElemLayout_BP_C.ApplyWidgetData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EBP_UIENUM_UIElemTypes> WidgetType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBP_STRUCT_UIElemLayoutDetail DetailData                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UUIElemLayout_BP_C::ApplyWidgetData(TEnumAsByte<EBP_UIENUM_UIElemTypes> WidgetType, class UWidget* Widget, const struct FBP_STRUCT_UIElemLayoutDetail& DetailData)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIElemLayout_BP.UIElemLayout_BP_C.ApplyWidgetData");

	UUIElemLayout_BP_C_ApplyWidgetData_Params params;
	params.WidgetType = WidgetType;
	params.Widget = Widget;
	params.DetailData = DetailData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIElemLayout_BP.UIElemLayout_BP_C.GetWidgetsDataDict
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<TEnumAsByte<EBP_UIENUM_UIElemTypes>, struct FBP_STRUCT_UIElemLayoutDetail> OutDataDict                    (Parm, OutParm, ZeroConstructor)

void UUIElemLayout_BP_C::GetWidgetsDataDict(TMap<TEnumAsByte<EBP_UIENUM_UIElemTypes>, struct FBP_STRUCT_UIElemLayoutDetail>* OutDataDict)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIElemLayout_BP.UIElemLayout_BP_C.GetWidgetsDataDict");

	UUIElemLayout_BP_C_GetWidgetsDataDict_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutDataDict != nullptr)
		*OutDataDict = params.OutDataDict;
}


// Function UIElemLayout_BP.UIElemLayout_BP_C.GetWidgetData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EBP_UIENUM_UIElemTypes> Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBP_STRUCT_UIElemLayoutDetail LayoutDetailData               (Parm, OutParm)

void UUIElemLayout_BP_C::GetWidgetData(TEnumAsByte<EBP_UIENUM_UIElemTypes> Type, class UWidget* Widget, struct FBP_STRUCT_UIElemLayoutDetail* LayoutDetailData)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIElemLayout_BP.UIElemLayout_BP_C.GetWidgetData");

	UUIElemLayout_BP_C_GetWidgetData_Params params;
	params.Type = Type;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LayoutDetailData != nullptr)
		*LayoutDetailData = params.LayoutDetailData;
}


// Function UIElemLayout_BP.UIElemLayout_BP_C.AddAllWidgetToDefaultDict
// (Public, BlueprintCallable, BlueprintEvent)

void UUIElemLayout_BP_C::AddAllWidgetToDefaultDict()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIElemLayout_BP.UIElemLayout_BP_C.AddAllWidgetToDefaultDict");

	UUIElemLayout_BP_C_AddAllWidgetToDefaultDict_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIElemLayout_BP.UIElemLayout_BP_C.InitElem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUIElemLayout_BP_C::InitElem()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIElemLayout_BP.UIElemLayout_BP_C.InitElem");

	UUIElemLayout_BP_C_InitElem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIElemLayout_BP.UIElemLayout_BP_C.OnDelayQuit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DelaySec                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUIElemLayout_BP_C::OnDelayQuit(float DelaySec)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIElemLayout_BP.UIElemLayout_BP_C.OnDelayQuit");

	UUIElemLayout_BP_C_OnDelayQuit_Params params;
	params.DelaySec = DelaySec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIElemLayout_BP.UIElemLayout_BP_C.BndEvt__Slider_Scale_K2Node_ComponentBoundEvent_109_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUIElemLayout_BP_C::BndEvt__Slider_Scale_K2Node_ComponentBoundEvent_109_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIElemLayout_BP.UIElemLayout_BP_C.BndEvt__Slider_Scale_K2Node_ComponentBoundEvent_109_OnFloatValueChangedEvent__DelegateSignature");

	UUIElemLayout_BP_C_BndEvt__Slider_Scale_K2Node_ComponentBoundEvent_109_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIElemLayout_BP.UIElemLayout_BP_C.BndEvt__Slider_Opacity_K2Node_ComponentBoundEvent_126_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUIElemLayout_BP_C::BndEvt__Slider_Opacity_K2Node_ComponentBoundEvent_126_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIElemLayout_BP.UIElemLayout_BP_C.BndEvt__Slider_Opacity_K2Node_ComponentBoundEvent_126_OnFloatValueChangedEvent__DelegateSignature");

	UUIElemLayout_BP_C_BndEvt__Slider_Opacity_K2Node_ComponentBoundEvent_126_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIElemLayout_BP.UIElemLayout_BP_C.BndEvt__Button_Save_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUIElemLayout_BP_C::BndEvt__Button_Save_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIElemLayout_BP.UIElemLayout_BP_C.BndEvt__Button_Save_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature");

	UUIElemLayout_BP_C_BndEvt__Button_Save_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIElemLayout_BP.UIElemLayout_BP_C.BndEvt__Button_Reset_K2Node_ComponentBoundEvent_79_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUIElemLayout_BP_C::BndEvt__Button_Reset_K2Node_ComponentBoundEvent_79_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIElemLayout_BP.UIElemLayout_BP_C.BndEvt__Button_Reset_K2Node_ComponentBoundEvent_79_OnButtonClickedEvent__DelegateSignature");

	UUIElemLayout_BP_C_BndEvt__Button_Reset_K2Node_ComponentBoundEvent_79_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIElemLayout_BP.UIElemLayout_BP_C.BndEvt__Button_Exist_K2Node_ComponentBoundEvent_99_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUIElemLayout_BP_C::BndEvt__Button_Exist_K2Node_ComponentBoundEvent_99_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIElemLayout_BP.UIElemLayout_BP_C.BndEvt__Button_Exist_K2Node_ComponentBoundEvent_99_OnButtonClickedEvent__DelegateSignature");

	UUIElemLayout_BP_C_BndEvt__Button_Exist_K2Node_ComponentBoundEvent_99_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIElemLayout_BP.UIElemLayout_BP_C.BndEvt__Button_MoveLeft_K2Node_ComponentBoundEvent_383_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUIElemLayout_BP_C::BndEvt__Button_MoveLeft_K2Node_ComponentBoundEvent_383_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIElemLayout_BP.UIElemLayout_BP_C.BndEvt__Button_MoveLeft_K2Node_ComponentBoundEvent_383_OnButtonClickedEvent__DelegateSignature");

	UUIElemLayout_BP_C_BndEvt__Button_MoveLeft_K2Node_ComponentBoundEvent_383_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIElemLayout_BP.UIElemLayout_BP_C.BndEvt__Button_MoveRight_K2Node_ComponentBoundEvent_405_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUIElemLayout_BP_C::BndEvt__Button_MoveRight_K2Node_ComponentBoundEvent_405_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIElemLayout_BP.UIElemLayout_BP_C.BndEvt__Button_MoveRight_K2Node_ComponentBoundEvent_405_OnButtonClickedEvent__DelegateSignature");

	UUIElemLayout_BP_C_BndEvt__Button_MoveRight_K2Node_ComponentBoundEvent_405_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIElemLayout_BP.UIElemLayout_BP_C.BndEvt__Button_MoveUp_K2Node_ComponentBoundEvent_428_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUIElemLayout_BP_C::BndEvt__Button_MoveUp_K2Node_ComponentBoundEvent_428_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIElemLayout_BP.UIElemLayout_BP_C.BndEvt__Button_MoveUp_K2Node_ComponentBoundEvent_428_OnButtonClickedEvent__DelegateSignature");

	UUIElemLayout_BP_C_BndEvt__Button_MoveUp_K2Node_ComponentBoundEvent_428_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIElemLayout_BP.UIElemLayout_BP_C.BndEvt__Button_MoveDown_K2Node_ComponentBoundEvent_452_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUIElemLayout_BP_C::BndEvt__Button_MoveDown_K2Node_ComponentBoundEvent_452_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIElemLayout_BP.UIElemLayout_BP_C.BndEvt__Button_MoveDown_K2Node_ComponentBoundEvent_452_OnButtonClickedEvent__DelegateSignature");

	UUIElemLayout_BP_C_BndEvt__Button_MoveDown_K2Node_ComponentBoundEvent_452_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIElemLayout_BP.UIElemLayout_BP_C.OnSaveDataPostEvent
// (BlueprintCallable, BlueprintEvent)

void UUIElemLayout_BP_C::OnSaveDataPostEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIElemLayout_BP.UIElemLayout_BP_C.OnSaveDataPostEvent");

	UUIElemLayout_BP_C_OnSaveDataPostEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIElemLayout_BP.UIElemLayout_BP_C.BndEvt__Button_OK_K2Node_ComponentBoundEvent_232_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUIElemLayout_BP_C::BndEvt__Button_OK_K2Node_ComponentBoundEvent_232_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIElemLayout_BP.UIElemLayout_BP_C.BndEvt__Button_OK_K2Node_ComponentBoundEvent_232_OnButtonClickedEvent__DelegateSignature");

	UUIElemLayout_BP_C_BndEvt__Button_OK_K2Node_ComponentBoundEvent_232_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIElemLayout_BP.UIElemLayout_BP_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_249_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUIElemLayout_BP_C::BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_249_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIElemLayout_BP.UIElemLayout_BP_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_249_OnButtonClickedEvent__DelegateSignature");

	UUIElemLayout_BP_C_BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_249_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIElemLayout_BP.UIElemLayout_BP_C.BndEvt__CheckBox_Mode1_K2Node_ComponentBoundEvent_299_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUIElemLayout_BP_C::BndEvt__CheckBox_Mode1_K2Node_ComponentBoundEvent_299_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIElemLayout_BP.UIElemLayout_BP_C.BndEvt__CheckBox_Mode1_K2Node_ComponentBoundEvent_299_OnCheckBoxComponentStateChanged__DelegateSignature");

	UUIElemLayout_BP_C_BndEvt__CheckBox_Mode1_K2Node_ComponentBoundEvent_299_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIElemLayout_BP.UIElemLayout_BP_C.BndEvt__CheckBox_Mode2_K2Node_ComponentBoundEvent_358_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUIElemLayout_BP_C::BndEvt__CheckBox_Mode2_K2Node_ComponentBoundEvent_358_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIElemLayout_BP.UIElemLayout_BP_C.BndEvt__CheckBox_Mode2_K2Node_ComponentBoundEvent_358_OnCheckBoxComponentStateChanged__DelegateSignature");

	UUIElemLayout_BP_C_BndEvt__CheckBox_Mode2_K2Node_ComponentBoundEvent_358_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIElemLayout_BP.UIElemLayout_BP_C.BndEvt__CheckBox_Mode3_K2Node_ComponentBoundEvent_359_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUIElemLayout_BP_C::BndEvt__CheckBox_Mode3_K2Node_ComponentBoundEvent_359_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIElemLayout_BP.UIElemLayout_BP_C.BndEvt__CheckBox_Mode3_K2Node_ComponentBoundEvent_359_OnCheckBoxComponentStateChanged__DelegateSignature");

	UUIElemLayout_BP_C_BndEvt__CheckBox_Mode3_K2Node_ComponentBoundEvent_359_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIElemLayout_BP.UIElemLayout_BP_C.BndEvt__Button_SwithNoSave_K2Node_ComponentBoundEvent_1133_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUIElemLayout_BP_C::BndEvt__Button_SwithNoSave_K2Node_ComponentBoundEvent_1133_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIElemLayout_BP.UIElemLayout_BP_C.BndEvt__Button_SwithNoSave_K2Node_ComponentBoundEvent_1133_OnButtonClickedEvent__DelegateSignature");

	UUIElemLayout_BP_C_BndEvt__Button_SwithNoSave_K2Node_ComponentBoundEvent_1133_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIElemLayout_BP.UIElemLayout_BP_C.BndEvt__Button_SwitchWithSave_K2Node_ComponentBoundEvent_1164_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUIElemLayout_BP_C::BndEvt__Button_SwitchWithSave_K2Node_ComponentBoundEvent_1164_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIElemLayout_BP.UIElemLayout_BP_C.BndEvt__Button_SwitchWithSave_K2Node_ComponentBoundEvent_1164_OnButtonClickedEvent__DelegateSignature");

	UUIElemLayout_BP_C_BndEvt__Button_SwitchWithSave_K2Node_ComponentBoundEvent_1164_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIElemLayout_BP.UIElemLayout_BP_C.OnShowTipEvent
// (BlueprintCallable, BlueprintEvent)

void UUIElemLayout_BP_C::OnShowTipEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIElemLayout_BP.UIElemLayout_BP_C.OnShowTipEvent");

	UUIElemLayout_BP_C_OnShowTipEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIElemLayout_BP.UIElemLayout_BP_C.BndEvt__Button_Quit_K2Node_ComponentBoundEvent_353_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUIElemLayout_BP_C::BndEvt__Button_Quit_K2Node_ComponentBoundEvent_353_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIElemLayout_BP.UIElemLayout_BP_C.BndEvt__Button_Quit_K2Node_ComponentBoundEvent_353_OnButtonClickedEvent__DelegateSignature");

	UUIElemLayout_BP_C_BndEvt__Button_Quit_K2Node_ComponentBoundEvent_353_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIElemLayout_BP.UIElemLayout_BP_C.BndEvt__Slider_Scale_K2Node_ComponentBoundEvent_70_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void UUIElemLayout_BP_C::BndEvt__Slider_Scale_K2Node_ComponentBoundEvent_70_OnMouseCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIElemLayout_BP.UIElemLayout_BP_C.BndEvt__Slider_Scale_K2Node_ComponentBoundEvent_70_OnMouseCaptureEndEvent__DelegateSignature");

	UUIElemLayout_BP_C_BndEvt__Slider_Scale_K2Node_ComponentBoundEvent_70_OnMouseCaptureEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIElemLayout_BP.UIElemLayout_BP_C.ExecuteUbergraph_UIElemLayout_BP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUIElemLayout_BP_C::ExecuteUbergraph_UIElemLayout_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIElemLayout_BP.UIElemLayout_BP_C.ExecuteUbergraph_UIElemLayout_BP");

	UUIElemLayout_BP_C_ExecuteUbergraph_UIElemLayout_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIElemLayout_BP.UIElemLayout_BP_C.OnUIElemHide__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUIElemLayout_BP_C::OnUIElemHide__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIElemLayout_BP.UIElemLayout_BP_C.OnUIElemHide__DelegateSignature");

	UUIElemLayout_BP_C_OnUIElemHide__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
