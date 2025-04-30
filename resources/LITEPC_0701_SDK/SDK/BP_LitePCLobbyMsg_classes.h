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

// WidgetBlueprintGeneratedClass BP_LitePCLobbyMsg.BP_LitePCLobbyMsg_C
// 0x0018 (0x0218 - 0x0200)
class UBP_LitePCLobbyMsg_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0200(0x0008) (Transient, DuplicateTransient)
	class UTextBlock*                                  TextBlock_FeedBackInfo;                                   // 0x0208(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FTimerHandle                                FeedBackTimerHandle;                                      // 0x0210(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_LitePCLobbyMsg.BP_LitePCLobbyMsg_C");
		return ptr;
	}


	void SetMasterSoundMute();
	void SetChangeVoiceChannel();
	void SetVoiceMute();
	void ShowFeedBackInfo(const struct FText& InfoText);
	void ShowFeedBackInfoFinished();
	void ExecuteUbergraph_BP_LitePCLobbyMsg(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
