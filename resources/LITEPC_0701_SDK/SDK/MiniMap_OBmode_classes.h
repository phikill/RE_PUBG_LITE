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

// WidgetBlueprintGeneratedClass MiniMap_OBmode.MiniMap_OBmode_C
// 0x02C0 (0x0570 - 0x02B0)
class UMiniMap_OBmode_C : public UUAEUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02B0(0x0008) (Transient, DuplicateTransient)
	class UImage*                                      AirAttackArea;                                            // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCanvasPanel*                                CanvasPanel_Content;                                      // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCanvasPanel*                                CanvasPanel_OtherElem;                                    // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCanvasPanel*                                CanvasPanel_Player;                                       // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      EntireMapImage;                                           // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UMapCircleAndLineBlackboard_C*               MapCircleAndLineBlackboard;                               // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              MapScale;                                                 // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxScaleValue;                                            // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   MapInitSize;                                              // 0x02F0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              LevelToMapScale;                                          // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   MapCurSize;                                               // 0x02FC(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0304(0x0004) MISSED OFFSET
	TMap<int, struct FVector2D>                        TouchPos;                                                 // 0x0308(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              TouchDelta;                                               // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsMultipleTouch;                                          // 0x035C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x035D(0x0003) MISSED OFFSET
	float                                              ScaleFactor;                                              // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0364(0x0004) MISSED OFFSET
	TMap<struct FString, class UPlayerItem_BP_C*>      PlayerItemBPDict;                                         // 0x0368(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     LevelLandScapeCenter;                                     // 0x03B8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x03C4(0x0004) MISSED OFFSET
	TArray<struct FPlayerInfoInOB>                     MapPlayerList;                                            // 0x03C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FObservedData                               CrtOBPlayerInfo;                                          // 0x03D8(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnEntireMapCloseEvent;                                    // 0x0400(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              LevelLandScapeExtent;                                     // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FMapRealTimeInfo                            MapRealTimeInfo;                                          // 0x0414(0x0080) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0494(0x0004) MISSED OFFSET
	class ABP_STExtraPlayerController_C*               STEPlayerController;                                      // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ASTExtraGameStateBase*                       STEGameStateBase;                                         // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              RotateAngle;                                              // 0x04A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LastestAirAttackWave;                                     // 0x04AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   MapViewSize;                                              // 0x04B0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	TMap<struct FString, class APawn*>                 PlayerItemCharacterDict;                                  // 0x04B8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsPlaneShowing;                                           // 0x0508(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0509(0x0007) MISSED OFFSET
	class USpectatorItem_BP_C*                         SpectatorItemBP;                                          // 0x0510(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APawn*                                       CrtSpectatorCharacter;                                    // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TMap<int, class UDropBoxInMapShow_BP_C*>           DropBoxDict;                                              // 0x0520(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MiniMap_OBmode.MiniMap_OBmode_C");
		return ptr;
	}


	void GetDropBoxBPByID(int ID, class UDropBoxInMapShow_BP_C** DropBoxBP);
	void RefreshDropBox();
	void LockView();
	void RefreshSpectatorPosRot();
	void GetSpectatorItemBP(class USpectatorItem_BP_C** ItemBp);
	void ResetSpectatorData(bool isShow, class APawn* SpectorPawn);
	void RefreshWidgetPosByPawn(class APawn* ItemPawn, class UPlayerItem_BP_C* ItemBp);
	void RefreshWidgetPosByVector(class UWidget* Widget, const struct FVector& PointLocationInLevel);
	void RefreshNearPosRot();
	void ResetNearCharacter(TArray<struct FPlayerInfoInOB>* MapPlayerList);
	void ChangeMapAlignment(const struct FVector2D& InAlignment);
	void GetObjectAligInCurMapSize(const struct FVector2D& Pos, float* AligX, float* AligY);
	void OnPlaneDisappeared();
	void OnPlaneShow();
	void DrawAirAttackArea();
	void DrawPlaneRoute();
	void OnAirAttackEventHandle(TEnumAsByte<EAirAttackInfo> AttackMsg, int Wave);
	void RefreshCircle();
	void ApplyDataToItemBP(class UPlayerItem_BP_C* ItemBp, const struct FPlayerInfoInOB& PlayerInfo);
	void GetPlayerItemBPByName(const struct FString& Name, bool AddIfNotFound, class UPlayerItem_BP_C** ItemBp);
	void RefreshTotalPosRot(bool IsApplyData, bool IsApplyPos);
	void RefreshData(const struct FObservedData& CrtOBPPlayer, TArray<struct FPlayerInfoInOB>* MapPlayerList);
	void Init();
	void MoveMap(const struct FVector2D& MoveOffset);
	void GetMapMaxAligByMapSize(const struct FVector2D& MapSize, float* MinAlig, float* MaxAlig);
	void ChangeMapSize(const struct FVector2D& Size);
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void BndEvt__Button_SelfLock_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
	void ReceivedInitWidget();
	void ExecuteUbergraph_MiniMap_OBmode(int EntryPoint);
	void OnEntireMapCloseEvent__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
