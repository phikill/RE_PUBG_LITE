// Copyright (c) 2006-2016 Audiokinetic Inc. / All Rights Reserved

#include "AudiokineticToolsPrivatePCH.h"

#include "AkAudioDevice.h"
#include "AkAudioClasses.h"

#include "MovieScene.h"
#include "MovieSceneCommonHelpers.h"
#include "MovieSceneAkAudioEventTrack.h"
#include "MovieSceneAkAudioEventSection.h"
#include "MovieSceneAkAudioEventTrackEditor.h"

#include "SequencerUtilities.h"
#include "ISequencerSection.h"

#include "AkMatineeImportTools.h"
#include "AudiokineticToolsStyle.h"

#include "ScopedTransaction.h"

#include "SequencerSectionPainter.h"
#include "IContentBrowserSingleton.h"

#include "IAssetRegistry.h"
#include "AssetRegistryModule.h"
#include "Layout/SBox.h"

#include "ContentBrowserModule.h"
#include "MultiBox/MultiBoxBuilder.h"
#include "SlateApplication.h"

#include "Async/Async.h"

#define LOCTEXT_NAMESPACE "MovieSceneAkAudioEventTrackEditor"


/**
 * Class that draws a transform section in the sequencer
 */
class FMovieSceneAkAudioEventSection
	: public ISequencerSection
{
public:

	FMovieSceneAkAudioEventSection(UMovieSceneSection& InSection)
		: Section(Cast<UMovieSceneAkAudioEventSection>(&InSection))
	{ }

public:

	// ISequencerSection interface

	virtual UMovieSceneSection* GetSectionObject() override { return Section; }

#if !UE_4_17_OR_LATER
	virtual FText GetDisplayName() const override
	{ 
		return LOCTEXT("DisplayName", "AkAudioEvent");
	}
#endif // !UE_4_17_OR_LATER
	
	virtual FText GetSectionTitle() const override
	{
		return Section ? FText::FromString(Section->GetEventName()) : FText::GetEmpty();
	}

	virtual void GenerateSectionLayout(class ISectionLayoutBuilder& LayoutBuilder) const override {}

	virtual int32 OnPaintSection(FSequencerSectionPainter& InPainter) const override
	{
		return InPainter.PaintSectionBackground();
	}

	virtual void ResizeSection(ESequencerSectionResizeMode ResizeMode, float ResizeTime) override
	{
		if (ResizeMode == ESequencerSectionResizeMode::SSRM_TrailingEdge)
		{
			Section->SetEndTime(ResizeTime);
		}
	}

private:

	/** The section we are visualizing */
	UMovieSceneAkAudioEventSection* Section;
};


FMovieSceneAkAudioEventTrackEditor::FMovieSceneAkAudioEventTrackEditor(TSharedRef<ISequencer> InSequencer)
	: FMovieSceneTrackEditor(InSequencer)
{
}

TSharedRef<ISequencerTrackEditor> FMovieSceneAkAudioEventTrackEditor::CreateTrackEditor(TSharedRef<ISequencer> InSequencer)
{
	return MakeShareable(new FMovieSceneAkAudioEventTrackEditor(InSequencer));
}

bool FMovieSceneAkAudioEventTrackEditor::SupportsType(TSubclassOf<UMovieSceneTrack> Type) const
{
	return Type == UMovieSceneAkAudioEventTrack::StaticClass();
}

void FMovieSceneAkAudioEventTrackEditor::BuildTrackContextMenu(FMenuBuilder& MenuBuilder, UMovieSceneTrack* Track)
{
	auto MatineeAkAudioEventTrack = FAkMatineeImportTools::GetTrackFromMatineeCopyPasteBuffer<UInterpTrackAkAudioEvent>();
	auto AkAudioEventTrack = Cast<UMovieSceneAkAudioEventTrack>(Track);

	MenuBuilder.AddMenuEntry(
		NSLOCTEXT("Sequencer", "PasteMatineeMatineeAkAudioEventTrack", "Paste Matinee AkAudioEvent Track"),
		NSLOCTEXT("Sequencer", "PasteMatineeMatineeAkAudioEventTrackTooltip", "Pastes keys from a Matinee AkAudioEvent track into this track."),
		FSlateIcon(),
		FUIAction(
			FExecuteAction::CreateLambda([=]
			{
				if (FAkMatineeImportTools::CopyInterpAkAudioEventTrack(MatineeAkAudioEventTrack, AkAudioEventTrack) != ECopyInterpAkAudioResult::NoChange)
				{
					GetSequencer()->NotifyMovieSceneDataChanged(EMovieSceneDataChangeType::MovieSceneStructureItemAdded);
				}
			}),
			FCanExecuteAction::CreateLambda([=]
			{
				return MatineeAkAudioEventTrack && AkAudioEventTrack && MatineeAkAudioEventTrack->GetNumKeyframes() > 0;
			})
		)
	);
}

