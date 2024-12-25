// Copyright (c) 2006-2012 Audiokinetic Inc. / All Rights Reserved

/*=============================================================================
AssetTypeActions_AkAcousticTexture.cpp:
=============================================================================*/
#include "AudiokineticToolsPrivatePCH.h"
#include "IAssetTools.h"
#include "AkAudioClasses.h"
#include "AkAudioDevice.h"
#include "AssetTypeActions_AkAcousticTexture.h"
#include "AkAudioDevice.h"
#include "Toolkits/SimpleAssetEditor.h"

#define LOCTEXT_NAMESPACE "AssetTypeActions"

void FAssetTypeActions_AkAcousticTexture::OpenAssetEditor(const TArray<UObject*>& InObjects, TSharedPtr<IToolkitHost> EditWithinLevelEditor)
{
	FSimpleAssetEditor::CreateEditor(EToolkitMode::Standalone, EditWithinLevelEditor, InObjects);
}

#undef LOCTEXT_NAMESPACE