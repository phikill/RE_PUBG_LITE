#pragma once

// Name: LitePC_0701, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TableFunctionLibrary.TableFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UTableFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TableFunctionLibrary.TableFunctionLibrary_C");
		return ptr;
	}


	void STATIC_GetItemTableRow(int ID, class UObject* __WorldContext, struct FBP_STRUCT_Item_type* Item);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
