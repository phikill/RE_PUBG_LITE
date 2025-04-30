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

// BlueprintGeneratedClass UIVoiceCheckObject.UIVoiceCheckObject_C
// 0x0000 (0x0060 - 0x0060)
class UUIVoiceCheckObject_C : public UVoiceCheckObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass UIVoiceCheckObject.UIVoiceCheckObject_C");
		return ptr;
	}


	void Bindfunction();
	void CreateImage(class UCanvasPanel* Panel, class UImage* Image, int Index, class UImage** Result);
	void InitImageList(class UCanvasPanel* Panel, class UImage* moveImage, class UImage* weaponImage, class UImage* SlienceImage, class UImage* VehicleImage, class UImage* GlassImage);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
