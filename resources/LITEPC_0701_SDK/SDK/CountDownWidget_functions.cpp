
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

// Function CountDownWidget.CountDownWidget_C.ShowGameStartCountDown
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CountDownTime                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCountDownWidget_C::ShowGameStartCountDown(float CountDownTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CountDownWidget.CountDownWidget_C.ShowGameStartCountDown");

	UCountDownWidget_C_ShowGameStartCountDown_Params params;
	params.CountDownTime = CountDownTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
