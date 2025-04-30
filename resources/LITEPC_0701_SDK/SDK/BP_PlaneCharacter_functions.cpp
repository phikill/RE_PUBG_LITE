
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

// Function BP_PlaneCharacter.BP_PlaneCharacter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PlaneCharacter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlaneCharacter.BP_PlaneCharacter_C.UserConstructionScript");

	ABP_PlaneCharacter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlaneCharacter.BP_PlaneCharacter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PlaneCharacter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlaneCharacter.BP_PlaneCharacter_C.ReceiveBeginPlay");

	ABP_PlaneCharacter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlaneCharacter.BP_PlaneCharacter_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlaneCharacter_C::ReceiveActorBeginOverlap(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlaneCharacter.BP_PlaneCharacter_C.ReceiveActorBeginOverlap");

	ABP_PlaneCharacter_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlaneCharacter.BP_PlaneCharacter_C.ExecuteUbergraph_BP_PlaneCharacter
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlaneCharacter_C::ExecuteUbergraph_BP_PlaneCharacter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlaneCharacter.BP_PlaneCharacter_C.ExecuteUbergraph_BP_PlaneCharacter");

	ABP_PlaneCharacter_C_ExecuteUbergraph_BP_PlaneCharacter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
