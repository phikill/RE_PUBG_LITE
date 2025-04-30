
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

// Function CustomUIPositionInterface.CustomUIPositionInterface_C.IsCustomUIDataValid
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               SaveDataSize                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCustomUIPositionInterface_C::IsCustomUIDataValid(class UWidget* Widget, const struct FVector2D& SaveDataSize, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomUIPositionInterface.CustomUIPositionInterface_C.IsCustomUIDataValid");

	UCustomUIPositionInterface_C_IsCustomUIDataValid_Params params;
	params.Widget = Widget;
	params.SaveDataSize = SaveDataSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function CustomUIPositionInterface.CustomUIPositionInterface_C.SetSettingControlUI
// (Public, BlueprintCallable, BlueprintEvent)

void UCustomUIPositionInterface_C::SetSettingControlUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomUIPositionInterface.CustomUIPositionInterface_C.SetSettingControlUI");

	UCustomUIPositionInterface_C_SetSettingControlUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomUIPositionInterface.CustomUIPositionInterface_C.SetCustomizeUIInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SAVEGAME_UIElemLayout_C* SaveGame                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            LayoutIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCustomUIPositionInterface_C::SetCustomizeUIInfo(class UBP_SAVEGAME_UIElemLayout_C* SaveGame, int LayoutIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomUIPositionInterface.CustomUIPositionInterface_C.SetCustomizeUIInfo");

	UCustomUIPositionInterface_C_SetCustomizeUIInfo_Params params;
	params.SaveGame = SaveGame;
	params.LayoutIndex = LayoutIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
