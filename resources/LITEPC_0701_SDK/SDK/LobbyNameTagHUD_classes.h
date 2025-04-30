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

// WidgetBlueprintGeneratedClass LobbyNameTagHUD.LobbyNameTagHUD_C
// 0x0018 (0x0318 - 0x0300)
class ULobbyNameTagHUD_C : public UTslLobbyNameTagHudWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0300(0x0008) (Transient, DuplicateTransient)
	TArray<int>                                        SlotNums;                                                 // 0x0308(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LobbyNameTagHUD.LobbyNameTagHUD_C");
		return ptr;
	}


	void CleanUpNameTagWidget(int SlotIndex);
	void SetupNameTagWidget(int SlotIndex);
	void GetNameTagWidget(int SlotIndex, class UTslLobbyNameTagWidget** Widget);
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void ExecuteUbergraph_LobbyNameTagHUD(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
