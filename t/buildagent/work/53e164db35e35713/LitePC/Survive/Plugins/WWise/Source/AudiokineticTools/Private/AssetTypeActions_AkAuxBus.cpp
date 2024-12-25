// Copyright (c) 2006-2012 Audiokinetic Inc. / All Rights Reserved

/*=============================================================================
	AssetTypeActions_AkAuxBus.cpp:
=============================================================================*/
#include "AudiokineticToolsPrivatePCH.h"
#include "IAssetTools.h"
#include "AkAudioClasses.h"
#include "AkAudioDevice.h"
#include "AssetTypeActions_AkAuxBus.h"
#include "AkAudioDevice.h"
#include "Toolkits/SimpleAssetEditor.h"

#define LOCTEXT_NAMESPACE "AssetTypeActions"

void FAssetTypeActions_AkAuxBus::OpenAssetEditor( const TArray<UObject*>& InObjects, TSharedPtr<IToolkitHost> EditWithinLevelEditor )
{
	FSimpleAssetEditor::CreateEditor(EToolkitMode::Standalone, EditWithinLevelEditor, InObjects);
}

#undef LOCTEXT_NAMESPACE