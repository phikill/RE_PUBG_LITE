// Defines which features of the Wwise-Unreal integration are supported in which version of UE.

#pragma once

#include "Runtime/Launch/Resources/Version.h"

// Features added in UE 4.16
#if ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION >= 16
#define	UE_4_16_OR_LATER 1
#define AK_FIOSYSTEM_AVAILABLE 0
#else
#define	UE_4_16_OR_LATER 0
#define AK_FIOSYSTEM_AVAILABLE 1
#endif

#define	UE_4_17_OR_LATER (ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION >= 17)
#define UE_4_18_OR_LATER (ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION >= 18)
#define UE_4_19_OR_LATER (ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION >= 19)

