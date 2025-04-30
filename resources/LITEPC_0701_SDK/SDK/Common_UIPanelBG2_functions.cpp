
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

// Function Common_UIPanelBG2.Common_UIPanelBG2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCommon_UIPanelBG2_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Common_UIPanelBG2.Common_UIPanelBG2_C.Construct");

	UCommon_UIPanelBG2_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Common_UIPanelBG2.Common_UIPanelBG2_C.ExecuteUbergraph_Common_UIPanelBG2
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_UIPanelBG2_C::ExecuteUbergraph_Common_UIPanelBG2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Common_UIPanelBG2.Common_UIPanelBG2_C.ExecuteUbergraph_Common_UIPanelBG2");

	UCommon_UIPanelBG2_C_ExecuteUbergraph_Common_UIPanelBG2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
