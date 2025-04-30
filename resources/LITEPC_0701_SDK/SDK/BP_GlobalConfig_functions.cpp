
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

// Function BP_GlobalConfig.BP_GlobalConfig_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_GlobalConfig_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GlobalConfig.BP_GlobalConfig_C.UserConstructionScript");

	ABP_GlobalConfig_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GlobalConfig.BP_GlobalConfig_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_GlobalConfig_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GlobalConfig.BP_GlobalConfig_C.ReceiveBeginPlay");

	ABP_GlobalConfig_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GlobalConfig.BP_GlobalConfig_C.ExecuteUbergraph_BP_GlobalConfig
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GlobalConfig_C::ExecuteUbergraph_BP_GlobalConfig(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GlobalConfig.BP_GlobalConfig_C.ExecuteUbergraph_BP_GlobalConfig");

	ABP_GlobalConfig_C_ExecuteUbergraph_BP_GlobalConfig_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
