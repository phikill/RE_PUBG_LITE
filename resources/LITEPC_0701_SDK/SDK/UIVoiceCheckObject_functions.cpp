
#include "../SDK.h"

// Name: LitePC_0701, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function UIVoiceCheckObject.UIVoiceCheckObject_C.Bindfunction
// (Public, BlueprintCallable, BlueprintEvent)

void UUIVoiceCheckObject_C::Bindfunction()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIVoiceCheckObject.UIVoiceCheckObject_C.Bindfunction");

	UUIVoiceCheckObject_C_Bindfunction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIVoiceCheckObject.UIVoiceCheckObject_C.CreateImage
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvasPanel*            Panel                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UImage*                  Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UImage*                  Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUIVoiceCheckObject_C::CreateImage(class UCanvasPanel* Panel, class UImage* Image, int Index, class UImage** Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIVoiceCheckObject.UIVoiceCheckObject_C.CreateImage");

	UUIVoiceCheckObject_C_CreateImage_Params params;
	params.Panel = Panel;
	params.Image = Image;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function UIVoiceCheckObject.UIVoiceCheckObject_C.InitImageList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvasPanel*            Panel                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UImage*                  moveImage                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UImage*                  weaponImage                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UImage*                  SlienceImage                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UImage*                  VehicleImage                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UImage*                  GlassImage                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUIVoiceCheckObject_C::InitImageList(class UCanvasPanel* Panel, class UImage* moveImage, class UImage* weaponImage, class UImage* SlienceImage, class UImage* VehicleImage, class UImage* GlassImage)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIVoiceCheckObject.UIVoiceCheckObject_C.InitImageList");

	UUIVoiceCheckObject_C_InitImageList_Params params;
	params.Panel = Panel;
	params.moveImage = moveImage;
	params.weaponImage = weaponImage;
	params.SlienceImage = SlienceImage;
	params.VehicleImage = VehicleImage;
	params.GlassImage = GlassImage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
