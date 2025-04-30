
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

// Function WmodeUI_BP.WmodeUI_BP_C.HideWarModeInfoTips
// (Public, BlueprintCallable, BlueprintEvent)

void UWmodeUI_BP_C::HideWarModeInfoTips()
{
	static auto fn = UObject::FindObject<UFunction>("Function WmodeUI_BP.WmodeUI_BP_C.HideWarModeInfoTips");

	UWmodeUI_BP_C_HideWarModeInfoTips_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WmodeUI_BP.WmodeUI_BP_C.GetRespawnBattleTextByTeamAliveState
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HasTeammateAlive               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   RespawnBattleText              (Parm, OutParm)

void UWmodeUI_BP_C::GetRespawnBattleTextByTeamAliveState(bool HasTeammateAlive, struct FText* RespawnBattleText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WmodeUI_BP.WmodeUI_BP_C.GetRespawnBattleTextByTeamAliveState");

	UWmodeUI_BP_C_GetRespawnBattleTextByTeamAliveState_Params params;
	params.HasTeammateAlive = HasTeammateAlive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RespawnBattleText != nullptr)
		*RespawnBattleText = params.RespawnBattleText;
}


// Function WmodeUI_BP.WmodeUI_BP_C.SetMyTeamProgressBarColor
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UWmodeUI_BP_C::SetMyTeamProgressBarColor(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function WmodeUI_BP.WmodeUI_BP_C.SetMyTeamProgressBarColor");

	UWmodeUI_BP_C_SetMyTeamProgressBarColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WmodeUI_BP.WmodeUI_BP_C.SetEnemyTeamTextHeight
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Height                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWmodeUI_BP_C::SetEnemyTeamTextHeight(float Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function WmodeUI_BP.WmodeUI_BP_C.SetEnemyTeamTextHeight");

	UWmodeUI_BP_C_SetEnemyTeamTextHeight_Params params;
	params.Height = Height;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WmodeUI_BP.WmodeUI_BP_C.SetMyTeamTextHeight
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Height                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWmodeUI_BP_C::SetMyTeamTextHeight(float Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function WmodeUI_BP.WmodeUI_BP_C.SetMyTeamTextHeight");

	UWmodeUI_BP_C_SetMyTeamTextHeight_Params params;
	params.Height = Height;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WmodeUI_BP.WmodeUI_BP_C.SortTeamScorePercent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                          MyTeam                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          EnemyTeam                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          HightScore                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          LowScore                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWmodeUI_BP_C::SortTeamScorePercent(float MyTeam, float EnemyTeam, float* HightScore, float* LowScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function WmodeUI_BP.WmodeUI_BP_C.SortTeamScorePercent");

	UWmodeUI_BP_C_SortTeamScorePercent_Params params;
	params.MyTeam = MyTeam;
	params.EnemyTeam = EnemyTeam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HightScore != nullptr)
		*HightScore = params.HightScore;
	if (LowScore != nullptr)
		*LowScore = params.LowScore;
}


// Function WmodeUI_BP.WmodeUI_BP_C.SetLowScoreTeamPercent
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWmodeUI_BP_C::SetLowScoreTeamPercent(float Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WmodeUI_BP.WmodeUI_BP_C.SetLowScoreTeamPercent");

	UWmodeUI_BP_C_SetLowScoreTeamPercent_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WmodeUI_BP.WmodeUI_BP_C.SetHighScoreTeamPercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWmodeUI_BP_C::SetHighScoreTeamPercent(float Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WmodeUI_BP.WmodeUI_BP_C.SetHighScoreTeamPercent");

	UWmodeUI_BP_C_SetHighScoreTeamPercent_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WmodeUI_BP.WmodeUI_BP_C.Reconnect_ResetUIByPlayerControllerState
// (Public, BlueprintCallable, BlueprintEvent)

void UWmodeUI_BP_C::Reconnect_ResetUIByPlayerControllerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WmodeUI_BP.WmodeUI_BP_C.Reconnect_ResetUIByPlayerControllerState");

	UWmodeUI_BP_C_Reconnect_ResetUIByPlayerControllerState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WmodeUI_BP.WmodeUI_BP_C.GetDisplayEnemyScore
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            MyScore                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            HightestScore                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            FollowScore                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            EnemyScore                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWmodeUI_BP_C::GetDisplayEnemyScore(int MyScore, int HightestScore, int FollowScore, int* EnemyScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function WmodeUI_BP.WmodeUI_BP_C.GetDisplayEnemyScore");

	UWmodeUI_BP_C_GetDisplayEnemyScore_Params params;
	params.MyScore = MyScore;
	params.HightestScore = HightestScore;
	params.FollowScore = FollowScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EnemyScore != nullptr)
		*EnemyScore = params.EnemyScore;
}


// Function WmodeUI_BP.WmodeUI_BP_C.ClearUIData
// (Public, BlueprintCallable, BlueprintEvent)

void UWmodeUI_BP_C::ClearUIData()
{
	static auto fn = UObject::FindObject<UFunction>("Function WmodeUI_BP.WmodeUI_BP_C.ClearUIData");

	UWmodeUI_BP_C_ClearUIData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WmodeUI_BP.WmodeUI_BP_C.WarMode_UpdatreWinScore
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWmodeUI_BP_C::WarMode_UpdatreWinScore()
{
	static auto fn = UObject::FindObject<UFunction>("Function WmodeUI_BP.WmodeUI_BP_C.WarMode_UpdatreWinScore");

	UWmodeUI_BP_C_WarMode_UpdatreWinScore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WmodeUI_BP.WmodeUI_BP_C.FormatTimeString
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TimeSecond                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   TimeText                       (Parm, OutParm)
// int                            Minute                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Second                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWmodeUI_BP_C::FormatTimeString(float TimeSecond, struct FText* TimeText, int* Minute, int* Second)
{
	static auto fn = UObject::FindObject<UFunction>("Function WmodeUI_BP.WmodeUI_BP_C.FormatTimeString");

	UWmodeUI_BP_C_FormatTimeString_Params params;
	params.TimeSecond = TimeSecond;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TimeText != nullptr)
		*TimeText = params.TimeText;
	if (Minute != nullptr)
		*Minute = params.Minute;
	if (Second != nullptr)
		*Second = params.Second;
}


// Function WmodeUI_BP.WmodeUI_BP_C.WarMode_UpdateScoreProgress
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWmodeUI_BP_C::WarMode_UpdateScoreProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function WmodeUI_BP.WmodeUI_BP_C.WarMode_UpdateScoreProgress");

	UWmodeUI_BP_C_WarMode_UpdateScoreProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WmodeUI_BP.WmodeUI_BP_C.WarMode_UpdateScore
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWmodeUI_BP_C::WarMode_UpdateScore()
{
	static auto fn = UObject::FindObject<UFunction>("Function WmodeUI_BP.WmodeUI_BP_C.WarMode_UpdateScore");

	UWmodeUI_BP_C_WarMode_UpdateScore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WmodeUI_BP.WmodeUI_BP_C.WarMode_UpdateRank
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWmodeUI_BP_C::WarMode_UpdateRank()
{
	static auto fn = UObject::FindObject<UFunction>("Function WmodeUI_BP.WmodeUI_BP_C.WarMode_UpdateRank");

	UWmodeUI_BP_C_WarMode_UpdateRank_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WmodeUI_BP.WmodeUI_BP_C.WarMode_UpdateRespawnCountDown
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWmodeUI_BP_C::WarMode_UpdateRespawnCountDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WmodeUI_BP.WmodeUI_BP_C.WarMode_UpdateRespawnCountDown");

	UWmodeUI_BP_C_WarMode_UpdateRespawnCountDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WmodeUI_BP.WmodeUI_BP_C.WarMode_UpdateGameOverCountDown
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWmodeUI_BP_C::WarMode_UpdateGameOverCountDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WmodeUI_BP.WmodeUI_BP_C.WarMode_UpdateGameOverCountDown");

	UWmodeUI_BP_C_WarMode_UpdateGameOverCountDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WmodeUI_BP.WmodeUI_BP_C.UpdateAllWarModeUI
// (Public, BlueprintCallable, BlueprintEvent)

void UWmodeUI_BP_C::UpdateAllWarModeUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function WmodeUI_BP.WmodeUI_BP_C.UpdateAllWarModeUI");

	UWmodeUI_BP_C_UpdateAllWarModeUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WmodeUI_BP.WmodeUI_BP_C.ShowWarModeUI
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWmodeUI_BP_C::ShowWarModeUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function WmodeUI_BP.WmodeUI_BP_C.ShowWarModeUI");

	UWmodeUI_BP_C_ShowWarModeUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WmodeUI_BP.WmodeUI_BP_C.ReceivedInitWidget
// (Event, Public, BlueprintEvent)

void UWmodeUI_BP_C::ReceivedInitWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WmodeUI_BP.WmodeUI_BP_C.ReceivedInitWidget");

	UWmodeUI_BP_C_ReceivedInitWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WmodeUI_BP.WmodeUI_BP_C.PlayerControllerAboutToRespawnDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AUAEPlayerController*    PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWmodeUI_BP_C::PlayerControllerAboutToRespawnDelegate(class AUAEPlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function WmodeUI_BP.WmodeUI_BP_C.PlayerControllerAboutToRespawnDelegate");

	UWmodeUI_BP_C_PlayerControllerAboutToRespawnDelegate_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WmodeUI_BP.WmodeUI_BP_C.EnterFlying
// (BlueprintCallable, BlueprintEvent)

void UWmodeUI_BP_C::EnterFlying()
{
	static auto fn = UObject::FindObject<UFunction>("Function WmodeUI_BP.WmodeUI_BP_C.EnterFlying");

	UWmodeUI_BP_C_EnterFlying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WmodeUI_BP.WmodeUI_BP_C.ExecuteUbergraph_WmodeUI_BP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWmodeUI_BP_C::ExecuteUbergraph_WmodeUI_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WmodeUI_BP.WmodeUI_BP_C.ExecuteUbergraph_WmodeUI_BP");

	UWmodeUI_BP_C_ExecuteUbergraph_WmodeUI_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