TSharedRef<ISequencerSection> FMovieSceneAkAudioEventTrackEditor::MakeSectionInterface(UMovieSceneSection& SectionObject, UMovieSceneTrack& Track, FGuid ObjectBinding)
{
	return MakeShareable(new FMovieSceneAkAudioEventSection(SectionObject));
}

bool FMovieSceneAkAudioEventTrackEditor::HandleAssetAdded(UObject* Asset, const FGuid& TargetObjectGuid)
{
	if (Asset->IsA<UAkAudioEvent>())
	{
		auto Event = Cast<UAkAudioEvent>(Asset);

		if (TargetObjectGuid.IsValid())
		{
			TArray<TWeakObjectPtr<UObject>> ObjectsToAttachTo;
			for (TWeakObjectPtr<> Object : GetSequencer()->FindObjectsInCurrentSequence(TargetObjectGuid))
				ObjectsToAttachTo.Add(Object);

			auto AddNewAttachedSound = [Event, ObjectsToAttachTo, this](float KeyTime)
			{
				bool bHandleCreated = false;
				bool bTrackCreated = false;
				bool bTrackModified = false;

				for (int32 ObjectIndex = 0; ObjectIndex < ObjectsToAttachTo.Num(); ++ObjectIndex)
				{
					UObject* Object = ObjectsToAttachTo[ObjectIndex].Get();

					FFindOrCreateHandleResult HandleResult = FindOrCreateHandleToObject(Object);
					FGuid ObjectHandle = HandleResult.Handle;
					bHandleCreated |= HandleResult.bWasCreated;

					if (ObjectHandle.IsValid())
					{
						FFindOrCreateTrackResult TrackResult = FindOrCreateTrackForObject(ObjectHandle, UMovieSceneAkAudioEventTrack::StaticClass());
						bTrackCreated |= TrackResult.bWasCreated;

						if (ensure(TrackResult.Track))
						{
							auto AudioTrack = Cast<UMovieSceneAkAudioEventTrack>(TrackResult.Track);
							AudioTrack->AddNewEvent(KeyTime, Event);
							bTrackModified = true;
						}
					}
				}

#if UE_4_17_OR_LATER
				FKeyPropertyResult Result;
				Result.bTrackModified = bTrackModified;
				Result.bHandleCreated = bHandleCreated;
				Result.bTrackCreated = bTrackCreated;
				return Result;
#else
				return bHandleCreated || bTrackCreated || bTrackModified;
#endif // UE_4_17_OR_LATER
			};

			AnimatablePropertyChanged(FOnKeyProperty::CreateLambda(AddNewAttachedSound));
		}
		else
		{
			auto AddNewMasterSound = [Event, this](float KeyTime)
			{
				auto TrackResult = FindOrCreateMasterTrack<UMovieSceneAkAudioEventTrack>();
				TrackResult.Track->SetIsAMasterTrack(true);
				TrackResult.Track->AddNewEvent(KeyTime, Event);

#if UE_4_17_OR_LATER
				FKeyPropertyResult Result;
				Result.bTrackModified = Result.bHandleCreated = Result.bTrackCreated = true;
				return Result;
#else
				return true;
#endif // UE_4_17_OR_LATER
			};

			AnimatablePropertyChanged(FOnKeyProperty::CreateLambda(AddNewMasterSound));
		}

		return true;
	}
	return false;
}

const FSlateBrush* FMovieSceneAkAudioEventTrackEditor::GetIconBrush() const
{
	return FAudiokineticToolsStyle::Get().GetBrush("AudiokineticTools.EventIcon");
}

void FMovieSceneAkAudioEventTrackEditor::BuildAddTrackMenu(FMenuBuilder& MenuBuilder)
{
	MenuBuilder.AddMenuEntry(
		LOCTEXT("AddAkAudioEventTrack", "AkAudioEvent"),
		LOCTEXT("AddAkAudioEventMasterTrackTooltip", "Adds a master AkAudioEvent track."),
		FSlateIcon(FAudiokineticToolsStyle::GetStyleSetName(), "AudiokineticTools.EventIcon"),
		FUIAction(FExecuteAction::CreateLambda([=]
		{
			auto FocusedMovieScene = GetFocusedMovieScene();

			if (FocusedMovieScene == nullptr)
			{
				return;
			}

			const FScopedTransaction Transaction(LOCTEXT("AddAkAudioEventMasterTrack_Transaction", "Add master AkAudioEvent Track"));
			FocusedMovieScene->Modify();

			auto NewTrack = FocusedMovieScene->AddMasterTrack<UMovieSceneAkAudioEventTrack>();
			ensure(NewTrack);
			NewTrack->SetIsAMasterTrack(true);

			GetSequencer()->NotifyMovieSceneDataChanged(EMovieSceneDataChangeType::MovieSceneStructureItemAdded);
		}))
	);
}

