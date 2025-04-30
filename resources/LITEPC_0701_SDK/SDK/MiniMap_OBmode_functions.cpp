
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

// Function MiniMap_OBmode.MiniMap_OBmode_C.GetDropBoxBPByID
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDropBoxInMapShow_BP_C*  DropBoxBP                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMiniMap_OBmode_C::GetDropBoxBPByID(int ID, class UDropBoxInMapShow_BP_C** DropBoxBP)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMap_OBmode.MiniMap_OBmode_C.GetDropBoxBPByID");

	UMiniMap_OBmode_C_GetDropBoxBPByID_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DropBoxBP != nullptr)
		*DropBoxBP = params.DropBoxBP;
}


// Function MiniMap_OBmode.MiniMap_OBmode_C.RefreshDropBox
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMiniMap_OBmode_C::RefreshDropBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMap_OBmode.MiniMap_OBmode_C.RefreshDropBox");

	UMiniMap_OBmode_C_RefreshDropBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniMap_OBmode.MiniMap_OBmode_C.LockView
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMiniMap_OBmode_C::LockView()
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMap_OBmode.MiniMap_OBmode_C.LockView");

	UMiniMap_OBmode_C_LockView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniMap_OBmode.MiniMap_OBmode_C.RefreshSpectatorPosRot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMiniMap_OBmode_C::RefreshSpectatorPosRot()
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMap_OBmode.MiniMap_OBmode_C.RefreshSpectatorPosRot");

	UMiniMap_OBmode_C_RefreshSpectatorPosRot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniMap_OBmode.MiniMap_OBmode_C.GetSpectatorItemBP
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USpectatorItem_BP_C*     ItemBp                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMiniMap_OBmode_C::GetSpectatorItemBP(class USpectatorItem_BP_C** ItemBp)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMap_OBmode.MiniMap_OBmode_C.GetSpectatorItemBP");

	UMiniMap_OBmode_C_GetSpectatorItemBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemBp != nullptr)
		*ItemBp = params.ItemBp;
}


// Function MiniMap_OBmode.MiniMap_OBmode_C.ResetSpectatorData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   SpectorPawn                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMiniMap_OBmode_C::ResetSpectatorData(bool isShow, class APawn* SpectorPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMap_OBmode.MiniMap_OBmode_C.ResetSpectatorData");

	UMiniMap_OBmode_C_ResetSpectatorData_Params params;
	params.isShow = isShow;
	params.SpectorPawn = SpectorPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniMap_OBmode.MiniMap_OBmode_C.RefreshWidgetPosByPawn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   ItemPawn                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPlayerItem_BP_C*        ItemBp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMiniMap_OBmode_C::RefreshWidgetPosByPawn(class APawn* ItemPawn, class UPlayerItem_BP_C* ItemBp)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMap_OBmode.MiniMap_OBmode_C.RefreshWidgetPosByPawn");

	UMiniMap_OBmode_C_RefreshWidgetPosByPawn_Params params;
	params.ItemPawn = ItemPawn;
	params.ItemBp = ItemBp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniMap_OBmode.MiniMap_OBmode_C.RefreshWidgetPosByVector
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 PointLocationInLevel           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UMiniMap_OBmode_C::RefreshWidgetPosByVector(class UWidget* Widget, const struct FVector& PointLocationInLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMap_OBmode.MiniMap_OBmode_C.RefreshWidgetPosByVector");

	UMiniMap_OBmode_C_RefreshWidgetPosByVector_Params params;
	params.Widget = Widget;
	params.PointLocationInLevel = PointLocationInLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniMap_OBmode.MiniMap_OBmode_C.RefreshNearPosRot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMiniMap_OBmode_C::RefreshNearPosRot()
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMap_OBmode.MiniMap_OBmode_C.RefreshNearPosRot");

	UMiniMap_OBmode_C_RefreshNearPosRot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniMap_OBmode.MiniMap_OBmode_C.ResetNearCharacter
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FPlayerInfoInOB> MapPlayerList                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMiniMap_OBmode_C::ResetNearCharacter(TArray<struct FPlayerInfoInOB>* MapPlayerList)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMap_OBmode.MiniMap_OBmode_C.ResetNearCharacter");

	UMiniMap_OBmode_C_ResetNearCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MapPlayerList != nullptr)
		*MapPlayerList = params.MapPlayerList;
}


