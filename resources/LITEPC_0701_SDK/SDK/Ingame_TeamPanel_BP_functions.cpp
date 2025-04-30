
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

// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.IsCustomUIDataValid
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               SaveDataSize                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UIngame_TeamPanel_BP_C::IsCustomUIDataValid(class UWidget* Widget, const struct FVector2D& SaveDataSize, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.IsCustomUIDataValid");

	UIngame_TeamPanel_BP_C_IsCustomUIDataValid_Params params;
	params.Widget = Widget;
	params.SaveDataSize = SaveDataSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.GetValidTeammateStateNum
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ValidNum                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UIngame_TeamPanel_BP_C::GetValidTeammateStateNum(int* ValidNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.GetValidTeammateStateNum");

	UIngame_TeamPanel_BP_C_GetValidTeammateStateNum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ValidNum != nullptr)
		*ValidNum = params.ValidNum;
}


// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.HideAllTeammateMicFX
// (Public, BlueprintCallable, BlueprintEvent)

void UIngame_TeamPanel_BP_C::HideAllTeammateMicFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.HideAllTeammateMicFX");

	UIngame_TeamPanel_BP_C_HideAllTeammateMicFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.UIMsg_ShowGroundFlag
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UIngame_TeamPanel_BP_C::UIMsg_ShowGroundFlag()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.UIMsg_ShowGroundFlag");

	UIngame_TeamPanel_BP_C_UIMsg_ShowGroundFlag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.UIMSG_HideFollowPanelAndBtn
// (Public, BlueprintCallable, BlueprintEvent)

void UIngame_TeamPanel_BP_C::UIMSG_HideFollowPanelAndBtn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.UIMSG_HideFollowPanelAndBtn");

	UIngame_TeamPanel_BP_C_UIMSG_HideFollowPanelAndBtn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.UpdateTeamPFList
// (Public, BlueprintCallable, BlueprintEvent)

