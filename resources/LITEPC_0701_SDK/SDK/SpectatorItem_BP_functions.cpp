
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

// Function SpectatorItem_BP.SpectatorItem_BP_C.ShowAngle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          RotationZ                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USpectatorItem_BP_C::ShowAngle(float RotationZ)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpectatorItem_BP.SpectatorItem_BP_C.ShowAngle");

	USpectatorItem_BP_C_ShowAngle_Params params;
	params.RotationZ = RotationZ;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
