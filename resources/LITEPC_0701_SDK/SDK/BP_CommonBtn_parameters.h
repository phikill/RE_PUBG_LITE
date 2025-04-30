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

// Function BP_CommonBtn.BP_CommonBtn_C.OnChangeOpenDoorMode
struct UBP_CommonBtn_C_OnChangeOpenDoorMode_Params
{
	int                                                openMode;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CommonBtn.BP_CommonBtn_C.UnRegistShowDoorButton
struct UBP_CommonBtn_C_UnRegistShowDoorButton_Params
{
};

// Function BP_CommonBtn.BP_CommonBtn_C.OnShowDoorButton
struct UBP_CommonBtn_C_OnShowDoorButton_Params
{
	TEnumAsByte<ECommonBtn>                            Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CommonBtn.BP_CommonBtn_C.RegistShowDoorButton
struct UBP_CommonBtn_C_RegistShowDoorButton_Params
{
};

// Function BP_CommonBtn.BP_CommonBtn_C.ShowDoorButton
struct UBP_CommonBtn_C_ShowDoorButton_Params
{
	bool                                               Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Open;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                openMode;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CommonBtn.BP_CommonBtn_C.GetPlayerController
struct UBP_CommonBtn_C_GetPlayerController_Params
{
	class ABP_STExtraPlayerController_C*               PlayerController;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CommonBtn.BP_CommonBtn_C.ReceiveBeginPlay
struct UBP_CommonBtn_C_ReceiveBeginPlay_Params
{
};

// Function BP_CommonBtn.BP_CommonBtn_C.CharacterStatusChanged
struct UBP_CommonBtn_C_CharacterStatusChanged_Params
{
	bool                                               IsNearDeath;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsRescueingOther;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CommonBtn.BP_CommonBtn_C.PlayerControllerReconnectedDelegate_Event_1
struct UBP_CommonBtn_C_PlayerControllerReconnectedDelegate_Event_1_Params
{
};

// Function BP_CommonBtn.BP_CommonBtn_C.UI_Click
struct UBP_CommonBtn_C_UI_Click_Params
{
	bool                                               bSimulateExtraDoor;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CommonBtn.BP_CommonBtn_C.ToogleDoor
struct UBP_CommonBtn_C_ToogleDoor_Params
{
};

// Function BP_CommonBtn.BP_CommonBtn_C.BP_ShowDoorBtn
struct UBP_CommonBtn_C_BP_ShowDoorBtn_Params
{
	bool*                                              bShow;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bOpen;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               doorOpenMode;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CommonBtn.BP_CommonBtn_C.AutoOpenDoor
struct UBP_CommonBtn_C_AutoOpenDoor_Params
{
	bool                                               BoolValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CommonBtn.BP_CommonBtn_C.BP_SimulateUIClick
struct UBP_CommonBtn_C_BP_SimulateUIClick_Params
{
	bool*                                              bExtraDoor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CommonBtn.BP_CommonBtn_C.ExecuteUbergraph_BP_CommonBtn
struct UBP_CommonBtn_C_ExecuteUbergraph_BP_CommonBtn_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
