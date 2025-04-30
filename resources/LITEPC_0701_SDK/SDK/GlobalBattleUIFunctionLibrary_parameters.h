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

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetLayoutDetailByType
struct UGlobalBattleUIFunctionLibrary_C_GetLayoutDetailByType_Params
{
	class UBP_SAVEGAME_UIElemLayout_C*                 SaveGameObj;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                LayoutIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBP_UIENUM_UIElemTypes>                ElemKey;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_UIElemLayoutDetail               LayoutDetail;                                             // (Parm, OutParm)
	bool                                               IsFound;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.IsWidgetVisible
struct UGlobalBattleUIFunctionLibrary_C_IsWidgetVisible_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               visible;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetTimeByInt
struct UGlobalBattleUIFunctionLibrary_C_GetTimeByInt_Params
{
	int                                                Second;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Time;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.CreateUAEUserWidget
struct UGlobalBattleUIFunctionLibrary_C_CreateUAEUserWidget_Params
{
	class UClass*                                      Class;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UUAEUserWidget*                              Parent;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UUAEUserWidget*                              Widget;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetLocalizeText
struct UGlobalBattleUIFunctionLibrary_C_GetLocalizeText_Params
{
	struct FString                                     Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Text;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.SaveUIElemLayoutSG
struct UGlobalBattleUIFunctionLibrary_C_SaveUIElemLayoutSG_Params
{
	class USaveGame*                                   SaveGameObject;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.LoadUIElemLayoutSG
struct UGlobalBattleUIFunctionLibrary_C_LoadUIElemLayoutSG_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBP_SAVEGAME_UIElemLayout_C*                 UIElemSaveGame;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
