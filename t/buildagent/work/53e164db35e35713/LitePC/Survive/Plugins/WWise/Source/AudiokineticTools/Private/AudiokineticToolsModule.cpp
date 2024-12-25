// Copyright (c) 2006-2012 Audiokinetic Inc. / All Rights Reserved

/*=============================================================================
	AudiokineticToolsModule.cpp
=============================================================================*/
#include "AudiokineticToolsPrivatePCH.h"
#include "ModuleManager.h"

// @todo sequencer uobjects: The *.generated.inl should auto-include required headers (they should always have #pragma once anyway)
#include "AkAudioDevice.h"
#include "AkAudioClasses.h"
#include "AkAudioBankFactory.h"
#include "AkAudioEventFactory.h"
#include "ActorFactoryAkAmbientSound.h"
#include "AkComponentVisualizer.h"
#include "MatineeModule.h"
#include "MatineeClasses.h"
#include "InterpTrackAkAudioEventHelper.h"
#include "InterpTrackAkAudioRTPCHelper.h"
#include "AssetToolsModule.h"
#include "ContentBrowserModule.h"
#include "AssetTypeActions_AkAudioBank.h"
#include "AssetTypeActions_AkAudioEvent.h"
#include "AssetTypeActions_AkAuxBus.h"
#include "AssetTypeActions_AkAcousticTexture.h"
#include "Editor/LevelEditor/Public/LevelEditor.h"
#include "ISettingsModule.h"
#include "AkSettings.h"
#include "AkEventAssetBroker.h"
#include "ComponentAssetBroker.h"
#include "WwisePicker/SWwisePicker.h"
#include "WwisePicker/WwiseTreeItem.h"
#include "AudiokineticToolsStyle.h"
#include "SDockTab.h"
#include "Layout/SSeparator.h"
#include "Layout/SSpacer.h"
#include "Input/SButton.h"
#include "Input/SCheckBox.h"
#include "AssetRegistryModule.h"
#include "UnrealEdMisc.h"
#include "Editor/UnrealEdEngine.h"
#include "Settings/ProjectPackagingSettings.h"
#include "PropertyEditorModule.h"

#include "UnrealEdGlobals.h"
#include "WorkspaceMenuStructure.h"

#include "WorkspaceMenuStructureModule.h"

#include "ISequencerModule.h"
#include "MovieScene.h"
#include "MovieSceneAkAudioRTPCTrackEditor.h"
#include "MovieSceneAkAudioEventTrackEditor.h"

#include "AkMatineeImportTools.h"
#include "MatineeToLevelSequenceModule.h"

#include "AkSurfaceReflectorSetDetailsCustomization.h"
#include "AkLateReverbComponentDetailsCustomization.h"
#include "AkRoomComponentDetailsCustomization.h"
#include "AkSurfaceReflectorSetComponentVisualizer.h"

#include "SlateApplication.h"
#include "MessageDialog.h"
#include "HAL/FileManager.h"

#define LOCTEXT_NAMESPACE "AkAudio"

DEFINE_LOG_CATEGORY_STATIC(LogAudiokineticTools, Log, All);

extern void AddGenerateAkBanksToBuildMenu(FMenuBuilder& MenuBuilder);
void VerifyAkSettings();

class FAudiokineticToolsModule : public IAudiokineticTools
{
	TSharedRef<SDockTab> CreateWwisePickerWindow(const FSpawnTabArgs& Args)
	{
		return
			SNew(SDockTab)
			.Icon(FSlateIcon(FAudiokineticToolsStyle::GetStyleSetName(), "AudiokineticTools.WwisePickerTabIcon").GetIcon())
			.Label(LOCTEXT("AkAudioWwisePickerTabTitle", "Wwise Picker"))
			.TabRole(ETabRole::NomadTab)
			.ContentPadding(5)
			[
				SNew(SWwisePicker)
			];
	}

	void OpenOnlineHelp()
	{
		FPlatformProcess::LaunchFileInDefaultExternalApplication(TEXT("https://www.audiokinetic.com/library/?source=UE4&id=index.html"));
	}

