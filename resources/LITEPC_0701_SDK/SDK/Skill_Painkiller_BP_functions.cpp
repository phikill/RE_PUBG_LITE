
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

// Function Skill_Painkiller_BP.Skill_Painkiller_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASkill_Painkiller_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill_Painkiller_BP.Skill_Painkiller_BP_C.UserConstructionScript");

	ASkill_Painkiller_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
