
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

// Function EntireMap_OBmode.EntireMap_OBmode_C.OnBoxBeClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAirDropBoxInOb         BoxInfo                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UEntireMap_OBmode_C::OnBoxBeClicked(const struct FAirDropBoxInOb& BoxInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function EntireMap_OBmode.EntireMap_OBmode_C.OnBoxBeClicked");

	UEntireMap_OBmode_C_OnBoxBeClicked_Params params;
	params.BoxInfo = BoxInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EntireMap_OBmode.EntireMap_OBmode_C.UnselectItem
// (Public, BlueprintCallable, BlueprintEvent)

void UEntireMap_OBmode_C::UnselectItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function EntireMap_OBmode.EntireMap_OBmode_C.UnselectItem");

	UEntireMap_OBmode_C_UnselectItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EntireMap_OBmode.EntireMap_OBmode_C.ChangeViewToDropBox
// (Public, BlueprintCallable, BlueprintEvent)

void UEntireMap_OBmode_C::ChangeViewToDropBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function EntireMap_OBmode.EntireMap_OBmode_C.ChangeViewToDropBox");

	UEntireMap_OBmode_C_ChangeViewToDropBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EntireMap_OBmode.EntireMap_OBmode_C.GetDropBoxBPByID
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDropBoxInMapShow_BP_C*  DropBoxBP                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UEntireMap_OBmode_C::GetDropBoxBPByID(int ID, class UDropBoxInMapShow_BP_C** DropBoxBP)
{
	static auto fn = UObject::FindObject<UFunction>("Function EntireMap_OBmode.EntireMap_OBmode_C.GetDropBoxBPByID");

	UEntireMap_OBmode_C_GetDropBoxBPByID_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DropBoxBP != nullptr)
		*DropBoxBP = params.DropBoxBP;
}


// Function EntireMap_OBmode.EntireMap_OBmode_C.RefreshDropBox
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UEntireMap_OBmode_C::RefreshDropBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function EntireMap_OBmode.EntireMap_OBmode_C.RefreshDropBox");

	UEntireMap_OBmode_C_RefreshDropBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EntireMap_OBmode.EntireMap_OBmode_C.ChangeViewToClickedItem
// (Public, BlueprintCallable, BlueprintEvent)

