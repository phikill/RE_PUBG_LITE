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

// BlueprintGeneratedClass OBUI_Library.OBUI_Library_C
// 0x0000 (0x0028 - 0x0028)
class UOBUI_Library_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass OBUI_Library.OBUI_Library_C");
		return ptr;
	}


	void STATIC_GetPlayerColorByTeamID(int TeamID, class UObject* __WorldContext, struct FColor* PlayerColor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
