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

// Function SoundSettingWidget.SoundSettingWidget_C.OnFocusReceived
struct USoundSettingWidget_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SoundSettingWidget.SoundSettingWidget_C.UpdateSoundSettings
struct USoundSettingWidget_C_UpdateSoundSettings_Params
{
};

// Function SoundSettingWidget.SoundSettingWidget_C.IsChanged
struct USoundSettingWidget_C_IsChanged_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SoundSettingWidget.SoundSettingWidget_C.Construct
struct USoundSettingWidget_C_Construct_Params
{
};

// Function SoundSettingWidget.SoundSettingWidget_C.OnReset
struct USoundSettingWidget_C_OnReset_Params
{
};

// Function SoundSettingWidget.SoundSettingWidget_C.OnDefault
struct USoundSettingWidget_C_OnDefault_Params
{
};

// Function SoundSettingWidget.SoundSettingWidget_C.OnApply
struct USoundSettingWidget_C_OnApply_Params
{
};

// Function SoundSettingWidget.SoundSettingWidget_C.ExecuteUbergraph_SoundSettingWidget
struct USoundSettingWidget_C_ExecuteUbergraph_SoundSettingWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
