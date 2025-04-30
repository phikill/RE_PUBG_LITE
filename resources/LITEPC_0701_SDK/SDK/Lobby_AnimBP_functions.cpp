
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

// Function Lobby_AnimBP.Lobby_AnimBP_C.SetWeaponPose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EWeaponType                    WeaponType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobby_AnimBP_C::SetWeaponPose(EWeaponType WeaponType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lobby_AnimBP.Lobby_AnimBP_C.SetWeaponPose");

	ULobby_AnimBP_C_SetWeaponPose_Params params;
	params.WeaponType = WeaponType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByEnum_D4D579C14F7A1C5C2F080D8F14DF9F2D
// (BlueprintEvent)

void ULobby_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByEnum_D4D579C14F7A1C5C2F080D8F14DF9F2D()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByEnum_D4D579C14F7A1C5C2F080D8F14DF9F2D");

	ULobby_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByEnum_D4D579C14F7A1C5C2F080D8F14DF9F2D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_AnimDynamics_2BE462B7452BD6CC7AA9BEB99A15F46B
// (BlueprintEvent)

void ULobby_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_AnimDynamics_2BE462B7452BD6CC7AA9BEB99A15F46B()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_AnimDynamics_2BE462B7452BD6CC7AA9BEB99A15F46B");

	ULobby_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_AnimDynamics_2BE462B7452BD6CC7AA9BEB99A15F46B_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lobby_AnimBP.Lobby_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobby_AnimBP_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lobby_AnimBP.Lobby_AnimBP_C.BlueprintUpdateAnimation");

	ULobby_AnimBP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lobby_AnimBP.Lobby_AnimBP_C.ExecuteUbergraph_Lobby_AnimBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobby_AnimBP_C::ExecuteUbergraph_Lobby_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lobby_AnimBP.Lobby_AnimBP_C.ExecuteUbergraph_Lobby_AnimBP");

	ULobby_AnimBP_C_ExecuteUbergraph_Lobby_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
