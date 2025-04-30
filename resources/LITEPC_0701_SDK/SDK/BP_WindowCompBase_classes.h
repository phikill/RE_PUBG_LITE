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

// BlueprintGeneratedClass BP_WindowCompBase.BP_WindowCompBase_C
// 0x0014 (0x07A4 - 0x0790)
class UBP_WindowCompBase_C : public UUAEWindowComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0790(0x0008) (Transient, DuplicateTransient)
	class UAkAudioEvent*                               BrokenSound;                                              // 0x0798(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              voiceShowTime;                                            // 0x07A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WindowCompBase.BP_WindowCompBase_C");
		return ptr;
	}


	void callvoicecheck();
	void NotifyServerBroken();
	void LocalHandleWindowBrokenBP(bool* bInitial, bool* bLocal);
	void ExecuteUbergraph_BP_WindowCompBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
