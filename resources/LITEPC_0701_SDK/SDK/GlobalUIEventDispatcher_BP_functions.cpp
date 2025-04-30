
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

// Function GlobalUIEventDispatcher_BP.GlobalUIEventDispatcher_BP_C.WardrobePutDownEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PutonID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            resID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIEventDispatcher_BP_C::WardrobePutDownEvent__DelegateSignature(int PutonID, int resID)
{
	static auto fn = UObject::FindObject<UFunction>("Function GlobalUIEventDispatcher_BP.GlobalUIEventDispatcher_BP_C.WardrobePutDownEvent__DelegateSignature");

	UGlobalUIEventDispatcher_BP_C_WardrobePutDownEvent__DelegateSignature_Params params;
	params.PutonID = PutonID;
	params.resID = resID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
