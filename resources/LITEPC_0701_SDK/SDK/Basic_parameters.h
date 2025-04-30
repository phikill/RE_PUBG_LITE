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

// Function Basic.ItemHandleBase.SetAssociation
struct UItemHandleBase_SetAssociation_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FItemAssociation                            Association;                                              // (Parm)
};

// Function Basic.ItemHandleBase.RemoveAssociation
struct UItemHandleBase_RemoveAssociation_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.ItemHandleBase.Init
struct UItemHandleBase_Init_Params
{
	struct FItemDefineID                               InDefineID;                                               // (Parm)
};

// Function Basic.ItemHandleBase.GetDefineID
struct UItemHandleBase_GetDefineID_Params
{
	struct FItemDefineID                               ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function Basic.ItemHandleBase.GetAssociationMap
struct UItemHandleBase_GetAssociationMap_Params
{
	TMap<struct FName, struct FItemAssociation>        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Basic.ItemHandleBase.GetAssociationListByTargetType
struct UItemHandleBase_GetAssociationListByTargetType_Params
{
	int                                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FItemAssociation>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Basic.ItemHandleBase.GetAssociationByTargetDefineID
struct UItemHandleBase_GetAssociationByTargetDefineID_Params
{
	struct FItemDefineID                               TargetDefineID;                                           // (Parm)
	struct FItemAssociation                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Basic.ItemHandleBase.GetAssociation
struct UItemHandleBase_GetAssociation_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FItemAssociation                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Basic.ItemHandleBase.AddAssociation
struct UItemHandleBase_AddAssociation_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FItemAssociation                            Association;                                              // (Parm)
};

// Function Basic.BattleItemHandleBase.HandleUse
struct UBattleItemHandleBase_HandleUse_Params
{
	struct FBattleItemUseTarget                        Target;                                                   // (Parm)
	EBattleItemUseReason                               Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.BattleItemHandleBase.HandlePickup
struct UBattleItemHandleBase_HandlePickup_Params
{
	TScriptInterface<class UItemContainerInterface>    ItemContainer;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FBattleItemPickupInfo                       PickupInfo;                                               // (Parm)
	EBattleItemPickupReason                            Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.BattleItemHandleBase.HandleDrop
struct UBattleItemHandleBase_HandleDrop_Params
{
	int                                                InCount;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	EBattleItemDropReason                              Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.BattleItemHandleBase.HandleDisuse
struct UBattleItemHandleBase_HandleDisuse_Params
{
	EBattleItemDisuseReason                            Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.BattleItemHandleBase.GetWorldInternal
struct UBattleItemHandleBase_GetWorldInternal_Params
{
	class UWorld*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.BattleItemHandleBase.ExtractItemData
struct UBattleItemHandleBase_ExtractItemData_Params
{
	struct FBattleItemData                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Basic.UAEGameInstance.GetWeatherID
struct UUAEGameInstance_GetWeatherID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UAEGameInstance.GetLocalPlayerNetId
struct UUAEGameInstance_GetLocalPlayerNetId_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Basic.UAEGameInstance.GetDeviceLevel
struct UUAEGameInstance_GetDeviceLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UAEGameInstance.GetAssociatedFrontendHUD
struct UUAEGameInstance_GetAssociatedFrontendHUD_Params
{
	class UFrontendHUD*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.AttrModifyComponent.RegisterModifyAbleAttr
struct UAttrModifyComponent_RegisterModifyAbleAttr_Params
{
	TArray<struct FAttrRegisterItem>                   AttrRegists;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.AttrModifyComponent.OnRep_DynamicModifierList
struct UAttrModifyComponent_OnRep_DynamicModifierList_Params
{
};

// Function Basic.AttrModifyComponent.OnRep_AttrModifyStateList
struct UAttrModifyComponent_OnRep_AttrModifyStateList_Params
{
};

// DelegateFunction Basic.AttrModifyComponent.OnAttrModifiedEvent__DelegateSignature
struct UAttrModifyComponent_OnAttrModifiedEvent__DelegateSignature_Params
{
	TArray<struct FAttrAffected>                       AffectedAttrS;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Basic.AttrModifyComponent.EnableAttrModifier
struct UAttrModifyComponent_EnableAttrModifier_Params
{
	struct FString                                     AttrModifyItemName;                                       // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.AttrModifyComponent.EnableAllAttrModifier
struct UAttrModifyComponent_EnableAllAttrModifier_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.AttrModifyComponent.DisableModifierToActor
struct UAttrModifyComponent_DisableModifierToActor_Params
{
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.AttrModifyComponent.DisableAttrModifier
struct UAttrModifyComponent_DisableAttrModifier_Params
{
	struct FString                                     AttrModifyItemName;                                       // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.AttrModifyComponent.DisableAllAttrModifier
struct UAttrModifyComponent_DisableAllAttrModifier_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.AttrModifyInterface.GetRelevantActors
struct UAttrModifyInterface_GetRelevantActors_Params
{
	TArray<class AActor*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Basic.AttrModifyInterface.GetAttrModifyComponent
struct UAttrModifyInterface_GetAttrModifyComponent_Params
{
	class UAttrModifyComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Basic.BPClassManager.GetUClass
struct UBPClassManager_GetUClass_Params
{
	int                                                KeyIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.BPClassManager.GetBPClassOverrideByName
struct UBPClassManager_GetBPClassOverrideByName_Params
{
	struct FString                                     ClassTagName;                                             // (Parm, ZeroConstructor)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.BPClassManager.GetBPClassOverride
struct UBPClassManager_GetBPClassOverride_Params
{
	class UClass*                                      InNativeClass;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.BPClassManager.Get
struct UBPClassManager_Get_Params
{
	class UBPClassManager*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.ItemContainerInterface.GetOwningObject
struct UItemContainerInterface_GetOwningObject_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.ItemContainerInterface.GetItemHandleListByDefineID
struct UItemContainerInterface_GetItemHandleListByDefineID_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
	TArray<class UItemHandleBase*>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Basic.ItemContainerInterface.GetItemHandleByDefineID
struct UItemContainerInterface_GetItemHandleByDefineID_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
	class UItemHandleBase*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.ItemContainerInterface.GetItemDefineIDList
struct UItemContainerInterface_GetItemDefineIDList_Params
{
	TArray<struct FItemDefineID>                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Basic.PackTool.CookResBySelection
struct UPackTool_CookResBySelection_Params
{
};

// Function Basic.STBaseBuff.GetBuffPassPercentage
struct USTBaseBuff_GetBuffPassPercentage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBaseBuffCarrierInterface.SyncInvincibleData
struct USTBaseBuffCarrierInterface_SyncInvincibleData_Params
{
	float                                              TotalTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.STBaseBuffCarrierInterface.RemoveBuff
struct USTBaseBuffCarrierInterface_RemoveBuff_Params
{
	struct FName                                       BuffName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RemoveLayerOnly;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBaseBuffCarrierInterface.IsSameTeamWithFirstPC
struct USTBaseBuffCarrierInterface_IsSameTeamWithFirstPC_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBaseBuffCarrierInterface.HasBuff
struct USTBaseBuffCarrierInterface_HasBuff_Params
{
	struct FName                                       BuffName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBaseBuffCarrierInterface.GetBuffByName
struct USTBaseBuffCarrierInterface_GetBuffByName_Params
{
	struct FName                                       BuffName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class USTBaseBuff*                                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Basic.STBaseBuffCarrierInterface.AddBuffLayer
struct USTBaseBuffCarrierInterface_AddBuffLayer_Params
{
	struct FName                                       BuffName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                layerNum;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBaseBuffCarrierInterface.AddBuffExpiry
struct USTBaseBuffCarrierInterface_AddBuffExpiry_Params
{
	struct FName                                       BuffName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ExpirySeconds;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBaseBuffCarrierInterface.AddBuff
struct USTBaseBuffCarrierInterface_AddBuff_Params
{
	struct FName                                       BuffName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 SkillActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LayerCount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      BuffApplierActor;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBaseBuffSystemComponent.ResetForDeath
struct USTBaseBuffSystemComponent_ResetForDeath_Params
{
};

// Function Basic.STBaseBuffSystemComponent.RemoveBuffWithCauser
struct USTBaseBuffSystemComponent_RemoveBuffWithCauser_Params
{
	struct FName                                       BuffName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RemoveLayerOnly;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 pCauser;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBaseBuffSystemComponent.RemoveBuffByID
struct USTBaseBuffSystemComponent_RemoveBuffByID_Params
{
	int                                                BuffID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RemoveLayerOnly;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 pCauser;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBaseBuffSystemComponent.RemoveBuff
struct USTBaseBuffSystemComponent_RemoveBuff_Params
{
	struct FName                                       BuffName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RemoveLayerOnly;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBaseBuffSystemComponent.IsBufferMutexed
struct USTBaseBuffSystemComponent_IsBufferMutexed_Params
{
	struct FName                                       NewBuffName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBaseBuffSystemComponent.InitModifier
struct USTBaseBuffSystemComponent_InitModifier_Params
{
	class APawn*                                       TempPawn;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.STBaseBuffSystemComponent.HasBuff
struct USTBaseBuffSystemComponent_HasBuff_Params
{
	struct FName                                       BuffName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBaseBuffSystemComponent.GetBuffName
struct USTBaseBuffSystemComponent_GetBuffName_Params
{
	int                                                BuffID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBaseBuffSystemComponent.GetBuffID
struct USTBaseBuffSystemComponent_GetBuffID_Params
{
	struct FName                                       BuffName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBaseBuffSystemComponent.GetBuffByName
struct USTBaseBuffSystemComponent_GetBuffByName_Params
{
	struct FName                                       BuffName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class USTBaseBuff*                                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Basic.STBaseBuffSystemComponent.ClientSimulateRemoveBuff
struct USTBaseBuffSystemComponent_ClientSimulateRemoveBuff_Params
{
	struct FName                                       BuffName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RemoveLayerOnly;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.STBaseBuffSystemComponent.ClientSimulateAddBuff
struct USTBaseBuffSystemComponent_ClientSimulateAddBuff_Params
{
	struct FName                                       BuffName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 BuffCauser;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LayerCount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.STBaseBuffSystemComponent.ClientMulticastSimulateRemoveBuff
struct USTBaseBuffSystemComponent_ClientMulticastSimulateRemoveBuff_Params
{
	struct FName                                       BuffName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RemoveLayerOnly;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.STBaseBuffSystemComponent.ClientMulticastSimulateAddBuff
struct USTBaseBuffSystemComponent_ClientMulticastSimulateAddBuff_Params
{
	struct FName                                       BuffName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 BuffCauser;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LayerCount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.STBaseBuffSystemComponent.ClearBuff
struct USTBaseBuffSystemComponent_ClearBuff_Params
{
	bool                                               bDebuff;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bGainBuff;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.STBaseBuffSystemComponent.CheckBuffStatus
struct USTBaseBuffSystemComponent_CheckBuffStatus_Params
{
	class UClass*                                      status;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBaseBuffSystemComponent.AddBuffLayer
struct USTBaseBuffSystemComponent_AddBuffLayer_Params
{
	struct FName                                       BuffName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                layerNum;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBaseBuffSystemComponent.AddBuffExpiry
struct USTBaseBuffSystemComponent_AddBuffExpiry_Params
{
	struct FName                                       BuffName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ExpirySeconds;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBaseBuffSystemComponent.AddBuffByID
struct USTBaseBuffSystemComponent_AddBuffByID_Params
{
	int                                                BuffID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 BuffCauser;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LayerCount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      BuffApplierActor;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBaseBuffSystemComponent.AddBuff
struct USTBaseBuffSystemComponent_AddBuff_Params
{
	struct FName                                       BuffName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 BuffCauser;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LayerCount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      BuffApplierActor;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.BPTable.GetSkinPath
struct UBPTable_GetSkinPath_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Basic.BPTable.GetPath
struct UBPTable_GetPath_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Basic.BPTable.GetParentID
struct UBPTable_GetParentID_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Basic.BPTable.GetClass
struct UBPTable_GetClass_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UAELoadedClassManager.InitTableData
struct UUAELoadedClassManager_InitTableData_Params
{
};

// Function Basic.UAELoadedClassManager.InitBPTableMap
struct UUAELoadedClassManager_InitBPTableMap_Params
{
};

// Function Basic.UAELoadedClassManager.Init
struct UUAELoadedClassManager_Init_Params
{
};

// Function Basic.UAELoadedClassManager.GetSkinPath
struct UUAELoadedClassManager_GetSkinPath_Params
{
	struct FString                                     BPTableName;                                              // (Parm, ZeroConstructor)
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Basic.UAELoadedClassManager.GetPath
struct UUAELoadedClassManager_GetPath_Params
{
	struct FString                                     BPTableName;                                              // (Parm, ZeroConstructor)
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Basic.UAELoadedClassManager.GetParentID
struct UUAELoadedClassManager_GetParentID_Params
{
	struct FString                                     BPTableName;                                              // (Parm, ZeroConstructor)
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Basic.UAELoadedClassManager.GetClass
struct UUAELoadedClassManager_GetClass_Params
{
	struct FString                                     BPTableName;                                              // (Parm, ZeroConstructor)
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UAELoadedClassManager.Get
struct UUAELoadedClassManager_Get_Params
{
	class UUAELoadedClassManager*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UAELoadedClassManager.CreateAndAddBPTable
struct UUAELoadedClassManager_CreateAndAddBPTable_Params
{
	struct FString                                     BPTableName;                                              // (Parm, ZeroConstructor)
	class UBPTable*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UAELoadedClassManager.ClearAllData
struct UUAELoadedClassManager_ClearAllData_Params
{
};

// Function Basic.UAETableManager.ReleaseTable
struct UUAETableManager_ReleaseTable_Params
{
	struct FName                                       TableName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.UAETableManager.GetTablePtr
struct UUAETableManager_GetTablePtr_Params
{
	struct FName                                       TableName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UUAEDataTable*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
