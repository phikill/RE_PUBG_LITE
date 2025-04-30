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

// Function FireMode.FireMode_C.RefreshBulletImage
struct UFireMode_C_RefreshBulletImage_Params
{
	class UObject*                                     Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FireMode.FireMode_C.UpdateBulletCounts
struct UFireMode_C_UpdateBulletCounts_Params
{
	int                                                BulletInWeapon;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                BulletInBackpack;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FItemDefineID                               BulletType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	class USwitchWeaponSlot_Mode2_C*                   WeaponSlot;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FireMode.FireMode_C.GetAttachmentImage
struct UFireMode_C_GetAttachmentImage_Params
{
	struct FItemDefineID                               DefineID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString                                     ImagePath;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function FireMode.FireMode_C.SetFireModeText
struct UFireMode_C_SetFireModeText_Params
{
};

// Function FireMode.FireMode_C.CanShowFireModeSwitchBtn
struct UFireMode_C_CanShowFireModeSwitchBtn_Params
{
	class ASTExtraShootWeapon*                         Weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanSwitch;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FireMode.FireMode_C.GetNextFireMode
struct UFireMode_C_GetNextFireMode_Params
{
	class ASTExtraShootWeapon*                         InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EGunFireMode                                       FireMode;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FireMode.FireMode_C.HideFireMode
struct UFireMode_C_HideFireMode_Params
{
	bool                                               bIsShow;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ASTExtraShootWeapon*                         shootWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FireMode.FireMode_C.OnTouchEnded
struct UFireMode_C_OnTouchEnded_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               InTouchEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FireMode.FireMode_C.OnMouseButtonDown
struct UFireMode_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FireMode.FireMode_C.StopToSwitchIfSprint
struct UFireMode_C_StopToSwitchIfSprint_Params
{
};

// Function FireMode.FireMode_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature
struct UFireMode_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function FireMode.FireMode_C.ReceivedInitWidget
struct UFireMode_C_ReceivedInitWidget_Params
{
};

// Function FireMode.FireMode_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_15_OnButtonPressedEvent__DelegateSignature
struct UFireMode_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_15_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function FireMode.FireMode_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_28_OnButtonPressedEvent__DelegateSignature
struct UFireMode_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_28_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function FireMode.FireMode_C.ExecuteUbergraph_FireMode
struct UFireMode_C_ExecuteUbergraph_FireMode_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FireMode.FireMode_C.ClickOnChangeWeaponFireMode__DelegateSignature
struct UFireMode_C_ClickOnChangeWeaponFireMode__DelegateSignature_Params
{
};

// Function FireMode.FireMode_C.ClickOnSwitchWeapon__DelegateSignature
struct UFireMode_C_ClickOnSwitchWeapon__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