// Function MiniMap_OBmode.MiniMap_OBmode_C.ChangeMapAlignment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               InAlignment                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UMiniMap_OBmode_C::ChangeMapAlignment(const struct FVector2D& InAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMap_OBmode.MiniMap_OBmode_C.ChangeMapAlignment");

	UMiniMap_OBmode_C_ChangeMapAlignment_Params params;
	params.InAlignment = InAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniMap_OBmode.MiniMap_OBmode_C.GetObjectAligInCurMapSize
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               Pos                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          AligX                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          AligY                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMiniMap_OBmode_C::GetObjectAligInCurMapSize(const struct FVector2D& Pos, float* AligX, float* AligY)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMap_OBmode.MiniMap_OBmode_C.GetObjectAligInCurMapSize");

	UMiniMap_OBmode_C_GetObjectAligInCurMapSize_Params params;
	params.Pos = Pos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AligX != nullptr)
		*AligX = params.AligX;
	if (AligY != nullptr)
		*AligY = params.AligY;
}


// Function MiniMap_OBmode.MiniMap_OBmode_C.OnPlaneDisappeared
// (Public, BlueprintCallable, BlueprintEvent)

void UMiniMap_OBmode_C::OnPlaneDisappeared()
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMap_OBmode.MiniMap_OBmode_C.OnPlaneDisappeared");

	UMiniMap_OBmode_C_OnPlaneDisappeared_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniMap_OBmode.MiniMap_OBmode_C.OnPlaneShow
// (Public, BlueprintCallable, BlueprintEvent)

void UMiniMap_OBmode_C::OnPlaneShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMap_OBmode.MiniMap_OBmode_C.OnPlaneShow");

	UMiniMap_OBmode_C_OnPlaneShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniMap_OBmode.MiniMap_OBmode_C.DrawAirAttackArea
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMiniMap_OBmode_C::DrawAirAttackArea()
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMap_OBmode.MiniMap_OBmode_C.DrawAirAttackArea");

	UMiniMap_OBmode_C_DrawAirAttackArea_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniMap_OBmode.MiniMap_OBmode_C.DrawPlaneRoute
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMiniMap_OBmode_C::DrawPlaneRoute()
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMap_OBmode.MiniMap_OBmode_C.DrawPlaneRoute");

	UMiniMap_OBmode_C_DrawPlaneRoute_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniMap_OBmode.MiniMap_OBmode_C.OnAirAttackEventHandle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EAirAttackInfo>    AttackMsg                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Wave                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMiniMap_OBmode_C::OnAirAttackEventHandle(TEnumAsByte<EAirAttackInfo> AttackMsg, int Wave)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMap_OBmode.MiniMap_OBmode_C.OnAirAttackEventHandle");

	UMiniMap_OBmode_C_OnAirAttackEventHandle_Params params;
	params.AttackMsg = AttackMsg;
	params.Wave = Wave;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniMap_OBmode.MiniMap_OBmode_C.RefreshCircle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMiniMap_OBmode_C::RefreshCircle()
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMap_OBmode.MiniMap_OBmode_C.RefreshCircle");

	UMiniMap_OBmode_C_RefreshCircle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniMap_OBmode.MiniMap_OBmode_C.ApplyDataToItemBP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayerItem_BP_C*        ItemBp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FPlayerInfoInOB         PlayerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UMiniMap_OBmode_C::ApplyDataToItemBP(class UPlayerItem_BP_C* ItemBp, const struct FPlayerInfoInOB& PlayerInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMap_OBmode.MiniMap_OBmode_C.ApplyDataToItemBP");

	UMiniMap_OBmode_C_ApplyDataToItemBP_Params params;
	params.ItemBp = ItemBp;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniMap_OBmode.MiniMap_OBmode_C.GetPlayerItemBPByName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           AddIfNotFound                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPlayerItem_BP_C*        ItemBp                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMiniMap_OBmode_C::GetPlayerItemBPByName(const struct FString& Name, bool AddIfNotFound, class UPlayerItem_BP_C** ItemBp)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMap_OBmode.MiniMap_OBmode_C.GetPlayerItemBPByName");

	UMiniMap_OBmode_C_GetPlayerItemBPByName_Params params;
	params.Name = Name;
	params.AddIfNotFound = AddIfNotFound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemBp != nullptr)
		*ItemBp = params.ItemBp;
}


