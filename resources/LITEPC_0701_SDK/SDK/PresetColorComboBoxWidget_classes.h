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

// WidgetBlueprintGeneratedClass PresetColorComboBoxWidget.PresetColorComboBoxWidget_C
// 0x0008 (0x0260 - 0x0258)
class UPresetColorComboBoxWidget_C : public UQualityComboBox_C
{
public:
	class UPresetColorWidget_C*                        ColorRef;                                                 // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PresetColorComboBoxWidget.PresetColorComboBoxWidget_C");
		return ptr;
	}


	class UWidget* On_ComboBox_GenerateWidget_1(struct FString* Item);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
