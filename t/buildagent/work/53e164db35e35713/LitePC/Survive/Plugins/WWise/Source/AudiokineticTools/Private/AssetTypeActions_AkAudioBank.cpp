// Copyright (c) 2006-2012 Audiokinetic Inc. / All Rights Reserved

/*=============================================================================
	AssetTypeActions_AkAudioBank.cpp:
=============================================================================*/
#include "AudiokineticToolsPrivatePCH.h"
#include "AkAudioClasses.h"
#include "IAssetTools.h"
#include "AssetTypeActions_AkAudioBank.h"
#include "SGenerateSoundBanks.h"
#include "AkAudioDevice.h"
#include "Toolkits/SimpleAssetEditor.h"
#include "MultiBox/MultiBoxBuilder.h"

#define LOCTEXT_NAMESPACE "AssetTypeActions"

void FAssetTypeActions_AkAudioBank::GetActions( const TArray<UObject*>& InObjects, FMenuBuilder& MenuBuilder )
{
	auto Banks = GetTypedWeakObjectPtrs<UAkAudioBank>(InObjects);

	if(Banks.Num() > 1)
	{
		MenuBuilder.AddMenuEntry(
			LOCTEXT("AkAudioBank_GenerateDefinitionFile","Generate Selected SoundBanks..."),
			LOCTEXT("AkAudioBank_GenerateDefinitionFileTooltip", "Generates the selected SoundBanks."),
			FSlateIcon(),
			FUIAction(
				FExecuteAction::CreateSP( this, &FAssetTypeActions_AkAudioBank::GenerateDefinitionFile, Banks ),
				FCanExecuteAction()
				)
			);
	}
	else
	{
		MenuBuilder.AddMenuEntry(
			LOCTEXT("AkAudioBank_GenerateDefinitionFile","Generate Selected SoundBank..."),
			LOCTEXT("AkAudioBank_GenerateDefinitionFileTooltip", "Generates the selected SoundBank."),
			FSlateIcon(),
			FUIAction(
				FExecuteAction::CreateSP( this, &FAssetTypeActions_AkAudioBank::GenerateDefinitionFile, Banks ),
				FCanExecuteAction()
				)
			);
	}

	MenuBuilder.AddMenuEntry(
		LOCTEXT("AkAudioBank_LoadBank","Load Bank"),
		LOCTEXT("AkAudioBank_LoadBankTooltip", "Loads the bank."),
		FSlateIcon(),
		FUIAction(
			FExecuteAction::CreateSP( this, &FAssetTypeActions_AkAudioBank::LoadBank, Banks ),
			FCanExecuteAction()
			)
		);

	MenuBuilder.AddMenuEntry(
		LOCTEXT("AkAudioBank_UnloadBank","Unload Bank"),
		LOCTEXT("AkAudioBank_UnloadBankTooltip", "Unloads the bank."),
		FSlateIcon(),
		FUIAction(
			FExecuteAction::CreateSP( this, &FAssetTypeActions_AkAudioBank::UnloadBank, Banks ),
			FCanExecuteAction()
			)
		);

	MenuBuilder.AddMenuEntry(
		LOCTEXT("AkAudioBank_ClearBank","Clear Banks"),
		LOCTEXT("AkAudioBank_ClearBankTooltip", "Unloads all banks."),
		FSlateIcon(),
		FUIAction(
			FExecuteAction::CreateSP( this, &FAssetTypeActions_AkAudioBank::ClearBank, Banks ),
			FCanExecuteAction()
			)
		);

	MenuBuilder.AddMenuEntry(
		LOCTEXT("AkAudioBank_LoadInitBank","Load Init Bank"),
		LOCTEXT("AkAudioBank_LoadInitBankTooltip", "Loads the Wwise init bank."),
		FSlateIcon(),
		FUIAction(
			FExecuteAction::CreateSP( this, &FAssetTypeActions_AkAudioBank::LoadInitBank, Banks ),
			FCanExecuteAction()
			)
		);

	MenuBuilder.AddMenuEntry(
		LOCTEXT("AkAudioBank_RefreshAllBanks","Refresh All Banks"),
		LOCTEXT("AkAudioBank_RefreshAllBanksTooltip", "Refresh all the selected banks."),
		FSlateIcon(),
		FUIAction(
			FExecuteAction::CreateSP( this, &FAssetTypeActions_AkAudioBank::RefreshAllBanks, Banks ),
			FCanExecuteAction()
			)
		);
}

void FAssetTypeActions_AkAudioBank::OpenAssetEditor( const TArray<UObject*>& InObjects, TSharedPtr<IToolkitHost> EditWithinLevelEditor )
{
	FSimpleAssetEditor::CreateEditor(EToolkitMode::Standalone, EditWithinLevelEditor, InObjects);
}

void FAssetTypeActions_AkAudioBank::AssetsActivated( const TArray<UObject*>& InObjects, EAssetTypeActivationMethod::Type ActivationType )
{
	if ( ActivationType == EAssetTypeActivationMethod::DoubleClicked || ActivationType == EAssetTypeActivationMethod::Opened )
	{
		if ( InObjects.Num() == 1 )
		{
			FAssetEditorManager::Get().OpenEditorForAsset(InObjects[0]);
		}
		else if ( InObjects.Num() > 1 )
		{
			FAssetEditorManager::Get().OpenEditorForAssets(InObjects);
		}
	}
}

extern void CreateGenerateSoundBankWindow(TArray<TWeakObjectPtr<UAkAudioBank>>* pSoundBanks);

void FAssetTypeActions_AkAudioBank::GenerateDefinitionFile(TArray<TWeakObjectPtr<UAkAudioBank>> Objects)
{
	CreateGenerateSoundBankWindow(&Objects);
}

void FAssetTypeActions_AkAudioBank::LoadBank(TArray<TWeakObjectPtr<UAkAudioBank>> Objects)
{
	for (auto ObjIt = Objects.CreateConstIterator(); ObjIt; ++ObjIt)
	{
		UAkAudioBank * bank = (UAkAudioBank *)(*ObjIt).Get();
		if ( bank )
		{
			bank->Load();
		}
	}
}

void FAssetTypeActions_AkAudioBank::UnloadBank(TArray<TWeakObjectPtr<UAkAudioBank>> Objects)
{
	for (auto ObjIt = Objects.CreateConstIterator(); ObjIt; ++ObjIt)
	{
		UAkAudioBank * bank = (UAkAudioBank *)(*ObjIt).Get();
		if ( bank )
		{
			bank->Unload();
		}
	}
}

void FAssetTypeActions_AkAudioBank::ClearBank(TArray<TWeakObjectPtr<UAkAudioBank>> Objects)
{
	FAkAudioDevice* AudioDevice = FAkAudioDevice::Get();
	if ( AudioDevice )
	{
		AudioDevice->ClearBanks();
	}
}

void FAssetTypeActions_AkAudioBank::LoadInitBank(TArray<TWeakObjectPtr<UAkAudioBank>> Objects)
{
	FAkAudioDevice* AudioDevice = FAkAudioDevice::Get();
	if ( AudioDevice )
	{
		AudioDevice->LoadInitBank();
	}
}

void FAssetTypeActions_AkAudioBank::RefreshAllBanks(TArray<TWeakObjectPtr<UAkAudioBank>> Objects)
{
	FAkAudioDevice* AudioDevice = FAkAudioDevice::Get();
	if ( AudioDevice )
	{
		AudioDevice->ReloadAllReferencedBanks();
	}
}

#undef LOCTEXT_NAMESPACE