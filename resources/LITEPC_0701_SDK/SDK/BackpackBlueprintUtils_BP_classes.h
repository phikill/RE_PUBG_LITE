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

// BlueprintGeneratedClass BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C
// 0x0080 (0x02E0 - 0x0260)
class UBackpackBlueprintUtils_BP_C : public UBackpackBlueprintUtils
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (Transient, DuplicateTransient)
	TArray<struct FBattleItemAdditionalData>           EmptyAdditionalData;                                      // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FName, struct FItemAssociation>        EmptyAssociationMap;                                      // 0x0278(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FItemAssociation>                    EmptyAssociationArray;                                    // 0x02C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                CharacterVirtualItem_Type;                                // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CharacterVirtualItem_TypeSpecificID;                      // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C");
		return ptr;
	}


	struct FSkinData MakeSkinDataFromItemDefineID(struct FItemDefineID* DefineID);
	struct FLogItem GetItemDataForGameLog(int* ItemID);
	void AddToWeaponAttachPos(int attachID, EWeaponAttachmentSocketType socket);
	void InitItemTable();
	struct FString GetBattleItemHandlePath(struct FItemDefineID* DefineID);
	struct FString GetRawBattleTextByRawTextID(int* ID);
	struct FString GetRawBattleTextByType(EBattleTextType* Type);
	int GetItemSubTypeID(int* SpecificID);
	struct FBattleWeaponItemDisplayData GetBattleWeaponItemDisplayDataByDefineID(struct FItemDefineID* DefineID);
	void GenerateItemDefineIDByItemTableID(int* ItemTableID, int* Type, int* TypeSpecificID);
	bool IsVirtualItemData(struct FBattleItemData* ItemData);
	void GetBPTableName(int Type, int TypeSpecificID, struct FString* BPTableName);
	class UBattleItemHandleBase* GetCharacterVirtualItemHandleInBackpack(class UBackpackComponent** BackpackComp);
	void CreateBattleItemHandle_Character(class UObject* Outer, class UBattleItemHandleBase** BattleItemHandle);
	void CreateBattleItemHandle_Default(int Type, int ID, class UObject* Outer, class UBattleItemHandleBase** BattleItemHandle);
	void GetBattleItemFeatureData(const struct FItemDefineID& DefineID, struct FBattleItemFeatureData* FeatureData);
	struct FBattleItemFeatureData GetBattleItemFeatureDataByDefineID(struct FItemDefineID* DefineID);
	class UBattleItemHandleBase* CreateBattleItemHandle(struct FItemDefineID* DefineID, class UObject** Outer);
	struct FBattleItemData GetCharacterVirtualItemInBackpack(class UBackpackComponent** BackpackComp);
	struct FBattleItemData ConstructBattleItemDataByItemTableID(int* ItemTableID);
	struct FBattleItemData ConstructBattleItemDataByDefineID(struct FItemDefineID* DefineID);
	void GetItemTableRowByItemTableID(int ID, struct FBP_STRUCT_Item_type* ItemTableRow);
	void AddCharacterVirtualItemToBackpack(class UBackpackComponent** BackpackComp, class ASTExtraBaseCharacter** Character);
	void InitialItemTable();
	void ExecuteUbergraph_BackpackBlueprintUtils_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
