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

// Function Ingame_TeamItem_BP.Ingame_TeamItem_BP_C.SwitchGenderIcon
struct UIngame_TeamItem_BP_C_SwitchGenderIcon_Params
{
	bool                                               bIsMan;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ingame_TeamItem_BP.Ingame_TeamItem_BP_C.SetParachuteFollowState
struct UIngame_TeamItem_BP_C_SetParachuteFollowState_Params
{
	struct FParachuteFollowState                       ParachuteFollowState;                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Ingame_TeamItem_BP.Ingame_TeamItem_BP_C.StartFollowTarget
struct UIngame_TeamItem_BP_C_StartFollowTarget_Params
{
};

// Function Ingame_TeamItem_BP.Ingame_TeamItem_BP_C.CanFollowTarget
struct UIngame_TeamItem_BP_C_CanFollowTarget_Params
{
};

// Function Ingame_TeamItem_BP.Ingame_TeamItem_BP_C.UpdateVoice
struct UIngame_TeamItem_BP_C_UpdateVoice_Params
{
	int                                                status;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ingame_TeamItem_BP.Ingame_TeamItem_BP_C.SetTextAlpha
struct UIngame_TeamItem_BP_C_SetTextAlpha_Params
{
	bool                                               isDead;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ingame_TeamItem_BP.Ingame_TeamItem_BP_C.SetBreathHP
struct UIngame_TeamItem_BP_C_SetBreathHP_Params
{
	float                                              HP;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ingame_TeamItem_BP.Ingame_TeamItem_BP_C.SetPlayerName
struct UIngame_TeamItem_BP_C_SetPlayerName_Params
{
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ingame_TeamItem_BP.Ingame_TeamItem_BP_C.SetState
struct UIngame_TeamItem_BP_C_SetState_Params
{
	ExtraPlayerLiveState                               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ingame_TeamItem_BP.Ingame_TeamItem_BP_C.SetHP
struct UIngame_TeamItem_BP_C_SetHP_Params
{
	float                                              Percent;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsDying;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ingame_TeamItem_BP.Ingame_TeamItem_BP_C.Construct
struct UIngame_TeamItem_BP_C_Construct_Params
{
};

// Function Ingame_TeamItem_BP.Ingame_TeamItem_BP_C.BndEvt__Button_Follow_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
struct UIngame_TeamItem_BP_C_BndEvt__Button_Follow_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Ingame_TeamItem_BP.Ingame_TeamItem_BP_C.ExecuteUbergraph_Ingame_TeamItem_BP
struct UIngame_TeamItem_BP_C_ExecuteUbergraph_Ingame_TeamItem_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
