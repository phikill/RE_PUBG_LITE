
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

// Function BP_GameEventListener.BP_GameEventListener_C.SetDefaultRendering
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GameEventListener_C::SetDefaultRendering()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameEventListener.BP_GameEventListener_C.SetDefaultRendering");

	UBP_GameEventListener_C_SetDefaultRendering_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameEventListener.BP_GameEventListener_C.EnableGrassLOD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GameEventListener_C::EnableGrassLOD(int Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameEventListener.BP_GameEventListener_C.EnableGrassLOD");

	UBP_GameEventListener_C_EnableGrassLOD_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameEventListener.BP_GameEventListener_C.ChangeStreamingLevel
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GameEventListener_C::ChangeStreamingLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameEventListener.BP_GameEventListener_C.ChangeStreamingLevel");

	UBP_GameEventListener_C_ChangeStreamingLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameEventListener.BP_GameEventListener_C.InitIncaseReconnect
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GameEventListener_C::InitIncaseReconnect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameEventListener.BP_GameEventListener_C.InitIncaseReconnect");

	UBP_GameEventListener_C_InitIncaseReconnect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameEventListener.BP_GameEventListener_C.IsIOSPlatform
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsIOS                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GameEventListener_C::IsIOSPlatform(bool* IsIOS)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameEventListener.BP_GameEventListener_C.IsIOSPlatform");

	UBP_GameEventListener_C_IsIOSPlatform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsIOS != nullptr)
		*IsIOS = params.IsIOS;
}


// Function BP_GameEventListener.BP_GameEventListener_C.InitNearClip
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GameEventListener_C::InitNearClip()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameEventListener.BP_GameEventListener_C.InitNearClip");

	UBP_GameEventListener_C_InitNearClip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameEventListener.BP_GameEventListener_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_GameEventListener_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameEventListener.BP_GameEventListener_C.ReceiveBeginPlay");

	UBP_GameEventListener_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameEventListener.BP_GameEventListener_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGamePawnEvent>    gamePawnEvent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GameEventListener_C::CustomEvent_1(TEnumAsByte<EGamePawnEvent> gamePawnEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameEventListener.BP_GameEventListener_C.CustomEvent_1");

	UBP_GameEventListener_C_CustomEvent_1_Params params;
	params.gamePawnEvent = gamePawnEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameEventListener.BP_GameEventListener_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GameEventListener_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameEventListener.BP_GameEventListener_C.ReceiveEndPlay");

	UBP_GameEventListener_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameEventListener.BP_GameEventListener_C.UnloadTree
// (BlueprintCallable, BlueprintEvent)

void UBP_GameEventListener_C::UnloadTree()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameEventListener.BP_GameEventListener_C.UnloadTree");

	UBP_GameEventListener_C_UnloadTree_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameEventListener.BP_GameEventListener_C.LoadTree
// (BlueprintCallable, BlueprintEvent)

void UBP_GameEventListener_C::LoadTree()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameEventListener.BP_GameEventListener_C.LoadTree");

	UBP_GameEventListener_C_LoadTree_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameEventListener.BP_GameEventListener_C.ExecuteUbergraph_BP_GameEventListener
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GameEventListener_C::ExecuteUbergraph_BP_GameEventListener(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameEventListener.BP_GameEventListener_C.ExecuteUbergraph_BP_GameEventListener");

	UBP_GameEventListener_C_ExecuteUbergraph_BP_GameEventListener_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
