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

// BlueprintGeneratedClass ClientIngameUIFunctionLibrary_BP.ClientIngameUIFunctionLibrary_BP_C
// 0x0000 (0x0028 - 0x0028)
class UClientIngameUIFunctionLibrary_BP_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ClientIngameUIFunctionLibrary_BP.ClientIngameUIFunctionLibrary_BP_C");
		return ptr;
	}


	void STATIC_GetInputControlPanel(class UUAEUserWidget* UI, class UObject* __WorldContext, class UMainControlPanelTochButton_C** InputControlPanel);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
