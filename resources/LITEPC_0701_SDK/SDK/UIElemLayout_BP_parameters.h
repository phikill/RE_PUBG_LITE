#pragma once

#include "../SDK.h"

// Name: LitePC_0701, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function UIElemLayout_BP.UIElemLayout_BP_C.ItemVisibleHandle
struct UUIElemLayout_BP_C_ItemVisibleHandle_Params
{
};

// Function UIElemLayout_BP.UIElemLayout_BP_C.GetVisibility_27
struct UUIElemLayout_BP_C_GetVisibility_27_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UIElemLayout_BP.UIElemLayout_BP_C.GetVisibility_25
struct UUIElemLayout_BP_C_GetVisibility_25_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UIElemLayout_BP.UIElemLayout_BP_C.GetVisibility_16
struct UUIElemLayout_BP_C_GetVisibility_16_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UIElemLayout_BP.UIElemLayout_BP_C.RevertDatas
struct UUIElemLayout_BP_C_RevertDatas_Params
{
	TMap<int, struct FBP_STRUCT_UIElemLayoutDetail>    DataFromeSave;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TMap<TEnumAsByte<EBP_UIENUM_UIElemTypes>, struct FBP_STRUCT_UIElemLayoutDetail> DataUsage;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function UIElemLayout_BP.UIElemLayout_BP_C.ConvertDatas
struct UUIElemLayout_BP_C_ConvertDatas_Params
{
	TMap<TEnumAsByte<EBP_UIENUM_UIElemTypes>, struct FBP_STRUCT_UIElemLayoutDetail> DataUsage;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TMap<int, struct FBP_STRUCT_UIElemLayoutDetail>    DataToSave;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function UIElemLayout_BP.UIElemLayout_BP_C.ApplyMode
struct UUIElemLayout_BP_C_ApplyMode_Params
{
	int                                                FireMode;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UIElemLayout_BP.UIElemLayout_BP_C.LoadSaveData
struct UUIElemLayout_BP_C_LoadSaveData_Params
{
};

// Function UIElemLayout_BP.UIElemLayout_BP_C.ApplyWidgetSaveDataByMode
struct UUIElemLayout_BP_C_ApplyWidgetSaveDataByMode_Params
{
};

// Function UIElemLayout_BP.UIElemLayout_BP_C.ChangeScaleSlideValue
struct UUIElemLayout_BP_C_ChangeScaleSlideValue_Params
{
	float                                              Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UIElemLayout_BP.UIElemLayout_BP_C.GetTouchDelta
struct UUIElemLayout_BP_C_GetTouchDelta_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UIElemLayout_BP.UIElemLayout_BP_C.ShowTip
struct UUIElemLayout_BP_C_ShowTip_Params
{
	struct FText                                       FireMode;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UIElemLayout_BP.UIElemLayout_BP_C.SetModePanel
struct UUIElemLayout_BP_C_SetModePanel_Params
{
	int                                                FireMode;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UIElemLayout_BP.UIElemLayout_BP_C.CalcLimitPos
struct UUIElemLayout_BP_C_CalcLimitPos_Params
{
};

// Function UIElemLayout_BP.UIElemLayout_BP_C.SaveData
struct UUIElemLayout_BP_C_SaveData_Params
{
};

// Function UIElemLayout_BP.UIElemLayout_BP_C.SelectItem
struct UUIElemLayout_BP_C_SelectItem_Params
{
	TEnumAsByte<EBP_UIENUM_UIElemTypes>                ItemType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     ItemWidget;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UIElemLayout_BP.UIElemLayout_BP_C.OnTouchEnded
struct UUIElemLayout_BP_C_OnTouchEnded_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               InTouchEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UIElemLayout_BP.UIElemLayout_BP_C.HideSelf
struct UUIElemLayout_BP_C_HideSelf_Params
{
};

// Function UIElemLayout_BP.UIElemLayout_BP_C.ApplyWidgetDataDict
struct UUIElemLayout_BP_C_ApplyWidgetDataDict_Params
{
	TMap<TEnumAsByte<EBP_UIENUM_UIElemTypes>, struct FBP_STRUCT_UIElemLayoutDetail> DataDict;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function UIElemLayout_BP.UIElemLayout_BP_C.ShowSelf
struct UUIElemLayout_BP_C_ShowSelf_Params
{
};

// Function UIElemLayout_BP.UIElemLayout_BP_C.MoveWidget
struct UUIElemLayout_BP_C_MoveWidget_Params
{
	struct FVector2D                                   MoveDelta;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function UIElemLayout_BP.UIElemLayout_BP_C.SliderToWidget_Opacity
struct UUIElemLayout_BP_C_SliderToWidget_Opacity_Params
{
	float                                              SliderOpacity;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              WidgetOpacity;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UIElemLayout_BP.UIElemLayout_BP_C.SliderToWidget_Scale
struct UUIElemLayout_BP_C_SliderToWidget_Scale_Params
{
	float                                              SliderScale;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   WidgetScale;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function UIElemLayout_BP.UIElemLayout_BP_C.WidgetToSlider
struct UUIElemLayout_BP_C_WidgetToSlider_Params
{
	struct FVector2D                                   WidgetScale;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              WidgetOpacity;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              SliderScale;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              SliderOpacity;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UIElemLayout_BP.UIElemLayout_BP_C.RefreshSettingPanelData
struct UUIElemLayout_BP_C_RefreshSettingPanelData_Params
{
};

// Function UIElemLayout_BP.UIElemLayout_BP_C.Get_ProgressBar_Opacity_Percent_1
struct UUIElemLayout_BP_C_Get_ProgressBar_Opacity_Percent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UIElemLayout_BP.UIElemLayout_BP_C.Get_ProgressBar_Scale_Percent_1
struct UUIElemLayout_BP_C_Get_ProgressBar_Scale_Percent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UIElemLayout_BP.UIElemLayout_BP_C.OnTouchMoved
struct UUIElemLayout_BP_C_OnTouchMoved_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               InTouchEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UIElemLayout_BP.UIElemLayout_BP_C.IsPositionInBorder
struct UUIElemLayout_BP_C_IsPositionInBorder_Params
{
	struct FVector2D                                   Pos;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsIn;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UIElemLayout_BP.UIElemLayout_BP_C.CheckTouchedItem
struct UUIElemLayout_BP_C_CheckTouchedItem_Params
{
	struct FVector2D                                   Coordinate;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               IsSelect;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBP_UIENUM_UIElemTypes>                ItemType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     ItemWidget;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UIElemLayout_BP.UIElemLayout_BP_C.OnTouchStarted
struct UUIElemLayout_BP_C_OnTouchStarted_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               InTouchEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UIElemLayout_BP.UIElemLayout_BP_C.ApplyWidgetData
struct UUIElemLayout_BP_C_ApplyWidgetData_Params
{
	TEnumAsByte<EBP_UIENUM_UIElemTypes>                WidgetType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_UIElemLayoutDetail               DetailData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UIElemLayout_BP.UIElemLayout_BP_C.GetWidgetsDataDict
struct UUIElemLayout_BP_C_GetWidgetsDataDict_Params
{
	TMap<TEnumAsByte<EBP_UIENUM_UIElemTypes>, struct FBP_STRUCT_UIElemLayoutDetail> OutDataDict;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function UIElemLayout_BP.UIElemLayout_BP_C.GetWidgetData
struct UUIElemLayout_BP_C_GetWidgetData_Params
{
	TEnumAsByte<EBP_UIENUM_UIElemTypes>                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_UIElemLayoutDetail               LayoutDetailData;                                         // (Parm, OutParm)
};

// Function UIElemLayout_BP.UIElemLayout_BP_C.AddAllWidgetToDefaultDict
struct UUIElemLayout_BP_C_AddAllWidgetToDefaultDict_Params
{
};

// Function UIElemLayout_BP.UIElemLayout_BP_C.InitElem
struct UUIElemLayout_BP_C_InitElem_Params
{
};

// Function UIElemLayout_BP.UIElemLayout_BP_C.OnDelayQuit
struct UUIElemLayout_BP_C_OnDelayQuit_Params
{
	float                                              DelaySec;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UIElemLayout_BP.UIElemLayout_BP_C.BndEvt__Slider_Scale_K2Node_ComponentBoundEvent_109_OnFloatValueChangedEvent__DelegateSignature
struct UUIElemLayout_BP_C_BndEvt__Slider_Scale_K2Node_ComponentBoundEvent_109_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UIElemLayout_BP.UIElemLayout_BP_C.BndEvt__Slider_Opacity_K2Node_ComponentBoundEvent_126_OnFloatValueChangedEvent__DelegateSignature
struct UUIElemLayout_BP_C_BndEvt__Slider_Opacity_K2Node_ComponentBoundEvent_126_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UIElemLayout_BP.UIElemLayout_BP_C.BndEvt__Button_Save_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature
struct UUIElemLayout_BP_C_BndEvt__Button_Save_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UIElemLayout_BP.UIElemLayout_BP_C.BndEvt__Button_Reset_K2Node_ComponentBoundEvent_79_OnButtonClickedEvent__DelegateSignature
struct UUIElemLayout_BP_C_BndEvt__Button_Reset_K2Node_ComponentBoundEvent_79_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UIElemLayout_BP.UIElemLayout_BP_C.BndEvt__Button_Exist_K2Node_ComponentBoundEvent_99_OnButtonClickedEvent__DelegateSignature
struct UUIElemLayout_BP_C_BndEvt__Button_Exist_K2Node_ComponentBoundEvent_99_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UIElemLayout_BP.UIElemLayout_BP_C.BndEvt__Button_MoveLeft_K2Node_ComponentBoundEvent_383_OnButtonClickedEvent__DelegateSignature
struct UUIElemLayout_BP_C_BndEvt__Button_MoveLeft_K2Node_ComponentBoundEvent_383_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UIElemLayout_BP.UIElemLayout_BP_C.BndEvt__Button_MoveRight_K2Node_ComponentBoundEvent_405_OnButtonClickedEvent__DelegateSignature
struct UUIElemLayout_BP_C_BndEvt__Button_MoveRight_K2Node_ComponentBoundEvent_405_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UIElemLayout_BP.UIElemLayout_BP_C.BndEvt__Button_MoveUp_K2Node_ComponentBoundEvent_428_OnButtonClickedEvent__DelegateSignature
struct UUIElemLayout_BP_C_BndEvt__Button_MoveUp_K2Node_ComponentBoundEvent_428_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UIElemLayout_BP.UIElemLayout_BP_C.BndEvt__Button_MoveDown_K2Node_ComponentBoundEvent_452_OnButtonClickedEvent__DelegateSignature
struct UUIElemLayout_BP_C_BndEvt__Button_MoveDown_K2Node_ComponentBoundEvent_452_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UIElemLayout_BP.UIElemLayout_BP_C.OnSaveDataPostEvent
struct UUIElemLayout_BP_C_OnSaveDataPostEvent_Params
{
};

// Function UIElemLayout_BP.UIElemLayout_BP_C.BndEvt__Button_OK_K2Node_ComponentBoundEvent_232_OnButtonClickedEvent__DelegateSignature
struct UUIElemLayout_BP_C_BndEvt__Button_OK_K2Node_ComponentBoundEvent_232_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UIElemLayout_BP.UIElemLayout_BP_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_249_OnButtonClickedEvent__DelegateSignature
struct UUIElemLayout_BP_C_BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_249_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UIElemLayout_BP.UIElemLayout_BP_C.BndEvt__CheckBox_Mode1_K2Node_ComponentBoundEvent_299_OnCheckBoxComponentStateChanged__DelegateSignature
struct UUIElemLayout_BP_C_BndEvt__CheckBox_Mode1_K2Node_ComponentBoundEvent_299_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UIElemLayout_BP.UIElemLayout_BP_C.BndEvt__CheckBox_Mode2_K2Node_ComponentBoundEvent_358_OnCheckBoxComponentStateChanged__DelegateSignature
struct UUIElemLayout_BP_C_BndEvt__CheckBox_Mode2_K2Node_ComponentBoundEvent_358_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UIElemLayout_BP.UIElemLayout_BP_C.BndEvt__CheckBox_Mode3_K2Node_ComponentBoundEvent_359_OnCheckBoxComponentStateChanged__DelegateSignature
struct UUIElemLayout_BP_C_BndEvt__CheckBox_Mode3_K2Node_ComponentBoundEvent_359_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UIElemLayout_BP.UIElemLayout_BP_C.BndEvt__Button_SwithNoSave_K2Node_ComponentBoundEvent_1133_OnButtonClickedEvent__DelegateSignature
struct UUIElemLayout_BP_C_BndEvt__Button_SwithNoSave_K2Node_ComponentBoundEvent_1133_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UIElemLayout_BP.UIElemLayout_BP_C.BndEvt__Button_SwitchWithSave_K2Node_ComponentBoundEvent_1164_OnButtonClickedEvent__DelegateSignature
struct UUIElemLayout_BP_C_BndEvt__Button_SwitchWithSave_K2Node_ComponentBoundEvent_1164_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UIElemLayout_BP.UIElemLayout_BP_C.OnShowTipEvent
struct UUIElemLayout_BP_C_OnShowTipEvent_Params
{
};

// Function UIElemLayout_BP.UIElemLayout_BP_C.BndEvt__Button_Quit_K2Node_ComponentBoundEvent_353_OnButtonClickedEvent__DelegateSignature
struct UUIElemLayout_BP_C_BndEvt__Button_Quit_K2Node_ComponentBoundEvent_353_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UIElemLayout_BP.UIElemLayout_BP_C.BndEvt__Slider_Scale_K2Node_ComponentBoundEvent_70_OnMouseCaptureEndEvent__DelegateSignature
struct UUIElemLayout_BP_C_BndEvt__Slider_Scale_K2Node_ComponentBoundEvent_70_OnMouseCaptureEndEvent__DelegateSignature_Params
{
};

// Function UIElemLayout_BP.UIElemLayout_BP_C.ExecuteUbergraph_UIElemLayout_BP
struct UUIElemLayout_BP_C_ExecuteUbergraph_UIElemLayout_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UIElemLayout_BP.UIElemLayout_BP_C.OnUIElemHide__DelegateSignature
struct UUIElemLayout_BP_C_OnUIElemHide__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
