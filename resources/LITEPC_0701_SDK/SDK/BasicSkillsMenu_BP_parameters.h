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

// Function BasicSkillsMenu_BP.BasicSkillsMenu_BP_C.IsCustomUIDataValid
struct UBasicSkillsMenu_BP_C_IsCustomUIDataValid_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   SaveDataSize;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BasicSkillsMenu_BP.BasicSkillsMenu_BP_C.SetInteractKeyText
struct UBasicSkillsMenu_BP_C_SetInteractKeyText_Params
{
	EInteractType                                      InType;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasicSkillsMenu_BP.BasicSkillsMenu_BP_C.OnInteractWithWidget
struct UBasicSkillsMenu_BP_C_OnInteractWithWidget_Params
{
	EInteractType                                      InType;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasicSkillsMenu_BP.BasicSkillsMenu_BP_C.HideCanDriveTips
struct UBasicSkillsMenu_BP_C_HideCanDriveTips_Params
{
	bool                                               NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_GuideText_type                   NewParam1;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BasicSkillsMenu_BP.BasicSkillsMenu_BP_C.Destruct
struct UBasicSkillsMenu_BP_C_Destruct_Params
{
};

// Function BasicSkillsMenu_BP.BasicSkillsMenu_BP_C.SetSettingControlUI
struct UBasicSkillsMenu_BP_C_SetSettingControlUI_Params
{
};

// Function BasicSkillsMenu_BP.BasicSkillsMenu_BP_C.BndEvt__BtnRescue_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature
struct UBasicSkillsMenu_BP_C_BndEvt__BtnRescue_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BasicSkillsMenu_BP.BasicSkillsMenu_BP_C.SetCustomizeUIInfo
struct UBasicSkillsMenu_BP_C_SetCustomizeUIInfo_Params
{
	class UBP_SAVEGAME_UIElemLayout_C*                 SaveGame;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                LayoutIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasicSkillsMenu_BP.BasicSkillsMenu_BP_C.ReceivedInitWidget
struct UBasicSkillsMenu_BP_C_ReceivedInitWidget_Params
{
};

// Function BasicSkillsMenu_BP.BasicSkillsMenu_BP_C.OnInteract
struct UBasicSkillsMenu_BP_C_OnInteract_Params
{
	EInteractType                                      InteractType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasicSkillsMenu_BP.BasicSkillsMenu_BP_C.ExecuteUbergraph_BasicSkillsMenu_BP
struct UBasicSkillsMenu_BP_C_ExecuteUbergraph_BasicSkillsMenu_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasicSkillsMenu_BP.BasicSkillsMenu_BP_C.ED_AutoOpenDoor__DelegateSignature
struct UBasicSkillsMenu_BP_C_ED_AutoOpenDoor__DelegateSignature_Params
{
	int                                                openMode;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasicSkillsMenu_BP.BasicSkillsMenu_BP_C.ED_CommonBtn__DelegateSignature
struct UBasicSkillsMenu_BP_C_ED_CommonBtn__DelegateSignature_Params
{
	TEnumAsByte<ECommonBtn>                            Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
