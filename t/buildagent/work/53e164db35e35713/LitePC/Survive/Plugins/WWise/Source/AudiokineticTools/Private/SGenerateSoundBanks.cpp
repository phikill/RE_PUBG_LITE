// Copyright (c) 2006-2012 Audiokinetic Inc. / All Rights Reserved

/*------------------------------------------------------------------------------------
	SGenerateSoundBanks.cpp
------------------------------------------------------------------------------------*/

#include "AudiokineticToolsPrivatePCH.h"
#include "AkAudioClasses.h"
#include "AkAudioDevice.h"
#include "SGenerateSoundBanks.h"
#include "AkAudioBankGenerationHelpers.h"
#include "AssetRegistryModule.h"
#include "IProjectManager.h"
#include "JsonObject.h"
#include "Interfaces/ITargetPlatformManagerModule.h"
#include "Interfaces/ITargetPlatform.h"
#include "Dialogs/Dialogs.h"
#include "EditorStyleSet.h"
#include "Widgets/Input/SButton.h"
#include "Framework/Application/SlateApplication.h"
#include "GenericPlatform/GenericPlatformFile.h"
#include "HAL/PlatformFileManager.h"
#include "Serialization/JsonReader.h"
#include "Serialization/JsonSerializer.h"

#include "Misc/FileHelper.h"
#include "Misc/MessageDialog.h"

#include "ProjectDescriptor.h"

#define LOCTEXT_NAMESPACE "AkAudio"
DEFINE_LOG_CATEGORY_STATIC(LogAkBanks, Log, All);

SGenerateSoundBanks::SGenerateSoundBanks()
{
}

void SGenerateSoundBanks::Construct(const FArguments& InArgs, TArray<TWeakObjectPtr<UAkAudioBank>>* in_pSoundBanks)
{
	// Generate the list of banks and platforms
	PopulateList();
	if (PlatformNames.Num() == 0)
	{
		OpenMsgDlgInt(EAppMsgType::Ok, NSLOCTEXT("AkAudio", "Warning_Ak_PlatformSupported", "Unable to generate SoundBanks. Please select a valid Wwise supported platform in the 'Project Settings > Project > Supported Platforms' dialog."), LOCTEXT("AkAudio_Error", "Error"));
		return;
	}

	// Build the form
	ChildSlot
	[
		SNew(SVerticalBox)
		+SVerticalBox::Slot()
		.Padding(0, 8)
		.FillHeight(1.f)
		[
			SNew(SHorizontalBox)
			+SHorizontalBox::Slot()
			.Padding(0, 8)
			.AutoWidth()
			[
				SNew(SBorder)
				.BorderImage( FEditorStyle::GetBrush("ToolPanel.GroupBorder") )
				[
					SAssignNew(BankList, SListView<TSharedPtr<FString>>)
					.ListItemsSource(&Banks)
					.SelectionMode(ESelectionMode::Multi)
					.OnGenerateRow(this, &SGenerateSoundBanks::MakeBankListItemWidget)
					.HeaderRow
					(
						SNew(SHeaderRow)
						+ SHeaderRow::Column("Available Banks")
						[
							SNew(SBorder)
							.Padding(5)
							.Content()
							[
								SNew(STextBlock)
								.Text(LOCTEXT("AkAvailableBanks", "Available Banks"))
							]
						]
					)
				]
			]
			+SHorizontalBox::Slot()
			.Padding(0, 8)
			.AutoWidth()
			[
				SNew(SBorder)
				.BorderImage( FEditorStyle::GetBrush("ToolPanel.GroupBorder") )
				[
					SAssignNew(PlatformList, SListView<TSharedPtr<FString>>)
					.ListItemsSource(&PlatformNames)
					.SelectionMode(ESelectionMode::Multi)
					.OnGenerateRow(this, &SGenerateSoundBanks::MakePlatformListItemWidget)
					.HeaderRow
					(
						SNew(SHeaderRow)
						+ SHeaderRow::Column("Available Platforms")
						[
							SNew(SBorder)
							.Padding(5)
							.Content()
							[
								SNew(STextBlock)
								.Text(LOCTEXT("AkAvailablePlatforms", "Available Platforms"))
							]
						]
					)
				]
			]
		]
		+SVerticalBox::Slot()
		.AutoHeight()
		.Padding(0, 4)
		.HAlign(HAlign_Right)
		[
			SNew(SButton)
			.Text(LOCTEXT("AkGenerate", "Generate"))
			.OnClicked(this, &SGenerateSoundBanks::OnGenerateButtonClicked)
		]
	];


	// Select all the banks, or only the banks passed with pObjects
	if(in_pSoundBanks == nullptr)
	{
		// Select all the banks
		for (int32 ItemIdx = 0; ItemIdx < Banks.Num(); ItemIdx++)
		{
			BankList->SetItemSelection(Banks[ItemIdx], true);
		}
	}
	else
	{
		// Select given banks
		for (int32 ItemIdx = 0; ItemIdx < in_pSoundBanks->Num(); ItemIdx++)
		{
			FString inBankName = in_pSoundBanks->operator[](ItemIdx).Get()->GetName();
			for(int32 bnkIdx = 0; bnkIdx < Banks.Num(); bnkIdx++)
			{
				if( *(Banks[bnkIdx]) == inBankName )
				{
					BankList->SetItemSelection(Banks[bnkIdx], true);
				}
			}
		}
	}

	// Select all the platforms
	for (int32 ItemIdx = 0; ItemIdx < PlatformNames.Num(); ItemIdx++)
	{
		PlatformList->SetItemSelection(PlatformNames[ItemIdx], true);
	}

}

