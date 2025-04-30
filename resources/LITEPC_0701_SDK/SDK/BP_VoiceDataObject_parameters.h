#pragma once

#include "../SDK.h"

// Name: LitePC_0701, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_VoiceDataObject.BP_VoiceDataObject_C.SetSubObjectData
struct UBP_VoiceDataObject_C_SetSubObjectData_Params
{
	float                                              nowScale;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     nowPos;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UBP_VoiceDataSubObject_C*                    SubObject;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxCheckLength;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VoiceDataObject.BP_VoiceDataObject_C.SetCheckData
struct UBP_VoiceDataObject_C_SetCheckData_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Postion;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              CheckLength;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ASTExtraBaseCharacter*                       nowplayer;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ASTExtraShootWeapon*                         nowWeapon;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ASTExtraVehicleBase*                         nowVehicle;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VoiceDataObject.BP_VoiceDataObject_C.InitSubList
struct UBP_VoiceDataObject_C_InitSubList_Params
{
};

// Function BP_VoiceDataObject.BP_VoiceDataObject_C.UpdateWaeponCheck
struct UBP_VoiceDataObject_C_UpdateWaeponCheck_Params
{
};

// Function BP_VoiceDataObject.BP_VoiceDataObject_C.UpdateChekcVehicleMove
struct UBP_VoiceDataObject_C_UpdateChekcVehicleMove_Params
{
};

// Function BP_VoiceDataObject.BP_VoiceDataObject_C.UpdateCheckPlayeCheck
struct UBP_VoiceDataObject_C_UpdateCheckPlayeCheck_Params
{
};

// Function BP_VoiceDataObject.BP_VoiceDataObject_C.UpdateCheck
struct UBP_VoiceDataObject_C_UpdateCheck_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
