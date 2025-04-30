
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

// Function BP_WindowCompBase.BP_WindowCompBase_C.callvoicecheck
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_WindowCompBase_C::callvoicecheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WindowCompBase.BP_WindowCompBase_C.callvoicecheck");

	UBP_WindowCompBase_C_callvoicecheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WindowCompBase.BP_WindowCompBase_C.NotifyServerBroken
// (Event, Protected, BlueprintEvent)

void UBP_WindowCompBase_C::NotifyServerBroken()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WindowCompBase.BP_WindowCompBase_C.NotifyServerBroken");

	UBP_WindowCompBase_C_NotifyServerBroken_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WindowCompBase.BP_WindowCompBase_C.LocalHandleWindowBrokenBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bInitial                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bLocal                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_WindowCompBase_C::LocalHandleWindowBrokenBP(bool* bInitial, bool* bLocal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WindowCompBase.BP_WindowCompBase_C.LocalHandleWindowBrokenBP");

	UBP_WindowCompBase_C_LocalHandleWindowBrokenBP_Params params;
	params.bInitial = bInitial;
	params.bLocal = bLocal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WindowCompBase.BP_WindowCompBase_C.ExecuteUbergraph_BP_WindowCompBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_WindowCompBase_C::ExecuteUbergraph_BP_WindowCompBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WindowCompBase.BP_WindowCompBase_C.ExecuteUbergraph_BP_WindowCompBase");

	UBP_WindowCompBase_C_ExecuteUbergraph_BP_WindowCompBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
