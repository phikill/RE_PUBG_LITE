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

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.IsEquipGrenade
struct UMainBackPackPanel_BP_C_IsEquipGrenade_Params
{
	struct FVector2D                                   Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               bSuccessGrenadeEquip;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.UseItemByID
struct UMainBackPackPanel_BP_C_UseItemByID_Params
{
	int                                                ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ShowWeapon
struct UMainBackPackPanel_BP_C_ShowWeapon_Params
{
	bool                                               isShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.OnDragEnterLeaveLogicForClothingGroup
struct UMainBackPackPanel_BP_C_OnDragEnterLeaveLogicForClothingGroup_Params
{
	struct FSearchedPickUpItemResult                   ItemData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.OnDragDetectedInsideClothingGroup
struct UMainBackPackPanel_BP_C_OnDragDetectedInsideClothingGroup_Params
{
	struct FVector2D                                   Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.HighLightRightPlace
struct UMainBackPackPanel_BP_C_HighLightRightPlace_Params
{
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BackpackToolTipUpdate
struct UMainBackPackPanel_BP_C_BackpackToolTipUpdate_Params
{
	class UBackPackItem_BP_C*                          ItemBp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.GroundToolTipUpdate
struct UMainBackPackPanel_BP_C_GroundToolTipUpdate_Params
{
	class UPickUpItem_S_BP_C*                          ItemBp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.MainWeaponHighlight
struct UMainBackPackPanel_BP_C_MainWeaponHighlight_Params
{
	struct FSearchedPickUpItemResult                   ItemData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.PickUpGround
struct UMainBackPackPanel_BP_C_PickUpGround_Params
{
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ShowToolTipsGround
struct UMainBackPackPanel_BP_C_ShowToolTipsGround_Params
{
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.RecordClickItemGround
struct UMainBackPackPanel_BP_C_RecordClickItemGround_Params
{
	class UPickUpItem_S_BP_C*                          ItemBeClicked;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsClicked;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.IsMainWeapon
struct UMainBackPackPanel_BP_C_IsMainWeapon_Params
{
	struct FSearchedPickUpItemResult                   PickupItem;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsMainWeapon;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.SilderEnter
struct UMainBackPackPanel_BP_C_SilderEnter_Params
{
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ShowRenderTexture
struct UMainBackPackPanel_BP_C_ShowRenderTexture_Params
{
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.OnSpawnActorInSceneCaptureWorld
struct UMainBackPackPanel_BP_C_OnSpawnActorInSceneCaptureWorld_Params
{
	class AActor*                                      SpawnedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.UpdateRenderTexture
struct UMainBackPackPanel_BP_C_UpdateRenderTexture_Params
{
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.NotifyInputCount
struct UMainBackPackPanel_BP_C_NotifyInputCount_Params
{
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.TestRenderTexture
struct UMainBackPackPanel_BP_C_TestRenderTexture_Params
{
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.IsAbleItemDrop
struct UMainBackPackPanel_BP_C_IsAbleItemDrop_Params
{
	bool                                               IsBackPackItem;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               IsDisable;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.OnDragOver
struct UMainBackPackPanel_BP_C_OnDragOver_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation**                         Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ShowDropCountSliderByStuffGround
struct UMainBackPackPanel_BP_C_ShowDropCountSliderByStuffGround_Params
{
	struct FSearchedPickUpItemResult                   Stuff;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ForceDrop;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.OnItemGroundDragDrop
struct UMainBackPackPanel_BP_C_OnItemGroundDragDrop_Params
{
	struct FSearchedPickUpItemResult                   ItemData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<EBackPackDragOrigin>                   DragItemOrigin;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.SetBackpackCapacity
struct UMainBackPackPanel_BP_C_SetBackpackCapacity_Params
{
	class UBackpackComponent*                          BackpackComponent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ShowNoneListToolTip
struct UMainBackPackPanel_BP_C_ShowNoneListToolTip_Params
{
	struct FSlateBrush                                 Brush;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FBattleItemData                             ItemData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ShowNoneListItemToolTipEvent
struct UMainBackPackPanel_BP_C_ShowNoneListItemToolTipEvent_Params
{
	struct FSlateBrush                                 Brush;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FBattleItemData                             BattleItemData;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               isShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.UpdateItemSortList
struct UMainBackPackPanel_BP_C_UpdateItemSortList_Params
{
	bool                                               IsPriority;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.OnPlayerNameChange
struct UMainBackPackPanel_BP_C_OnPlayerNameChange_Params
{
	struct FString                                     PlayerName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.GetGrenadeSocketName
struct UMainBackPackPanel_BP_C_GetGrenadeSocketName_Params
{
	TEnumAsByte<EGrenadeType>                          grenadeType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.SwapWeapon
struct UMainBackPackPanel_BP_C_SwapWeapon_Params
{
	ESurviveWeaponPropSlot                             Slot1;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ESurviveWeaponPropSlot                             Slot2;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.UnBindBackPackCompEvents
struct UMainBackPackPanel_BP_C_UnBindBackPackCompEvents_Params
{
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BindBackPackCompEvents
struct UMainBackPackPanel_BP_C_BindBackPackCompEvents_Params
{
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ShouldDropItemFunc
struct UMainBackPackPanel_BP_C_ShouldDropItemFunc_Params
{
	struct FItemDefineID                               DefineID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               OK;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.OnTouchEnded
struct UMainBackPackPanel_BP_C_OnTouchEnded_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               InTouchEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.OnTouchStarted
struct UMainBackPackPanel_BP_C_OnTouchStarted_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               InTouchEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.OnItemDragCancelled
struct UMainBackPackPanel_BP_C_OnItemDragCancelled_Params
{
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.OnItemDragDrop
struct UMainBackPackPanel_BP_C_OnItemDragDrop_Params
{
	struct FBattleItemData                             ItemData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<EBackPackDragOrigin>                   DragItemOrigin;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.OnDrop
struct UMainBackPackPanel_BP_C_OnDrop_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation**                         Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ResetSelectItem
struct UMainBackPackPanel_BP_C_ResetSelectItem_Params
{
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.OnEventTakeDamageForUI
struct UMainBackPackPanel_BP_C_OnEventTakeDamageForUI_Params
{
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.HideSelf
struct UMainBackPackPanel_BP_C_HideSelf_Params
{
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ShowSelf
struct UMainBackPackPanel_BP_C_ShowSelf_Params
{
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ClickCloseBackpack
struct UMainBackPackPanel_BP_C_ClickCloseBackpack_Params
{
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.SetArmorSlot
struct UMainBackPackPanel_BP_C_SetArmorSlot_Params
{
	class UBackPackArmorSlot_BP_C*                     ArmorSlot;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TMap<TEnumAsByte<EBackpackClothArmorType>, struct FBattleItemData> NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ResetAttachSlots
struct UMainBackPackPanel_BP_C_ResetAttachSlots_Params
{
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.UnEquipDraggedItem
struct UMainBackPackPanel_BP_C_UnEquipDraggedItem_Params
{
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.UpdateArmor
struct UMainBackPackPanel_BP_C_UpdateArmor_Params
{
	TArray<struct FBattleItemData>                     BattleItemData;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.GetArmorClothDataDict
struct UMainBackPackPanel_BP_C_GetArmorClothDataDict_Params
{
	TArray<struct FBattleItemData>                     InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TMap<TEnumAsByte<EBackpackClothArmorType>, struct FBattleItemData> ClothArmDataDict;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ClothArmerType2Enum
struct UMainBackPackPanel_BP_C_ClothArmerType2Enum_Params
{
	int                                                SubType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBackpackClothArmorType>               ClothEnum;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.SetClothSlot
struct UMainBackPackPanel_BP_C_SetClothSlot_Params
{
	class UBackPackClothSlot_BP_C*                     ClothingSlot;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TMap<TEnumAsByte<EBackpackClothArmorType>, struct FBattleItemData> NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.UpdateCloth
struct UMainBackPackPanel_BP_C_UpdateCloth_Params
{
	TArray<struct FBattleItemData>                     BattleItemData;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.UpdateWeaponBySlot
struct UMainBackPackPanel_BP_C_UpdateWeaponBySlot_Params
{
	ESurviveWeaponPropSlot                             slot_;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.GetWeaponDataBySlot
struct UMainBackPackPanel_BP_C_GetWeaponDataBySlot_Params
{
	ESurviveWeaponPropSlot                             SlotIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FBattleItemData>                     weaponList;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FBattleItemData                             BattleData;                                               // (Parm, OutParm)
	struct FBP_STRUCT_Item_type                        Record;                                                   // (Parm, OutParm)
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.Get_ProgressBar_DeleteItemNum_Percent_1
struct UMainBackPackPanel_BP_C_Get_ProgressBar_DeleteItemNum_Percent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ChangeDropCountSliderValue
struct UMainBackPackPanel_BP_C_ChangeDropCountSliderValue_Params
{
	int                                                NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.Get_TextBlock_MaxDeleteItemNum_Text_1
struct UMainBackPackPanel_BP_C_Get_TextBlock_MaxDeleteItemNum_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.Get_TextBlock_CurrentDeleteItemNum_Text_1
struct UMainBackPackPanel_BP_C_Get_TextBlock_CurrentDeleteItemNum_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.Get Weapon Attach IDBy Specific ID
struct UMainBackPackPanel_BP_C_Get_Weapon_Attach_IDBy_Specific_ID_Params
{
	int                                                inInt;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        AvailableWeaponAttachment;                                // (Parm, OutParm, ZeroConstructor)
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.DropDraggedIem
struct UMainBackPackPanel_BP_C_DropDraggedIem_Params
{
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.UseDraggedIem
struct UMainBackPackPanel_BP_C_UseDraggedIem_Params
{
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.EquipDraggedItem
struct UMainBackPackPanel_BP_C_EquipDraggedItem_Params
{
	ESurviveWeaponPropSlot                             TargetWeapon;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.IsLocalpositionInBorder
struct UMainBackPackPanel_BP_C_IsLocalpositionInBorder_Params
{
	struct FVector2D                                   LocalCoordinate;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UWidget*                                     Border;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.OnItemDragBegin
struct UMainBackPackPanel_BP_C_OnItemDragBegin_Params
{
	struct FBattleItemData                             ItemBeDragged;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<EBackPackDragOrigin>                   DragOrigin;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.GetWeaponAttach
struct UMainBackPackPanel_BP_C_GetWeaponAttach_Params
{
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.RecordClickItem
struct UMainBackPackPanel_BP_C_RecordClickItem_Params
{
	class UBackPackItem_BP_C*                          ItemBeClicked;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsClicked;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.GetWeaponSlotEnumByName
struct UMainBackPackPanel_BP_C_GetWeaponSlotEnumByName_Params
{
	struct FName                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ESurviveWeaponPropSlot                             Slot;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.IsDifferentToCache
struct UMainBackPackPanel_BP_C_IsDifferentToCache_Params
{
	struct FItemAssociation                            Association;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bDifferent;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	ESurviveWeaponPropSlot                             Slot;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.HightLightAttachSlots
struct UMainBackPackPanel_BP_C_HightLightAttachSlots_Params
{
	struct FItemDefineID                               ItemData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.UpdateShootingPanelWeaponIcon
struct UMainBackPackPanel_BP_C_UpdateShootingPanelWeaponIcon_Params
{
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.HideToolTips
struct UMainBackPackPanel_BP_C_HideToolTips_Params
{
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ShowToolTips
struct UMainBackPackPanel_BP_C_ShowToolTips_Params
{
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.HideDropCountSlider
struct UMainBackPackPanel_BP_C_HideDropCountSlider_Params
{
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ShowDropCountSliderByStuff
struct UMainBackPackPanel_BP_C_ShowDropCountSliderByStuff_Params
{
	struct FBattleItemData                             Stuff;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ForceDrop;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.GetWeaponDataTableRowByItemID
struct UMainBackPackPanel_BP_C_GetWeaponDataTableRowByItemID_Params
{
	int                                                ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_Item_type                        Result;                                                   // (Parm, OutParm)
	bool                                               Found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.GetWeaponDataTableRow
struct UMainBackPackPanel_BP_C_GetWeaponDataTableRow_Params
{
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.HighLightChosenTab
struct UMainBackPackPanel_BP_C_HighLightChosenTab_Params
{
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.UpdateWeaponItems
struct UMainBackPackPanel_BP_C_UpdateWeaponItems_Params
{
	TArray<struct FBattleItemData>                     WeaponItemDataArray;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.UpdateScrollItemListItems
struct UMainBackPackPanel_BP_C_UpdateScrollItemListItems_Params
{
	TArray<struct FBattleItemData>                     BackpackItemDataArray;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.UpdateScrollItemList
struct UMainBackPackPanel_BP_C_UpdateScrollItemList_Params
{
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__Button_Medicine_K2Node_ComponentBoundEvent_47_OnButtonClickedEvent__DelegateSignature
struct UMainBackPackPanel_BP_C_BndEvt__Button_Medicine_K2Node_ComponentBoundEvent_47_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__Button_Fitting_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature
struct UMainBackPackPanel_BP_C_BndEvt__Button_Fitting_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__Button_AllItem_K2Node_ComponentBoundEvent_82_OnButtonClickedEvent__DelegateSignature
struct UMainBackPackPanel_BP_C_BndEvt__Button_AllItem_K2Node_ComponentBoundEvent_82_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__Button_Clothing_K2Node_ComponentBoundEvent_111_OnButtonClickedEvent__DelegateSignature
struct UMainBackPackPanel_BP_C_BndEvt__Button_Clothing_K2Node_ComponentBoundEvent_111_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__Button_CloseBackPackUI_K2Node_ComponentBoundEvent_250_OnButtonClickedEvent__DelegateSignature
struct UMainBackPackPanel_BP_C_BndEvt__Button_CloseBackPackUI_K2Node_ComponentBoundEvent_250_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__Slider_DeleteItemNum_K2Node_ComponentBoundEvent_236_OnFloatValueChangedEvent__DelegateSignature
struct UMainBackPackPanel_BP_C_BndEvt__Slider_DeleteItemNum_K2Node_ComponentBoundEvent_236_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_277_OnButtonClickedEvent__DelegateSignature
struct UMainBackPackPanel_BP_C_BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_277_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__Button_OK_K2Node_ComponentBoundEvent_304_OnButtonClickedEvent__DelegateSignature
struct UMainBackPackPanel_BP_C_BndEvt__Button_OK_K2Node_ComponentBoundEvent_304_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__Button_DeleteAll_K2Node_ComponentBoundEvent_220_OnButtonClickedEvent__DelegateSignature
struct UMainBackPackPanel_BP_C_BndEvt__Button_DeleteAll_K2Node_ComponentBoundEvent_220_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__Button_AddItem_K2Node_ComponentBoundEvent_358_OnButtonClickedEvent__DelegateSignature
struct UMainBackPackPanel_BP_C_BndEvt__Button_AddItem_K2Node_ComponentBoundEvent_358_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__Button_ReduceItem_K2Node_ComponentBoundEvent_371_OnButtonClickedEvent__DelegateSignature
struct UMainBackPackPanel_BP_C_BndEvt__Button_ReduceItem_K2Node_ComponentBoundEvent_371_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.CustomEvent_1
struct UMainBackPackPanel_BP_C_CustomEvent_1_Params
{
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BindWeaponMsgEvent
struct UMainBackPackPanel_BP_C_BindWeaponMsgEvent_Params
{
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.UpdateWeaponBySlot1
struct UMainBackPackPanel_BP_C_UpdateWeaponBySlot1_Params
{
	ESurviveWeaponPropSlot                             TargetChangeSlot;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.UpdateWeaponBySlot2
struct UMainBackPackPanel_BP_C_UpdateWeaponBySlot2_Params
{
	ESurviveWeaponPropSlot                             TargetChangeSlot;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ReceivedInitWidget
struct UMainBackPackPanel_BP_C_ReceivedInitWidget_Params
{
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.DelayEnableCharacterTouch
struct UMainBackPackPanel_BP_C_DelayEnableCharacterTouch_Params
{
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.DelayStopFire
struct UMainBackPackPanel_BP_C_DelayStopFire_Params
{
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__ButtonSortPriority_K2Node_ComponentBoundEvent_281_OnButtonClickedEvent__DelegateSignature
struct UMainBackPackPanel_BP_C_BndEvt__ButtonSortPriority_K2Node_ComponentBoundEvent_281_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__ButtonSortTime_K2Node_ComponentBoundEvent_309_OnButtonClickedEvent__DelegateSignature
struct UMainBackPackPanel_BP_C_BndEvt__ButtonSortTime_K2Node_ComponentBoundEvent_309_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_90_OnButtonClickedEvent__DelegateSignature
struct UMainBackPackPanel_BP_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_90_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__InputAmountButton_K2Node_ComponentBoundEvent_225_OnButtonClickedEvent__DelegateSignature
struct UMainBackPackPanel_BP_C_BndEvt__InputAmountButton_K2Node_ComponentBoundEvent_225_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__InputAmountText_K2Node_ComponentBoundEvent_880_OnEditableTextChangedEvent__DelegateSignature
struct UMainBackPackPanel_BP_C_BndEvt__InputAmountText_K2Node_ComponentBoundEvent_880_OnEditableTextChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__MinButton_K2Node_ComponentBoundEvent_1404_OnButtonClickedEvent__DelegateSignature
struct UMainBackPackPanel_BP_C_BndEvt__MinButton_K2Node_ComponentBoundEvent_1404_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__MaxButton_K2Node_ComponentBoundEvent_1421_OnButtonClickedEvent__DelegateSignature
struct UMainBackPackPanel_BP_C_BndEvt__MaxButton_K2Node_ComponentBoundEvent_1421_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__CharacterCaptureCheckBox_K2Node_ComponentBoundEvent_352_OnCheckBoxComponentStateChanged__DelegateSignature
struct UMainBackPackPanel_BP_C_BndEvt__CharacterCaptureCheckBox_K2Node_ComponentBoundEvent_352_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ItemOptEvent
struct UMainBackPackPanel_BP_C_ItemOptEvent_Params
{
	struct FItemDefineID                               DefineID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	EBattleItemOperationType                           operationType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.WeaponChange
struct UMainBackPackPanel_BP_C_WeaponChange_Params
{
	ESurviveWeaponPropSlot                             TargetChangeSlot;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__InputAmountText_K2Node_ComponentBoundEvent_261_OnEditableTextCommittedEvent__DelegateSignature
struct UMainBackPackPanel_BP_C_BndEvt__InputAmountText_K2Node_ComponentBoundEvent_261_OnEditableTextCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.Custom Event_1
struct UMainBackPackPanel_BP_C_Custom_Event_1_Params
{
	ESurviveWeaponPropSlot                             Slot1;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ESurviveWeaponPropSlot                             Slot2;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ReceiveHide
struct UMainBackPackPanel_BP_C_ReceiveHide_Params
{
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ItemStackCountHandlingPressEvent
struct UMainBackPackPanel_BP_C_ItemStackCountHandlingPressEvent_Params
{
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ItemStackCountHandlingReleaseEvent
struct UMainBackPackPanel_BP_C_ItemStackCountHandlingReleaseEvent_Params
{
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ReceiveShow
struct UMainBackPackPanel_BP_C_ReceiveShow_Params
{
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ChangeWeaponAttachemtEvent
struct UMainBackPackPanel_BP_C_ChangeWeaponAttachemtEvent_Params
{
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__WeaponInfoItem_Weapon1_K2Node_ComponentBoundEvent_93_UpdateAvatar__DelegateSignature
struct UMainBackPackPanel_BP_C_BndEvt__WeaponInfoItem_Weapon1_K2Node_ComponentBoundEvent_93_UpdateAvatar__DelegateSignature_Params
{
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__WeaponInfoItem_Weapon2_K2Node_ComponentBoundEvent_188_UpdateAvatar__DelegateSignature
struct UMainBackPackPanel_BP_C_BndEvt__WeaponInfoItem_Weapon2_K2Node_ComponentBoundEvent_188_UpdateAvatar__DelegateSignature_Params
{
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__PistolInfoItem_BP_K2Node_ComponentBoundEvent_320_UpdateAvatar__DelegateSignature
struct UMainBackPackPanel_BP_C_BndEvt__PistolInfoItem_BP_K2Node_ComponentBoundEvent_320_UpdateAvatar__DelegateSignature_Params
{
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.BndEvt__MeleeInfoItem_BP_K2Node_ComponentBoundEvent_405_UpdateAvatar__DelegateSignature
struct UMainBackPackPanel_BP_C_BndEvt__MeleeInfoItem_BP_K2Node_ComponentBoundEvent_405_UpdateAvatar__DelegateSignature_Params
{
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.ExecuteUbergraph_MainBackPackPanel_BP
struct UMainBackPackPanel_BP_C_ExecuteUbergraph_MainBackPackPanel_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainBackPackPanel_BP.MainBackPackPanel_BP_C.CloseBackPack__DelegateSignature
struct UMainBackPackPanel_BP_C_CloseBackPack__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
