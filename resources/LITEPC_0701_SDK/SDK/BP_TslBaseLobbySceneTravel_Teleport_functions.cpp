
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

// Function BP_TslBaseLobbySceneTravel_Teleport.BP_TslBaseLobbySceneTravel_Teleport_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TslBaseLobbySceneTravel_Teleport_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TslBaseLobbySceneTravel_Teleport.BP_TslBaseLobbySceneTravel_Teleport_C.UserConstructionScript");

	ABP_TslBaseLobbySceneTravel_Teleport_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TslBaseLobbySceneTravel_Teleport.BP_TslBaseLobbySceneTravel_Teleport_C.OnStartTravel
// (Event, Public, BlueprintEvent)

void ABP_TslBaseLobbySceneTravel_Teleport_C::OnStartTravel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TslBaseLobbySceneTravel_Teleport.BP_TslBaseLobbySceneTravel_Teleport_C.OnStartTravel");

	ABP_TslBaseLobbySceneTravel_Teleport_C_OnStartTravel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TslBaseLobbySceneTravel_Teleport.BP_TslBaseLobbySceneTravel_Teleport_C.ExecuteUbergraph_BP_TslBaseLobbySceneTravel_Teleport
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TslBaseLobbySceneTravel_Teleport_C::ExecuteUbergraph_BP_TslBaseLobbySceneTravel_Teleport(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TslBaseLobbySceneTravel_Teleport.BP_TslBaseLobbySceneTravel_Teleport_C.ExecuteUbergraph_BP_TslBaseLobbySceneTravel_Teleport");

	ABP_TslBaseLobbySceneTravel_Teleport_C_ExecuteUbergraph_BP_TslBaseLobbySceneTravel_Teleport_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
