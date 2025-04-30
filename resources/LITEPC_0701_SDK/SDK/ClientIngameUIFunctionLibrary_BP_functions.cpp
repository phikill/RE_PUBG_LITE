
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

// Function ClientIngameUIFunctionLibrary_BP.ClientIngameUIFunctionLibrary_BP_C.GetInputControlPanel
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UUAEUserWidget*          UI                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMainControlPanelTochButton_C* InputControlPanel              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UClientIngameUIFunctionLibrary_BP_C::STATIC_GetInputControlPanel(class UUAEUserWidget* UI, class UObject* __WorldContext, class UMainControlPanelTochButton_C** InputControlPanel)
{
	static auto fn = UObject::FindObject<UFunction>("Function ClientIngameUIFunctionLibrary_BP.ClientIngameUIFunctionLibrary_BP_C.GetInputControlPanel");

	UClientIngameUIFunctionLibrary_BP_C_GetInputControlPanel_Params params;
	params.UI = UI;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InputControlPanel != nullptr)
		*InputControlPanel = params.InputControlPanel;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