void UEntireMap_OBmode_C::ChangeViewToClickedItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function EntireMap_OBmode.EntireMap_OBmode_C.ChangeViewToClickedItem");

	UEntireMap_OBmode_C_ChangeViewToClickedItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EntireMap_OBmode.EntireMap_OBmode_C.OnItemBeClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerInfoInOB         PlayerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UEntireMap_OBmode_C::OnItemBeClicked(const struct FPlayerInfoInOB& PlayerInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function EntireMap_OBmode.EntireMap_OBmode_C.OnItemBeClicked");

	UEntireMap_OBmode_C_OnItemBeClicked_Params params;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EntireMap_OBmode.EntireMap_OBmode_C.CheckMapShowName
// (Public, BlueprintCallable, BlueprintEvent)

void UEntireMap_OBmode_C::CheckMapShowName()
{
	static auto fn = UObject::FindObject<UFunction>("Function EntireMap_OBmode.EntireMap_OBmode_C.CheckMapShowName");

	UEntireMap_OBmode_C_CheckMapShowName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EntireMap_OBmode.EntireMap_OBmode_C.LockView
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UEntireMap_OBmode_C::LockView()
{
	static auto fn = UObject::FindObject<UFunction>("Function EntireMap_OBmode.EntireMap_OBmode_C.LockView");

	UEntireMap_OBmode_C_LockView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EntireMap_OBmode.EntireMap_OBmode_C.RefreshSpectatorPosRot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UEntireMap_OBmode_C::RefreshSpectatorPosRot()
{
	static auto fn = UObject::FindObject<UFunction>("Function EntireMap_OBmode.EntireMap_OBmode_C.RefreshSpectatorPosRot");

	UEntireMap_OBmode_C_RefreshSpectatorPosRot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EntireMap_OBmode.EntireMap_OBmode_C.GetSpectatorItemBP
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USpectatorItem_BP_C*     ItemBp                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UEntireMap_OBmode_C::GetSpectatorItemBP(class USpectatorItem_BP_C** ItemBp)
{
	static auto fn = UObject::FindObject<UFunction>("Function EntireMap_OBmode.EntireMap_OBmode_C.GetSpectatorItemBP");

	UEntireMap_OBmode_C_GetSpectatorItemBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemBp != nullptr)
		*ItemBp = params.ItemBp;
}


// Function EntireMap_OBmode.EntireMap_OBmode_C.ResetSpectatorData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   SpectorPawn                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEntireMap_OBmode_C::ResetSpectatorData(bool isShow, class APawn* SpectorPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function EntireMap_OBmode.EntireMap_OBmode_C.ResetSpectatorData");

	UEntireMap_OBmode_C_ResetSpectatorData_Params params;
	params.isShow = isShow;
	params.SpectorPawn = SpectorPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EntireMap_OBmode.EntireMap_OBmode_C.RefreshWidgetPosByPawn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   ItemPawn                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPlayerItem_BP_C*        ItemBp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEntireMap_OBmode_C::RefreshWidgetPosByPawn(class APawn* ItemPawn, class UPlayerItem_BP_C* ItemBp)
{
	static auto fn = UObject::FindObject<UFunction>("Function EntireMap_OBmode.EntireMap_OBmode_C.RefreshWidgetPosByPawn");

	UEntireMap_OBmode_C_RefreshWidgetPosByPawn_Params params;
	params.ItemPawn = ItemPawn;
	params.ItemBp = ItemBp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EntireMap_OBmode.EntireMap_OBmode_C.RefreshWidgetPosByVector
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 PointLocationInLevel           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UEntireMap_OBmode_C::RefreshWidgetPosByVector(class UWidget* Widget, const struct FVector& PointLocationInLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function EntireMap_OBmode.EntireMap_OBmode_C.RefreshWidgetPosByVector");

	UEntireMap_OBmode_C_RefreshWidgetPosByVector_Params params;
	params.Widget = Widget;
	params.PointLocationInLevel = PointLocationInLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EntireMap_OBmode.EntireMap_OBmode_C.RefreshNearPosRot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UEntireMap_OBmode_C::RefreshNearPosRot()
{
	static auto fn = UObject::FindObject<UFunction>("Function EntireMap_OBmode.EntireMap_OBmode_C.RefreshNearPosRot");

	UEntireMap_OBmode_C_RefreshNearPosRot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EntireMap_OBmode.EntireMap_OBmode_C.ResetNearCharacter
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FPlayerInfoInOB> MapPlayerList                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UEntireMap_OBmode_C::ResetNearCharacter(TArray<struct FPlayerInfoInOB>* MapPlayerList)
{
	static auto fn = UObject::FindObject<UFunction>("Function EntireMap_OBmode.EntireMap_OBmode_C.ResetNearCharacter");

	UEntireMap_OBmode_C_ResetNearCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MapPlayerList != nullptr)
		*MapPlayerList = params.MapPlayerList;
}


// Function EntireMap_OBmode.EntireMap_OBmode_C.ChangeMapAlignment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               InAlignment                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UEntireMap_OBmode_C::ChangeMapAlignment(const struct FVector2D& InAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function EntireMap_OBmode.EntireMap_OBmode_C.ChangeMapAlignment");

	UEntireMap_OBmode_C_ChangeMapAlignment_Params params;
	params.InAlignment = InAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EntireMap_OBmode.EntireMap_OBmode_C.GetObjectAligInCurMapSize
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               Pos                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          AligX                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          AligY                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UEntireMap_OBmode_C::GetObjectAligInCurMapSize(const struct FVector2D& Pos, float* AligX, float* AligY)
{
	static auto fn = UObject::FindObject<UFunction>("Function EntireMap_OBmode.EntireMap_OBmode_C.GetObjectAligInCurMapSize");

	UEntireMap_OBmode_C_GetObjectAligInCurMapSize_Params params;
	params.Pos = Pos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AligX != nullptr)
		*AligX = params.AligX;
	if (AligY != nullptr)
		*AligY = params.AligY;
}


// Function EntireMap_OBmode.EntireMap_OBmode_C.OnPlaneDisappeared
// (Public, BlueprintCallable, BlueprintEvent)

void UEntireMap_OBmode_C::OnPlaneDisappeared()
{
	static auto fn = UObject::FindObject<UFunction>("Function EntireMap_OBmode.EntireMap_OBmode_C.OnPlaneDisappeared");

	UEntireMap_OBmode_C_OnPlaneDisappeared_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EntireMap_OBmode.EntireMap_OBmode_C.OnPlaneShow
// (Public, BlueprintCallable, BlueprintEvent)

void UEntireMap_OBmode_C::OnPlaneShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function EntireMap_OBmode.EntireMap_OBmode_C.OnPlaneShow");

	UEntireMap_OBmode_C_OnPlaneShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EntireMap_OBmode.EntireMap_OBmode_C.DrawAirAttackArea
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UEntireMap_OBmode_C::DrawAirAttackArea()
{
	static auto fn = UObject::FindObject<UFunction>("Function EntireMap_OBmode.EntireMap_OBmode_C.DrawAirAttackArea");

	UEntireMap_OBmode_C_DrawAirAttackArea_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EntireMap_OBmode.EntireMap_OBmode_C.DrawPlaneRoute
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UEntireMap_OBmode_C::DrawPlaneRoute()
{
	static auto fn = UObject::FindObject<UFunction>("Function EntireMap_OBmode.EntireMap_OBmode_C.DrawPlaneRoute");

	UEntireMap_OBmode_C_DrawPlaneRoute_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EntireMap_OBmode.EntireMap_OBmode_C.OnAirAttackEventHandle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EAirAttackInfo>    AttackMsg                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Wave                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEntireMap_OBmode_C::OnAirAttackEventHandle(TEnumAsByte<EAirAttackInfo> AttackMsg, int Wave)
{
	static auto fn = UObject::FindObject<UFunction>("Function EntireMap_OBmode.EntireMap_OBmode_C.OnAirAttackEventHandle");

	UEntireMap_OBmode_C_OnAirAttackEventHandle_Params params;
	params.AttackMsg = AttackMsg;
	params.Wave = Wave;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EntireMap_OBmode.EntireMap_OBmode_C.RefreshCircle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UEntireMap_OBmode_C::RefreshCircle()
{
	static auto fn = UObject::FindObject<UFunction>("Function EntireMap_OBmode.EntireMap_OBmode_C.RefreshCircle");

	UEntireMap_OBmode_C_RefreshCircle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EntireMap_OBmode.EntireMap_OBmode_C.ApplyDataToItemBP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayerItem_BP_C*        ItemBp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FPlayerInfoInOB         PlayerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UEntireMap_OBmode_C::ApplyDataToItemBP(class UPlayerItem_BP_C* ItemBp, const struct FPlayerInfoInOB& PlayerInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function EntireMap_OBmode.EntireMap_OBmode_C.ApplyDataToItemBP");

	UEntireMap_OBmode_C_ApplyDataToItemBP_Params params;
	params.ItemBp = ItemBp;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EntireMap_OBmode.EntireMap_OBmode_C.GetPlayerItemBPByName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           AddIfNotFound                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPlayerItem_BP_C*        ItemBp                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UEntireMap_OBmode_C::GetPlayerItemBPByName(const struct FString& Name, bool AddIfNotFound, class UPlayerItem_BP_C** ItemBp)
{
	static auto fn = UObject::FindObject<UFunction>("Function EntireMap_OBmode.EntireMap_OBmode_C.GetPlayerItemBPByName");

	UEntireMap_OBmode_C_GetPlayerItemBPByName_Params params;
	params.Name = Name;
	params.AddIfNotFound = AddIfNotFound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemBp != nullptr)
		*ItemBp = params.ItemBp;
}


// Function EntireMap_OBmode.EntireMap_OBmode_C.RefreshTotalPosRot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsApplyData                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsApplyPos                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEntireMap_OBmode_C::RefreshTotalPosRot(bool IsApplyData, bool IsApplyPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function EntireMap_OBmode.EntireMap_OBmode_C.RefreshTotalPosRot");

	UEntireMap_OBmode_C_RefreshTotalPosRot_Params params;
	params.IsApplyData = IsApplyData;
	params.IsApplyPos = IsApplyPos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EntireMap_OBmode.EntireMap_OBmode_C.RefreshData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FPlayerInfoInOB> MapPlayerList                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FObservedData           CrtOBPPlayer                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UEntireMap_OBmode_C::RefreshData(const struct FObservedData& CrtOBPPlayer, TArray<struct FPlayerInfoInOB>* MapPlayerList)
{
	static auto fn = UObject::FindObject<UFunction>("Function EntireMap_OBmode.EntireMap_OBmode_C.RefreshData");

	UEntireMap_OBmode_C_RefreshData_Params params;
	params.CrtOBPPlayer = CrtOBPPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MapPlayerList != nullptr)
		*MapPlayerList = params.MapPlayerList;
}


// Function EntireMap_OBmode.EntireMap_OBmode_C.OnTouchEnded
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           InTouchEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UEntireMap_OBmode_C::OnTouchEnded(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function EntireMap_OBmode.EntireMap_OBmode_C.OnTouchEnded");

	UEntireMap_OBmode_C_OnTouchEnded_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InTouchEvent != nullptr)
		*InTouchEvent = params.InTouchEvent;

	return params.ReturnValue;
}


// Function EntireMap_OBmode.EntireMap_OBmode_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UEntireMap_OBmode_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function EntireMap_OBmode.EntireMap_OBmode_C.Init");

	UEntireMap_OBmode_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EntireMap_OBmode.EntireMap_OBmode_C.ChangeScaleSlideValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEntireMap_OBmode_C::ChangeScaleSlideValue(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function EntireMap_OBmode.EntireMap_OBmode_C.ChangeScaleSlideValue");

	UEntireMap_OBmode_C_ChangeScaleSlideValue_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EntireMap_OBmode.EntireMap_OBmode_C.MoveMap
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               MoveOffset                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UEntireMap_OBmode_C::MoveMap(const struct FVector2D& MoveOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function EntireMap_OBmode.EntireMap_OBmode_C.MoveMap");

	UEntireMap_OBmode_C_MoveMap_Params params;
	params.MoveOffset = MoveOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EntireMap_OBmode.EntireMap_OBmode_C.OnTouchMoved
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           InTouchEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UEntireMap_OBmode_C::OnTouchMoved(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function EntireMap_OBmode.EntireMap_OBmode_C.OnTouchMoved");

	UEntireMap_OBmode_C_OnTouchMoved_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InTouchEvent != nullptr)
		*InTouchEvent = params.InTouchEvent;

	return params.ReturnValue;
}


// Function EntireMap_OBmode.EntireMap_OBmode_C.GetTouchDelta
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UEntireMap_OBmode_C::GetTouchDelta()
{
	static auto fn = UObject::FindObject<UFunction>("Function EntireMap_OBmode.EntireMap_OBmode_C.GetTouchDelta");

	UEntireMap_OBmode_C_GetTouchDelta_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EntireMap_OBmode.EntireMap_OBmode_C.OnTouchStarted
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           InTouchEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UEntireMap_OBmode_C::OnTouchStarted(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function EntireMap_OBmode.EntireMap_OBmode_C.OnTouchStarted");

	UEntireMap_OBmode_C_OnTouchStarted_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InTouchEvent != nullptr)
		*InTouchEvent = params.InTouchEvent;

	return params.ReturnValue;
}


// Function EntireMap_OBmode.EntireMap_OBmode_C.ZoomMapSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          SlideValue                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEntireMap_OBmode_C::ZoomMapSize(float SlideValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function EntireMap_OBmode.EntireMap_OBmode_C.ZoomMapSize");

	UEntireMap_OBmode_C_ZoomMapSize_Params params;
	params.SlideValue = SlideValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EntireMap_OBmode.EntireMap_OBmode_C.GetMapMaxAligByMapSize
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               MapSize                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          MinAlig                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          MaxAlig                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UEntireMap_OBmode_C::GetMapMaxAligByMapSize(const struct FVector2D& MapSize, float* MinAlig, float* MaxAlig)
{
	static auto fn = UObject::FindObject<UFunction>("Function EntireMap_OBmode.EntireMap_OBmode_C.GetMapMaxAligByMapSize");

	UEntireMap_OBmode_C_GetMapMaxAligByMapSize_Params params;
	params.MapSize = MapSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MinAlig != nullptr)
		*MinAlig = params.MinAlig;
	if (MaxAlig != nullptr)
		*MaxAlig = params.MaxAlig;
}


// Function EntireMap_OBmode.EntireMap_OBmode_C.ChangeMapSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Size                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UEntireMap_OBmode_C::ChangeMapSize(const struct FVector2D& Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function EntireMap_OBmode.EntireMap_OBmode_C.ChangeMapSize");

	UEntireMap_OBmode_C_ChangeMapSize_Params params;
	params.Size = Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EntireMap_OBmode.EntireMap_OBmode_C.BndEvt__Button_HideMap_K2Node_ComponentBoundEvent_221_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UEntireMap_OBmode_C::BndEvt__Button_HideMap_K2Node_ComponentBoundEvent_221_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function EntireMap_OBmode.EntireMap_OBmode_C.BndEvt__Button_HideMap_K2Node_ComponentBoundEvent_221_OnButtonClickedEvent__DelegateSignature");

	UEntireMap_OBmode_C_BndEvt__Button_HideMap_K2Node_ComponentBoundEvent_221_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EntireMap_OBmode.EntireMap_OBmode_C.BndEvt__Slider_MapZoom_K2Node_ComponentBoundEvent_229_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEntireMap_OBmode_C::BndEvt__Slider_MapZoom_K2Node_ComponentBoundEvent_229_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function EntireMap_OBmode.EntireMap_OBmode_C.BndEvt__Slider_MapZoom_K2Node_ComponentBoundEvent_229_OnFloatValueChangedEvent__DelegateSignature");

	UEntireMap_OBmode_C_BndEvt__Slider_MapZoom_K2Node_ComponentBoundEvent_229_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EntireMap_OBmode.EntireMap_OBmode_C.BndEvt__Button_SwitchTeamMate_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UEntireMap_OBmode_C::BndEvt__Button_SwitchTeamMate_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function EntireMap_OBmode.EntireMap_OBmode_C.BndEvt__Button_SwitchTeamMate_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature");

	UEntireMap_OBmode_C_BndEvt__Button_SwitchTeamMate_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EntireMap_OBmode.EntireMap_OBmode_C.BndEvt__Button_SelfLock_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UEntireMap_OBmode_C::BndEvt__Button_SelfLock_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function EntireMap_OBmode.EntireMap_OBmode_C.BndEvt__Button_SelfLock_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");

	UEntireMap_OBmode_C_BndEvt__Button_SelfLock_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EntireMap_OBmode.EntireMap_OBmode_C.BndEvt__Button_ZoomOut_K2Node_ComponentBoundEvent_151_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UEntireMap_OBmode_C::BndEvt__Button_ZoomOut_K2Node_ComponentBoundEvent_151_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function EntireMap_OBmode.EntireMap_OBmode_C.BndEvt__Button_ZoomOut_K2Node_ComponentBoundEvent_151_OnButtonClickedEvent__DelegateSignature");

	UEntireMap_OBmode_C_BndEvt__Button_ZoomOut_K2Node_ComponentBoundEvent_151_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EntireMap_OBmode.EntireMap_OBmode_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEntireMap_OBmode_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function EntireMap_OBmode.EntireMap_OBmode_C.Tick");

	UEntireMap_OBmode_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EntireMap_OBmode.EntireMap_OBmode_C.ReceiveShow
// (Event, Protected, BlueprintEvent)

void UEntireMap_OBmode_C::ReceiveShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function EntireMap_OBmode.EntireMap_OBmode_C.ReceiveShow");

	UEntireMap_OBmode_C_ReceiveShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EntireMap_OBmode.EntireMap_OBmode_C.BndEvt__Button_ZoomIn_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UEntireMap_OBmode_C::BndEvt__Button_ZoomIn_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function EntireMap_OBmode.EntireMap_OBmode_C.BndEvt__Button_ZoomIn_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature");

	UEntireMap_OBmode_C_BndEvt__Button_ZoomIn_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EntireMap_OBmode.EntireMap_OBmode_C.ReceiveHide
// (Event, Protected, BlueprintEvent)

void UEntireMap_OBmode_C::ReceiveHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function EntireMap_OBmode.EntireMap_OBmode_C.ReceiveHide");

	UEntireMap_OBmode_C_ReceiveHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EntireMap_OBmode.EntireMap_OBmode_C.ReceivedInitWidget
// (Event, Public, BlueprintEvent)

void UEntireMap_OBmode_C::ReceivedInitWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function EntireMap_OBmode.EntireMap_OBmode_C.ReceivedInitWidget");

	UEntireMap_OBmode_C_ReceivedInitWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EntireMap_OBmode.EntireMap_OBmode_C.ExecuteUbergraph_EntireMap_OBmode
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEntireMap_OBmode_C::ExecuteUbergraph_EntireMap_OBmode(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EntireMap_OBmode.EntireMap_OBmode_C.ExecuteUbergraph_EntireMap_OBmode");

	UEntireMap_OBmode_C_ExecuteUbergraph_EntireMap_OBmode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EntireMap_OBmode.EntireMap_OBmode_C.OnEntireMapCloseEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UEntireMap_OBmode_C::OnEntireMapCloseEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function EntireMap_OBmode.EntireMap_OBmode_C.OnEntireMapCloseEvent__DelegateSignature");

	UEntireMap_OBmode_C_OnEntireMapCloseEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
