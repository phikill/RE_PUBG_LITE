
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

// Function BP_ServerSwitcher.BP_ServerSwitcher_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_ServerSwitcher_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ServerSwitcher.BP_ServerSwitcher_C.ReceiveBeginPlay");

	UBP_ServerSwitcher_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ServerSwitcher.BP_ServerSwitcher_C.ExecuteUbergraph_BP_ServerSwitcher
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ServerSwitcher_C::ExecuteUbergraph_BP_ServerSwitcher(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ServerSwitcher.BP_ServerSwitcher_C.ExecuteUbergraph_BP_ServerSwitcher");

	UBP_ServerSwitcher_C_ExecuteUbergraph_BP_ServerSwitcher_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
