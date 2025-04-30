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

// Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.FindWidget
struct ABP_LitePCLobbyHUD_C_FindWidget_Params
{
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UUserWidget*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.CreateCharacter
struct ABP_LitePCLobbyHUD_C_CreateCharacter_Params
{
	int                                                SlotIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.CleanUpNameTagWidget
struct ABP_LitePCLobbyHUD_C_CleanUpNameTagWidget_Params
{
	int                                                SlotIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.SetupNameTagWidget
struct ABP_LitePCLobbyHUD_C_SetupNameTagWidget_Params
{
	int                                                SlotIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.GetNameTagWidget
struct ABP_LitePCLobbyHUD_C_GetNameTagWidget_Params
{
	int                                                SlotIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTslLobbyNameTagWidget*                      Widget;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.DestroyCharacter
struct ABP_LitePCLobbyHUD_C_DestroyCharacter_Params
{
	int                                                SlotIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.SpawnParachute
struct ABP_LitePCLobbyHUD_C_SpawnParachute_Params
{
	struct FString                                     ParachuteId;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.SetWeaponSkin
struct ABP_LitePCLobbyHUD_C_SetWeaponSkin_Params
{
	struct FString                                     SkinId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.SpawnWeapon
struct ABP_LitePCLobbyHUD_C_SpawnWeapon_Params
{
	struct FString                                     WeaponId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.CreateWidgetAndAddToContainer
struct ABP_LitePCLobbyHUD_C_CreateWidgetAndAddToContainer_Params
{
	class UClass*                                      InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ZOrder;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ESlateVisibility                                   InVisibility;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 Widget;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.RegisterWidgetList
struct ABP_LitePCLobbyHUD_C_RegisterWidgetList_Params
{
};

// Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.UserConstructionScript
struct ABP_LitePCLobbyHUD_C_UserConstructionScript_Params
{
};

// Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.OnLoaded_2D3FE1A7439818801B9F88915417A7B5
struct ABP_LitePCLobbyHUD_C_OnLoaded_2D3FE1A7439818801B9F88915417A7B5_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.OnLoaded_21D97EB047B9591642CCAE8C5732778C
struct ABP_LitePCLobbyHUD_C_OnLoaded_21D97EB047B9591642CCAE8C5732778C_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.ReceiveBeginPlay
struct ABP_LitePCLobbyHUD_C_ReceiveBeginPlay_Params
{
};

// Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.HideInGameMenu
struct ABP_LitePCLobbyHUD_C_HideInGameMenu_Params
{
};

// Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.OnHostChanged_1
struct ABP_LitePCLobbyHUD_C_OnHostChanged_1_Params
{
	struct FString                                     InHostNickName;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.OnGameUserSettingApplied
struct ABP_LitePCLobbyHUD_C_OnGameUserSettingApplied_Params
{
};

// Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.ReceiveEndPlay
struct ABP_LitePCLobbyHUD_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.LoadWebView
struct ABP_LitePCLobbyHUD_C_LoadWebView_Params
{
};

// Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.SpawnViewModeWeapon
struct ABP_LitePCLobbyHUD_C_SpawnViewModeWeapon_Params
{
	struct FString*                                    WeaponId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString*                                    SkinItemId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.SpawnViewModeParachute
struct ABP_LitePCLobbyHUD_C_SpawnViewModeParachute_Params
{
	struct FString*                                    ParachuteId;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString*                                    SkinItemId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.SetParachuteSkin
struct ABP_LitePCLobbyHUD_C_SetParachuteSkin_Params
{
};

// Function BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C.ExecuteUbergraph_BP_LitePCLobbyHUD
struct ABP_LitePCLobbyHUD_C_ExecuteUbergraph_BP_LitePCLobbyHUD_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
