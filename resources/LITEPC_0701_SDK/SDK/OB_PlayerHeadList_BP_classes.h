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

// WidgetBlueprintGeneratedClass OB_PlayerHeadList_BP.OB_PlayerHeadList_BP_C
// 0x0068 (0x0268 - 0x0200)
class UOB_PlayerHeadList_BP_C : public UUserWidget
{
public:
	class UCanvasPanel*                                CanvasPanel_Content;                                      // 0x0200(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0208(0x0008) MISSED OFFSET
	struct FVector4                                    UILimit;                                                  // 0x0210(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   UIOffset;                                                 // 0x0220(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               isAllow;                                                  // 0x0228(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0229(0x0007) MISSED OFFSET
	TArray<struct FPlayerInfoInOB>                     MapList;                                                  // 0x0230(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FObservedData                               OBPlayer;                                                 // 0x0240(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass OB_PlayerHeadList_BP.OB_PlayerHeadList_BP_C");
		return ptr;
	}


	void RefreshOBData(const struct FObservedData& ObservedPlayer, TArray<struct FPlayerInfoInOB>* MapPlayerList);
	void SetChildrenVisible(bool IsVisible, class UPanelWidget* Panel);
	void GetChildByIndex(class UPanelWidget* PanelWidget, int Index, class UOB_PlayerHeadHPItem_UIBP_C** Item);
	void RefreshData(const struct FObservedData& ObservedPlayer, TArray<struct FPlayerInfoInOB>* MapPlayerList);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
