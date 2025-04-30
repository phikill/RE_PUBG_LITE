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

// WidgetBlueprintGeneratedClass ButtonEventListener.ButtonEventListener_C
// 0x0018 (0x02C8 - 0x02B0)
class UButtonEventListener_C : public UUAEUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02B0(0x0008) (Transient, DuplicateTransient)
	struct FScriptMulticastDelegate                    OnRightClick;                                             // 0x02B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ButtonEventListener.ButtonEventListener_C");
		return ptr;
	}


	void OnRightClicked(struct FVector2D* TempScreenPos);
	void ExecuteUbergraph_ButtonEventListener(int EntryPoint);
	void OnRightClick__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