void SGenerateSoundBanks::PopulateList(void)
{
	FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");

	Banks.Empty();

	// Force load of bank assets so that the list is fully populated.
	{
		TArray<FAssetData> BankAssets;
		AssetRegistryModule.Get().GetAssetsByClass(UAkAudioBank::StaticClass()->GetFName(), BankAssets);

		for (int32 AssetIndex = 0; AssetIndex < BankAssets.Num(); ++AssetIndex)
		{	
			Banks.Add( TSharedPtr<FString>(new FString(BankAssets[AssetIndex].AssetName.ToString())) );
		}
	}
	// Sort bank list
	{
		struct FBankSortPredicate
		{
			FBankSortPredicate() {}

			/** Sort predicate operator */
			bool operator ()(const TSharedPtr<FString>& LHS, const TSharedPtr<FString>& RHS) const
			{
				return *LHS < *RHS;
			}
		};
		Banks.Sort(FBankSortPredicate());
	}

	// Get available platforms
	GetWwisePlatforms();
}

void SGenerateSoundBanks::AddPlatformIfSupported(const TSet<FString>& SupportedPlatforms, const FString& UnrealName, const TCHAR* WwiseName)
{
	if (SupportedPlatforms.Num() == 0 || SupportedPlatforms.Contains(UnrealName))
	{
		PlatformNames.Add(TSharedPtr<FString>(new FString(WwiseName)));
	}
}

void SGenerateSoundBanks::GetWwisePlatforms()
{
	IProjectManager& ProjectManager = IProjectManager::Get();
	TSet<FString> SupportedPlatforms;
	for (FName TargetPlatform : ProjectManager.GetCurrentProject()->TargetPlatforms)
	{
		SupportedPlatforms.Add(TargetPlatform.ToString());
	}
	PlatformNames.Empty();
	AddPlatformIfSupported(SupportedPlatforms, TEXT("Android"), TEXT("Android"));
	AddPlatformIfSupported(SupportedPlatforms, TEXT("IOS"), TEXT("IOS"));
	AddPlatformIfSupported(SupportedPlatforms, TEXT("LinuxNoEditor"), TEXT("Linux"));
	AddPlatformIfSupported(SupportedPlatforms, TEXT("MacNoEditor"), TEXT("Mac"));
	AddPlatformIfSupported(SupportedPlatforms, TEXT("PS4"), TEXT("PS4"));
	AddPlatformIfSupported(SupportedPlatforms, TEXT("WindowsNoEditor"), TEXT("Windows"));
	AddPlatformIfSupported(SupportedPlatforms, TEXT("XboxOne"), TEXT("XboxOne"));
	AddPlatformIfSupported(SupportedPlatforms, TEXT("Switch"), TEXT("Switch"));
}

