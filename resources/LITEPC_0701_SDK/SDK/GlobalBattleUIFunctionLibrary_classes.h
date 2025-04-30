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

// BlueprintGeneratedClass GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UGlobalBattleUIFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C");
		return ptr;
	}


	void STATIC_GetLayoutDetailByType(int LayoutIndex, TEnumAsByte<EBP_UIENUM_UIElemTypes> ElemKey, class UObject* __WorldContext, class UBP_SAVEGAME_UIElemLayout_C** SaveGameObj, struct FBP_STRUCT_UIElemLayoutDetail* LayoutDetail, bool* IsFound);
	void STATIC_IsWidgetVisible(class UWidget* Widget, class UObject* __WorldContext, bool* visible);
	void STATIC_GetTimeByInt(int Second, class UObject* __WorldContext, struct FString* Time);
	void STATIC_CreateUAEUserWidget(class UClass* Class, class UUAEUserWidget* Parent, class UObject* __WorldContext, class UUAEUserWidget** Widget);
	void STATIC_GetLocalizeText(const struct FString& Key, class UObject* __WorldContext, struct FString* Text);
	bool STATIC_SaveUIElemLayoutSG(class UObject* __WorldContext, class USaveGame** SaveGameObject);
	void STATIC_LoadUIElemLayoutSG(class UObject* __WorldContext, class UBP_SAVEGAME_UIElemLayout_C** UIElemSaveGame);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