// Function MiniMap_OBmode.MiniMap_OBmode_C.RefreshTotalPosRot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsApplyData                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsApplyPos                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMiniMap_OBmode_C::RefreshTotalPosRot(bool IsApplyData, bool IsApplyPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMap_OBmode.MiniMap_OBmode_C.RefreshTotalPosRot");

	UMiniMap_OBmode_C_RefreshTotalPosRot_Params params;
	params.IsApplyData = IsApplyData;
	params.IsApplyPos = IsApplyPos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniMap_OBmode.MiniMap_OBmode_C.RefreshData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FPlayerInfoInOB> MapPlayerList                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FObservedData           CrtOBPPlayer                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UMiniMap_OBmode_C::RefreshData(const struct FObservedData& CrtOBPPlayer, TArray<struct FPlayerInfoInOB>* MapPlayerList)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMap_OBmode.MiniMap_OBmode_C.RefreshData");

	UMiniMap_OBmode_C_RefreshData_Params params;
	params.CrtOBPPlayer = CrtOBPPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MapPlayerList != nullptr)
		*MapPlayerList = params.MapPlayerList;
}


// Function MiniMap_OBmode.MiniMap_OBmode_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMiniMap_OBmode_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMap_OBmode.MiniMap_OBmode_C.Init");

	UMiniMap_OBmode_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniMap_OBmode.MiniMap_OBmode_C.MoveMap
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               MoveOffset                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UMiniMap_OBmode_C::MoveMap(const struct FVector2D& MoveOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMap_OBmode.MiniMap_OBmode_C.MoveMap");

	UMiniMap_OBmode_C_MoveMap_Params params;
	params.MoveOffset = MoveOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniMap_OBmode.MiniMap_OBmode_C.GetMapMaxAligByMapSize
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               MapSize                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          MinAlig                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          MaxAlig                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMiniMap_OBmode_C::GetMapMaxAligByMapSize(const struct FVector2D& MapSize, float* MinAlig, float* MaxAlig)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMap_OBmode.MiniMap_OBmode_C.GetMapMaxAligByMapSize");

	UMiniMap_OBmode_C_GetMapMaxAligByMapSize_Params params;
	params.MapSize = MapSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MinAlig != nullptr)
		*MinAlig = params.MinAlig;
	if (MaxAlig != nullptr)
		*MaxAlig = params.MaxAlig;
}


// Function MiniMap_OBmode.MiniMap_OBmode_C.ChangeMapSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Size                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UMiniMap_OBmode_C::ChangeMapSize(const struct FVector2D& Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMap_OBmode.MiniMap_OBmode_C.ChangeMapSize");

	UMiniMap_OBmode_C_ChangeMapSize_Params params;
	params.Size = Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniMap_OBmode.MiniMap_OBmode_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMiniMap_OBmode_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMap_OBmode.MiniMap_OBmode_C.Tick");

	UMiniMap_OBmode_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniMap_OBmode.MiniMap_OBmode_C.BndEvt__Button_SelfLock_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMiniMap_OBmode_C::BndEvt__Button_SelfLock_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMap_OBmode.MiniMap_OBmode_C.BndEvt__Button_SelfLock_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");

	UMiniMap_OBmode_C_BndEvt__Button_SelfLock_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniMap_OBmode.MiniMap_OBmode_C.ReceivedInitWidget
// (Event, Public, BlueprintEvent)

void UMiniMap_OBmode_C::ReceivedInitWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMap_OBmode.MiniMap_OBmode_C.ReceivedInitWidget");

	UMiniMap_OBmode_C_ReceivedInitWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniMap_OBmode.MiniMap_OBmode_C.ExecuteUbergraph_MiniMap_OBmode
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMiniMap_OBmode_C::ExecuteUbergraph_MiniMap_OBmode(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMap_OBmode.MiniMap_OBmode_C.ExecuteUbergraph_MiniMap_OBmode");

	UMiniMap_OBmode_C_ExecuteUbergraph_MiniMap_OBmode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniMap_OBmode.MiniMap_OBmode_C.OnEntireMapCloseEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMiniMap_OBmode_C::OnEntireMapCloseEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMap_OBmode.MiniMap_OBmode_C.OnEntireMapCloseEvent__DelegateSignature");

	UMiniMap_OBmode_C_OnEntireMapCloseEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