FReply SGenerateSoundBanks::OnKeyDown( const FGeometry& MyGeometry, const FKeyEvent& InKeyboardEvent )
{
	if( InKeyboardEvent.GetKey() == EKeys::Enter )
	{
		return OnGenerateButtonClicked();
	}
	else if( InKeyboardEvent.GetKey() == EKeys::Escape )
	{
		TSharedPtr<SWindow> ParentWindow = FSlateApplication::Get().FindWidgetWindow(AsShared());
		ParentWindow->RequestDestroyWindow();
		return FReply::Handled();
	}

	return SCompoundWidget::OnKeyDown(MyGeometry, InKeyboardEvent);
}

FReply SGenerateSoundBanks::OnGenerateButtonClicked()
{
	TArray< TSharedPtr<FString> > BanksToGenerate = BankList->GetSelectedItems();
	TArray< TSharedPtr<FString> > PlatformsToGenerate = PlatformList->GetSelectedItems();

	long cBanks = BanksToGenerate.Num();

	if( cBanks <= 0 )
	{
		OpenMsgDlgInt( EAppMsgType::Ok, NSLOCTEXT("AkAudio", "Warning_Ak_NoAkBanksSelected", "At least one bank must be selected."), LOCTEXT("AkAudio_Error", "Error") );
		return FReply::Handled();
	}

	if( PlatformsToGenerate.Num() <= 0 )
	{
		OpenMsgDlgInt( EAppMsgType::Ok, NSLOCTEXT("AkAudio", "Warning_Ak_NoAkPlatformsSelected", "At least one platform must be selected."), LOCTEXT("AkAudio_Error", "Error") );
		return FReply::Handled();
	}

	TMap<FString, TSet<UAkAudioEvent*> > BankToEventSet;
	TMap<FString, TSet<UAkAuxBus*> > BankToAuxBusSet;
	{
		// Force load of event assets to make sure definition file is complete
		FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
		TArray<FAssetData> EventAssets;
		AssetRegistryModule.Get().GetAssetsByClass(UAkAudioEvent::StaticClass()->GetFName(), EventAssets);

		for (int32 AssetIndex = 0; AssetIndex < EventAssets.Num(); ++AssetIndex)
		{
			FString EventAssetPath = EventAssets[AssetIndex].ObjectPath.ToString();
			UAkAudioEvent * pEvent = LoadObject<UAkAudioEvent>(NULL, *EventAssetPath, NULL, 0, NULL);
			if (BanksToGenerate.ContainsByPredicate([&](TSharedPtr<FString> Bank) { 
				if (pEvent->RequiredBank)
				{
					return pEvent->RequiredBank->GetName() == *Bank;
				}
				return false;
			
			}))
			{
				if (pEvent->RequiredBank)
				{
					TSet<UAkAudioEvent*>& EventPtrSet = BankToEventSet.FindOrAdd(pEvent->RequiredBank->GetName());
					EventPtrSet.Add(pEvent);
				}
			}
		}

		// Force load of AuxBus assets to make sure definition file is complete
		TArray<FAssetData> AuxBusAssets;
		AssetRegistryModule.Get().GetAssetsByClass(UAkAuxBus::StaticClass()->GetFName(), AuxBusAssets);

		for (int32 AssetIndex = 0; AssetIndex < AuxBusAssets.Num(); ++AssetIndex)
		{
			FString AuxBusAssetPath = AuxBusAssets[AssetIndex].ObjectPath.ToString();
			UAkAuxBus * pAuxBus = LoadObject<UAkAuxBus>(NULL, *AuxBusAssetPath, NULL, 0, NULL);
			if (BanksToGenerate.ContainsByPredicate([&](TSharedPtr<FString> Bank) { 
				if (pAuxBus->RequiredBank)
				{
					return pAuxBus->RequiredBank->GetName() == *Bank;
				}
				return false;
			}))
			{
				if (pAuxBus->RequiredBank)
				{
					TSet<UAkAuxBus*>& EventPtrSet = BankToAuxBusSet.FindOrAdd(pAuxBus->RequiredBank->GetName());
					EventPtrSet.Add(pAuxBus);
				}
			}
		}
	}
	
	FString DefFileContent = WwiseBnkGenHelper::DumpBankContentString(BankToEventSet);
	DefFileContent += WwiseBnkGenHelper::DumpBankContentString(BankToAuxBusSet);
	bool SuccesfulDump = FFileHelper::SaveStringToFile(DefFileContent, *WwiseBnkGenHelper::GetDefaultSBDefinitionFilePath());
	if( SuccesfulDump )
	{
		int32 ReturnCode = WwiseBnkGenHelper::GenerateSoundBanks( BanksToGenerate, PlatformsToGenerate, BankToEventSet.Num() > 0 );

		if ( ReturnCode == 0 || ReturnCode == 2 )
		{
			FAkAudioDevice * AudioDevice = FAkAudioDevice::Get();
			if ( AudioDevice )
			{
				AudioDevice->ReloadAllReferencedBanks();
			}

			FetchAttenuationInfo(BankToEventSet);

			TSharedPtr<SWindow> ParentWindow = FSlateApplication::Get().FindWidgetWindow(AsShared());
			ParentWindow->RequestDestroyWindow();
		}
		else
		{
			FMessageDialog::Open( EAppMsgType::Ok, LOCTEXT("AkAudio_SoundBankGenFail", "SoundBank generation failed: see log for more information.") );
		}
	}
	else
	{
		FMessageDialog::Open( EAppMsgType::Ok, LOCTEXT("AkAudio_SoundBankGenFailNoDefFile", "SoundBank generation failed: could not open the Wwise SoundBank definition file.") );
	}

	return FReply::Handled();
}

