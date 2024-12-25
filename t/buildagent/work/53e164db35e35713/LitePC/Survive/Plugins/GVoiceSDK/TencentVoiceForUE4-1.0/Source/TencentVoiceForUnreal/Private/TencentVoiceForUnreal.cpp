// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "TencentVoiceForUnreal.h"

#define LOCTEXT_NAMESPACE "FTencentVoiceForUnrealModule"

DEFINE_LOG_CATEGORY(TencentVoicePlugin);

void FTencentVoiceForUnrealModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	UE_LOG(TencentVoicePlugin, Display, TEXT("TencentVoiceForUnrealModule has loaded!"));
}

void FTencentVoiceForUnrealModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	UE_LOG(TencentVoicePlugin, Display, TEXT("TencentVoiceForUnrealModule has shutdown!"));
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FTencentVoiceForUnrealModule, TencentVoiceForUnreal)