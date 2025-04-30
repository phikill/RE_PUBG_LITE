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

// BlueprintGeneratedClass CameraShakeForFalling.CameraShakeForFalling_C
// 0x0008 (0x0168 - 0x0160)
class UCameraShakeForFalling_C : public UCameraShake
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0160(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CameraShakeForFalling.CameraShakeForFalling_C");
		return ptr;
	}


	void ReceivePlayShake(float* Scale);
	void ExecuteUbergraph_CameraShakeForFalling(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