// Gets most recently modified JSON SoundBank metadata file
struct BankNameToPath : private IPlatformFile::FDirectoryVisitor
{
	FString BankPath;

	BankNameToPath(const FString& BankName, const TCHAR* BaseDirectory, IPlatformFile& PlatformFile)
		: BankName(BankName), PlatformFile(PlatformFile)
	{
		Visit(BaseDirectory, true);
		PlatformFile.IterateDirectory(BaseDirectory, *this);
	}

	bool IsValid() const { return StatData.bIsValid; }

private:
	virtual bool Visit(const TCHAR* FilenameOrDirectory, bool bIsDirectory) override
	{
		if (bIsDirectory)
		{
			FString NewBankPath = FilenameOrDirectory;
			NewBankPath += TEXT("\\");
			NewBankPath += BankName + TEXT(".json");

			FFileStatData NewStatData = PlatformFile.GetStatData(*NewBankPath);
			if (NewStatData.bIsValid && !NewStatData.bIsDirectory)
			{
				if (!StatData.bIsValid || NewStatData.ModificationTime > StatData.ModificationTime)
				{
					StatData = NewStatData;
					BankPath = NewBankPath;
				}
			}
		}

		return true;
	}

	const FString& BankName;
	IPlatformFile& PlatformFile;
	FFileStatData StatData;
};

