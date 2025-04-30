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

// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.OpenCloseEmote
struct ABP_STExtraPlayerControllerPC_C_OpenCloseEmote_Params
{
	bool                                               SetOpen;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.SetShowPopup
struct ABP_STExtraPlayerControllerPC_C_SetShowPopup_Params
{
	bool                                               ShowPopup;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.ToggleInGameMenu
struct ABP_STExtraPlayerControllerPC_C_ToggleInGameMenu_Params
{
};

// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.PlayerCharacterStopFire
struct ABP_STExtraPlayerControllerPC_C_PlayerCharacterStopFire_Params
{
};

// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.ReleaseScope
struct ABP_STExtraPlayerControllerPC_C_ReleaseScope_Params
{
};

// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.ChangeVehicleSeat
struct ABP_STExtraPlayerControllerPC_C_ChangeVehicleSeat_Params
{
	int                                                InSeatIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.ExitVehicle
struct ABP_STExtraPlayerControllerPC_C_ExitVehicle_Params
{
};

// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.EnterVehicle
struct ABP_STExtraPlayerControllerPC_C_EnterVehicle_Params
{
};

// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.GetVehicleUser
struct ABP_STExtraPlayerControllerPC_C_GetVehicleUser_Params
{
	class UBP_VehicleUser_C*                           VehicleUser;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.HideInventory
struct ABP_STExtraPlayerControllerPC_C_HideInventory_Params
{
};

// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.ToggleMap
struct ABP_STExtraPlayerControllerPC_C_ToggleMap_Params
{
};

// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.ToggleInventory
struct ABP_STExtraPlayerControllerPC_C_ToggleInventory_Params
{
};

// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.DisableCharacterAutoSprint
struct ABP_STExtraPlayerControllerPC_C_DisableCharacterAutoSprint_Params
{
};

// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.UserConstructionScript
struct ABP_STExtraPlayerControllerPC_C_UserConstructionScript_Params
{
};

// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_ToggleInventory_K2Node_InputActionEvent_66
struct ABP_STExtraPlayerControllerPC_C_InpActEvt_ToggleInventory_K2Node_InputActionEvent_66_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_ToggleMap_K2Node_InputActionEvent_65
struct ABP_STExtraPlayerControllerPC_C_InpActEvt_ToggleMap_K2Node_InputActionEvent_65_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_ToVehicleSeat_1_K2Node_InputActionEvent_64
struct ABP_STExtraPlayerControllerPC_C_InpActEvt_ToVehicleSeat_1_K2Node_InputActionEvent_64_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_ToVehicleSeat_2_K2Node_InputActionEvent_63
struct ABP_STExtraPlayerControllerPC_C_InpActEvt_ToVehicleSeat_2_K2Node_InputActionEvent_63_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_ToVehicleSeat_3_K2Node_InputActionEvent_62
struct ABP_STExtraPlayerControllerPC_C_InpActEvt_ToVehicleSeat_3_K2Node_InputActionEvent_62_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_ToVehicleSeat_4_K2Node_InputActionEvent_61
struct ABP_STExtraPlayerControllerPC_C_InpActEvt_ToVehicleSeat_4_K2Node_InputActionEvent_61_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_ToVehicleSeat_5_K2Node_InputActionEvent_60
struct ABP_STExtraPlayerControllerPC_C_InpActEvt_ToVehicleSeat_5_K2Node_InputActionEvent_60_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_ToVehicleSeat_6_K2Node_InputActionEvent_59
struct ABP_STExtraPlayerControllerPC_C_InpActEvt_ToVehicleSeat_6_K2Node_InputActionEvent_59_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_ToVehicleSeat_7_K2Node_InputActionEvent_58
struct ABP_STExtraPlayerControllerPC_C_InpActEvt_ToVehicleSeat_7_K2Node_InputActionEvent_58_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_ToVehicleSeat_8_K2Node_InputActionEvent_57
struct ABP_STExtraPlayerControllerPC_C_InpActEvt_ToVehicleSeat_8_K2Node_InputActionEvent_57_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_ToVehicleSeat_9_K2Node_InputActionEvent_56
struct ABP_STExtraPlayerControllerPC_C_InpActEvt_ToVehicleSeat_9_K2Node_InputActionEvent_56_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_TestGoFightingState_K2Node_InputActionEvent_55
struct ABP_STExtraPlayerControllerPC_C_InpActEvt_TestGoFightingState_K2Node_InputActionEvent_55_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_ToggleInGameMenu_K2Node_InputActionEvent_54
struct ABP_STExtraPlayerControllerPC_C_InpActEvt_ToggleInGameMenu_K2Node_InputActionEvent_54_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_TestGoNextState_K2Node_InputActionEvent_53
struct ABP_STExtraPlayerControllerPC_C_InpActEvt_TestGoNextState_K2Node_InputActionEvent_53_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_PushToTalk_K2Node_InputActionEvent_52
struct ABP_STExtraPlayerControllerPC_C_InpActEvt_PushToTalk_K2Node_InputActionEvent_52_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_PushToTalk_K2Node_InputActionEvent_51
struct ABP_STExtraPlayerControllerPC_C_InpActEvt_PushToTalk_K2Node_InputActionEvent_51_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_SwitchVoiceChannel_K2Node_InputActionEvent_50
struct ABP_STExtraPlayerControllerPC_C_InpActEvt_SwitchVoiceChannel_K2Node_InputActionEvent_50_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_ToggleMuteVoiceChat_K2Node_InputActionEvent_49
struct ABP_STExtraPlayerControllerPC_C_InpActEvt_ToggleMuteVoiceChat_K2Node_InputActionEvent_49_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_ToggleMuteMasterVolume_K2Node_InputActionEvent_48
struct ABP_STExtraPlayerControllerPC_C_InpActEvt_ToggleMuteMasterVolume_K2Node_InputActionEvent_48_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_ToggleUI_K2Node_InputActionEvent_47
struct ABP_STExtraPlayerControllerPC_C_InpActEvt_ToggleUI_K2Node_InputActionEvent_47_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_DeleteMyMarker_K2Node_InputActionEvent_46
struct ABP_STExtraPlayerControllerPC_C_InpActEvt_DeleteMyMarker_K2Node_InputActionEvent_46_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_SetMapMarkerAtCurrentPosition_K2Node_InputActionEvent_45
struct ABP_STExtraPlayerControllerPC_C_InpActEvt_SetMapMarkerAtCurrentPosition_K2Node_InputActionEvent_45_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_ToggleEmoteWheel_K2Node_InputActionEvent_44
struct ABP_STExtraPlayerControllerPC_C_InpActEvt_ToggleEmoteWheel_K2Node_InputActionEvent_44_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_ToggleEmoteWheel_K2Node_InputActionEvent_43
struct ABP_STExtraPlayerControllerPC_C_InpActEvt_ToggleEmoteWheel_K2Node_InputActionEvent_43_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_ToggleExtendedMinimap_K2Node_InputActionEvent_42
struct ABP_STExtraPlayerControllerPC_C_InpActEvt_ToggleExtendedMinimap_K2Node_InputActionEvent_42_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_UseFirstAid_K2Node_InputActionEvent_41
struct ABP_STExtraPlayerControllerPC_C_InpActEvt_UseFirstAid_K2Node_InputActionEvent_41_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_UseMedKit_K2Node_InputActionEvent_40
struct ABP_STExtraPlayerControllerPC_C_InpActEvt_UseMedKit_K2Node_InputActionEvent_40_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_UseBandage_K2Node_InputActionEvent_39
struct ABP_STExtraPlayerControllerPC_C_InpActEvt_UseBandage_K2Node_InputActionEvent_39_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_UseBoostItem_K2Node_InputActionEvent_38
struct ABP_STExtraPlayerControllerPC_C_InpActEvt_UseBoostItem_K2Node_InputActionEvent_38_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_UseHealItem_K2Node_InputActionEvent_37
struct ABP_STExtraPlayerControllerPC_C_InpActEvt_UseHealItem_K2Node_InputActionEvent_37_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_UseAdrenaline_K2Node_InputActionEvent_36
struct ABP_STExtraPlayerControllerPC_C_InpActEvt_UseAdrenaline_K2Node_InputActionEvent_36_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_UsePainkiller_K2Node_InputActionEvent_35
struct ABP_STExtraPlayerControllerPC_C_InpActEvt_UsePainkiller_K2Node_InputActionEvent_35_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_UseEnergyDrink_K2Node_InputActionEvent_34
struct ABP_STExtraPlayerControllerPC_C_InpActEvt_UseEnergyDrink_K2Node_InputActionEvent_34_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_7
struct ABP_STExtraPlayerControllerPC_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_7_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_14
struct ABP_STExtraPlayerControllerPC_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_14_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.ReceiveBeginPlay
struct ABP_STExtraPlayerControllerPC_C_ReceiveBeginPlay_Params
{
};

// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.ToggleInventoryEx
struct ABP_STExtraPlayerControllerPC_C_ToggleInventoryEx_Params
{
};

// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.ExecuteUbergraph_BP_STExtraPlayerControllerPC
struct ABP_STExtraPlayerControllerPC_C_ExecuteUbergraph_BP_STExtraPlayerControllerPC_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
