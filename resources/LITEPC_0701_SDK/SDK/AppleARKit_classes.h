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

// Class AppleARKit.AppleARKitAnchor
// 0x0068 (0x0090 - 0x0028)
class UAppleARKitAnchor : public UObject
{
public:
	struct FGuid                                       Identifier;                                               // 0x0028(0x0010) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0038(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AppleARKit.AppleARKitAnchor");
		return ptr;
	}


	struct FTransform GetTransform();
};


// Class AppleARKit.AppleARKitBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UAppleARKitBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AppleARKit.AppleARKitBlueprintLibrary");
		return ptr;
	}


	bool STATIC_HitTestAtScreenPosition_TrackingSpace(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, EAppleARKitHitTestResultType Types, TArray<struct FAppleARKitHitTestResult>* OutResults);
	bool STATIC_GetCurrentFrame(class UObject* WorldContextObject, struct FAppleARKitFrame* OutCurrentFrame);
};


// Class AppleARKit.AppleARKitPlaneAnchor
// 0x0020 (0x00B0 - 0x0090)
class UAppleARKitPlaneAnchor : public UAppleARKitAnchor
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0090(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AppleARKit.AppleARKitPlaneAnchor");
		return ptr;
	}


	struct FTransform GetTransformToCenter();
	struct FVector GetExtent();
	struct FVector GetCenter();
};


// Class AppleARKit.ARKitCameraOverlayMaterialLoader
// 0x0008 (0x0030 - 0x0028)
class UARKitCameraOverlayMaterialLoader : public UObject
{
public:
	class UMaterialInterface*                          DefaultCameraOverlayMaterial;                             // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AppleARKit.ARKitCameraOverlayMaterialLoader");
		return ptr;
	}

};


// Class AppleARKit.MaterialExpressionARKitPassthroughCamera
// 0x0040 (0x00A0 - 0x0060)
class UMaterialExpressionARKitPassthroughCamera : public UMaterialExpression
{
public:
	struct FExpressionInput                            Coordinates;                                              // 0x0060(0x0038)
	uint32_t                                           ConstCoordinate;                                          // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EARKitTextureType>                     TextureType;                                              // 0x009C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x009D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AppleARKit.MaterialExpressionARKitPassthroughCamera");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