bool SGenerateSoundBanks::FetchAttenuationInfo(const TMap<FString, TSet<UAkAudioEvent*> >& BankToEventSet)
{
	FString PlatformName = GetTargetPlatformManagerRef().GetRunningTargetPlatform()->PlatformName();
	FString BankBasePath = WwiseBnkGenHelper::GetBankGenerationFullDirectory(*PlatformName);
	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
	const TCHAR* BaseDirectory = *BankBasePath;

	FString FileContents; // cache the file contents - in case we are opening large files

	for (TMap<FString, TSet<UAkAudioEvent*> >::TConstIterator BankIt(BankToEventSet); BankIt; ++BankIt)
	{
		FString BankName = BankIt.Key();
		BankNameToPath NameToPath(BankName, BaseDirectory, PlatformFile);

		if (NameToPath.IsValid())
		{
			const TCHAR* BankPath = *NameToPath.BankPath;
			const TSet<UAkAudioEvent*>& EventsInBank = BankIt.Value();

			FileContents.Reset();
			if (!FFileHelper::LoadFileToString(FileContents, BankPath))
			{
				UE_LOG(LogAkBanks, Warning, TEXT("Failed to load file contents of JSON SoundBank metadata file: %s"), BankPath);
				continue;
			}

			TSharedPtr< FJsonObject > JsonObject;
			TSharedRef< TJsonReader<> > Reader = TJsonReaderFactory<>::Create(FileContents);

			if (!FJsonSerializer::Deserialize(Reader, JsonObject) || !JsonObject.IsValid())
			{
				UE_LOG(LogAkBanks, Warning, TEXT("Unable to parse JSON SoundBank metadata file: %s"), BankPath);
				continue;
			}

			TArray< TSharedPtr<FJsonValue> > SoundBanks = JsonObject->GetObjectField("SoundBanksInfo")->GetArrayField("SoundBanks");
			TSharedPtr<FJsonObject> Obj = SoundBanks[0]->AsObject();
			TArray< TSharedPtr<FJsonValue> > Events = Obj->GetArrayField("IncludedEvents");

			for (int i = 0; i < Events.Num(); i++)
			{
				TSharedPtr<FJsonObject> EventObj = Events[i]->AsObject();
				FString EventName = EventObj->GetStringField("Name");

				UAkAudioEvent* Event = nullptr;
				for (auto TestEvent : EventsInBank)
				{
					if (TestEvent->GetName() == EventName)
					{
						Event = TestEvent;
						break;
					}
				}

				if (Event == nullptr)
					continue;

				bool Changed = false;
				FString ValueString;
				if (EventObj->TryGetStringField("MaxAttenuation", ValueString))
				{
					const float EventRadius = FCString::Atof(*ValueString);
					if (Event->MaxAttenuationRadius != EventRadius)
					{
						Event->MaxAttenuationRadius = EventRadius;
						Changed = true;
					}
				}
				else
				{
					if (Event->MaxAttenuationRadius != 0)
					{
						// No attenuation info in json file, set to 0.
						Event->MaxAttenuationRadius = 0;
						Changed = true;
					}
				}

				// if we can't find "DurationType", then we assume infinite
				const bool IsInfinite = !EventObj->TryGetStringField("DurationType", ValueString) || (ValueString == "Infinite");
				if (Event->IsInfinite != IsInfinite)
				{
					Event->IsInfinite = IsInfinite;
					Changed = true;
				}

				if (!IsInfinite)
				{
					if (EventObj->TryGetStringField("DurationMin", ValueString))
					{
						const float DurationMin = FCString::Atof(*ValueString);
						if (Event->MinimumDuration != DurationMin)
						{
							Event->MinimumDuration = DurationMin;
							Changed = true;
						}
					}

					if (EventObj->TryGetStringField("DurationMax", ValueString))
					{
						const float DurationMax = FCString::Atof(*ValueString);
						if (Event->MaximumDuration != DurationMax)
						{
							Event->MaximumDuration = DurationMax;
							Changed = true;
						}
					}
				}

				if (Changed)
				{
					Event->Modify(true);
				}
			}
		}
	}

	return true;
}

TSharedRef<ITableRow> SGenerateSoundBanks::MakeBankListItemWidget(TSharedPtr<FString> Bank, const TSharedRef<STableViewBase>& OwnerTable)
{
	check(Bank.IsValid());

	return
		SNew(STableRow< TSharedPtr<FString> >, OwnerTable)
		[
			SNew(SBox)
			.WidthOverride(300)
			[
				SNew(STextBlock)
				.Text(FText::FromString(*Bank))
			]
		];
}

TSharedRef<ITableRow> SGenerateSoundBanks::MakePlatformListItemWidget(TSharedPtr<FString> Platform, const TSharedRef<STableViewBase>& OwnerTable)
{
	return
		SNew(STableRow< TSharedPtr<FString> >, OwnerTable)
		[
			SNew(SBox)
			.WidthOverride(300)
			[
				SNew(STextBlock)
				.Text(FText::FromString(*Platform))
			]
		];
}


#undef LOCTEXT_NAMESPACE