	void AddWwiseHelp(FMenuBuilder& MenuBuilder)
	{
		MenuBuilder.BeginSection("AkHelp", LOCTEXT("AkHelpLabel", "Audiokinetic"));
		MenuBuilder.AddMenuEntry(
			LOCTEXT("AkWwiseHelpEntry", "Wwise Help"),
			LOCTEXT("AkWwiseHelpEntryToolTip", "Shows the online Wwise documentation."),
			FSlateIcon(),
			FUIAction(FExecuteAction::CreateRaw(this, &FAudiokineticToolsModule::OpenOnlineHelp)));
		MenuBuilder.EndSection();
	}

	FString GetWwisePluginContentDir()
	{
#if UE_4_18_OR_LATER
		const auto ProjectPluginsDir = FPaths::ProjectPluginsDir();
#else
		const auto ProjectPluginsDir = FPaths::GamePluginsDir();
#endif // UE_4_18_OR_LATER

		FString WwiseContent = TEXT("Wwise/Content");

		if (FPaths::DirectoryExists(FPaths::EnginePluginsDir() / "Wwise") && FPaths::DirectoryExists(ProjectPluginsDir / "Wwise"))
		{
			FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("InstallConflict", "The Wwise UE4 Integration plug-in is installed in both the UE4 Engine and Game \"Plugins\" folder. This will cause conflicts. Please ensure the Wwise plug-in is installed in only one of the two locations."));
		}

