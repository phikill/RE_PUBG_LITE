
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

// Function InterfaceMainOption.InterfaceMainOption_C.OnSettingChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UInterfaceMainOption_C::OnSettingChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function InterfaceMainOption.InterfaceMainOption_C.OnSettingChanged");

	UInterfaceMainOption_C_OnSettingChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
