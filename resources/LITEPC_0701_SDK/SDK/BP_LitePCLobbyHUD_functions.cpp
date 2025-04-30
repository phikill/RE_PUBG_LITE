
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

// Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.FindWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UUserWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUserWidget* ABP_LitePCLobbyHUD_C::FindWidget(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.FindWidget");

	ABP_LitePCLobbyHUD_C_FindWidget_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.CreateCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SlotIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LitePCLobbyHUD_C::CreateCharacter(int SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.CreateCharacter");

	ABP_LitePCLobbyHUD_C_CreateCharacter_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.CleanUpNameTagWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SlotIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LitePCLobbyHUD_C::CleanUpNameTagWidget(int SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.CleanUpNameTagWidget");

	ABP_LitePCLobbyHUD_C_CleanUpNameTagWidget_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.SetupNameTagWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SlotIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LitePCLobbyHUD_C::SetupNameTagWidget(int SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.SetupNameTagWidget");

	ABP_LitePCLobbyHUD_C_SetupNameTagWidget_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.GetNameTagWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SlotIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTslLobbyNameTagWidget*  Widget                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_LitePCLobbyHUD_C::GetNameTagWidget(int SlotIndex, class UTslLobbyNameTagWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.GetNameTagWidget");

	ABP_LitePCLobbyHUD_C_GetNameTagWidget_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.DestroyCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SlotIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LitePCLobbyHUD_C::DestroyCharacter(int SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.DestroyCharacter");

	ABP_LitePCLobbyHUD_C_DestroyCharacter_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.SpawnParachute
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ParachuteId                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_LitePCLobbyHUD_C::SpawnParachute(const struct FString& ParachuteId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.SpawnParachute");

	ABP_LitePCLobbyHUD_C_SpawnParachute_Params params;
	params.ParachuteId = ParachuteId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.SetWeaponSkin
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 SkinId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_LitePCLobbyHUD_C::SetWeaponSkin(const struct FString& SkinId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.SetWeaponSkin");

	ABP_LitePCLobbyHUD_C_SetWeaponSkin_Params params;
	params.SkinId = SkinId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.SpawnWeapon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 WeaponId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_LitePCLobbyHUD_C::SpawnWeapon(const struct FString& WeaponId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.SpawnWeapon");

	ABP_LitePCLobbyHUD_C_SpawnWeapon_Params params;
	params.WeaponId = WeaponId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.CreateWidgetAndAddToContainer
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ZOrder                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ESlateVisibility               InVisibility                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget*             Widget                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_LitePCLobbyHUD_C::CreateWidgetAndAddToContainer(class UClass* InputPin, int ZOrder, ESlateVisibility InVisibility, class UUserWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.CreateWidgetAndAddToContainer");

	ABP_LitePCLobbyHUD_C_CreateWidgetAndAddToContainer_Params params;
	params.InputPin = InputPin;
	params.ZOrder = ZOrder;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.RegisterWidgetList
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_LitePCLobbyHUD_C::RegisterWidgetList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.RegisterWidgetList");

	ABP_LitePCLobbyHUD_C_RegisterWidgetList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_LitePCLobbyHUD_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.UserConstructionScript");

	ABP_LitePCLobbyHUD_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.OnLoaded_2D3FE1A7439818801B9F88915417A7B5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LitePCLobbyHUD_C::OnLoaded_2D3FE1A7439818801B9F88915417A7B5(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.OnLoaded_2D3FE1A7439818801B9F88915417A7B5");

	ABP_LitePCLobbyHUD_C_OnLoaded_2D3FE1A7439818801B9F88915417A7B5_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.OnLoaded_21D97EB047B9591642CCAE8C5732778C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LitePCLobbyHUD_C::OnLoaded_21D97EB047B9591642CCAE8C5732778C(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.OnLoaded_21D97EB047B9591642CCAE8C5732778C");

	ABP_LitePCLobbyHUD_C_OnLoaded_21D97EB047B9591642CCAE8C5732778C_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_LitePCLobbyHUD_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.ReceiveBeginPlay");

	ABP_LitePCLobbyHUD_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.HideInGameMenu
// (BlueprintCallable, BlueprintEvent)

void ABP_LitePCLobbyHUD_C::HideInGameMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.HideInGameMenu");

	ABP_LitePCLobbyHUD_C_HideInGameMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.OnHostChanged_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InHostNickName                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_LitePCLobbyHUD_C::OnHostChanged_1(const struct FString& InHostNickName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.OnHostChanged_1");

	ABP_LitePCLobbyHUD_C_OnHostChanged_1_Params params;
	params.InHostNickName = InHostNickName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.OnGameUserSettingApplied
// (BlueprintCallable, BlueprintEvent)

void ABP_LitePCLobbyHUD_C::OnGameUserSettingApplied()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.OnGameUserSettingApplied");

	ABP_LitePCLobbyHUD_C_OnGameUserSettingApplied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LitePCLobbyHUD_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.ReceiveEndPlay");

	ABP_LitePCLobbyHUD_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.LoadWebView
// (BlueprintCallable, BlueprintEvent)

void ABP_LitePCLobbyHUD_C::LoadWebView()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.LoadWebView");

	ABP_LitePCLobbyHUD_C_LoadWebView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.SpawnViewModeWeapon
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                WeaponId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString*                SkinItemId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_LitePCLobbyHUD_C::SpawnViewModeWeapon(struct FString* WeaponId, struct FString* SkinItemId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.SpawnViewModeWeapon");

	ABP_LitePCLobbyHUD_C_SpawnViewModeWeapon_Params params;
	params.WeaponId = WeaponId;
	params.SkinItemId = SkinItemId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.SpawnViewModeParachute
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                ParachuteId                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString*                SkinItemId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_LitePCLobbyHUD_C::SpawnViewModeParachute(struct FString* ParachuteId, struct FString* SkinItemId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.SpawnViewModeParachute");

	ABP_LitePCLobbyHUD_C_SpawnViewModeParachute_Params params;
	params.ParachuteId = ParachuteId;
	params.SkinItemId = SkinItemId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.SetParachuteSkin
// (BlueprintCallable, BlueprintEvent)

void ABP_LitePCLobbyHUD_C::SetParachuteSkin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.SetParachuteSkin");

	ABP_LitePCLobbyHUD_C_SetParachuteSkin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.ExecuteUbergraph_BP_LitePCLobbyHUD
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LitePCLobbyHUD_C::ExecuteUbergraph_BP_LitePCLobbyHUD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.ExecuteUbergraph_BP_LitePCLobbyHUD");

	ABP_LitePCLobbyHUD_C_ExecuteUbergraph_BP_LitePCLobbyHUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
