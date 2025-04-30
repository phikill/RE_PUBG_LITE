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

// BlueprintGeneratedClass CustomUIPositionInterface.CustomUIPositionInterface_C
// 0x0000 (0x0028 - 0x0028)
class UCustomUIPositionInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CustomUIPositionInterface.CustomUIPositionInterface_C");
		return ptr;
	}


	void IsCustomUIDataValid(class UWidget* Widget, const struct FVector2D& SaveDataSize, bool* IsValid);
	void SetSettingControlUI();
	void SetCustomizeUIInfo(class UBP_SAVEGAME_UIElemLayout_C* SaveGame, int LayoutIndex);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