void UIngame_TeamPanel_BP_C::UpdateTeamPFList()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.UpdateTeamPFList");

	UIngame_TeamPanel_BP_C_UpdateTeamPFList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.SetWomenPrompt
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  GenderType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UIngame_TeamItem_BP_C*   NewParam1                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIngame_TeamPanel_BP_C::SetWomenPrompt(unsigned char GenderType, class UIngame_TeamItem_BP_C* NewParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.SetWomenPrompt");

	UIngame_TeamPanel_BP_C_SetWomenPrompt_Params params;
	params.GenderType = GenderType;
	params.NewParam1 = NewParam1;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.HideTeamMateDistance
// (Public, BlueprintCallable, BlueprintEvent)

void UIngame_TeamPanel_BP_C::HideTeamMateDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.HideTeamMateDistance");

	UIngame_TeamPanel_BP_C_HideTeamMateDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.Reconnect_ResetUIByPlayerControllerState
// (Public, BlueprintCallable, BlueprintEvent)

void UIngame_TeamPanel_BP_C::Reconnect_ResetUIByPlayerControllerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.Reconnect_ResetUIByPlayerControllerState");

	UIngame_TeamPanel_BP_C_Reconnect_ResetUIByPlayerControllerState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.OnMemberVoice
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            status                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIngame_TeamPanel_BP_C::OnMemberVoice(int PlayerId, int status)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.OnMemberVoice");

	UIngame_TeamPanel_BP_C_OnMemberVoice_Params params;
	params.PlayerId = PlayerId;
	params.status = status;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.ClearAllMark
// (Public, BlueprintCallable, BlueprintEvent)

void UIngame_TeamPanel_BP_C::ClearAllMark()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.ClearAllMark");

	UIngame_TeamPanel_BP_C_ClearAllMark_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.IngameTeam_ShowHideSelfMark
// (Public, BlueprintCallable, BlueprintEvent)

void UIngame_TeamPanel_BP_C::IngameTeam_ShowHideSelfMark()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.IngameTeam_ShowHideSelfMark");

	UIngame_TeamPanel_BP_C_IngameTeam_ShowHideSelfMark_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.ClearAllPlayerItems
// (Public, BlueprintCallable, BlueprintEvent)

void UIngame_TeamPanel_BP_C::ClearAllPlayerItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.ClearAllPlayerItems");

	UIngame_TeamPanel_BP_C_ClearAllPlayerItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.OnPlayerExitGame
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIngame_TeamPanel_BP_C::OnPlayerExitGame(class APlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.OnPlayerExitGame");

	UIngame_TeamPanel_BP_C_OnPlayerExitGame_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.UpdateTeamMateMapMark
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIngame_TeamPanel_BP_C::UpdateTeamMateMapMark(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.UpdateTeamMateMapMark");

	UIngame_TeamPanel_BP_C_UpdateTeamMateMapMark_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.UpdateTeamMateBreath
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            status                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Ratio                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ACharacter*              Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIngame_TeamPanel_BP_C::UpdateTeamMateBreath(int status, float Ratio, class ACharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.UpdateTeamMateBreath");

	UIngame_TeamPanel_BP_C_UpdateTeamMateBreath_Params params;
	params.status = status;
	params.Ratio = Ratio;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.OnReconnected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIngame_TeamPanel_BP_C::OnReconnected(class APlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.OnReconnected");

	UIngame_TeamPanel_BP_C_OnReconnected_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.OnLostDelegate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIngame_TeamPanel_BP_C::OnLostDelegate(class APlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.OnLostDelegate");

	UIngame_TeamPanel_BP_C_OnLostDelegate_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.ResetTeamPosImage
// (Public, BlueprintCallable, BlueprintEvent)

void UIngame_TeamPanel_BP_C::ResetTeamPosImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.ResetTeamPosImage");

	UIngame_TeamPanel_BP_C_ResetTeamPosImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.UpdateTeamMateState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*              TargetCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ExtraPlayerLiveState           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIngame_TeamPanel_BP_C::UpdateTeamMateState(class ACharacter* TargetCharacter, ExtraPlayerLiveState State)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.UpdateTeamMateState");

	UIngame_TeamPanel_BP_C_UpdateTeamMateState_Params params;
	params.TargetCharacter = TargetCharacter;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.UpdateTeamMateHP
// (Public, BlueprintCallable, BlueprintEvent)

void UIngame_TeamPanel_BP_C::UpdateTeamMateHP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.UpdateTeamMateHP");

	UIngame_TeamPanel_BP_C_UpdateTeamMateHP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.CollectWidgets
// (Public, BlueprintCallable, BlueprintEvent)

void UIngame_TeamPanel_BP_C::CollectWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.CollectWidgets");

	UIngame_TeamPanel_BP_C_CollectWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UIngame_TeamPanel_BP_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.Init");

	UIngame_TeamPanel_BP_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.SetSettingControlUI
// (Public, BlueprintCallable, BlueprintEvent)

void UIngame_TeamPanel_BP_C::SetSettingControlUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.SetSettingControlUI");

	UIngame_TeamPanel_BP_C_SetSettingControlUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.Event_UpdatePlayerState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ExtraPlayerLiveState           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ACharacter*              OwnerCharacter                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIngame_TeamPanel_BP_C::Event_UpdatePlayerState(ExtraPlayerLiveState State, class ACharacter* OwnerCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.Event_UpdatePlayerState");

	UIngame_TeamPanel_BP_C_Event_UpdatePlayerState_Params params;
	params.State = State;
	params.OwnerCharacter = OwnerCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.ReceivePlayerStateData
// (BlueprintCallable, BlueprintEvent)

void UIngame_TeamPanel_BP_C::ReceivePlayerStateData()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.ReceivePlayerStateData");

	UIngame_TeamPanel_BP_C_ReceivePlayerStateData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.ReceivedInitWidget
// (Event, Public, BlueprintEvent)

void UIngame_TeamPanel_BP_C::ReceivedInitWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.ReceivedInitWidget");

	UIngame_TeamPanel_BP_C_ReceivedInitWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.Event_OnLostDelegate
// (BlueprintCallable, BlueprintEvent)

void UIngame_TeamPanel_BP_C::Event_OnLostDelegate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.Event_OnLostDelegate");

	UIngame_TeamPanel_BP_C_Event_OnLostDelegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.Event_OnReconnected
// (BlueprintCallable, BlueprintEvent)

void UIngame_TeamPanel_BP_C::Event_OnReconnected()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.Event_OnReconnected");

	UIngame_TeamPanel_BP_C_Event_OnReconnected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.UpdateMapMark
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TeamMateSerialNumber           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIngame_TeamPanel_BP_C::UpdateMapMark(int TeamMateSerialNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.UpdateMapMark");

	UIngame_TeamPanel_BP_C_UpdateMapMark_Params params;
	params.TeamMateSerialNumber = TeamMateSerialNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.Event_OnTeammateHPChange
// (BlueprintCallable, BlueprintEvent)

void UIngame_TeamPanel_BP_C::Event_OnTeammateHPChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.Event_OnTeammateHPChange");

	UIngame_TeamPanel_BP_C_Event_OnTeammateHPChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.Event_OnExitGame
// (BlueprintCallable, BlueprintEvent)

void UIngame_TeamPanel_BP_C::Event_OnExitGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.Event_OnExitGame");

	UIngame_TeamPanel_BP_C_Event_OnExitGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.OnPlayerEnterFlying
// (BlueprintCallable, BlueprintEvent)

void UIngame_TeamPanel_BP_C::OnPlayerEnterFlying()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.OnPlayerEnterFlying");

	UIngame_TeamPanel_BP_C_OnPlayerEnterFlying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.BndEvt__Button_ParachuteFollow_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UIngame_TeamPanel_BP_C::BndEvt__Button_ParachuteFollow_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.BndEvt__Button_ParachuteFollow_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature");

	UIngame_TeamPanel_BP_C_BndEvt__Button_ParachuteFollow_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.BndEvt__Button_HideFollowList_K2Node_ComponentBoundEvent_84_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UIngame_TeamPanel_BP_C::BndEvt__Button_HideFollowList_K2Node_ComponentBoundEvent_84_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.BndEvt__Button_HideFollowList_K2Node_ComponentBoundEvent_84_OnButtonClickedEvent__DelegateSignature");

	UIngame_TeamPanel_BP_C_BndEvt__Button_HideFollowList_K2Node_ComponentBoundEvent_84_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.Event_PlayerOutPlane
// (BlueprintCallable, BlueprintEvent)

void UIngame_TeamPanel_BP_C::Event_PlayerOutPlane()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.Event_PlayerOutPlane");

	UIngame_TeamPanel_BP_C_Event_PlayerOutPlane_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.SetCustomizeUIInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SAVEGAME_UIElemLayout_C* SaveGame                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            LayoutIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIngame_TeamPanel_BP_C::SetCustomizeUIInfo(class UBP_SAVEGAME_UIElemLayout_C* SaveGame, int LayoutIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.SetCustomizeUIInfo");

	UIngame_TeamPanel_BP_C_SetCustomizeUIInfo_Params params;
	params.SaveGame = SaveGame;
	params.LayoutIndex = LayoutIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.ExecuteUbergraph_Ingame_TeamPanel_BP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIngame_TeamPanel_BP_C::ExecuteUbergraph_Ingame_TeamPanel_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ingame_TeamPanel_BP.Ingame_TeamPanel_BP_C.ExecuteUbergraph_Ingame_TeamPanel_BP");

	UIngame_TeamPanel_BP_C_ExecuteUbergraph_Ingame_TeamPanel_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
