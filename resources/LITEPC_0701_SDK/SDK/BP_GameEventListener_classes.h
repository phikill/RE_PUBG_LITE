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

// BlueprintGeneratedClass BP_GameEventListener.BP_GameEventListener_C
// 0x0008 (0x0128 - 0x0120)
class UBP_GameEventListener_C : public UGameEventListener
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0120(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GameEventListener.BP_GameEventListener_C");
		return ptr;
	}


	void SetDefaultRendering();
	void EnableGrassLOD(int Enable);
	void ChangeStreamingLevel();
	void InitIncaseReconnect();
	void IsIOSPlatform(bool* IsIOS);
	void InitNearClip();
	void ReceiveBeginPlay();
	void CustomEvent_1(TEnumAsByte<EGamePawnEvent> gamePawnEvent);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void UnloadTree();
	void LoadTree();
	void ExecuteUbergraph_BP_GameEventListener(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
