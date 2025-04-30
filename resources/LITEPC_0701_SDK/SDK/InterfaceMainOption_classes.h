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

// BlueprintGeneratedClass InterfaceMainOption.InterfaceMainOption_C
// 0x0000 (0x0028 - 0x0028)
class UInterfaceMainOption_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass InterfaceMainOption.InterfaceMainOption_C");
		return ptr;
	}


	void OnSettingChanged();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
