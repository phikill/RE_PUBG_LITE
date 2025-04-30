
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

// Function ToolTipGauge.ToolTipGauge_C.UpdateGauge
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          BeginGap                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          EndGap                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CompareMode                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UToolTipGauge_C::UpdateGauge(float BeginGap, float EndGap, bool CompareMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function ToolTipGauge.ToolTipGauge_C.UpdateGauge");

	UToolTipGauge_C_UpdateGauge_Params params;
	params.BeginGap = BeginGap;
	params.EndGap = EndGap;
	params.CompareMode = CompareMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
