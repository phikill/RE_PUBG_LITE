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

// Function SwitchWeaponSlot.SwitchWeaponSlot_C.SetFireModeText
struct USwitchWeaponSlot_C_SetFireModeText_Params
{
};

// Function SwitchWeaponSlot.SwitchWeaponSlot_C.CanShowFireModeSwitchBtn
struct USwitchWeaponSlot_C_CanShowFireModeSwitchBtn_Params
{
	class ASTExtraShootWeapon*                         Weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanSwitch;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SwitchWeaponSlot.SwitchWeaponSlot_C.GetNextFireMode
struct USwitchWeaponSlot_C_GetNextFireMode_Params
{
	class ASTExtraShootWeapon*                         InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EGunFireMode                                       FireMode;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SwitchWeaponSlot.SwitchWeaponSlot_C.HideFireMode
struct USwitchWeaponSlot_C_HideFireMode_Params
{
	bool                                               bIsShow;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ASTExtraShootWeapon*                         shootWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SwitchWeaponSlot.SwitchWeaponSlot_C.ChangeWeaponImage
struct USwitchWeaponSlot_C_ChangeWeaponImage_Params
{
	class UObject*                                     NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SwitchWeaponSlot.SwitchWeaponSlot_C.OnTouchEnded
struct USwitchWeaponSlot_C_OnTouchEnded_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               InTouchEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SwitchWeaponSlot.SwitchWeaponSlot_C.OnMouseButtonDown
struct USwitchWeaponSlot_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SwitchWeaponSlot.SwitchWeaponSlot_C.UpdateImage
struct USwitchWeaponSlot_C_UpdateImage_Params
{
	struct FSlateBrush                                 Brush;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	ESlateVisibility                                   visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SwitchWeaponSlot.SwitchWeaponSlot_C.Construct
struct USwitchWeaponSlot_C_Construct_Params
{
};

// Function SwitchWeaponSlot.SwitchWeaponSlot_C.StopToSwitchIfSprint
struct USwitchWeaponSlot_C_StopToSwitchIfSprint_Params
{
};

// Function SwitchWeaponSlot.SwitchWeaponSlot_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct USwitchWeaponSlot_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function SwitchWeaponSlot.SwitchWeaponSlot_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature
struct USwitchWeaponSlot_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function SwitchWeaponSlot.SwitchWeaponSlot_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature
struct USwitchWeaponSlot_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function SwitchWeaponSlot.SwitchWeaponSlot_C.ReceivedInitWidget
struct USwitchWeaponSlot_C_ReceivedInitWidget_Params
{
};

// Function SwitchWeaponSlot.SwitchWeaponSlot_C.ExecuteUbergraph_SwitchWeaponSlot
struct USwitchWeaponSlot_C_ExecuteUbergraph_SwitchWeaponSlot_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SwitchWeaponSlot.SwitchWeaponSlot_C.ClickOnChangeWeaponFireMode__DelegateSignature
struct USwitchWeaponSlot_C_ClickOnChangeWeaponFireMode__DelegateSignature_Params
{
};

// Function SwitchWeaponSlot.SwitchWeaponSlot_C.ClickOnSwitchWeapon__DelegateSignature
struct USwitchWeaponSlot_C_ClickOnSwitchWeapon__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
