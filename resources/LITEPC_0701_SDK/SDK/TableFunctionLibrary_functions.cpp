
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

// Function TableFunctionLibrary.TableFunctionLibrary_C.GetItemTableRow
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBP_STRUCT_Item_type    Item                           (Parm, OutParm)

void UTableFunctionLibrary_C::STATIC_GetItemTableRow(int ID, class UObject* __WorldContext, struct FBP_STRUCT_Item_type* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function TableFunctionLibrary.TableFunctionLibrary_C.GetItemTableRow");

	UTableFunctionLibrary_C_GetItemTableRow_Params params;
	params.ID = ID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