		if (FPaths::DirectoryExists(ProjectPluginsDir / WwiseContent))
		{
			return ProjectPluginsDir / WwiseContent;
		}
		else
		{
			return FPaths::EnginePluginsDir() / WwiseContent;
		}
	}

	void VerifyAnimNotifies()
	{
		FString SourceDir = GetWwisePluginContentDir() / TEXT("AnimNotifyRedirectors");
		FString DestDir = FPaths::EngineContentDir() / TEXT("EngineAnimNotifies");
		TArray<FString> SourceFileNames;
		SourceFileNames.Add("AnimNotify_AkEvent");
		SourceFileNames.Add("AnimNotify_AkEventByName");
		FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
		TArray<FName> FoundReferences;
		bool bFoundAssetsNeedingOldNAnimNotifies = false;
		bool bRedirectorsAreInEngineContentFolder = false;
		bool bRedirectorsAreInPluginContentFolder = false;
		for (int i = 0; i < SourceFileNames.Num(); i++)
		{
			FName AssetName(*(TEXT("/Engine/EngineAnimNotifies/") + SourceFileNames[i]));
			FString FileName = SourceFileNames[i] + TEXT(".uasset");

			// Check if we have animations refecing the old pre-plugin AnimNotifies
			if (AssetRegistryModule.Get().GetReferencers(AssetName, FoundReferences))
			{
				bFoundAssetsNeedingOldNAnimNotifies = true;
			}

			// Check if we have moved the redirectors to the Engine folder
			if (FPaths::FileExists(*(DestDir / FileName)))
			{
				bRedirectorsAreInEngineContentFolder = true;
			}

			// Check if the redirectors are still in the plugin's content folder
			if (FPaths::FileExists(*(SourceDir / FileName)))
			{
				bRedirectorsAreInPluginContentFolder = true;
			}
		}

		// No assets refer to the old AnimNotifies, delete our redirectors and leave
		if (!bFoundAssetsNeedingOldNAnimNotifies)
		{
			// Delete the redirectors
			IFileManager::Get().DeleteDirectory(*SourceDir);
			VerifyAkSettings();
		}
		// We found animations referencing the old AnimNotifies, and we have not put the redirectors in place.
		// Copy the redirectors, and ask for a project reload, so that the references are fixed.
		else if (bFoundAssetsNeedingOldNAnimNotifies && bRedirectorsAreInPluginContentFolder)
		{
			for (int i = 0; i < SourceFileNames.Num(); i++)
			{
				FString FileName = SourceFileNames[i] + TEXT(".uasset");
				IFileManager::Get().Move(*(DestDir / FileName), *(SourceDir / FileName), true);
			}

			// Delete the redirectors
			IFileManager::Get().DeleteDirectory(*SourceDir);

			if (EAppReturnType::Yes == FMessageDialog::Open(EAppMsgType::YesNo, LOCTEXT("NeedReload", "The Wwise Plugin had to modify some asset references for the update process, and a project re-load is required. Would you like to re-load your project now?")))
			{
				const bool bWarn = false;
				FUnrealEdMisc::Get().RestartEditor(bWarn);
			}
		}
		// We found Animations referenching the old AnimNotifies, and the redirectors have been copied. Fix-up the redirectors.
		else if (bFoundAssetsNeedingOldNAnimNotifies && bRedirectorsAreInEngineContentFolder && !bRedirectorsAreInPluginContentFolder)
		{
			IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();
			TArray<UObjectRedirector*> Redirectors;
			for (int i = 0; i < SourceFileNames.Num(); i++)
			{
				Redirectors.Add(LoadObject<UObjectRedirector>(NULL, *(TEXT("/Engine/EngineAnimNotifies/") + SourceFileNames[i]), NULL, 0, NULL));
			}
			AssetTools.FixupReferencers(Redirectors);

			// If the only thing in the EngineAnimNotifies folder was our redirectors (now deleted by FixupReferencers), delete the folder.
			TArray<FString> FilesInEngineAnimNotifiesFolder;
			IFileManager::Get().FindFiles(FilesInEngineAnimNotifiesFolder, *DestDir, true, true);
			if (FilesInEngineAnimNotifiesFolder.Num() != 0)
			{
				IFileManager::Get().DeleteDirectory(*DestDir);
			}
			VerifyAkSettings();
		}

		AssetRegistryModule.Get().OnFilesLoaded().Remove(VerifyAnimNotifiesHandle);
	}

	EAssetTypeCategories::Type AudiokineticAssetCategoryBit;

	void LateRegistrationOfMatineeToLevelSequencer()
	{
		IMatineeToLevelSequenceModule& Module = FModuleManager::LoadModuleChecked<IMatineeToLevelSequenceModule>(TEXT("MatineeToLevelSequence"));

		ConvertMatineeRTPCTrackHandle = Module.RegisterTrackConverterForMatineeClass(UInterpTrackAkAudioRTPC::StaticClass(), 
			IMatineeToLevelSequenceModule::FOnConvertMatineeTrack::CreateLambda([](UInterpTrack* Track, FGuid PossessableGuid, UMovieScene* NewMovieScene)
		{
			if (Track->GetNumKeyframes() != 0 && PossessableGuid.IsValid())
			{
				const UInterpTrackAkAudioRTPC* MatineeAkAudioRTPCTrack = StaticCast<const UInterpTrackAkAudioRTPC*>(Track);
				UMovieSceneAkAudioRTPCTrack* AkAudioRTPCTrack = NewMovieScene->AddTrack<UMovieSceneAkAudioRTPCTrack>(PossessableGuid);
				FAkMatineeImportTools::CopyInterpAkAudioRTPCTrack(MatineeAkAudioRTPCTrack, AkAudioRTPCTrack);
			}
		}));

		ConvertMatineeEventTrackHandle = Module.RegisterTrackConverterForMatineeClass(UInterpTrackAkAudioEvent::StaticClass(), 
			IMatineeToLevelSequenceModule::FOnConvertMatineeTrack::CreateLambda([](UInterpTrack* Track, FGuid PossessableGuid, UMovieScene* NewMovieScene)
		{
			if (Track->GetNumKeyframes() != 0 && PossessableGuid.IsValid())
			{
				const UInterpTrackAkAudioEvent* MatineeAkAudioEventTrack = StaticCast<const UInterpTrackAkAudioEvent*>(Track);
				UMovieSceneAkAudioEventTrack* AkAudioEventTrack = NewMovieScene->AddTrack<UMovieSceneAkAudioEventTrack>(PossessableGuid);
				FAkMatineeImportTools::CopyInterpAkAudioEventTrack(MatineeAkAudioEventTrack, AkAudioEventTrack);
			}
		}));

		ISequencerModule& SequencerModule = FModuleManager::LoadModuleChecked<ISequencerModule>(TEXT("Sequencer"));
#if UE_4_16_OR_LATER
		RTPCTrackEditorHandle = SequencerModule.RegisterTrackEditor(FOnCreateTrackEditor::CreateStatic(&FMovieSceneAkAudioRTPCTrackEditor::CreateTrackEditor));
		EventTrackEditorHandle = SequencerModule.RegisterTrackEditor(FOnCreateTrackEditor::CreateStatic(&FMovieSceneAkAudioEventTrackEditor::CreateTrackEditor));
#else
		RTPCTrackEditorHandle = SequencerModule.RegisterTrackEditor_Handle(FOnCreateTrackEditor::CreateStatic(&FMovieSceneAkAudioRTPCTrackEditor::CreateTrackEditor));
		EventTrackEditorHandle = SequencerModule.RegisterTrackEditor_Handle(FOnCreateTrackEditor::CreateStatic(&FMovieSceneAkAudioEventTrackEditor::CreateTrackEditor));
#endif // UE_4_16_OR_LATER

		FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
		AssetRegistryModule.Get().OnFilesLoaded().Remove(LateRegistrationOfMatineeToLevelSequencerHandle);
	}

	virtual void StartupModule() override
	{
		IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();

		AudiokineticAssetCategoryBit = AssetTools.RegisterAdvancedAssetCategory(FName(TEXT("Audiokinetic")), LOCTEXT("AudiokineticAssetCategory", "Audiokinetic"));

		AkAudioBankAssetTypeActions = MakeShareable( new FAssetTypeActions_AkAudioBank(AudiokineticAssetCategoryBit) );
		AssetTools.RegisterAssetTypeActions( AkAudioBankAssetTypeActions.ToSharedRef() );

		AkAudioEventAssetTypeActions = MakeShareable(new FAssetTypeActions_AkAudioEvent(AudiokineticAssetCategoryBit));
		AssetTools.RegisterAssetTypeActions(AkAudioEventAssetTypeActions.ToSharedRef());

		AkAuxBusAssetTypeActions = MakeShareable(new FAssetTypeActions_AkAuxBus(AudiokineticAssetCategoryBit));
		AssetTools.RegisterAssetTypeActions(AkAuxBusAssetTypeActions.ToSharedRef());

		AkAcousticTextureAssetTypeActions = MakeShareable(new FAssetTypeActions_AkAcousticTexture(AudiokineticAssetCategoryBit));
		AssetTools.RegisterAssetTypeActions(AkAcousticTextureAssetTypeActions.ToSharedRef());

		if ( FModuleManager::Get().IsModuleLoaded( "LevelEditor" ) )
		{
			// Extend the build menu to handle Audiokinetic-specific entries
			FLevelEditorModule& LevelEditorModule = FModuleManager::GetModuleChecked<FLevelEditorModule>( TEXT("LevelEditor") );
			LevelViewportToolbarBuildMenuExtenderAk = FLevelEditorModule::FLevelEditorMenuExtender::CreateRaw(this, &FAudiokineticToolsModule::ExtendBuildContextMenuForAudiokinetic);
			LevelEditorModule.GetAllLevelEditorToolbarBuildMenuExtenders().Add(LevelViewportToolbarBuildMenuExtenderAk);
			LevelViewportToolbarBuildMenuExtenderAkHandle = LevelEditorModule.GetAllLevelEditorToolbarBuildMenuExtenders().Last().GetHandle();

			// Add Wwise to the help menu
			MainMenuExtender = MakeShareable(new FExtender);
			MainMenuExtender->AddMenuExtension("HelpBrowse", EExtensionHook::After, NULL, FMenuExtensionDelegate::CreateRaw(this, &FAudiokineticToolsModule::AddWwiseHelp));
			LevelEditorModule.GetMenuExtensibilityManager()->AddExtender(MainMenuExtender);
		}

		RegisterSettings();

		AkEventBroker = MakeShareable(new FAkEventAssetBroker);
		FComponentAssetBrokerage::RegisterBroker(AkEventBroker, UAkComponent::StaticClass(), true, true);

		UProjectPackagingSettings* PackagingSettings = Cast<UProjectPackagingSettings>(UProjectPackagingSettings::StaticClass()->GetDefaultObject());
		FDirectoryPath WwiseAudioPath;
		WwiseAudioPath.Path = FString(TEXT("WwiseAudio"));
		int32 i;
        for(i = 0; i < PackagingSettings->DirectoriesToAlwaysStageAsUFS.Num(); i++)
		{
            if(PackagingSettings->DirectoriesToAlwaysStageAsUFS[i].Path == WwiseAudioPath.Path)
			{
				break;
			}
		}

        if(i == PackagingSettings->DirectoriesToAlwaysStageAsUFS.Num())
		{
			PackagingSettings->DirectoriesToAlwaysStageAsUFS.Add(WwiseAudioPath);
			PackagingSettings->UpdateDefaultConfigFile();
		}

		FAudiokineticToolsStyle::Initialize();
		FGlobalTabmanager::Get()->RegisterNomadTabSpawner(SWwisePicker::WwisePickerTabName, FOnSpawnTab::CreateRaw(this, &FAudiokineticToolsModule::CreateWwisePickerWindow))
			.SetGroup(WorkspaceMenu::GetMenuStructure().GetLevelEditorCategory())
			.SetIcon(FSlateIcon(FAudiokineticToolsStyle::GetStyleSetName(), "AudiokineticTools.WwisePickerTabIcon"));


		FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>(TEXT("AssetRegistry"));
		VerifyAnimNotifiesHandle = AssetRegistryModule.Get().OnFilesLoaded().AddRaw(this, &FAudiokineticToolsModule::VerifyAnimNotifies);

		LateRegistrationOfMatineeToLevelSequencerHandle = AssetRegistryModule.Get().OnFilesLoaded().AddRaw(this, &FAudiokineticToolsModule::LateRegistrationOfMatineeToLevelSequencer);

		FEditorDelegates::EndPIE.AddRaw(this, &FAudiokineticToolsModule::OnEndPIE);

		// Since we are initialized in the PostEngineInit phase, our Ambient Sound actor factory is not registered. We need to register it ourselves.
		if (GEditor)
		{
			UActorFactoryAkAmbientSound* NewFactory = NewObject<UActorFactoryAkAmbientSound>();
			if (NewFactory)
			{
				GEditor->ActorFactories.Add(NewFactory);
			}
		}

		FPropertyEditorModule& PropertyModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");
		PropertyModule.RegisterCustomClassLayout(UAkSurfaceReflectorSetComponent::StaticClass()->GetFName(), FOnGetDetailCustomizationInstance::CreateStatic(&FAkSurfaceReflectorSetDetailsCustomization::MakeInstance));
		PropertyModule.RegisterCustomClassLayout(UAkLateReverbComponent::StaticClass()->GetFName(), FOnGetDetailCustomizationInstance::CreateStatic(&FAkLateReverbComponentDetailsCustomization::MakeInstance));
		PropertyModule.RegisterCustomClassLayout(UAkRoomComponent::StaticClass()->GetFName(), FOnGetDetailCustomizationInstance::CreateStatic(&FAkRoomComponentDetailsCustomization::MakeInstance));
	}

	virtual void ShutdownModule() override
	{
		// Only unregister if the asset tools module is loaded.  We don't want to forcibly load it during shutdown phase.
		check( AkAudioBankAssetTypeActions.IsValid() );
		check( AkAudioEventAssetTypeActions.IsValid() );
		check( AkAcousticTextureAssetTypeActions.IsValid() );
		if( FModuleManager::Get().IsModuleLoaded( "AssetTools" ) )
		{
			FModuleManager::GetModuleChecked< FAssetToolsModule >( "AssetTools" ).Get().UnregisterAssetTypeActions( AkAudioBankAssetTypeActions.ToSharedRef() );
			FModuleManager::GetModuleChecked< FAssetToolsModule >( "AssetTools" ).Get().UnregisterAssetTypeActions( AkAudioEventAssetTypeActions.ToSharedRef() );
			FModuleManager::GetModuleChecked< FAssetToolsModule >( "AssetTools" ).Get().UnregisterAssetTypeActions( AkAcousticTextureAssetTypeActions.ToSharedRef() );
		}
		AkAudioBankAssetTypeActions.Reset();
		AkAudioEventAssetTypeActions.Reset();
		AkAcousticTextureAssetTypeActions.Reset();

		// Remove Audiokinetic build menu extenders
		if ( FModuleManager::Get().IsModuleLoaded( "LevelEditor" ) )
		{
			FLevelEditorModule& LevelEditorModule = FModuleManager::GetModuleChecked<FLevelEditorModule>( "LevelEditor" );
			LevelEditorModule.GetAllLevelEditorToolbarBuildMenuExtenders().RemoveAll([=](const FLevelEditorModule::FLevelEditorMenuExtender& Extender) { return Extender.GetHandle() == LevelViewportToolbarBuildMenuExtenderAkHandle; });

			if (MainMenuExtender.IsValid())
			{
				LevelEditorModule.GetMenuExtensibilityManager()->RemoveExtender(MainMenuExtender);
			}
		}

		if(GUnrealEd != NULL)
		{
			GUnrealEd->UnregisterComponentVisualizer(UAkComponent::StaticClass()->GetFName());
		}

		FGlobalTabmanager::Get()->UnregisterTabSpawner("Wwise Picker");
		FAudiokineticToolsStyle::Shutdown();

		auto MatineeToLevelSequenceModule = FModuleManager::GetModulePtr<IMatineeToLevelSequenceModule>(TEXT("MatineeToLevelSequence"));
		if (0 && MatineeToLevelSequenceModule)
		{
			// Currently, UnregisterTrackConverterForMatineeClass crashes
			MatineeToLevelSequenceModule->UnregisterTrackConverterForMatineeClass(ConvertMatineeRTPCTrackHandle);
			MatineeToLevelSequenceModule->UnregisterTrackConverterForMatineeClass(ConvertMatineeEventTrackHandle);
		}

		if (FModuleManager::Get().IsModuleLoaded(TEXT("Sequencer")))
		{
			ISequencerModule& SequencerModule = FModuleManager::GetModuleChecked<ISequencerModule>(TEXT("Sequencer"));
#if UE_4_16_OR_LATER
			SequencerModule.UnRegisterTrackEditor(RTPCTrackEditorHandle);
			SequencerModule.UnRegisterTrackEditor(EventTrackEditorHandle);
#else
			SequencerModule.UnRegisterTrackEditor_Handle(RTPCTrackEditorHandle);
			SequencerModule.UnRegisterTrackEditor_Handle(EventTrackEditorHandle);
#endif // UE_4_16_OR_LATER
		}

		FEditorDelegates::EndPIE.RemoveAll(this);

		// Only found way to close the tab in the case of a hot-reload. We need a pointer to the DockTab, and the only way of getting it seems to be InvokeTab.
		if(GUnrealEd && !GUnrealEd->IsPendingKill())
			FGlobalTabmanager::Get()->InvokeTab(SWwisePicker::WwisePickerTabName)->RequestCloseTab();

		FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(SWwisePicker::WwisePickerTabName);

		if (UObjectInitialized())
		{
			FComponentAssetBrokerage::UnregisterBroker(AkEventBroker);
		}

		FPropertyEditorModule& PropertyModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");
		PropertyModule.UnregisterCustomClassLayout(UAkSurfaceReflectorSetComponent::StaticClass()->GetFName());
		PropertyModule.UnregisterCustomClassLayout(UAkLateReverbComponent::StaticClass()->GetFName());
		PropertyModule.UnregisterCustomClassLayout(UAkRoomComponent::StaticClass()->GetFName());
	}

	/**
	* Extends the Build context menu with Audiokinetic-specific menu items
	*/
	TSharedRef<FExtender> ExtendBuildContextMenuForAudiokinetic(const TSharedRef<FUICommandList> CommandList)
	{
		TSharedPtr<FExtender> Extender = MakeShareable(new FExtender);
		Extender->AddMenuExtension("LevelEditorGeometry", EExtensionHook::After, CommandList, FMenuExtensionDelegate::CreateStatic(&AddGenerateAkBanksToBuildMenu));
		return Extender.ToSharedRef();
	}

