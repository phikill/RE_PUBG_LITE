
#include "../SDK.h"

// Name: LitePC_0701, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.OpenCloseEmote
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SetOpen                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerControllerPC_C::OpenCloseEmote(bool SetOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.OpenCloseEmote");

	ABP_STExtraPlayerControllerPC_C_OpenCloseEmote_Params params;
	params.SetOpen = SetOpen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.SetShowPopup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShowPopup                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerControllerPC_C::SetShowPopup(bool ShowPopup)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.SetShowPopup");

	ABP_STExtraPlayerControllerPC_C_SetShowPopup_Params params;
	params.ShowPopup = ShowPopup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.ToggleInGameMenu
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerControllerPC_C::ToggleInGameMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.ToggleInGameMenu");

	ABP_STExtraPlayerControllerPC_C_ToggleInGameMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.PlayerCharacterStopFire
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerControllerPC_C::PlayerCharacterStopFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.PlayerCharacterStopFire");

	ABP_STExtraPlayerControllerPC_C_PlayerCharacterStopFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.ReleaseScope
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerControllerPC_C::ReleaseScope()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.ReleaseScope");

	ABP_STExtraPlayerControllerPC_C_ReleaseScope_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.ChangeVehicleSeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InSeatIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerControllerPC_C::ChangeVehicleSeat(int InSeatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.ChangeVehicleSeat");

	ABP_STExtraPlayerControllerPC_C_ChangeVehicleSeat_Params params;
	params.InSeatIndex = InSeatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.ExitVehicle
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerControllerPC_C::ExitVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.ExitVehicle");

	ABP_STExtraPlayerControllerPC_C_ExitVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.EnterVehicle
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerControllerPC_C::EnterVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.EnterVehicle");

	ABP_STExtraPlayerControllerPC_C_EnterVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.GetVehicleUser
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_VehicleUser_C*       VehicleUser                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerControllerPC_C::GetVehicleUser(class UBP_VehicleUser_C** VehicleUser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.GetVehicleUser");

	ABP_STExtraPlayerControllerPC_C_GetVehicleUser_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (VehicleUser != nullptr)
		*VehicleUser = params.VehicleUser;
}


// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.HideInventory
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerControllerPC_C::HideInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.HideInventory");

	ABP_STExtraPlayerControllerPC_C_HideInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.ToggleMap
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerControllerPC_C::ToggleMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.ToggleMap");

	ABP_STExtraPlayerControllerPC_C_ToggleMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.ToggleInventory
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerControllerPC_C::ToggleInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.ToggleInventory");

	ABP_STExtraPlayerControllerPC_C_ToggleInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.DisableCharacterAutoSprint
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerControllerPC_C::DisableCharacterAutoSprint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.DisableCharacterAutoSprint");

	ABP_STExtraPlayerControllerPC_C_DisableCharacterAutoSprint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerControllerPC_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.UserConstructionScript");

	ABP_STExtraPlayerControllerPC_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_ToggleInventory_K2Node_InputActionEvent_66
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_STExtraPlayerControllerPC_C::InpActEvt_ToggleInventory_K2Node_InputActionEvent_66(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_ToggleInventory_K2Node_InputActionEvent_66");

	ABP_STExtraPlayerControllerPC_C_InpActEvt_ToggleInventory_K2Node_InputActionEvent_66_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_ToggleMap_K2Node_InputActionEvent_65
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_STExtraPlayerControllerPC_C::InpActEvt_ToggleMap_K2Node_InputActionEvent_65(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_ToggleMap_K2Node_InputActionEvent_65");

	ABP_STExtraPlayerControllerPC_C_InpActEvt_ToggleMap_K2Node_InputActionEvent_65_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_ToVehicleSeat_1_K2Node_InputActionEvent_64
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_STExtraPlayerControllerPC_C::InpActEvt_ToVehicleSeat_1_K2Node_InputActionEvent_64(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_ToVehicleSeat_1_K2Node_InputActionEvent_64");

	ABP_STExtraPlayerControllerPC_C_InpActEvt_ToVehicleSeat_1_K2Node_InputActionEvent_64_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_ToVehicleSeat_2_K2Node_InputActionEvent_63
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_STExtraPlayerControllerPC_C::InpActEvt_ToVehicleSeat_2_K2Node_InputActionEvent_63(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_ToVehicleSeat_2_K2Node_InputActionEvent_63");

	ABP_STExtraPlayerControllerPC_C_InpActEvt_ToVehicleSeat_2_K2Node_InputActionEvent_63_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_ToVehicleSeat_3_K2Node_InputActionEvent_62
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_STExtraPlayerControllerPC_C::InpActEvt_ToVehicleSeat_3_K2Node_InputActionEvent_62(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_ToVehicleSeat_3_K2Node_InputActionEvent_62");

	ABP_STExtraPlayerControllerPC_C_InpActEvt_ToVehicleSeat_3_K2Node_InputActionEvent_62_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_ToVehicleSeat_4_K2Node_InputActionEvent_61
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_STExtraPlayerControllerPC_C::InpActEvt_ToVehicleSeat_4_K2Node_InputActionEvent_61(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_ToVehicleSeat_4_K2Node_InputActionEvent_61");

	ABP_STExtraPlayerControllerPC_C_InpActEvt_ToVehicleSeat_4_K2Node_InputActionEvent_61_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_ToVehicleSeat_5_K2Node_InputActionEvent_60
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_STExtraPlayerControllerPC_C::InpActEvt_ToVehicleSeat_5_K2Node_InputActionEvent_60(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_ToVehicleSeat_5_K2Node_InputActionEvent_60");

	ABP_STExtraPlayerControllerPC_C_InpActEvt_ToVehicleSeat_5_K2Node_InputActionEvent_60_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_ToVehicleSeat_6_K2Node_InputActionEvent_59
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_STExtraPlayerControllerPC_C::InpActEvt_ToVehicleSeat_6_K2Node_InputActionEvent_59(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_ToVehicleSeat_6_K2Node_InputActionEvent_59");

	ABP_STExtraPlayerControllerPC_C_InpActEvt_ToVehicleSeat_6_K2Node_InputActionEvent_59_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_ToVehicleSeat_7_K2Node_InputActionEvent_58
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_STExtraPlayerControllerPC_C::InpActEvt_ToVehicleSeat_7_K2Node_InputActionEvent_58(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_ToVehicleSeat_7_K2Node_InputActionEvent_58");

	ABP_STExtraPlayerControllerPC_C_InpActEvt_ToVehicleSeat_7_K2Node_InputActionEvent_58_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_ToVehicleSeat_8_K2Node_InputActionEvent_57
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_STExtraPlayerControllerPC_C::InpActEvt_ToVehicleSeat_8_K2Node_InputActionEvent_57(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_ToVehicleSeat_8_K2Node_InputActionEvent_57");

	ABP_STExtraPlayerControllerPC_C_InpActEvt_ToVehicleSeat_8_K2Node_InputActionEvent_57_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_ToVehicleSeat_9_K2Node_InputActionEvent_56
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_STExtraPlayerControllerPC_C::InpActEvt_ToVehicleSeat_9_K2Node_InputActionEvent_56(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_ToVehicleSeat_9_K2Node_InputActionEvent_56");

	ABP_STExtraPlayerControllerPC_C_InpActEvt_ToVehicleSeat_9_K2Node_InputActionEvent_56_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_TestGoFightingState_K2Node_InputActionEvent_55
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_STExtraPlayerControllerPC_C::InpActEvt_TestGoFightingState_K2Node_InputActionEvent_55(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_TestGoFightingState_K2Node_InputActionEvent_55");

	ABP_STExtraPlayerControllerPC_C_InpActEvt_TestGoFightingState_K2Node_InputActionEvent_55_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_ToggleInGameMenu_K2Node_InputActionEvent_54
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_STExtraPlayerControllerPC_C::InpActEvt_ToggleInGameMenu_K2Node_InputActionEvent_54(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_ToggleInGameMenu_K2Node_InputActionEvent_54");

	ABP_STExtraPlayerControllerPC_C_InpActEvt_ToggleInGameMenu_K2Node_InputActionEvent_54_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_TestGoNextState_K2Node_InputActionEvent_53
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_STExtraPlayerControllerPC_C::InpActEvt_TestGoNextState_K2Node_InputActionEvent_53(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_TestGoNextState_K2Node_InputActionEvent_53");

	ABP_STExtraPlayerControllerPC_C_InpActEvt_TestGoNextState_K2Node_InputActionEvent_53_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_PushToTalk_K2Node_InputActionEvent_52
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_STExtraPlayerControllerPC_C::InpActEvt_PushToTalk_K2Node_InputActionEvent_52(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_PushToTalk_K2Node_InputActionEvent_52");

	ABP_STExtraPlayerControllerPC_C_InpActEvt_PushToTalk_K2Node_InputActionEvent_52_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_PushToTalk_K2Node_InputActionEvent_51
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_STExtraPlayerControllerPC_C::InpActEvt_PushToTalk_K2Node_InputActionEvent_51(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_PushToTalk_K2Node_InputActionEvent_51");

	ABP_STExtraPlayerControllerPC_C_InpActEvt_PushToTalk_K2Node_InputActionEvent_51_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_SwitchVoiceChannel_K2Node_InputActionEvent_50
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_STExtraPlayerControllerPC_C::InpActEvt_SwitchVoiceChannel_K2Node_InputActionEvent_50(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_SwitchVoiceChannel_K2Node_InputActionEvent_50");

	ABP_STExtraPlayerControllerPC_C_InpActEvt_SwitchVoiceChannel_K2Node_InputActionEvent_50_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_ToggleMuteVoiceChat_K2Node_InputActionEvent_49
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_STExtraPlayerControllerPC_C::InpActEvt_ToggleMuteVoiceChat_K2Node_InputActionEvent_49(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_ToggleMuteVoiceChat_K2Node_InputActionEvent_49");

	ABP_STExtraPlayerControllerPC_C_InpActEvt_ToggleMuteVoiceChat_K2Node_InputActionEvent_49_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_ToggleMuteMasterVolume_K2Node_InputActionEvent_48
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_STExtraPlayerControllerPC_C::InpActEvt_ToggleMuteMasterVolume_K2Node_InputActionEvent_48(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_ToggleMuteMasterVolume_K2Node_InputActionEvent_48");

	ABP_STExtraPlayerControllerPC_C_InpActEvt_ToggleMuteMasterVolume_K2Node_InputActionEvent_48_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_ToggleUI_K2Node_InputActionEvent_47
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_STExtraPlayerControllerPC_C::InpActEvt_ToggleUI_K2Node_InputActionEvent_47(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_ToggleUI_K2Node_InputActionEvent_47");

	ABP_STExtraPlayerControllerPC_C_InpActEvt_ToggleUI_K2Node_InputActionEvent_47_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_DeleteMyMarker_K2Node_InputActionEvent_46
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_STExtraPlayerControllerPC_C::InpActEvt_DeleteMyMarker_K2Node_InputActionEvent_46(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_DeleteMyMarker_K2Node_InputActionEvent_46");

	ABP_STExtraPlayerControllerPC_C_InpActEvt_DeleteMyMarker_K2Node_InputActionEvent_46_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_SetMapMarkerAtCurrentPosition_K2Node_InputActionEvent_45
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_STExtraPlayerControllerPC_C::InpActEvt_SetMapMarkerAtCurrentPosition_K2Node_InputActionEvent_45(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_SetMapMarkerAtCurrentPosition_K2Node_InputActionEvent_45");

	ABP_STExtraPlayerControllerPC_C_InpActEvt_SetMapMarkerAtCurrentPosition_K2Node_InputActionEvent_45_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_ToggleEmoteWheel_K2Node_InputActionEvent_44
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_STExtraPlayerControllerPC_C::InpActEvt_ToggleEmoteWheel_K2Node_InputActionEvent_44(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_ToggleEmoteWheel_K2Node_InputActionEvent_44");

	ABP_STExtraPlayerControllerPC_C_InpActEvt_ToggleEmoteWheel_K2Node_InputActionEvent_44_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_ToggleEmoteWheel_K2Node_InputActionEvent_43
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_STExtraPlayerControllerPC_C::InpActEvt_ToggleEmoteWheel_K2Node_InputActionEvent_43(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_ToggleEmoteWheel_K2Node_InputActionEvent_43");

	ABP_STExtraPlayerControllerPC_C_InpActEvt_ToggleEmoteWheel_K2Node_InputActionEvent_43_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_ToggleExtendedMinimap_K2Node_InputActionEvent_42
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_STExtraPlayerControllerPC_C::InpActEvt_ToggleExtendedMinimap_K2Node_InputActionEvent_42(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_ToggleExtendedMinimap_K2Node_InputActionEvent_42");

	ABP_STExtraPlayerControllerPC_C_InpActEvt_ToggleExtendedMinimap_K2Node_InputActionEvent_42_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_UseFirstAid_K2Node_InputActionEvent_41
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_STExtraPlayerControllerPC_C::InpActEvt_UseFirstAid_K2Node_InputActionEvent_41(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_UseFirstAid_K2Node_InputActionEvent_41");

	ABP_STExtraPlayerControllerPC_C_InpActEvt_UseFirstAid_K2Node_InputActionEvent_41_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_UseMedKit_K2Node_InputActionEvent_40
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_STExtraPlayerControllerPC_C::InpActEvt_UseMedKit_K2Node_InputActionEvent_40(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_UseMedKit_K2Node_InputActionEvent_40");

	ABP_STExtraPlayerControllerPC_C_InpActEvt_UseMedKit_K2Node_InputActionEvent_40_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_UseBandage_K2Node_InputActionEvent_39
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_STExtraPlayerControllerPC_C::InpActEvt_UseBandage_K2Node_InputActionEvent_39(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_UseBandage_K2Node_InputActionEvent_39");

	ABP_STExtraPlayerControllerPC_C_InpActEvt_UseBandage_K2Node_InputActionEvent_39_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_UseBoostItem_K2Node_InputActionEvent_38
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_STExtraPlayerControllerPC_C::InpActEvt_UseBoostItem_K2Node_InputActionEvent_38(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_UseBoostItem_K2Node_InputActionEvent_38");

	ABP_STExtraPlayerControllerPC_C_InpActEvt_UseBoostItem_K2Node_InputActionEvent_38_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_UseHealItem_K2Node_InputActionEvent_37
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_STExtraPlayerControllerPC_C::InpActEvt_UseHealItem_K2Node_InputActionEvent_37(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_UseHealItem_K2Node_InputActionEvent_37");

	ABP_STExtraPlayerControllerPC_C_InpActEvt_UseHealItem_K2Node_InputActionEvent_37_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_UseAdrenaline_K2Node_InputActionEvent_36
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_STExtraPlayerControllerPC_C::InpActEvt_UseAdrenaline_K2Node_InputActionEvent_36(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_UseAdrenaline_K2Node_InputActionEvent_36");

	ABP_STExtraPlayerControllerPC_C_InpActEvt_UseAdrenaline_K2Node_InputActionEvent_36_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_UsePainkiller_K2Node_InputActionEvent_35
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_STExtraPlayerControllerPC_C::InpActEvt_UsePainkiller_K2Node_InputActionEvent_35(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_UsePainkiller_K2Node_InputActionEvent_35");

	ABP_STExtraPlayerControllerPC_C_InpActEvt_UsePainkiller_K2Node_InputActionEvent_35_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_UseEnergyDrink_K2Node_InputActionEvent_34
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_STExtraPlayerControllerPC_C::InpActEvt_UseEnergyDrink_K2Node_InputActionEvent_34(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpActEvt_UseEnergyDrink_K2Node_InputActionEvent_34");

	ABP_STExtraPlayerControllerPC_C_InpActEvt_UseEnergyDrink_K2Node_InputActionEvent_34_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_7
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerControllerPC_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_7(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_7");

	ABP_STExtraPlayerControllerPC_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_7_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_14
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerControllerPC_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_14(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_14");

	ABP_STExtraPlayerControllerPC_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_14_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_STExtraPlayerControllerPC_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.ReceiveBeginPlay");

	ABP_STExtraPlayerControllerPC_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.ToggleInventoryEx
// (Event, Public, BlueprintEvent)

void ABP_STExtraPlayerControllerPC_C::ToggleInventoryEx()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.ToggleInventoryEx");

	ABP_STExtraPlayerControllerPC_C_ToggleInventoryEx_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.ExecuteUbergraph_BP_STExtraPlayerControllerPC
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerControllerPC_C::ExecuteUbergraph_BP_STExtraPlayerControllerPC(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C.ExecuteUbergraph_BP_STExtraPlayerControllerPC");

	ABP_STExtraPlayerControllerPC_C_ExecuteUbergraph_BP_STExtraPlayerControllerPC_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
