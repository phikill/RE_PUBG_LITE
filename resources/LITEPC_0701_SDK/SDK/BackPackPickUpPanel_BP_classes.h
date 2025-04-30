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

// WidgetBlueprintGeneratedClass BackPackPickUpPanel_BP.BackPackPickUpPanel_BP_C
// 0x0068 (0x0318 - 0x02B0)
class UBackPackPickUpPanel_BP_C : public UUAEUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02B0(0x0008) (Transient, DuplicateTransient)
	class UMainBackPackPanel_BP_C*                     MainBackPackPanel_BP;                                     // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               NewVar_1;                                                 // 0x02C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02C1(0x0007) MISSED OFFSET
	TMap<int, EWeaponAttachmentSocketType>             WeaponAttachPos;                                          // 0x02C8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BackPackPickUpPanel_BP.BackPackPickUpPanel_BP_C");
		return ptr;
	}


	void AddToWeaponAttachPos(EWeaponAttachmentSocketType socket, int* attachID);
	void IsGunSupportAttachByRes(int gunResID, int attachresID, bool* support);
	void IsGunSupportAttachByDefine(const struct FItemDefineID& gunDefine, const struct FItemDefineID& attachDefine, bool* support);
	void GetWeaponSupportSocket(int WeaponId, TArray<EWeaponAttachmentSocketType>* socketList);
	void GetWeaponSupportAttachResID(int WeaponId, TArray<int>* attachID);
	void GetWeaponAttachPosByResID(int resID, EWeaponAttachmentSocketType* socket);
	void HideBackpackPanel();
	void OnCloseBackPack();
	void ReceivedInitWidget();
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void ExecuteUbergraph_BackPackPickUpPanel_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