public:
	static FDelegateHandle VerifySettingsDelegate;

private:
	void RegisterSettings()
	{
		if (ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
		{
			SettingsModule->RegisterSettings("Project", "Plugins", "Wwise",
				LOCTEXT("RuntimeSettingsName", "Wwise"),
				LOCTEXT("RuntimeSettingsDescription", "Configure the Wwise Integration"),
				GetMutableDefault<UAkSettings>()
				);
		}
	}

	void OnEndPIE(const bool bIsSimulating)
	{
		FAkAudioDevice* AkAudioDevice = FAkAudioDevice::Get();
		if (AkAudioDevice)
		{
			AkAudioDevice->StopAllSounds(true);
		}
	}

	/** Asset type actions for Audiokinetic assets.  Cached here so that we can unregister it during shutdown. */
	TSharedPtr< FAssetTypeActions_AkAudioBank > AkAudioBankAssetTypeActions;
	TSharedPtr< FAssetTypeActions_AkAudioEvent > AkAudioEventAssetTypeActions;
	TSharedPtr< FAssetTypeActions_AkAuxBus > AkAuxBusAssetTypeActions;
	TSharedPtr< FAssetTypeActions_AkAcousticTexture > AkAcousticTextureAssetTypeActions;
	TSharedPtr<FExtender> MainMenuExtender;
	FLevelEditorModule::FLevelEditorMenuExtender LevelViewportToolbarBuildMenuExtenderAk;
	FDelegateHandle LevelViewportToolbarBuildMenuExtenderAkHandle;
	FDelegateHandle VerifyAnimNotifiesHandle;
	FDelegateHandle LateRegistrationOfMatineeToLevelSequencerHandle;
	FDelegateHandle RTPCTrackEditorHandle;
	FDelegateHandle EventTrackEditorHandle;
	FDelegateHandle ConvertMatineeRTPCTrackHandle;
	FDelegateHandle ConvertMatineeEventTrackHandle;

	/** Allow to create an AkComponent when Drag & Drop of an AkEvent */
	TSharedPtr<IComponentAssetBroker> AkEventBroker;
};