TSharedPtr<SWidget> FMovieSceneAkAudioEventTrackEditor::BuildOutlinerEditWidget(const FGuid& ObjectBinding, UMovieSceneTrack* Track, const FBuildEditWidgetParams& Params)
{
	// Create a container edit box
	return SNew(SHorizontalBox)

		// Add the audio combo box
		+ SHorizontalBox::Slot()
		.AutoWidth()
		.VAlign(VAlign_Center)
		[
			FSequencerUtilities::MakeAddButton(LOCTEXT("AudioText", "AkAudioEvent"), FOnGetContent::CreateSP(this, &FMovieSceneAkAudioEventTrackEditor::BuildAudioSubMenu, Track), Params.NodeIsHovered)
		];
}

TSharedRef<SWidget> FMovieSceneAkAudioEventTrackEditor::BuildAudioSubMenu(UMovieSceneTrack* Track)
{
	FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>(TEXT("AssetRegistry"));
	TArray<FName> ClassNames;
	ClassNames.Add(UAkAudioEvent::StaticClass()->GetFName());
	TSet<FName> DerivedClassNames;
	AssetRegistryModule.Get().GetDerivedClassNames(ClassNames, TSet<FName>(), DerivedClassNames);

	FMenuBuilder MenuBuilder(true, nullptr);

	FAssetPickerConfig AssetPickerConfig;
	{
		AssetPickerConfig.OnAssetSelected = FOnAssetSelected::CreateRaw(this, &FMovieSceneAkAudioEventTrackEditor::OnAudioAssetSelected, Track);
		AssetPickerConfig.bAllowNullSelection = false;
		AssetPickerConfig.InitialAssetViewType = EAssetViewType::List;
		for (auto ClassName : DerivedClassNames)
		{
			AssetPickerConfig.Filter.ClassNames.Add(ClassName);
		}
	}

	FContentBrowserModule& ContentBrowserModule = FModuleManager::Get().LoadModuleChecked<FContentBrowserModule>(TEXT("ContentBrowser"));

	TSharedPtr<SBox> MenuEntry = SNew(SBox)
		.WidthOverride(300.0f)
		.HeightOverride(300.f)
		[
			ContentBrowserModule.Get().CreateAssetPicker(AssetPickerConfig)
		];

	MenuBuilder.AddWidget(MenuEntry.ToSharedRef(), FText::GetEmpty(), true);

	return MenuBuilder.MakeWidget();
}


void FMovieSceneAkAudioEventTrackEditor::OnAudioAssetSelected(const FAssetData& AssetData, UMovieSceneTrack* Track)
{
	FSlateApplication::Get().DismissAllMenus();

	UObject* SelectedObject = AssetData.GetAsset();

	if (SelectedObject)
	{
		UAkAudioEvent* NewEvent = CastChecked<UAkAudioEvent>(AssetData.GetAsset());
		if (NewEvent != nullptr)
		{
			const FScopedTransaction Transaction(LOCTEXT("AddAkAudioEvent_Transaction", "Add AkAudioEvent"));

			Track->Modify();

			float KeyTime = GetSequencer()->GetGlobalTime();
			auto AudioTrack = Cast<UMovieSceneAkAudioEventTrack>(Track);
			AudioTrack->AddNewEvent(KeyTime, NewEvent);

			GetSequencer()->NotifyMovieSceneDataChanged(EMovieSceneDataChangeType::MovieSceneStructureItemAdded);
		}
	}
}

void FMovieSceneAkAudioEventTrackEditor::BuildObjectBindingTrackMenu(FMenuBuilder& MenuBuilder, const FGuid& ObjectBinding, const UClass* ObjectClass)
{
	if (ObjectClass->IsChildOf(AActor::StaticClass()) || ObjectClass->IsChildOf(USceneComponent::StaticClass()))
	{
		MenuBuilder.AddMenuEntry(
			LOCTEXT("AddAkAudioEventTrack", "AkAudioEvent"),
			LOCTEXT("AddAkAudioEventTrackTooltip", "Adds an AkAudioEvent track."),
			FSlateIcon(FAudiokineticToolsStyle::GetStyleSetName(), "AudiokineticTools.EventIcon"),
			FUIAction(FExecuteAction::CreateLambda([=]
			{
				auto FocusedMovieScene = GetFocusedMovieScene();

				if (FocusedMovieScene == nullptr)
				{
					return;
				}

				const FScopedTransaction Transaction(LOCTEXT("AddAkAudioEventTrack_Transaction", "Add AkAudioEvent Track"));
				FocusedMovieScene->Modify();

				auto NewTrack = FocusedMovieScene->AddTrack<UMovieSceneAkAudioEventTrack>(ObjectBinding);
				ensure(NewTrack);

				GetSequencer()->NotifyMovieSceneDataChanged(EMovieSceneDataChangeType::MovieSceneStructureItemAdded);
			}))
		);
	}
}

#undef LOCTEXT_NAMESPACE
