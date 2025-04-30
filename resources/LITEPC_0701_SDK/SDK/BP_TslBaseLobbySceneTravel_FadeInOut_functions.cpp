
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

// Function BP_TslBaseLobbySceneTravel_FadeInOut.BP_TslBaseLobbySceneTravel_FadeInOut_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TslBaseLobbySceneTravel_FadeInOut_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TslBaseLobbySceneTravel_FadeInOut.BP_TslBaseLobbySceneTravel_FadeInOut_C.UserConstructionScript");

	ABP_TslBaseLobbySceneTravel_FadeInOut_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TslBaseLobbySceneTravel_FadeInOut.BP_TslBaseLobbySceneTravel_FadeInOut_C.FadeInOut__FinishedFunc
// (BlueprintEvent)

void ABP_TslBaseLobbySceneTravel_FadeInOut_C::FadeInOut__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TslBaseLobbySceneTravel_FadeInOut.BP_TslBaseLobbySceneTravel_FadeInOut_C.FadeInOut__FinishedFunc");

	ABP_TslBaseLobbySceneTravel_FadeInOut_C_FadeInOut__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TslBaseLobbySceneTravel_FadeInOut.BP_TslBaseLobbySceneTravel_FadeInOut_C.FadeInOut__UpdateFunc
// (BlueprintEvent)

void ABP_TslBaseLobbySceneTravel_FadeInOut_C::FadeInOut__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TslBaseLobbySceneTravel_FadeInOut.BP_TslBaseLobbySceneTravel_FadeInOut_C.FadeInOut__UpdateFunc");

	ABP_TslBaseLobbySceneTravel_FadeInOut_C_FadeInOut__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TslBaseLobbySceneTravel_FadeInOut.BP_TslBaseLobbySceneTravel_FadeInOut_C.OnStartTravel
// (Event, Public, BlueprintEvent)

void ABP_TslBaseLobbySceneTravel_FadeInOut_C::OnStartTravel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TslBaseLobbySceneTravel_FadeInOut.BP_TslBaseLobbySceneTravel_FadeInOut_C.OnStartTravel");

	ABP_TslBaseLobbySceneTravel_FadeInOut_C_OnStartTravel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TslBaseLobbySceneTravel_FadeInOut.BP_TslBaseLobbySceneTravel_FadeInOut_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TslBaseLobbySceneTravel_FadeInOut_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TslBaseLobbySceneTravel_FadeInOut.BP_TslBaseLobbySceneTravel_FadeInOut_C.ReceiveEndPlay");

	ABP_TslBaseLobbySceneTravel_FadeInOut_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TslBaseLobbySceneTravel_FadeInOut.BP_TslBaseLobbySceneTravel_FadeInOut_C.ExecuteUbergraph_BP_TslBaseLobbySceneTravel_FadeInOut
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TslBaseLobbySceneTravel_FadeInOut_C::ExecuteUbergraph_BP_TslBaseLobbySceneTravel_FadeInOut(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TslBaseLobbySceneTravel_FadeInOut.BP_TslBaseLobbySceneTravel_FadeInOut_C.ExecuteUbergraph_BP_TslBaseLobbySceneTravel_FadeInOut");

	ABP_TslBaseLobbySceneTravel_FadeInOut_C_ExecuteUbergraph_BP_TslBaseLobbySceneTravel_FadeInOut_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
