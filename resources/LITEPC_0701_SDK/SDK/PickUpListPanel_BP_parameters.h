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

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.SetOBAirBoxName
struct UPickUpListPanel_BP_C_SetOBAirBoxName_Params
{
	class UPickUpListItem_Row_BPPC_C*                  Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.DirectShowBox
struct UPickUpListPanel_BP_C_DirectShowBox_Params
{
	TArray<struct FSearchedTombBoxAndWrapperListResult> boxArray;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.UIInGameEvent_BackpackClose
struct UPickUpListPanel_BP_C_UIInGameEvent_BackpackClose_Params
{
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.UIInGameEvent_HideQuickChatMenu
struct UPickUpListPanel_BP_C_UIInGameEvent_HideQuickChatMenu_Params
{
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.DeadBoxExistVisibilityControl
struct UPickUpListPanel_BP_C_DeadBoxExistVisibilityControl_Params
{
	bool                                               IsExist;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.PickUpExistVisibilityControl
struct UPickUpListPanel_BP_C_PickUpExistVisibilityControl_Params
{
	bool                                               BtnExist;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.IsPlayerCanSeeWidget
struct UPickUpListPanel_BP_C_IsPlayerCanSeeWidget_Params
{
	class UWidget*                                     NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewParam1;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.HideExpandDeadBoxTips
struct UPickUpListPanel_BP_C_HideExpandDeadBoxTips_Params
{
	bool                                               isShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_GuideText_type                   NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.HideExpandPickUpTips
struct UPickUpListPanel_BP_C_HideExpandPickUpTips_Params
{
	bool                                               isShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_GuideText_type                   NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.ShowNineOrSix
struct UPickUpListPanel_BP_C_ShowNineOrSix_Params
{
	bool                                               bShow;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Nine;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.PlayerSetBoxCol
struct UPickUpListPanel_BP_C_PlayerSetBoxCol_Params
{
	int                                                col;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.ShowNineOrSixCol
struct UPickUpListPanel_BP_C_ShowNineOrSixCol_Params
{
	class UPickUpListItem_Row_BP_C*                    itemRow;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShow;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.GetUseful2
struct UPickUpListPanel_BP_C_GetUseful2_Params
{
	struct FItemDefineID                               DefineID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSearchedPickUpItemResult                   pickUpItemResult;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Useful;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.ResetTombCheckSum
struct UPickUpListPanel_BP_C_ResetTombCheckSum_Params
{
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.NotifyBox
struct UPickUpListPanel_BP_C_NotifyBox_Params
{
	bool                                               Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.NotifyPickup
struct UPickUpListPanel_BP_C_NotifyPickup_Params
{
	bool                                               Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.FindTombRowByName
struct UPickUpListPanel_BP_C_FindTombRowByName_Params
{
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UPickUpListItem_Row_BPPC_C*                  itemRow;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               find;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.isDurableFull
struct UPickUpListPanel_BP_C_isDurableFull_Params
{
	struct FBP_STRUCT_Item_type                        Record;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSearchedPickUpItemResult                   PickupItem;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               full;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.GetBulletAutoPickupLimit
struct UPickUpListPanel_BP_C_GetBulletAutoPickupLimit_Params
{
	int                                                resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Limit;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.DeleteTombs
struct UPickUpListPanel_BP_C_DeleteTombs_Params
{
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.CheckBoxChange
struct UPickUpListPanel_BP_C_CheckBoxChange_Params
{
	struct FSearchedTombBoxAndWrapperListResult        Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               change;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.CheckChange
struct UPickUpListPanel_BP_C_CheckChange_Params
{
	TArray<struct FSearchedPickUpItemResult>           Array;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               change;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.AutoPickGroundItem
struct UPickUpListPanel_BP_C_AutoPickGroundItem_Params
{
	TArray<struct FBattleSearchItemSortingInfo>        Array;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.ItemOpertation
struct UPickUpListPanel_BP_C_ItemOpertation_Params
{
	struct FItemDefineID                               ItemDefineID;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	EBattleItemOperationType                           optType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.PauseAutoPick
struct UPickUpListPanel_BP_C_PauseAutoPick_Params
{
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.InitRegistSettingBool
struct UPickUpListPanel_BP_C_InitRegistSettingBool_Params
{
	struct FString                                     PropertyName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FScriptDelegate                             Delegate;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class USettingConfig_C*                            AsSetting_Config;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.InitRegistSettingInt
struct UPickUpListPanel_BP_C_InitRegistSettingInt_Params
{
	struct FString                                     PropertyName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FScriptDelegate                             Delegate;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class USettingConfig_C*                            AsSetting_Config;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.AutoPickOneItem
struct UPickUpListPanel_BP_C_AutoPickOneItem_Params
{
	struct FSearchedPickUpItemResult                   pickUpResult;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               pick;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.BigSortThan
struct UPickUpListPanel_BP_C_BigSortThan_Params
{
	struct FBP_STRUCT_Item_type                        Left;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FBP_STRUCT_Item_type                        Right;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bigger;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.GetUseful
struct UPickUpListPanel_BP_C_GetUseful_Params
{
	struct FItemDefineID                               DefineID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSearchedPickUpItemResult                   pickUpItemResult;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Useful;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.ClickCloseBoxPanel
struct UPickUpListPanel_BP_C_ClickCloseBoxPanel_Params
{
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.SetBoxColumn
struct UPickUpListPanel_BP_C_SetBoxColumn_Params
{
	int                                                Column;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.ClickCloseCustomPanel
struct UPickUpListPanel_BP_C_ClickCloseCustomPanel_Params
{
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.FillTombBoxList
struct UPickUpListPanel_BP_C_FillTombBoxList_Params
{
	TArray<struct FSearchedTombBoxAndWrapperListResult> TargetArray;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.OnClickBoxTab
struct UPickUpListPanel_BP_C_OnClickBoxTab_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.MakeFlagToTabBox
struct UPickUpListPanel_BP_C_MakeFlagToTabBox_Params
{
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.FillButton
struct UPickUpListPanel_BP_C_FillButton_Params
{
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.MakeSureBoxListEnough
struct UPickUpListPanel_BP_C_MakeSureBoxListEnough_Params
{
	int                                                Count;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FSearchedTombBoxAndWrapperListResult> Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.FillGroundList
struct UPickUpListPanel_BP_C_FillGroundList_Params
{
	TArray<struct FBattleSearchItemSortingInfo>        Array;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.ShowPickMode
struct UPickUpListPanel_BP_C_ShowPickMode_Params
{
	TEnumAsByte<EGroudStuffType>                       pickType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.GetIsShowingToolTips
struct UPickUpListPanel_BP_C_GetIsShowingToolTips_Params
{
	bool                                               bShowing;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.GetToolTipsSingleton
struct UPickUpListPanel_BP_C_GetToolTipsSingleton_Params
{
	class UUserWidget*                                 NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.HideToolTips
struct UPickUpListPanel_BP_C_HideToolTips_Params
{
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.ShowToolTips
struct UPickUpListPanel_BP_C_ShowToolTips_Params
{
	struct FSlateBrush                                 Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString                                     ItemName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     ItemDesc;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.UpdateListData
struct UPickUpListPanel_BP_C_UpdateListData_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.BndEvt__Button_ClosePickUpListUI_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature
struct UPickUpListPanel_BP_C_BndEvt__Button_ClosePickUpListUI_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.ReceivedInitWidget
struct UPickUpListPanel_BP_C_ReceivedInitWidget_Params
{
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.OnClickNormal
struct UPickUpListPanel_BP_C_OnClickNormal_Params
{
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.AutoPickOne
struct UPickUpListPanel_BP_C_AutoPickOne_Params
{
	struct FSearchedPickUpItemResult                   pickUpResult;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.AutoPickupSwitchEvent
struct UPickUpListPanel_BP_C_AutoPickupSwitchEvent_Params
{
	bool                                               BoolValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.DisableAutoPickupSwitcherEvent
struct UPickUpListPanel_BP_C_DisableAutoPickupSwitcherEvent_Params
{
	bool                                               BoolValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.ItemOptEvent
struct UPickUpListPanel_BP_C_ItemOptEvent_Params
{
	struct FItemDefineID                               DefineID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	EBattleItemOperationType                           operationType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.ItemListUpdateEvent
struct UPickUpListPanel_BP_C_ItemListUpdateEvent_Params
{
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.UpdateWeapon1
struct UPickUpListPanel_BP_C_UpdateWeapon1_Params
{
	ESurviveWeaponPropSlot                             TargetChangeSlot;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.UpdateWeapon2
struct UPickUpListPanel_BP_C_UpdateWeapon2_Params
{
	ESurviveWeaponPropSlot                             TargetChangeSlot;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.OnMoveOut
struct UPickUpListPanel_BP_C_OnMoveOut_Params
{
	bool                                               bMoveOut;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.BndEvt__Button_Sixpalaces_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature
struct UPickUpListPanel_BP_C_BndEvt__Button_Sixpalaces_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.BndEvt__Button_Ninepalaces_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature
struct UPickUpListPanel_BP_C_BndEvt__Button_Ninepalaces_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.BndEvt__Button_OBmode_HideList_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature
struct UPickUpListPanel_BP_C_BndEvt__Button_OBmode_HideList_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.HandleBtnsStateChangeEvent
struct UPickUpListPanel_BP_C_HandleBtnsStateChangeEvent_Params
{
	class UPickUpItem_S_BP_C*                          ItemBp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsHover;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.ReceiveShow
struct UPickUpListPanel_BP_C_ReceiveShow_Params
{
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.ItemDragStartEvent
struct UPickUpListPanel_BP_C_ItemDragStartEvent_Params
{
	struct FSearchedPickUpItemResult                   ItemData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.ToolTipUpdateEvent
struct UPickUpListPanel_BP_C_ToolTipUpdateEvent_Params
{
	class UPickUpItem_S_BP_C*                          ItemBp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.ItemBePickUpEvent
struct UPickUpListPanel_BP_C_ItemBePickUpEvent_Params
{
	struct FSearchedPickUpItemResult                   PickUpItemData;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ForceDrop;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.ExecuteUbergraph_PickUpListPanel_BP
struct UPickUpListPanel_BP_C_ExecuteUbergraph_PickUpListPanel_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.ItemBePickUp__DelegateSignature
struct UPickUpListPanel_BP_C_ItemBePickUp__DelegateSignature_Params
{
	struct FSearchedPickUpItemResult                   PickUpItemData;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ForceDrop;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.ToolTipUpdate__DelegateSignature
struct UPickUpListPanel_BP_C_ToolTipUpdate__DelegateSignature_Params
{
	class UPickUpItem_S_BP_C*                          ItemBp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.ItemDragStart__DelegateSignature
struct UPickUpListPanel_BP_C_ItemDragStart__DelegateSignature_Params
{
	struct FSearchedPickUpItemResult                   ItemData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.HandleBtnsStateChange__DelegateSignature
struct UPickUpListPanel_BP_C_HandleBtnsStateChange__DelegateSignature_Params
{
	class UPickUpItem_S_BP_C*                          ItemBp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsHover;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PickUpListPanel_BP.PickUpListPanel_BP_C.CollapseStuffList__DelegateSignature
struct UPickUpListPanel_BP_C_CollapseStuffList__DelegateSignature_Params
{
	bool                                               bDeadBox;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
