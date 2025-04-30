
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

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.MakeSkinDataFromItemDefineID
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           DefineID                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FSkinData               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FSkinData UBackpackBlueprintUtils_BP_C::MakeSkinDataFromItemDefineID(struct FItemDefineID* DefineID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.MakeSkinDataFromItemDefineID");

	UBackpackBlueprintUtils_BP_C_MakeSkinDataFromItemDefineID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DefineID != nullptr)
		*DefineID = params.DefineID;

	return params.ReturnValue;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetItemDataForGameLog
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLogItem                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FLogItem UBackpackBlueprintUtils_BP_C::GetItemDataForGameLog(int* ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetItemDataForGameLog");

	UBackpackBlueprintUtils_BP_C_GetItemDataForGameLog_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.AddToWeaponAttachPos
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            attachID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EWeaponAttachmentSocketType    socket                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBackpackBlueprintUtils_BP_C::AddToWeaponAttachPos(int attachID, EWeaponAttachmentSocketType socket)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.AddToWeaponAttachPos");

	UBackpackBlueprintUtils_BP_C_AddToWeaponAttachPos_Params params;
	params.attachID = attachID;
	params.socket = socket;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.InitItemTable
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBackpackBlueprintUtils_BP_C::InitItemTable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.InitItemTable");

	UBackpackBlueprintUtils_BP_C_InitItemTable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetBattleItemHandlePath
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FItemDefineID*          DefineID                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBackpackBlueprintUtils_BP_C::GetBattleItemHandlePath(struct FItemDefineID* DefineID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetBattleItemHandlePath");

	UBackpackBlueprintUtils_BP_C_GetBattleItemHandlePath_Params params;
	params.DefineID = DefineID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetRawBattleTextByRawTextID
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBackpackBlueprintUtils_BP_C::GetRawBattleTextByRawTextID(int* ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetRawBattleTextByRawTextID");

	UBackpackBlueprintUtils_BP_C_GetRawBattleTextByRawTextID_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetRawBattleTextByType
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBattleTextType*               Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBackpackBlueprintUtils_BP_C::GetRawBattleTextByType(EBattleTextType* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetRawBattleTextByType");

	UBackpackBlueprintUtils_BP_C_GetRawBattleTextByType_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetItemSubTypeID
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           SpecificID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBackpackBlueprintUtils_BP_C::GetItemSubTypeID(int* SpecificID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetItemSubTypeID");

	UBackpackBlueprintUtils_BP_C_GetItemSubTypeID_Params params;
	params.SpecificID = SpecificID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetBattleWeaponItemDisplayDataByDefineID
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FItemDefineID*          DefineID                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FBattleWeaponItemDisplayData ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBattleWeaponItemDisplayData UBackpackBlueprintUtils_BP_C::GetBattleWeaponItemDisplayDataByDefineID(struct FItemDefineID* DefineID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetBattleWeaponItemDisplayDataByDefineID");

	UBackpackBlueprintUtils_BP_C_GetBattleWeaponItemDisplayDataByDefineID_Params params;
	params.DefineID = DefineID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GenerateItemDefineIDByItemTableID
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int*                           ItemTableID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            TypeSpecificID                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBackpackBlueprintUtils_BP_C::GenerateItemDefineIDByItemTableID(int* ItemTableID, int* Type, int* TypeSpecificID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GenerateItemDefineIDByItemTableID");

	UBackpackBlueprintUtils_BP_C_GenerateItemDefineIDByItemTableID_Params params;
	params.ItemTableID = ItemTableID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
	if (TypeSpecificID != nullptr)
		*TypeSpecificID = params.TypeSpecificID;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.IsVirtualItemData
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FBattleItemData         ItemData                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackBlueprintUtils_BP_C::IsVirtualItemData(struct FBattleItemData* ItemData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.IsVirtualItemData");

	UBackpackBlueprintUtils_BP_C_IsVirtualItemData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemData != nullptr)
		*ItemData = params.ItemData;

	return params.ReturnValue;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetBPTableName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TypeSpecificID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 BPTableName                    (Parm, OutParm, ZeroConstructor)

void UBackpackBlueprintUtils_BP_C::GetBPTableName(int Type, int TypeSpecificID, struct FString* BPTableName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetBPTableName");

	UBackpackBlueprintUtils_BP_C_GetBPTableName_Params params;
	params.Type = Type;
	params.TypeSpecificID = TypeSpecificID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BPTableName != nullptr)
		*BPTableName = params.BPTableName;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetCharacterVirtualItemHandleInBackpack
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UBackpackComponent**     BackpackComp                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBattleItemHandleBase*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBattleItemHandleBase* UBackpackBlueprintUtils_BP_C::GetCharacterVirtualItemHandleInBackpack(class UBackpackComponent** BackpackComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetCharacterVirtualItemHandleInBackpack");

	UBackpackBlueprintUtils_BP_C_GetCharacterVirtualItemHandleInBackpack_Params params;
	params.BackpackComp = BackpackComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.CreateBattleItemHandle_Character
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                 Outer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBattleItemHandleBase*   BattleItemHandle               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBackpackBlueprintUtils_BP_C::CreateBattleItemHandle_Character(class UObject* Outer, class UBattleItemHandleBase** BattleItemHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.CreateBattleItemHandle_Character");

	UBackpackBlueprintUtils_BP_C_CreateBattleItemHandle_Character_Params params;
	params.Outer = Outer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BattleItemHandle != nullptr)
		*BattleItemHandle = params.BattleItemHandle;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.CreateBattleItemHandle_Default
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Outer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBattleItemHandleBase*   BattleItemHandle               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBackpackBlueprintUtils_BP_C::CreateBattleItemHandle_Default(int Type, int ID, class UObject* Outer, class UBattleItemHandleBase** BattleItemHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.CreateBattleItemHandle_Default");

	UBackpackBlueprintUtils_BP_C_CreateBattleItemHandle_Default_Params params;
	params.Type = Type;
	params.ID = ID;
	params.Outer = Outer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BattleItemHandle != nullptr)
		*BattleItemHandle = params.BattleItemHandle;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetBattleItemFeatureData
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FItemDefineID           DefineID                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FBattleItemFeatureData  FeatureData                    (Parm, OutParm)

void UBackpackBlueprintUtils_BP_C::GetBattleItemFeatureData(const struct FItemDefineID& DefineID, struct FBattleItemFeatureData* FeatureData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetBattleItemFeatureData");

	UBackpackBlueprintUtils_BP_C_GetBattleItemFeatureData_Params params;
	params.DefineID = DefineID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FeatureData != nullptr)
		*FeatureData = params.FeatureData;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetBattleItemFeatureDataByDefineID
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FItemDefineID*          DefineID                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FBattleItemFeatureData  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBattleItemFeatureData UBackpackBlueprintUtils_BP_C::GetBattleItemFeatureDataByDefineID(struct FItemDefineID* DefineID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetBattleItemFeatureDataByDefineID");

	UBackpackBlueprintUtils_BP_C_GetBattleItemFeatureDataByDefineID_Params params;
	params.DefineID = DefineID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.CreateBattleItemHandle
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FItemDefineID*          DefineID                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject**                Outer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBattleItemHandleBase*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBattleItemHandleBase* UBackpackBlueprintUtils_BP_C::CreateBattleItemHandle(struct FItemDefineID* DefineID, class UObject** Outer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.CreateBattleItemHandle");

	UBackpackBlueprintUtils_BP_C_CreateBattleItemHandle_Params params;
	params.DefineID = DefineID;
	params.Outer = Outer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetCharacterVirtualItemInBackpack
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBackpackComponent**     BackpackComp                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBattleItemData         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBattleItemData UBackpackBlueprintUtils_BP_C::GetCharacterVirtualItemInBackpack(class UBackpackComponent** BackpackComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetCharacterVirtualItemInBackpack");

	UBackpackBlueprintUtils_BP_C_GetCharacterVirtualItemInBackpack_Params params;
	params.BackpackComp = BackpackComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.ConstructBattleItemDataByItemTableID
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int*                           ItemTableID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBattleItemData         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBattleItemData UBackpackBlueprintUtils_BP_C::ConstructBattleItemDataByItemTableID(int* ItemTableID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.ConstructBattleItemDataByItemTableID");

	UBackpackBlueprintUtils_BP_C_ConstructBattleItemDataByItemTableID_Params params;
	params.ItemTableID = ItemTableID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.ConstructBattleItemDataByDefineID
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FItemDefineID*          DefineID                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FBattleItemData         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBattleItemData UBackpackBlueprintUtils_BP_C::ConstructBattleItemDataByDefineID(struct FItemDefineID* DefineID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.ConstructBattleItemDataByDefineID");

	UBackpackBlueprintUtils_BP_C_ConstructBattleItemDataByDefineID_Params params;
	params.DefineID = DefineID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetItemTableRowByItemTableID
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBP_STRUCT_Item_type    ItemTableRow                   (Parm, OutParm)

void UBackpackBlueprintUtils_BP_C::GetItemTableRowByItemTableID(int ID, struct FBP_STRUCT_Item_type* ItemTableRow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetItemTableRowByItemTableID");

	UBackpackBlueprintUtils_BP_C_GetItemTableRowByItemTableID_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemTableRow != nullptr)
		*ItemTableRow = params.ItemTableRow;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.AddCharacterVirtualItemToBackpack
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UBackpackComponent**     BackpackComp                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ASTExtraBaseCharacter**  Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBackpackBlueprintUtils_BP_C::AddCharacterVirtualItemToBackpack(class UBackpackComponent** BackpackComp, class ASTExtraBaseCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.AddCharacterVirtualItemToBackpack");

	UBackpackBlueprintUtils_BP_C_AddCharacterVirtualItemToBackpack_Params params;
	params.BackpackComp = BackpackComp;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.InitialItemTable
// (Event, Protected, BlueprintEvent)

void UBackpackBlueprintUtils_BP_C::InitialItemTable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.InitialItemTable");

	UBackpackBlueprintUtils_BP_C_InitialItemTable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.ExecuteUbergraph_BackpackBlueprintUtils_BP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBackpackBlueprintUtils_BP_C::ExecuteUbergraph_BackpackBlueprintUtils_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.ExecuteUbergraph_BackpackBlueprintUtils_BP");

	UBackpackBlueprintUtils_BP_C_ExecuteUbergraph_BackpackBlueprintUtils_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
