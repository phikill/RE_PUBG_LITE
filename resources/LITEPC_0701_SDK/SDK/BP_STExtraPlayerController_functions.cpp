
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

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.IsAtaptation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           adaptation                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::IsAtaptation(bool* adaptation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.IsAtaptation");

	ABP_STExtraPlayerController_C_IsAtaptation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (adaptation != nullptr)
		*adaptation = params.adaptation;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReadAdaptationTable
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::ReadAdaptationTable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReadAdaptationTable");

	ABP_STExtraPlayerController_C_ReadAdaptationTable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InitWeather
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::InitWeather()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InitWeather");

	ABP_STExtraPlayerController_C_InitWeather_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.SetMotionParam
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::SetMotionParam()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.SetMotionParam");

	ABP_STExtraPlayerController_C_SetMotionParam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.GetStickLeftSize
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Size                           (Parm, OutParm, IsPlainOldData)

void ABP_STExtraPlayerController_C::GetStickLeftSize(struct FVector2D* Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.GetStickLeftSize");

	ABP_STExtraPlayerController_C_GetStickLeftSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Size != nullptr)
		*Size = params.Size;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ShowFightingUI
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::ShowFightingUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ShowFightingUI");

	ABP_STExtraPlayerController_C_ShowFightingUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ShowAutoSprintBtn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               showPos_                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           inside                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::ShowAutoSprintBtn(bool visible, const struct FVector2D& showPos_, bool inside)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ShowAutoSprintBtn");

	ABP_STExtraPlayerController_C_ShowAutoSprintBtn_Params params;
	params.visible = visible;
	params.showPos_ = showPos_;
	params.inside = inside;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReadConfigCrossHairColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::ReadConfigCrossHairColor(int NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReadConfigCrossHairColor");

	ABP_STExtraPlayerController_C_ReadConfigCrossHairColor_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReadConfigMotionControl
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::ReadConfigMotionControl(int NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReadConfigMotionControl");

	ABP_STExtraPlayerController_C_ReadConfigMotionControl_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReadConfigAutoAim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::ReadConfigAutoAim(bool NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReadConfigAutoAim");

	ABP_STExtraPlayerController_C_ReadConfigAutoAim_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReadConfigFromHUD
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::ReadConfigFromHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReadConfigFromHUD");

	ABP_STExtraPlayerController_C_ReadConfigFromHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.MakeFireModeEffect
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::MakeFireModeEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.MakeFireModeEffect");

	ABP_STExtraPlayerController_C_MakeFireModeEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.DebugNotDrawGuideLine
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::DebugNotDrawGuideLine()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.DebugNotDrawGuideLine");

	ABP_STExtraPlayerController_C_DebugNotDrawGuideLine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ShowBackpackTombBox
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::ShowBackpackTombBox(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ShowBackpackTombBox");

	ABP_STExtraPlayerController_C_ShowBackpackTombBox_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.BindOrUnBindJoyStickSprint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsBind                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::BindOrUnBindJoyStickSprint(bool IsBind)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.BindOrUnBindJoyStickSprint");

	ABP_STExtraPlayerController_C_BindOrUnBindJoyStickSprint_Params params;
	params.IsBind = IsBind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.CreateRank
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Kills                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Rank                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::CreateRank(int Kills, int Rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.CreateRank");

	ABP_STExtraPlayerController_C_CreateRank_Params params;
	params.Kills = Kills;
	params.Rank = Rank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.DisableAimIfUnEquipWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESurviveWeaponPropSlot         WeaponType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::DisableAimIfUnEquipWeapon(ESurviveWeaponPropSlot WeaponType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.DisableAimIfUnEquipWeapon");

	ABP_STExtraPlayerController_C_DisableAimIfUnEquipWeapon_Params params;
	params.WeaponType = WeaponType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.SwitchAimMode
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::SwitchAimMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.SwitchAimMode");

	ABP_STExtraPlayerController_C_SwitchAimMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.DoInitUI
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::DoInitUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.DoInitUI");

	ABP_STExtraPlayerController_C_DoInitUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.HandleJumpBtnPressEvent
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::HandleJumpBtnPressEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.HandleJumpBtnPressEvent");

	ABP_STExtraPlayerController_C_HandleJumpBtnPressEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.HandleStartBattle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerNum                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::HandleStartBattle(int PlayerNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.HandleStartBattle");

	ABP_STExtraPlayerController_C_HandleStartBattle_Params params;
	params.PlayerNum = PlayerNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnRep_bInCar
// (BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::OnRep_bInCar()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnRep_bInCar");

	ABP_STExtraPlayerController_C_OnRep_bInCar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.RefreshUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::RefreshUI(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.RefreshUI");

	ABP_STExtraPlayerController_C_RefreshUI_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.UpdateInputPanel
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::UpdateInputPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.UpdateInputPanel");

	ABP_STExtraPlayerController_C_UpdateInputPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ShowBackpackIconSplash
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::ShowBackpackIconSplash(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ShowBackpackIconSplash");

	ABP_STExtraPlayerController_C_ShowBackpackIconSplash_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.RefreshWeaponPanel
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::RefreshWeaponPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.RefreshWeaponPanel");

	ABP_STExtraPlayerController_C_RefreshWeaponPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.SetTouchInputEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::SetTouchInputEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.SetTouchInputEnabled");

	ABP_STExtraPlayerController_C_SetTouchInputEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ShowMainInputControl
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::ShowMainInputControl(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ShowMainInputControl");

	ABP_STExtraPlayerController_C_ShowMainInputControl_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ShowTouchInterface
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::ShowTouchInterface(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ShowTouchInterface");

	ABP_STExtraPlayerController_C_ShowTouchInterface_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.EnableDeathGray
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          BlendWeight                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::EnableDeathGray(float BlendWeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.EnableDeathGray");

	ABP_STExtraPlayerController_C_EnableDeathGray_Params params;
	params.BlendWeight = BlendWeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.SetDeathGrayLerpValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Lerp                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::SetDeathGrayLerpValue(float Lerp)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.SetDeathGrayLerpValue");

	ABP_STExtraPlayerController_C_SetDeathGrayLerpValue_Params params;
	params.Lerp = Lerp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.SetPostProcessVolume
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::SetPostProcessVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.SetPostProcessVolume");

	ABP_STExtraPlayerController_C_SetPostProcessVolume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.UserConstructionScript");

	ABP_STExtraPlayerController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.GrayToOne__FinishedFunc
// (BlueprintEvent)

void ABP_STExtraPlayerController_C::GrayToOne__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.GrayToOne__FinishedFunc");

	ABP_STExtraPlayerController_C_GrayToOne__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.GrayToOne__UpdateFunc
// (BlueprintEvent)

void ABP_STExtraPlayerController_C::GrayToOne__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.GrayToOne__UpdateFunc");

	ABP_STExtraPlayerController_C_GrayToOne__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.GrayToZero__FinishedFunc
// (BlueprintEvent)

void ABP_STExtraPlayerController_C::GrayToZero__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.GrayToZero__FinishedFunc");

	ABP_STExtraPlayerController_C_GrayToZero__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.GrayToZero__UpdateFunc
// (BlueprintEvent)

void ABP_STExtraPlayerController_C::GrayToZero__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.GrayToZero__UpdateFunc");

	ABP_STExtraPlayerController_C_GrayToZero__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_STExtraPlayerController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReceiveBeginPlay");

	ABP_STExtraPlayerController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnSpectatorCameraChange
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bDie                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::OnSpectatorCameraChange(bool* bDie)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnSpectatorCameraChange");

	ABP_STExtraPlayerController_C_OnSpectatorCameraChange_Params params;
	params.bDie = bDie;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnStopFireEventHandle
// (BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::OnStopFireEventHandle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnStopFireEventHandle");

	ABP_STExtraPlayerController_C_OnStopFireEventHandle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnSwitchCameraSatrtHandle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPlayerCameraMode> CameraMode                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::OnSwitchCameraSatrtHandle(TEnumAsByte<EPlayerCameraMode> CameraMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnSwitchCameraSatrtHandle");

	ABP_STExtraPlayerController_C_OnSwitchCameraSatrtHandle_Params params;
	params.CameraMode = CameraMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnPlayerPutDownActorHandle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASTExtraBaseCharacter*   TargetPlayer                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::OnPlayerPutDownActorHandle(class ASTExtraBaseCharacter* TargetPlayer, class AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnPlayerPutDownActorHandle");

	ABP_STExtraPlayerController_C_OnPlayerPutDownActorHandle_Params params;
	params.TargetPlayer = TargetPlayer;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnSwitchWeaponHandle
// (BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::OnSwitchWeaponHandle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnSwitchWeaponHandle");

	ABP_STExtraPlayerController_C_OnSwitchWeaponHandle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReceiveTick");

	ABP_STExtraPlayerController_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnUseInventoryitemHandle
// (BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::OnUseInventoryitemHandle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnUseInventoryitemHandle");

	ABP_STExtraPlayerController_C_OnUseInventoryitemHandle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ServerStartBattle
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::ServerStartBattle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ServerStartBattle");

	ABP_STExtraPlayerController_C_ServerStartBattle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ClientPreStartBattle
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerNum                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::ClientPreStartBattle(int PlayerNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ClientPreStartBattle");

	ABP_STExtraPlayerController_C_ClientPreStartBattle_Params params;
	params.PlayerNum = PlayerNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ServerAfterLand
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::ServerAfterLand()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ServerAfterLand");

	ABP_STExtraPlayerController_C_ServerAfterLand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ClientAfterLand
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::ClientAfterLand()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ClientAfterLand");

	ABP_STExtraPlayerController_C_ClientAfterLand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.RefreshTopMostUIPanel
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETopMostUIPanelType>* Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::RefreshTopMostUIPanel(TEnumAsByte<ETopMostUIPanelType>* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.RefreshTopMostUIPanel");

	ABP_STExtraPlayerController_C_RefreshTopMostUIPanel_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.GameStart
// (BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::GameStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.GameStart");

	ABP_STExtraPlayerController_C_GameStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.RemoveWeaponAim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESurviveWeaponPropSlot         Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::RemoveWeaponAim(ESurviveWeaponPropSlot Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.RemoveWeaponAim");

	ABP_STExtraPlayerController_C_RemoveWeaponAim_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.SetMoveableAirborne
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::SetMoveableAirborne(bool NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.SetMoveableAirborne");

	ABP_STExtraPlayerController_C_SetMoveableAirborne_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnLandOnGroundAfterJumpPlaneEnd
// (Event, Public, BlueprintEvent)

void ABP_STExtraPlayerController_C::OnLandOnGroundAfterJumpPlaneEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnLandOnGroundAfterJumpPlaneEnd");

	ABP_STExtraPlayerController_C_OnLandOnGroundAfterJumpPlaneEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.JoystickTriggerSprint
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsSprint                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::JoystickTriggerSprint(bool* bIsSprint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.JoystickTriggerSprint");

	ABP_STExtraPlayerController_C_JoystickTriggerSprint_Params params;
	params.bIsSprint = bIsSprint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1");

	ABP_STExtraPlayerController_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2");

	ABP_STExtraPlayerController_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnPlane
// (BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::OnPlane()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnPlane");

	ABP_STExtraPlayerController_C_OnPlane_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OffPlane
// (BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::OffPlane()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OffPlane");

	ABP_STExtraPlayerController_C_OffPlane_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OpenPara
// (BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::OpenPara()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OpenPara");

	ABP_STExtraPlayerController_C_OpenPara_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.Land
// (BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::Land()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.Land");

	ABP_STExtraPlayerController_C_Land_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.SetPanels
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UUAEUserWidget*>* panels                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_STExtraPlayerController_C::SetPanels(TArray<class UUAEUserWidget*>* panels)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.SetPanels");

	ABP_STExtraPlayerController_C_SetPanels_Params params;
	params.panels = panels;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InitOprate
// (BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::InitOprate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InitOprate");

	ABP_STExtraPlayerController_C_InitOprate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnFiremodeChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            IntValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::OnFiremodeChange(int IntValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnFiremodeChange");

	ABP_STExtraPlayerController_C_OnFiremodeChange_Params params;
	params.IntValue = IntValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.DoUITouchMove
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_STExtraPlayerController_C::DoUITouchMove(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.DoUITouchMove");

	ABP_STExtraPlayerController_C_DoUITouchMove_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.PressFire
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           FingerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::PressFire(int* FingerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.PressFire");

	ABP_STExtraPlayerController_C_PressFire_Params params;
	params.FingerIndex = FingerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ShowFireBtn
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::ShowFireBtn(bool* bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ShowFireBtn");

	ABP_STExtraPlayerController_C_ShowFireBtn_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.PressGrenade
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          isThrow                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::PressGrenade(bool* isThrow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.PressGrenade");

	ABP_STExtraPlayerController_C_PressGrenade_Params params;
	params.isThrow = isThrow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InitJoyStickAfterActivation
// (Event, Public, BlueprintEvent)

void ABP_STExtraPlayerController_C::InitJoyStickAfterActivation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InitJoyStickAfterActivation");

	ABP_STExtraPlayerController_C_InitJoyStickAfterActivation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.MemberVoice
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           member                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           status                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::MemberVoice(int* member, int* status)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.MemberVoice");

	ABP_STExtraPlayerController_C_MemberVoice_Params params;
	params.member = member;
	params.status = status;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReceiveClientRestart
// (Event, Public, BlueprintEvent)

void ABP_STExtraPlayerController_C::ReceiveClientRestart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReceiveClientRestart");

	ABP_STExtraPlayerController_C_ReceiveClientRestart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnWeaponEquipAttachment
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// ESurviveWeaponPropSlot*        WeaponPropSlot                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FItemDefineID*          DefineID                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool*                          bEquip                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::OnWeaponEquipAttachment(ESurviveWeaponPropSlot* WeaponPropSlot, struct FItemDefineID* DefineID, bool* bEquip)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnWeaponEquipAttachment");

	ABP_STExtraPlayerController_C_OnWeaponEquipAttachment_Params params;
	params.WeaponPropSlot = WeaponPropSlot;
	params.DefineID = DefineID;
	params.bEquip = bEquip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ResetMissingUIUpdate
// (Event, Public, BlueprintEvent)

void ABP_STExtraPlayerController_C::ResetMissingUIUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ResetMissingUIUpdate");

	ABP_STExtraPlayerController_C_ResetMissingUIUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.MotionControliOS
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_STExtraPlayerController_C::MotionControliOS(const struct FVector& AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.MotionControliOS");

	ABP_STExtraPlayerController_C_MotionControliOS_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpAxisKeyEvt_RotationRate_K2Node_InputVectorAxisEvent_1
// (BlueprintEvent)
// Parameters:
// struct FVector                 AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_STExtraPlayerController_C::InpAxisKeyEvt_RotationRate_K2Node_InputVectorAxisEvent_1(const struct FVector& AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpAxisKeyEvt_RotationRate_K2Node_InputVectorAxisEvent_1");

	ABP_STExtraPlayerController_C_InpAxisKeyEvt_RotationRate_K2Node_InputVectorAxisEvent_1_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.MotionControlAndroidTick
// (BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::MotionControlAndroidTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.MotionControlAndroidTick");

	ABP_STExtraPlayerController_C_MotionControlAndroidTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.MotionControlAndroid
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_STExtraPlayerController_C::MotionControlAndroid(const struct FVector& AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.MotionControlAndroid");

	ABP_STExtraPlayerController_C_MotionControlAndroid_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReceiveBackpackComponent
// (Event, Protected, BlueprintEvent)

void ABP_STExtraPlayerController_C::ReceiveBackpackComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReceiveBackpackComponent");

	ABP_STExtraPlayerController_C_ReceiveBackpackComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InitWallFeedBack
// (BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::InitWallFeedBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InitWallFeedBack");

	ABP_STExtraPlayerController_C_InitWallFeedBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InitNewbieComponent
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<int>*                   FinishedGuide                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>*                   FinishedCounts                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int*                           PlayerLevel                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           PlayerExperienceType           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::InitNewbieComponent(TArray<int>* FinishedGuide, TArray<int>* FinishedCounts, int* PlayerLevel, int* PlayerExperienceType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InitNewbieComponent");

	ABP_STExtraPlayerController_C_InitNewbieComponent_Params params;
	params.FinishedGuide = FinishedGuide;
	params.FinishedCounts = FinishedCounts;
	params.PlayerLevel = PlayerLevel;
	params.PlayerExperienceType = PlayerExperienceType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.DebugOpenGuide
// (BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::DebugOpenGuide()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.DebugOpenGuide");

	ABP_STExtraPlayerController_C_DebugOpenGuide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.BP_OceanSideDetected
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                OceansideLocation              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool*                          bDetectedRiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::BP_OceanSideDetected(struct FVector* OceansideLocation, bool* bDetectedRiver)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.BP_OceanSideDetected");

	ABP_STExtraPlayerController_C_BP_OceanSideDetected_Params params;
	params.OceansideLocation = OceansideLocation;
	params.bDetectedRiver = bDetectedRiver;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.CallShowTouchInterface
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          InShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::CallShowTouchInterface(bool* InShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.CallShowTouchInterface");

	ABP_STExtraPlayerController_C_CallShowTouchInterface_Params params;
	params.InShow = InShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.BindEvent_ItemOutline
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSearchedPickUpItemResult InteractableItem               (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_STExtraPlayerController_C::BindEvent_ItemOutline(const struct FSearchedPickUpItemResult& InteractableItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.BindEvent_ItemOutline");

	ABP_STExtraPlayerController_C_BindEvent_ItemOutline_Params params;
	params.InteractableItem = InteractableItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ExecuteUbergraph_BP_STExtraPlayerController
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::ExecuteUbergraph_BP_STExtraPlayerController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ExecuteUbergraph_BP_STExtraPlayerController");

	ABP_STExtraPlayerController_C_ExecuteUbergraph_BP_STExtraPlayerController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.VaultFailDS__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::VaultFailDS__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.VaultFailDS__DelegateSignature");

	ABP_STExtraPlayerController_C_VaultFailDS__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.BindEventToBackpackComponent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::BindEventToBackpackComponent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.BindEventToBackpackComponent__DelegateSignature");

	ABP_STExtraPlayerController_C_BindEventToBackpackComponent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.PlayerLeaveWater__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HideLung                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::PlayerLeaveWater__DelegateSignature(bool HideLung)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.PlayerLeaveWater__DelegateSignature");

	ABP_STExtraPlayerController_C_PlayerLeaveWater__DelegateSignature_Params params;
	params.HideLung = HideLung;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.PlayerEnterWater__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::PlayerEnterWater__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.PlayerEnterWater__DelegateSignature");

	ABP_STExtraPlayerController_C_PlayerEnterWater__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.AirborneLanded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::AirborneLanded__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.AirborneLanded__DelegateSignature");

	ABP_STExtraPlayerController_C_AirborneLanded__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReloadingCDEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::ReloadingCDEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReloadingCDEnd__DelegateSignature");

	ABP_STExtraPlayerController_C_ReloadingCDEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReloadingCDStart__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CD                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::ReloadingCDStart__DelegateSignature(float CD)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReloadingCDStart__DelegateSignature");

	ABP_STExtraPlayerController_C_ReloadingCDStart__DelegateSignature_Params params;
	params.CD = CD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
