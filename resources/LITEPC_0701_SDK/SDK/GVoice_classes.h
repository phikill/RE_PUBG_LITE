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

// WidgetBlueprintGeneratedClass GVoice.GVoice_C
// 0x0012 (0x02C2 - 0x02B0)
class UGVoice_C : public UUAEUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02B0(0x0008) (Transient, DuplicateTransient)
	class UGVoiceInterface*                            GVoice;                                                   // 0x02B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsJoinedTeam;                                             // 0x02C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsJoinedRange;                                            // 0x02C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GVoice.GVoice_C");
		return ptr;
	}


	void GetTeamID(int* TeamID);
	void GetSessionID(struct FString* SessionID);
	void EnsureJoinTeam();
	void EnsureJoinRange();
	void VoiceMute();
	void VoiceTeam();
	void VoiceRange();
	void VoiceQuit();
	void VoicePttOn();
	void VoicePttOff();
	void VoiceBySettings();
	void OnSessionIdReplicated(const struct FString& SessionID);
	void OnTeamIdReplicated(int TeamID);
	void ReceivedInitWidget();
	void Destruct();
	void ReceiveHide();
	void ExecuteUbergraph_GVoice(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
