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

// Function GrenadeList.GrenadeList_C.Reconnect_ResetUIByPlayerControllerState
struct UGrenadeList_C_Reconnect_ResetUIByPlayerControllerState_Params
{
};

// Function GrenadeList.GrenadeList_C.GetGrenadePriorityByType
struct UGrenadeList_C_GetGrenadePriorityByType_Params
{
	TEnumAsByte<EGrenadeType>                          Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GrenadeList.GrenadeList_C.SetGrenadeOrder
struct UGrenadeList_C_SetGrenadeOrder_Params
{
	TArray<struct FBattleItemData>                     Array;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function GrenadeList.GrenadeList_C.SwitchToFistIfCurGrenadeCountIsZero
struct UGrenadeList_C_SwitchToFistIfCurGrenadeCountIsZero_Params
{
};

// Function GrenadeList.GrenadeList_C.MarkDownUsingStatus
struct UGrenadeList_C_MarkDownUsingStatus_Params
{
	ESurviveWeaponPropSlot                             Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrenadeList.GrenadeList_C.GetIsArrayHasGrenade
struct UGrenadeList_C_GetIsArrayHasGrenade_Params
{
	bool                                               HasGrenade;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GrenadeList.GrenadeList_C.GetIsAGrenadeByItemID
struct UGrenadeList_C_GetIsAGrenadeByItemID_Params
{
	int                                                ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsAGrenade;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GrenadeList.GrenadeList_C.GetSlateBrushByItemID
struct UGrenadeList_C_GetSlateBrushByItemID_Params
{
	int                                                ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 WeaponSlateBrushNormal;                                   // (Parm, OutParm)
	struct FSlateBrush                                 WeaponSlateBrushHightLight;                               // (Parm, OutParm)
};

// Function GrenadeList.GrenadeList_C.UpdateDataToSlot
struct UGrenadeList_C_UpdateDataToSlot_Params
{
};

// Function GrenadeList.GrenadeList_C.HandleBackPackItemUpdate
struct UGrenadeList_C_HandleBackPackItemUpdate_Params
{
};

// Function GrenadeList.GrenadeList_C.GetGrenadeTypeByItemID
struct UGrenadeList_C_GetGrenadeTypeByItemID_Params
{
	int                                                ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGrenadeType>                          Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GrenadeList.GrenadeList_C.GetGrenadeAndMeleeWeaponDataTableMap
struct UGrenadeList_C_GetGrenadeAndMeleeWeaponDataTableMap_Params
{
	TMap<int, struct FBP_STRUCT_Item_type>             DataTableRowMap;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function GrenadeList.GrenadeList_C.GetGrenadeAndMeleeWeaponDataArray
struct UGrenadeList_C_GetGrenadeAndMeleeWeaponDataArray_Params
{
	TArray<struct FBattleItemData>                     GrenadeAndMelee;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function GrenadeList.GrenadeList_C.GetPlayerCharacter
struct UGrenadeList_C_GetPlayerCharacter_Params
{
	class ASTExtraPlayerCharacter*                     PlayerCharacter;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GrenadeList.GrenadeList_C.GetPlayerEquipWeaponBySlot
struct UGrenadeList_C_GetPlayerEquipWeaponBySlot_Params
{
	ESurviveWeaponPropSlot                             Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ASTExtraWeapon*                              Weapon;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GrenadeList.GrenadeList_C.IsGrenadeCountZero
struct UGrenadeList_C_IsGrenadeCountZero_Params
{
	bool                                               IsZero;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GrenadeList.GrenadeList_C.ChangeGrenadeVisibilityByGrenadeCounts
struct UGrenadeList_C_ChangeGrenadeVisibilityByGrenadeCounts_Params
{
};

// Function GrenadeList.GrenadeList_C.HandleSlotChosen
struct UGrenadeList_C_HandleSlotChosen_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrenadeList.GrenadeList_C.AutoSwitchGrenadeToCurUse
struct UGrenadeList_C_AutoSwitchGrenadeToCurUse_Params
{
	bool                                               SwitchSuccess;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GrenadeList.GrenadeList_C.AutoCollapseGrenadeSlot
struct UGrenadeList_C_AutoCollapseGrenadeSlot_Params
{
};

// Function GrenadeList.GrenadeList_C.SetAutoCollapse
struct UGrenadeList_C_SetAutoCollapse_Params
{
};

// Function GrenadeList.GrenadeList_C.SortUnUseSlot
struct UGrenadeList_C_SortUnUseSlot_Params
{
};

// Function GrenadeList.GrenadeList_C.SetGrenadeSlotDataByIndex
struct UGrenadeList_C_SetGrenadeSlotDataByIndex_Params
{
	struct FGrenadeSlotData                            InputData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrenadeList.GrenadeList_C.SwitchSloatDataWithCurUse
struct UGrenadeList_C_SwitchSloatDataWithCurUse_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrenadeList.GrenadeList_C.GetBtnIncludeWidgetByIndex
struct UGrenadeList_C_GetBtnIncludeWidgetByIndex_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UImage*                                      BG;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UImage*                                      GrenadeImage;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UButton*                                     GrenadeBtn;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  Text;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UGridPanel*                                  Grid;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UBorder*                                     Border;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GrenadeList.GrenadeList_C.GetGrenadeSlotDataIndexByIndex
struct UGrenadeList_C_GetGrenadeSlotDataIndexByIndex_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGrenadeSlotData                            Data;                                                     // (Parm, OutParm)
};

// Function GrenadeList.GrenadeList_C.UpdateGrenadeBtnBGAndImage
struct UGrenadeList_C_UpdateGrenadeBtnBGAndImage_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsHighLight;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrenadeList.GrenadeList_C.SetGrenadeVisibilityByCurStatus
struct UGrenadeList_C_SetGrenadeVisibilityByCurStatus_Params
{
};

// Function GrenadeList.GrenadeList_C.SetInteractiveTriangleByCurStatus
struct UGrenadeList_C_SetInteractiveTriangleByCurStatus_Params
{
};

// Function GrenadeList.GrenadeList_C.GetGrenadeIconByType
struct UGrenadeList_C_GetGrenadeIconByType_Params
{
	TEnumAsByte<EGrenadeType>                          InputType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 Normal;                                                   // (Parm, OutParm)
	struct FSlateBrush                                 HightLight;                                               // (Parm, OutParm)
};

// Function GrenadeList.GrenadeList_C.UpdateGrenadeImageAndCounts
struct UGrenadeList_C_UpdateGrenadeImageAndCounts_Params
{
};

// Function GrenadeList.GrenadeList_C.PreConstruct
struct UGrenadeList_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrenadeList.GrenadeList_C.BndEvt__GrenadeSlot3Btn_K2Node_ComponentBoundEvent_665_OnButtonReleasedEvent__DelegateSignature
struct UGrenadeList_C_BndEvt__GrenadeSlot3Btn_K2Node_ComponentBoundEvent_665_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function GrenadeList.GrenadeList_C.BndEvt__GrenadeSlot3Btn_K2Node_ComponentBoundEvent_674_OnButtonPressedEvent__DelegateSignature
struct UGrenadeList_C_BndEvt__GrenadeSlot3Btn_K2Node_ComponentBoundEvent_674_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function GrenadeList.GrenadeList_C.BndEvt__InterativeBtn_K2Node_ComponentBoundEvent_757_OnButtonPressedEvent__DelegateSignature
struct UGrenadeList_C_BndEvt__InterativeBtn_K2Node_ComponentBoundEvent_757_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function GrenadeList.GrenadeList_C.BndEvt__InterativeBtn_K2Node_ComponentBoundEvent_767_OnButtonReleasedEvent__DelegateSignature
struct UGrenadeList_C_BndEvt__InterativeBtn_K2Node_ComponentBoundEvent_767_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function GrenadeList.GrenadeList_C.BndEvt__CurUseBtn_K2Node_ComponentBoundEvent_806_OnButtonPressedEvent__DelegateSignature
struct UGrenadeList_C_BndEvt__CurUseBtn_K2Node_ComponentBoundEvent_806_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function GrenadeList.GrenadeList_C.BndEvt__CurUseBtn_K2Node_ComponentBoundEvent_825_OnButtonReleasedEvent__DelegateSignature
struct UGrenadeList_C_BndEvt__CurUseBtn_K2Node_ComponentBoundEvent_825_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function GrenadeList.GrenadeList_C.BndEvt__GrenadeSlot2Btn_K2Node_ComponentBoundEvent_1440_OnButtonPressedEvent__DelegateSignature
struct UGrenadeList_C_BndEvt__GrenadeSlot2Btn_K2Node_ComponentBoundEvent_1440_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function GrenadeList.GrenadeList_C.BndEvt__GrenadeSlot2Btn_K2Node_ComponentBoundEvent_1459_OnButtonReleasedEvent__DelegateSignature
struct UGrenadeList_C_BndEvt__GrenadeSlot2Btn_K2Node_ComponentBoundEvent_1459_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function GrenadeList.GrenadeList_C.BndEvt__GrenadeSlot1Btn_K2Node_ComponentBoundEvent_1510_OnButtonPressedEvent__DelegateSignature
struct UGrenadeList_C_BndEvt__GrenadeSlot1Btn_K2Node_ComponentBoundEvent_1510_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function GrenadeList.GrenadeList_C.BndEvt__GrenadeSlot1Btn_K2Node_ComponentBoundEvent_1531_OnButtonReleasedEvent__DelegateSignature
struct UGrenadeList_C_BndEvt__GrenadeSlot1Btn_K2Node_ComponentBoundEvent_1531_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function GrenadeList.GrenadeList_C.SimulateExpand
struct UGrenadeList_C_SimulateExpand_Params
{
};

// Function GrenadeList.GrenadeList_C.BndEvt__Slot4Btn_K2Node_ComponentBoundEvent_35_OnButtonPressedEvent__DelegateSignature
struct UGrenadeList_C_BndEvt__Slot4Btn_K2Node_ComponentBoundEvent_35_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function GrenadeList.GrenadeList_C.BndEvt__Slot4Btn_K2Node_ComponentBoundEvent_58_OnButtonReleasedEvent__DelegateSignature
struct UGrenadeList_C_BndEvt__Slot4Btn_K2Node_ComponentBoundEvent_58_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function GrenadeList.GrenadeList_C.WeaponChange
struct UGrenadeList_C_WeaponChange_Params
{
	ESurviveWeaponPropSlot                             TargetChangeSlot;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrenadeList.GrenadeList_C.ReceivedInitWidget
struct UGrenadeList_C_ReceivedInitWidget_Params
{
};

// Function GrenadeList.GrenadeList_C.ItemUpdated
struct UGrenadeList_C_ItemUpdated_Params
{
	struct FItemDefineID                               DefineID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GrenadeList.GrenadeList_C.ExecuteUbergraph_GrenadeList
struct UGrenadeList_C_ExecuteUbergraph_GrenadeList_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrenadeList.GrenadeList_C.OnUseFist__DelegateSignature
struct UGrenadeList_C_OnUseFist__DelegateSignature_Params
{
};

// Function GrenadeList.GrenadeList_C.OnUseMelee__DelegateSignature
struct UGrenadeList_C_OnUseMelee__DelegateSignature_Params
{
};

// Function GrenadeList.GrenadeList_C.OnGrenadeEmpty__DelegateSignature
struct UGrenadeList_C_OnGrenadeEmpty__DelegateSignature_Params
{
};

// Function GrenadeList.GrenadeList_C.OnUseGrenade__DelegateSignature
struct UGrenadeList_C_OnUseGrenade__DelegateSignature_Params
{
	TEnumAsByte<EGrenadeType>                          grenadeType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
