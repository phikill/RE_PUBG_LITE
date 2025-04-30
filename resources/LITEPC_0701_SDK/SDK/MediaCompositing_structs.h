#pragma once

// Name: LitePC_0701, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MediaCompositing.MediaPlaneParameters
// 0x0038
struct FMediaPlaneParameters
{
	class UMaterialInterface*                          Material;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       TextureParameterName;                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFillScreen;                                              // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	struct FVector2D                                   FillScreenAmount;                                         // 0x0014(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   FixedSize;                                                // 0x001C(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	class UTexture*                                    RenderTexture;                                            // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DynamicMaterial;                                          // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct MediaCompositing.MovieSceneMediaSectionParams
// 0x0020
struct FMovieSceneMediaSectionParams
{
	float                                              SectionStartTime;                                         // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UMediaSource*                                Source;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Proxy;                                                    // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct MediaCompositing.MovieSceneMediaSectionTemplate
// 0x0048 (0x0068 - 0x0020)
struct FMovieSceneMediaSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieScenePropertySectionData              PropertyData;                                             // 0x0020(0x0028)
	struct FMovieSceneMediaSectionParams               Params;                                                   // 0x0048(0x0020)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
