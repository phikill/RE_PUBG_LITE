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

// Function PistolMode.PistolMode_C.GetAttachmentImage
struct UPistolMode_C_GetAttachmentImage_Params
{
	struct FItemDefineID                               DefineID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString                                     ImagePath;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function PistolMode.PistolMode_C.AddAttachmentAnimationToQuere
struct UPistolMode_C_AddAttachmentAnimationToQuere_Params
{
	struct FItemDefineID                               ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PistolMode.PistolMode_C.AddAttachmentAnimationToQuereAsync
struct UPistolMode_C_AddAttachmentAnimationToQuereAsync_Params
{
	class UObject*                                     Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PistolMode.PistolMode_C.PlayAnimationInQueue
struct UPistolMode_C_PlayAnimationInQueue_Params
{
};

// Function PistolMode.PistolMode_C.OnMouseButtonDown
struct UPistolMode_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PistolMode.PistolMode_C.OnTouchEnded
struct UPistolMode_C_OnTouchEnded_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               InTouchEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PistolMode.PistolMode_C.GetWeaponMgr
struct UPistolMode_C_GetWeaponMgr_Params
{
	class UWeaponManagerComponent*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PistolMode.PistolMode_C.GetCurrWeapon
struct UPistolMode_C_GetCurrWeapon_Params
{
	class ASTExtraShootWeapon*                         AsSTExtra_Shoot_Weapon;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PistolMode.PistolMode_C.CanShowFireModeSwitchBtn
struct UPistolMode_C_CanShowFireModeSwitchBtn_Params
{
	class ASTExtraShootWeapon*                         Weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanSwitch;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PistolMode.PistolMode_C.SetFireModeText
struct UPistolMode_C_SetFireModeText_Params
{
	class ASTExtraShootWeapon*                         Weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PistolMode.PistolMode_C.HideFireMode
struct UPistolMode_C_HideFireMode_Params
{
	bool                                               isShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PistolMode.PistolMode_C.GetNextFireMode
struct UPistolMode_C_GetNextFireMode_Params
{
	class ASTExtraShootWeapon*                         InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EGunFireMode                                       FireMode;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PistolMode.PistolMode_C.UpdatePistol
struct UPistolMode_C_UpdatePistol_Params
{
};

// Function PistolMode.PistolMode_C.SetBorderOpacity
struct UPistolMode_C_SetBorderOpacity_Params
{
	float                                              Opacity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PistolMode.PistolMode_C.GetBackPackBulletNum
struct UPistolMode_C_GetBackPackBulletNum_Params
{
	struct FItemDefineID                               BulletType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Num;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PistolMode.PistolMode_C.UpdateBulletCounts
struct UPistolMode_C_UpdateBulletCounts_Params
{
	int                                                BulletInWeapon;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                BulletInBackpack;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FItemDefineID                               BulletType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PistolMode.PistolMode_C.RefreshWeaponImage
struct UPistolMode_C_RefreshWeaponImage_Params
{
	class UObject*                                     Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PistolMode.PistolMode_C.ChangeImageAndTextColor
struct UPistolMode_C_ChangeImageAndTextColor_Params
{
	bool                                               IsGunRunOutOfAmmo;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PistolMode.PistolMode_C.ClearWeaponSlotData
struct UPistolMode_C_ClearWeaponSlotData_Params
{
};

// Function PistolMode.PistolMode_C.ChangeWeaponImage
struct UPistolMode_C_ChangeWeaponImage_Params
{
	struct FString                                     IconPath;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function PistolMode.PistolMode_C.BndEvt__Button_Pisto_Exp_K2Node_ComponentBoundEvent_166_OnButtonClickedEvent__DelegateSignature
struct UPistolMode_C_BndEvt__Button_Pisto_Exp_K2Node_ComponentBoundEvent_166_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PistolMode.PistolMode_C.BndEvt__Button_ChangeShootingType_K2Node_ComponentBoundEvent_350_OnButtonClickedEvent__DelegateSignature
struct UPistolMode_C_BndEvt__Button_ChangeShootingType_K2Node_ComponentBoundEvent_350_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PistolMode.PistolMode_C.ReceivedInitWidget
struct UPistolMode_C_ReceivedInitWidget_Params
{
};

// Function PistolMode.PistolMode_C.BndEvt__Button_UnSelect_K2Node_ComponentBoundEvent_271_OnButtonClickedEvent__DelegateSignature
struct UPistolMode_C_BndEvt__Button_UnSelect_K2Node_ComponentBoundEvent_271_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PistolMode.PistolMode_C.GetItemAnimFinished
struct UPistolMode_C_GetItemAnimFinished_Params
{
};

// Function PistolMode.PistolMode_C.ExecuteUbergraph_PistolMode
struct UPistolMode_C_ExecuteUbergraph_PistolMode_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PistolMode.PistolMode_C.ShowLongGunFireMode__DelegateSignature
struct UPistolMode_C_ShowLongGunFireMode__DelegateSignature_Params
{
	bool                                               Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PistolMode.PistolMode_C.ClickOnSwitchWeapon__DelegateSignature
struct UPistolMode_C_ClickOnSwitchWeapon__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
