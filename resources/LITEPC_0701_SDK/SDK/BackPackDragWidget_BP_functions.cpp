
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

// Function BackPackDragWidget_BP.BackPackDragWidget_BP_C.ShowDisableMark
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBackPackDragWidget_BP_C::ShowDisableMark(bool isShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackDragWidget_BP.BackPackDragWidget_BP_C.ShowDisableMark");

	UBackPackDragWidget_BP_C_ShowDisableMark_Params params;
	params.isShow = isShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackPackDragWidget_BP.BackPackDragWidget_BP_C.SetPic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush             InBrush                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UBackPackDragWidget_BP_C::SetPic(const struct FSlateBrush& InBrush)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackDragWidget_BP.BackPackDragWidget_BP_C.SetPic");

	UBackPackDragWidget_BP_C_SetPic_Params params;
	params.InBrush = InBrush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
