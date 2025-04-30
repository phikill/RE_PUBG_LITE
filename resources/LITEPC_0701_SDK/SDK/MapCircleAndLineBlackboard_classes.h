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

// WidgetBlueprintGeneratedClass MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C
// 0x01C0 (0x0470 - 0x02B0)
class UMapCircleAndLineBlackboard_C : public UUAEUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02B0(0x0008) (Transient, DuplicateTransient)
	class UImage*                                      Image_3;                                                  // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FMapRealTimeInfo                            MapRealTimeInfo;                                          // 0x02C0(0x0080) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              MapSize;                                                  // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0344(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    MoveMap;                                                  // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<struct FVector2D>                           LastTickFingerPosition;                                   // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              PutMarkerThreshold;                                       // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x036C(0x0004) MISSED OFFSET
	TArray<struct FVector2D>                           TouchStartFingerPosition;                                 // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ASTExtraPlayerController*                    STExtraPC;                                                // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    SetMarker;                                                // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<float>                                      FingerMoveDis;                                            // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bMultiTouch;                                              // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x03A9(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    ScaleMap;                                                 // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              MultiTouchScaleRatio;                                     // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsDrawSelfGuide;                                          // 0x03C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x03C5(0x0003) MISSED OFFSET
	struct FLinearColor                                SelfGuideColor;                                           // 0x03C8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LevelLandScapeCenter;                                     // 0x03D8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              CorrectLevelToMapScale;                                   // 0x03E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   SelfGuideAligment;                                        // 0x03E8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              LevelLandScapeExtent;                                     // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MultiTouchToScaleInitDis;                                 // 0x03F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GuideLineMaxLength;                                       // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugNotDrawGuideLine;                                    // 0x03FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x03FD(0x0003) MISSED OFFSET
	struct FVector2D                                   ScaleVector;                                              // 0x0400(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	TArray<int>                                        TouchInMouseIndex;                                        // 0x0408(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OperateEnd;                                               // 0x0418(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OperateBegin;                                             // 0x0428(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              DefaultLineThickness;                                     // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAntiAlias;                                               // 0x043C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsDrawPlaneRoute;                                        // 0x043D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x043E(0x0002) MISSED OFFSET
	struct FVector2D                                   RouteStartLoc;                                            // 0x0440(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   RouteStopLoc;                                             // 0x0448(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              MiniMapImageExtent;                                       // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinimapWindowExtent;                                      // 0x0454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsDrawSelfToSafetyGuide;                                  // 0x0458(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0459(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    WheelEvent;                                               // 0x0460(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C");
		return ptr;
	}


	struct FEventReply OnMouseWheel(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	void UIToWorldPosition(const struct FVector2D& InPos, struct FVector2D* OutPos);
	struct FEventReply OnMouseMove(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	struct FEventReply OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	struct FEventReply OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	void DrawPlaneRoute(bool IsDraw, const struct FVector2D& Start, const struct FVector2D& End, float MiniMapImageExtent, float MinimapWindowExtent);
	void DrawSelfMarkGuideLine(bool bIsDraw, const struct FLinearColor& LineColor, const struct FVector& LevelLandScapeCenter, float CorrectLevelToMapScale, const struct FVector2D& Aligment, float LevelLanscapeExtent);
	void GetAnotherFingerIndex(int CurIndex, int* AnotherIndex);
	void RemoveArrayItemByIndex(int Index);
	void GetPlayerController(class ASTExtraPlayerController** NewParam);
	struct FEventReply OnTouchEnded(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent);
	struct FEventReply OnTouchMoved(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent);
	struct FEventReply OnTouchGesture(struct FGeometry* MyGeometry, struct FPointerEvent* GestureEvent);
	struct FEventReply OnTouchStarted(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent);
	void OnPaint(struct FPaintContext* Context);
	void OnMouseLeave(struct FPointerEvent* MouseEvent);
	void ReceivedInitWidget();
	void ExecuteUbergraph_MapCircleAndLineBlackboard(int EntryPoint);
	void WheelEvent__DelegateSignature(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OperateBegin__DelegateSignature();
	void OperateEnd__DelegateSignature();
	void ScaleMap__DelegateSignature(float ScaleValue);
	void SetMarker__DelegateSignature(const struct FVector2D& Position);
	void MoveMap__DelegateSignature(const struct FVector2D& Offset);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