IMPLEMENT_MODULE( FAudiokineticToolsModule, AudiokineticTools );

FDelegateHandle FAudiokineticToolsModule::VerifySettingsDelegate;

void VerifyAkSettings()
{
	UAkSettings* AkSettings = GetMutableDefault<UAkSettings>();
	if( AkSettings )
	{
		if (AkSettings->WwiseProjectPath.FilePath.IsEmpty())
		{
			if (!AkSettings->SuppressWwiseProjectPathWarnings)
			{
				if (EAppReturnType::Yes == FMessageDialog::Open(EAppMsgType::YesNo, LOCTEXT("SettingsNotSet", "Wwise settings do not seem to be set. Would you like to open the settings window to set them?")))
				{
					FModuleManager::LoadModuleChecked<ISettingsModule>("Settings").ShowViewer(FName("Project"), FName("Plugins"), FName("Wwise"));
				}
			}
			else
			{
				UE_LOG(LogAudiokineticTools, Log, TEXT("Wwise project not found. The Wwise picker will not be usable."));
			}
		}
		else
		{
			// First-time plugin migration: Project might be relative to Engine path. Fix-up the path to make it relative to the game.
#if UE_4_18_OR_LATER
			const auto ProjectDir = FPaths::ProjectDir();
#else
			const auto ProjectDir = FPaths::GameDir();
#endif // UE_4_18_OR_LATER

			FString FullGameDir = FPaths::ConvertRelativePathToFull(ProjectDir);
			FString TempPath = FPaths::ConvertRelativePathToFull(FullGameDir, AkSettings->WwiseProjectPath.FilePath);
			if (!FPaths::FileExists(TempPath))
			{
				if (!AkSettings->SuppressWwiseProjectPathWarnings)
				{
					TSharedPtr<SWindow> Dialog = SNew(SWindow)
						.Title(LOCTEXT("ResetWwisePath", "Re-set Wwise Path"))
						.SupportsMaximize(false)
						.SupportsMinimize(false)
						.FocusWhenFirstShown(true)
						.SizingRule(ESizingRule::Autosized);

					TSharedRef<SWidget> DialogContent = SNew(SVerticalBox)
						+ SVerticalBox::Slot()
						.FillHeight(0.25f)
						[
							SNew(SSpacer)
						]
						+ SVerticalBox::Slot()
						.AutoHeight()
						[
							SNew(STextBlock)
							.Text(LOCTEXT("AkUpdateWwisePath", "The Wwise UE4 Integration plug-in's update process requires the Wwise Project Path to be set in the Project Settings dialog. Would you like to open the Project Settings?"))
						.AutoWrapText(true)
						]
						+ SVerticalBox::Slot()
						.FillHeight(0.75f)
						[
							SNew(SSpacer)
						]
						+ SVerticalBox::Slot()
						.AutoHeight()
						[
							SNew(SCheckBox)
							.Padding(FMargin(6.0, 2.0))
							.OnCheckStateChanged_Lambda([&](ECheckBoxState DontAskState) {
								AkSettings->SuppressWwiseProjectPathWarnings = (DontAskState == ECheckBoxState::Checked);
							})
							[
								SNew(STextBlock)
								.Text(LOCTEXT("AkDontShowAgain", "Don't show this again"))
							]
						]
						+ SVerticalBox::Slot()
						.AutoHeight()
						[
							SNew(SHorizontalBox)
							+ SHorizontalBox::Slot()
							.FillWidth(1.0f)
							[
								SNew(SSpacer)
							]
							+ SHorizontalBox::Slot()
							.AutoWidth()
							.Padding(0.0f, 3.0f, 0.0f, 3.0f)
							[
								SNew(SButton)
								.Text(LOCTEXT("Yes", "Yes"))
								.OnClicked_Lambda([&]() -> FReply {
									FModuleManager::LoadModuleChecked<ISettingsModule>("Settings").ShowViewer(FName("Project"), FName("Plugins"), FName("Wwise"));
									Dialog->RequestDestroyWindow();
									AkSettings->UpdateDefaultConfigFile();
									return FReply::Handled();
								})
							]
							+ SHorizontalBox::Slot()
							.AutoWidth()
							.Padding(0.0f, 3.0f, 0.0f, 3.0f)
							[
								SNew(SButton)
								.Text(LOCTEXT("No", "No"))
								.OnClicked_Lambda([&]() -> FReply {
									Dialog->RequestDestroyWindow();
									AkSettings->UpdateDefaultConfigFile();
									return FReply::Handled();
								})
							]
						];

					Dialog->SetContent(DialogContent);
					FSlateApplication::Get().AddModalWindow(Dialog.ToSharedRef(), nullptr);
				}
				else
				{
					UE_LOG(LogAudiokineticTools, Log, TEXT("Wwise project not found. The Wwise picker will not be usable."));
				}
			}
			else
			{
				FPaths::MakePathRelativeTo(TempPath, *ProjectDir);
				AkSettings->WwiseProjectPath.FilePath = TempPath;
				AkSettings->UpdateDefaultConfigFile();
			}
		}
	}

	if (GUnrealEd != NULL)
	{
		GUnrealEd->RegisterComponentVisualizer(UAkComponent::StaticClass()->GetFName(), MakeShareable(new FAkComponentVisualizer));
		GUnrealEd->RegisterComponentVisualizer(UAkSurfaceReflectorSetComponent::StaticClass()->GetFName(), MakeShareable(new FAkSurfaceReflectorSetComponentVisualizer));
	}

}

#undef LOCTEXT_NAMESPACE
