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

// Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.RegisterSettingChanged
struct USwitchWeaponSlot_Mode2_C_RegisterSettingChanged_Params
{
};

// Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.SetSlotNumber
struct USwitchWeaponSlot_Mode2_C_SetSlotNumber_Params
{
};

// Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.GetWeaponMgr
struct USwitchWeaponSlot_Mode2_C_GetWeaponMgr_Params
{
	class UWeaponManagerComponent*                     weaponComp;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.UpdateFireModeShape
struct USwitchWeaponSlot_Mode2_C_UpdateFireModeShape_Params
{
	bool                                               Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.HideSwitchWeaponTips
struct USwitchWeaponSlot_Mode2_C_HideSwitchWeaponTips_Params
{
	bool                                               NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_GuideText_type                   NewParam1;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.AddAttachmentAnimationToQuereAsync
struct USwitchWeaponSlot_Mode2_C_AddAttachmentAnimationToQuereAsync_Params
{
	class UObject*                                     Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.RefreshWeaponImage
struct USwitchWeaponSlot_Mode2_C_RefreshWeaponImage_Params
{
	class UObject*                                     Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.GetAttachmentImage
struct USwitchWeaponSlot_Mode2_C_GetAttachmentImage_Params
{
	struct FItemDefineID                               DefineID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString                                     ImagePath;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.AddAttachmentAnimationToQuere
struct USwitchWeaponSlot_Mode2_C_AddAttachmentAnimationToQuere_Params
{
	struct FItemDefineID                               ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.PlayAnimationInQueue
struct USwitchWeaponSlot_Mode2_C_PlayAnimationInQueue_Params
{
};

// Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.UnSelected
struct USwitchWeaponSlot_Mode2_C_UnSelected_Params
{
	bool                                               IsSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.ChangeImageAndTextColor
struct USwitchWeaponSlot_Mode2_C_ChangeImageAndTextColor_Params
{
	bool                                               IsGunRunOutOfAmmo;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.UpdateBulletCounts
struct USwitchWeaponSlot_Mode2_C_UpdateBulletCounts_Params
{
	int                                                BulletInWeapon;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                BulletInBackpack;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FItemDefineID                               BulletType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.ClearWeaponSlotData
struct USwitchWeaponSlot_Mode2_C_ClearWeaponSlotData_Params
{
};

// Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.SetBorderOpacity
struct USwitchWeaponSlot_Mode2_C_SetBorderOpacity_Params
{
	float                                              Opacity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.SetFireModeText
struct USwitchWeaponSlot_Mode2_C_SetFireModeText_Params
{
};

// Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.CanShowFireModeSwitchBtn
struct USwitchWeaponSlot_Mode2_C_CanShowFireModeSwitchBtn_Params
{
	class ASTExtraShootWeapon*                         Weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanSwitch;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.GetNextFireMode
struct USwitchWeaponSlot_Mode2_C_GetNextFireMode_Params
{
	class ASTExtraShootWeapon*                         InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EGunFireMode                                       FireMode;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.HideFireMode
struct USwitchWeaponSlot_Mode2_C_HideFireMode_Params
{
	bool                                               bIsShow;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ASTExtraShootWeapon*                         shootWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.ChangeWeaponImage
struct USwitchWeaponSlot_Mode2_C_ChangeWeaponImage_Params
{
	struct FString                                     IconPath;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.OnTouchEnded
struct USwitchWeaponSlot_Mode2_C_OnTouchEnded_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               InTouchEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.OnMouseButtonDown
struct USwitchWeaponSlot_Mode2_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.UpdateImage
struct USwitchWeaponSlot_Mode2_C_UpdateImage_Params
{
	struct FSlateBrush                                 Brush;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	ESlateVisibility                                   visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.StopToSwitchIfSprint
struct USwitchWeaponSlot_Mode2_C_StopToSwitchIfSprint_Params
{
};

// Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature
struct USwitchWeaponSlot_Mode2_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.ReceivedInitWidget
struct USwitchWeaponSlot_Mode2_C_ReceivedInitWidget_Params
{
};

// Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.GetItemAnimFinished
struct USwitchWeaponSlot_Mode2_C_GetItemAnimFinished_Params
{
};

// Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_15_OnButtonPressedEvent__DelegateSignature
struct USwitchWeaponSlot_Mode2_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_15_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_28_OnButtonPressedEvent__DelegateSignature
struct USwitchWeaponSlot_Mode2_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_28_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.BndEvt__Button_Pistol_Fire_K2Node_ComponentBoundEvent_78_OnButtonClickedEvent__DelegateSignature
struct USwitchWeaponSlot_Mode2_C_BndEvt__Button_Pistol_Fire_K2Node_ComponentBoundEvent_78_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.ExecuteUbergraph_SwitchWeaponSlot_Mode2
struct USwitchWeaponSlot_Mode2_C_ExecuteUbergraph_SwitchWeaponSlot_Mode2_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.ClickOnChangeWeaponFireMode__DelegateSignature
struct USwitchWeaponSlot_Mode2_C_ClickOnChangeWeaponFireMode__DelegateSignature_Params
{
};

// Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.ClickOnSwitchWeapon__DelegateSignature
struct USwitchWeaponSlot_Mode2_C_ClickOnSwitchWeapon__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
