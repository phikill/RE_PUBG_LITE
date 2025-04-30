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

// Function ConsumableItemList.ConsumableItemList_C.IsCustomUIDataValid
struct UConsumableItemList_C_IsCustomUIDataValid_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   SaveDataSize;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ConsumableItemList.ConsumableItemList_C.IsInSortCD
struct UConsumableItemList_C_IsInSortCD_Params
{
	bool                                               IsInCD;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ConsumableItemList.ConsumableItemList_C.RefreshItemImage
struct UConsumableItemList_C_RefreshItemImage_Params
{
	class UObject*                                     NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConsumableItemList.ConsumableItemList_C.Reconnect_ResetUIByPlayerControllerState
struct UConsumableItemList_C_Reconnect_ResetUIByPlayerControllerState_Params
{
};

// Function ConsumableItemList.ConsumableItemList_C.ResetItemPriorityInArray
struct UConsumableItemList_C_ResetItemPriorityInArray_Params
{
	TArray<struct FCompatableComsumableItemType>       In;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FCompatableComsumableItemType>       Out;                                                      // (Parm, OutParm, ZeroConstructor)
};

// Function ConsumableItemList.ConsumableItemList_C.OnItemClick
struct UConsumableItemList_C_OnItemClick_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConsumableItemList.ConsumableItemList_C.SetSortModeBySetting
struct UConsumableItemList_C_SetSortModeBySetting_Params
{
};

// Function ConsumableItemList.ConsumableItemList_C.SetItemPriorityBySortMode
struct UConsumableItemList_C_SetItemPriorityBySortMode_Params
{
	struct FCompatableComsumableItemType               InData;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FCompatableComsumableItemType               OutData;                                                  // (Parm, OutParm)
};

// Function ConsumableItemList.ConsumableItemList_C.HandleHPChange
struct UConsumableItemList_C_HandleHPChange_Params
{
	float                                              CurHP;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConsumableItemList.ConsumableItemList_C.UpdateInterativeTriangle
struct UConsumableItemList_C_UpdateInterativeTriangle_Params
{
};

// Function ConsumableItemList.ConsumableItemList_C.UpdateItemPressOrRelease
struct UConsumableItemList_C_UpdateItemPressOrRelease_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsPress;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConsumableItemList.ConsumableItemList_C.CollapseFolder
struct UConsumableItemList_C_CollapseFolder_Params
{
};

// Function ConsumableItemList.ConsumableItemList_C.ResetCurUsingItemType
struct UConsumableItemList_C_ResetCurUsingItemType_Params
{
};

// Function ConsumableItemList.ConsumableItemList_C.GetConsumableItemUIWidgetGroupByIndex
struct UConsumableItemList_C_GetConsumableItemUIWidgetGroupByIndex_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UImage*                                      BG;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UImage*                                      ItemImage;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UButton*                                     Btn;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  CountText;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UGridPanel*                                  Grid;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UBorder*                                     Border;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ConsumableItemList.ConsumableItemList_C.UpdateFloderListImage
struct UConsumableItemList_C_UpdateFloderListImage_Params
{
};

// Function ConsumableItemList.ConsumableItemList_C.UpdateFirstItemImage
struct UConsumableItemList_C_UpdateFirstItemImage_Params
{
};

// Function ConsumableItemList.ConsumableItemList_C.IsFirstItemRunOut
struct UConsumableItemList_C_IsFirstItemRunOut_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ConsumableItemList.ConsumableItemList_C.GetConsumItemTypeBySpecificID
struct UConsumableItemList_C_GetConsumItemTypeBySpecificID_Params
{
	struct FItemDefineID                               DefineID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<EConsumeItemType>                      Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ConsumableItemList.ConsumableItemList_C.UpdateConsumableItemArray
struct UConsumableItemList_C_UpdateConsumableItemArray_Params
{
};

// Function ConsumableItemList.ConsumableItemList_C.IsAConsumableItem
struct UConsumableItemList_C_IsAConsumableItem_Params
{
	struct FItemDefineID                               DefineID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsComsumableItem;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ConsumableItemList.ConsumableItemList_C.GetConsumableItemDataTableMap
struct UConsumableItemList_C_GetConsumableItemDataTableMap_Params
{
	TMap<int, struct FBP_STRUCT_Item_type>             DataTableRowMap;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function ConsumableItemList.ConsumableItemList_C.GetPlayerCharacter
struct UConsumableItemList_C_GetPlayerCharacter_Params
{
	class ASTExtraPlayerCharacter*                     PlayerCharacter;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ConsumableItemList.ConsumableItemList_C.SimulateExpand
struct UConsumableItemList_C_SimulateExpand_Params
{
};

// Function ConsumableItemList.ConsumableItemList_C.BndEvt__InterativeBtn_K2Node_ComponentBoundEvent_767_OnButtonReleasedEvent__DelegateSignature
struct UConsumableItemList_C_BndEvt__InterativeBtn_K2Node_ComponentBoundEvent_767_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function ConsumableItemList.ConsumableItemList_C.BndEvt__InterativeBtn_K2Node_ComponentBoundEvent_757_OnButtonPressedEvent__DelegateSignature
struct UConsumableItemList_C_BndEvt__InterativeBtn_K2Node_ComponentBoundEvent_757_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function ConsumableItemList.ConsumableItemList_C.ReceivedInitWidget
struct UConsumableItemList_C_ReceivedInitWidget_Params
{
};

// Function ConsumableItemList.ConsumableItemList_C.BndEvt__CurUseFirstItemBtn_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
struct UConsumableItemList_C_BndEvt__CurUseFirstItemBtn_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function ConsumableItemList.ConsumableItemList_C.BndEvt__CurUseFirstItemBtn_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
struct UConsumableItemList_C_BndEvt__CurUseFirstItemBtn_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function ConsumableItemList.ConsumableItemList_C.BndEvt__ConsumeItem1Btn_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
struct UConsumableItemList_C_BndEvt__ConsumeItem1Btn_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function ConsumableItemList.ConsumableItemList_C.BndEvt__ConsumeItem1Btn_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature
struct UConsumableItemList_C_BndEvt__ConsumeItem1Btn_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function ConsumableItemList.ConsumableItemList_C.BndEvt__ConsumeItem2Btn_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature
struct UConsumableItemList_C_BndEvt__ConsumeItem2Btn_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function ConsumableItemList.ConsumableItemList_C.BndEvt__ConsumeItem2Btn_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature
struct UConsumableItemList_C_BndEvt__ConsumeItem2Btn_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function ConsumableItemList.ConsumableItemList_C.BndEvt__ConsumeItem3Btn_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature
struct UConsumableItemList_C_BndEvt__ConsumeItem3Btn_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function ConsumableItemList.ConsumableItemList_C.BndEvt__ConsumeItem3Btn_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature
struct UConsumableItemList_C_BndEvt__ConsumeItem3Btn_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function ConsumableItemList.ConsumableItemList_C.BndEvt__ConsumeItem4Btn_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature
struct UConsumableItemList_C_BndEvt__ConsumeItem4Btn_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function ConsumableItemList.ConsumableItemList_C.BndEvt__ConsumeItem4Btn_K2Node_ComponentBoundEvent_10_OnButtonReleasedEvent__DelegateSignature
struct UConsumableItemList_C_BndEvt__ConsumeItem4Btn_K2Node_ComponentBoundEvent_10_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function ConsumableItemList.ConsumableItemList_C.BndEvt__ConsumeItem5Btn_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature
struct UConsumableItemList_C_BndEvt__ConsumeItem5Btn_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function ConsumableItemList.ConsumableItemList_C.BndEvt__ConsumeItem5Btn_K2Node_ComponentBoundEvent_12_OnButtonReleasedEvent__DelegateSignature
struct UConsumableItemList_C_BndEvt__ConsumeItem5Btn_K2Node_ComponentBoundEvent_12_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function ConsumableItemList.ConsumableItemList_C.IntelligentSort
struct UConsumableItemList_C_IntelligentSort_Params
{
	bool                                               BoolValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConsumableItemList.ConsumableItemList_C.SetSettingControlUI
struct UConsumableItemList_C_SetSettingControlUI_Params
{
};

// Function ConsumableItemList.ConsumableItemList_C.OnLocalCharacterHPChangeDel_Event
struct UConsumableItemList_C_OnLocalCharacterHPChangeDel_Event_Params
{
	float                                              currentHP;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ratioHP;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConsumableItemList.ConsumableItemList_C.ItemUpdated
struct UConsumableItemList_C_ItemUpdated_Params
{
	struct FItemDefineID                               DefineID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ConsumableItemList.ConsumableItemList_C.HandleItemUpdate
struct UConsumableItemList_C_HandleItemUpdate_Params
{
};

// Function ConsumableItemList.ConsumableItemList_C.UseFirstItem
struct UConsumableItemList_C_UseFirstItem_Params
{
};

// Function ConsumableItemList.ConsumableItemList_C.SetCustomizeUIInfo
struct UConsumableItemList_C_SetCustomizeUIInfo_Params
{
	class UBP_SAVEGAME_UIElemLayout_C*                 SaveGame;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                LayoutIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConsumableItemList.ConsumableItemList_C.ExecuteUbergraph_ConsumableItemList
struct UConsumableItemList_C_ExecuteUbergraph_ConsumableItemList_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
