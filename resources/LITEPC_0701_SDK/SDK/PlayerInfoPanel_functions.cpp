
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

// Function PlayerInfoPanel.PlayerInfoPanel_C.IsCustomUIDataValid
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               SaveDataSize                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerInfoPanel_C::IsCustomUIDataValid(class UWidget* Widget, const struct FVector2D& SaveDataSize, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerInfoPanel.PlayerInfoPanel_C.IsCustomUIDataValid");

	UPlayerInfoPanel_C_IsCustomUIDataValid_Params params;
	params.Widget = Widget;
	params.SaveDataSize = SaveDataSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function PlayerInfoPanel.PlayerInfoPanel_C.Playername_Versioninfo_Session
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PlayerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UPlayerInfoPanel_C::Playername_Versioninfo_Session(const struct FString& PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerInfoPanel.PlayerInfoPanel_C.Playername_Versioninfo_Session");

	UPlayerInfoPanel_C_Playername_Versioninfo_Session_Params params;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerInfoPanel.PlayerInfoPanel_C.PredictStayOverLogic
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerInfoPanel_C::PredictStayOverLogic()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerInfoPanel.PlayerInfoPanel_C.PredictStayOverLogic");

	UPlayerInfoPanel_C_PredictStayOverLogic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerInfoPanel.PlayerInfoPanel_C.SetPreditTimerFunc
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          PredictValue                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerInfoPanel_C::SetPreditTimerFunc(float PredictValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerInfoPanel.PlayerInfoPanel_C.SetPreditTimerFunc");

	UPlayerInfoPanel_C_SetPreditTimerFunc_Params params;
	params.PredictValue = PredictValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerInfoPanel.PlayerInfoPanel_C.PlayerInfo_SpectatorChangeUpdateEnergy
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerInfoPanel_C::PlayerInfo_SpectatorChangeUpdateEnergy()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerInfoPanel.PlayerInfoPanel_C.PlayerInfo_SpectatorChangeUpdateEnergy");

	UPlayerInfoPanel_C_PlayerInfo_SpectatorChangeUpdateEnergy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerInfoPanel.PlayerInfoPanel_C.HidePredictNextFrame
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerInfoPanel_C::HidePredictNextFrame()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerInfoPanel.PlayerInfoPanel_C.HidePredictNextFrame");

	UPlayerInfoPanel_C_HidePredictNextFrame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerInfoPanel.PlayerInfoPanel_C.GetPlayerHealth
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          PredictValue                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerInfoPanel_C::GetPlayerHealth(float* PredictValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerInfoPanel.PlayerInfoPanel_C.GetPlayerHealth");

	UPlayerInfoPanel_C_GetPlayerHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PredictValue != nullptr)
		*PredictValue = params.PredictValue;
}


// Function PlayerInfoPanel.PlayerInfoPanel_C.ForceUpdate_Health
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerInfoPanel_C::ForceUpdate_Health()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerInfoPanel.PlayerInfoPanel_C.ForceUpdate_Health");

	UPlayerInfoPanel_C_ForceUpdate_Health_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerInfoPanel.PlayerInfoPanel_C.UpdatePlayerBuff
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Energy                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerInfoPanel_C::UpdatePlayerBuff(float Energy)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerInfoPanel.PlayerInfoPanel_C.UpdatePlayerBuff");

	UPlayerInfoPanel_C_UpdatePlayerBuff_Params params;
	params.Energy = Energy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerInfoPanel.PlayerInfoPanel_C.ClearHPUI
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerInfoPanel_C::ClearHPUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerInfoPanel.PlayerInfoPanel_C.ClearHPUI");

	UPlayerInfoPanel_C_ClearHPUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerInfoPanel.PlayerInfoPanel_C.PlayerInfo_UpdateBreath
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Breath                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Ratio                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ACharacter*              Who                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            HealthStatus                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerInfoPanel_C::PlayerInfo_UpdateBreath(float Breath, float Ratio, class ACharacter* Who, int HealthStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerInfoPanel.PlayerInfoPanel_C.PlayerInfo_UpdateBreath");

	UPlayerInfoPanel_C_PlayerInfo_UpdateBreath_Params params;
	params.Breath = Breath;
	params.Ratio = Ratio;
	params.Who = Who;
	params.HealthStatus = HealthStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerInfoPanel.PlayerInfoPanel_C.PlayerInfo_UpdatePredictHealth
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerInfoPanel_C::PlayerInfo_UpdatePredictHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerInfoPanel.PlayerInfoPanel_C.PlayerInfo_UpdatePredictHealth");

	UPlayerInfoPanel_C_PlayerInfo_UpdatePredictHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerInfoPanel.PlayerInfoPanel_C.PlayerInfo_UpdateEnergy
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerInfoPanel_C::PlayerInfo_UpdateEnergy()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerInfoPanel.PlayerInfoPanel_C.PlayerInfo_UpdateEnergy");

	UPlayerInfoPanel_C_PlayerInfo_UpdateEnergy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerInfoPanel.PlayerInfoPanel_C.PlayerInfo_UpdateHealth
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerInfoPanel_C::PlayerInfo_UpdateHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerInfoPanel.PlayerInfoPanel_C.PlayerInfo_UpdateHealth");

	UPlayerInfoPanel_C_PlayerInfo_UpdateHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerInfoPanel.PlayerInfoPanel_C.OnCanRescueOther
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*              CanRescueWho                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ACharacter*              Owner                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsBecomeCan                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerInfoPanel_C::OnCanRescueOther(class ACharacter* CanRescueWho, class ACharacter* Owner, bool IsBecomeCan)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerInfoPanel.PlayerInfoPanel_C.OnCanRescueOther");

	UPlayerInfoPanel_C_OnCanRescueOther_Params params;
	params.CanRescueWho = CanRescueWho;
	params.Owner = Owner;
	params.IsBecomeCan = IsBecomeCan;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerInfoPanel.PlayerInfoPanel_C.OnUpdateBreath
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Breath                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Ratio                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ACharacter*              Who                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            HealthStatus                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerInfoPanel_C::OnUpdateBreath(float Breath, float Ratio, class ACharacter* Who, int HealthStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerInfoPanel.PlayerInfoPanel_C.OnUpdateBreath");

	UPlayerInfoPanel_C_OnUpdateBreath_Params params;
	params.Breath = Breath;
	params.Ratio = Ratio;
	params.Who = Who;
	params.HealthStatus = HealthStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerInfoPanel.PlayerInfoPanel_C.OnUpdateHP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          currentHP                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ratioHP                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerInfoPanel_C::OnUpdateHP(float currentHP, float ratioHP)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerInfoPanel.PlayerInfoPanel_C.OnUpdateHP");

	UPlayerInfoPanel_C_OnUpdateHP_Params params;
	params.currentHP = currentHP;
	params.ratioHP = ratioHP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerInfoPanel.PlayerInfoPanel_C.OnPlayerNameChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PlayerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UPlayerInfoPanel_C::OnPlayerNameChange(const struct FString& PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerInfoPanel.PlayerInfoPanel_C.OnPlayerNameChange");

	UPlayerInfoPanel_C_OnPlayerNameChange_Params params;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerInfoPanel.PlayerInfoPanel_C.SetCustomizeUIInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SAVEGAME_UIElemLayout_C* SaveGame                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            LayoutIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerInfoPanel_C::SetCustomizeUIInfo(class UBP_SAVEGAME_UIElemLayout_C* SaveGame, int LayoutIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerInfoPanel.PlayerInfoPanel_C.SetCustomizeUIInfo");

	UPlayerInfoPanel_C_SetCustomizeUIInfo_Params params;
	params.SaveGame = SaveGame;
	params.LayoutIndex = LayoutIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerInfoPanel.PlayerInfoPanel_C.SetSettingControlUI
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerInfoPanel_C::SetSettingControlUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerInfoPanel.PlayerInfoPanel_C.SetSettingControlUI");

	UPlayerInfoPanel_C_SetSettingControlUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerInfoPanel.PlayerInfoPanel_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerInfoPanel_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerInfoPanel.PlayerInfoPanel_C.Tick");

	UPlayerInfoPanel_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerInfoPanel.PlayerInfoPanel_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlayerInfoPanel_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerInfoPanel.PlayerInfoPanel_C.Destruct");

	UPlayerInfoPanel_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerInfoPanel.PlayerInfoPanel_C.ReceivedInitWidget
// (Event, Public, BlueprintEvent)

void UPlayerInfoPanel_C::ReceivedInitWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerInfoPanel.PlayerInfoPanel_C.ReceivedInitWidget");

	UPlayerInfoPanel_C_ReceivedInitWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerInfoPanel.PlayerInfoPanel_C.UpdateBreath
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          currentBR                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ratioBR                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ACharacter*              OwnerCharacter                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            HealthStatus                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerInfoPanel_C::UpdateBreath(float currentBR, float ratioBR, class ACharacter* OwnerCharacter, int HealthStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerInfoPanel.PlayerInfoPanel_C.UpdateBreath");

	UPlayerInfoPanel_C_UpdateBreath_Params params;
	params.currentBR = currentBR;
	params.ratioBR = ratioBR;
	params.OwnerCharacter = OwnerCharacter;
	params.HealthStatus = HealthStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerInfoPanel.PlayerInfoPanel_C.OnRecoveryStart
// (BlueprintCallable, BlueprintEvent)

void UPlayerInfoPanel_C::OnRecoveryStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerInfoPanel.PlayerInfoPanel_C.OnRecoveryStart");

	UPlayerInfoPanel_C_OnRecoveryStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerInfoPanel.PlayerInfoPanel_C.ResetUIStateAfterRespawn
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerInfoPanel_C::ResetUIStateAfterRespawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerInfoPanel.PlayerInfoPanel_C.ResetUIStateAfterRespawn");

	UPlayerInfoPanel_C_ResetUIStateAfterRespawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerInfoPanel.PlayerInfoPanel_C.ExecuteUbergraph_PlayerInfoPanel
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerInfoPanel_C::ExecuteUbergraph_PlayerInfoPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerInfoPanel.PlayerInfoPanel_C.ExecuteUbergraph_PlayerInfoPanel");

	UPlayerInfoPanel_C_ExecuteUbergraph_PlayerInfoPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
