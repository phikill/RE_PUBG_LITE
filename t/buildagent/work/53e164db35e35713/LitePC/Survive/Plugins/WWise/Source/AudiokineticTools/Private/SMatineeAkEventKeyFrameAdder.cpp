// Copyright (c) 2006-2012 Audiokinetic Inc. / All Rights Reserved

/*------------------------------------------------------------------------------------
	SMatineeAkEventKeyFrameAdder.cpp
------------------------------------------------------------------------------------*/

#include "AudiokineticToolsPrivatePCH.h"
#include "AkAudioClasses.h"
#include "AkAudioDevice.h"
#include "PropertyEditorModule.h"
#include "PropertyCustomizationHelpers.h"
#include "SMatineeAkEventKeyFrameAdder.h"
#include "Images/SImage.h"
#include "Text/STextBlock.h"
#include "Input/SEditableTextBox.h"
#include "AssetData.h"

#define LOCTEXT_NAMESPACE "AkAudio"

SMatineeAkEventKeyFrameAdder::SMatineeAkEventKeyFrameAdder()
{
}

void SMatineeAkEventKeyFrameAdder::Construct(const FArguments& InArgs)
{
	FString ObjectPath;
	SelectedAkEvent = InArgs._SelectedAkEvent;
	OnAkEventSet = InArgs._OnAkEventSet;
	bAdvancedVisible = false;

	// Build the form
	ChildSlot
	[
		SNew(SBorder)
		.BorderImage(FCoreStyle::Get().GetBrush("PopupText.Background"))
		.Padding(10)
		[
			SNew(SVerticalBox)
			+SVerticalBox::Slot()
			.Padding(2, 2)
			.AutoHeight()
			[
				SNew(SObjectPropertyEntryBox)
				.AllowedClass(UAkAudioEvent::StaticClass())
				.ObjectPath(this, &SMatineeAkEventKeyFrameAdder::GetSelectedAkEventPath)
				.OnObjectChanged(this, &SMatineeAkEventKeyFrameAdder::OnEventChanged)
			]
			+SVerticalBox::Slot()
			.AutoHeight()
			.Padding(6, 2)
			[
				SAssignNew(AdvancedButton, SButton)
				.ButtonStyle(FCoreStyle::Get(), "NoBorder")
				.VAlign(VAlign_Center)
				.HAlign(HAlign_Center)
				.ClickMethod(EButtonClickMethod::MouseDown)
				.ContentPadding(0.f)
				.ForegroundColor(FSlateColor::UseForeground())
				.IsFocusable(false)
				.OnClicked(this, &SMatineeAkEventKeyFrameAdder::OnAdvancedClicked)
				.ToolTipText(LOCTEXT("AkAdvanced", "Show advanced"))
				[
					SNew(SImage)
					.Image(this, &SMatineeAkEventKeyFrameAdder::GetAdvancedButtonImage)
					.ColorAndOpacity(FSlateColor::UseForeground())
				]
			]
			+SVerticalBox::Slot()
			.AutoHeight()
			.Padding(2, 2)
			[
				SNew(SHorizontalBox)
				+SHorizontalBox::Slot()
				.AutoWidth()
				.Padding(2, 2, 6, 2)
				[
					SNew(STextBlock)
					.Text(LOCTEXT("AkEventName", "Event Name"))
					.Visibility(this, &SMatineeAkEventKeyFrameAdder::IsAdvancedVisible)
				]
				+SHorizontalBox::Slot()
				.AutoWidth()
				.Padding(2, 0, 2, 0)
				[
					SNew(SEditableTextBox)
					.HintText(LOCTEXT("AkEventNameHint", "Name of the AkEvent"))
					.OnTextCommitted(this, &SMatineeAkEventKeyFrameAdder::OnEventNameCommited)
					.OnTextChanged(this, &SMatineeAkEventKeyFrameAdder::OnEventNameCommited, ETextCommit::Default)
					.MinDesiredWidth(200)
					.Visibility(this, &SMatineeAkEventKeyFrameAdder::IsAdvancedVisible)
				]
			]

			+SVerticalBox::Slot()
			.AutoHeight()
			.Padding(2, 2)
			.HAlign(HAlign_Right)
			[
				SNew(SButton)
				.Text(LOCTEXT("AkOk", "OK"))
				.OnClicked(this, &SMatineeAkEventKeyFrameAdder::OnOKClicked)
			]
		]
	];
}

EVisibility SMatineeAkEventKeyFrameAdder::IsAdvancedVisible() const
{
	return bAdvancedVisible ? EVisibility::Visible : EVisibility::Hidden;
}

void SMatineeAkEventKeyFrameAdder::OnEventChanged(const FAssetData& InAssetData)
{
	SelectedAkEvent = (UAkAudioEvent*)InAssetData.GetAsset();
	if (SelectedAkEvent)
	{
		SelectedAkEvent->GetPathName();
	}
}

void SMatineeAkEventKeyFrameAdder::OnEventNameCommited(const FText& InText, ETextCommit::Type InCommitType)
{
	EventName = InText.ToString();
}

FString SMatineeAkEventKeyFrameAdder::GetSelectedAkEventPath() const
{
	if (SelectedAkEvent)
	{
		return SelectedAkEvent->GetPathName();
	}

	return FString("");
}

FReply SMatineeAkEventKeyFrameAdder::OnOKClicked()
{
	if(OnAkEventSet.ExecuteIfBound(SelectedAkEvent, EventName))
	{
		return FReply::Handled();
	}

	return FReply::Unhandled();
}

FReply SMatineeAkEventKeyFrameAdder::OnAdvancedClicked()
{
	bAdvancedVisible = !bAdvancedVisible;
	return FReply::Handled();
}

const FSlateBrush* SMatineeAkEventKeyFrameAdder::GetAdvancedButtonImage() const
{
	if (AdvancedButton->IsHovered())
	{
		return bAdvancedVisible ? FEditorStyle::GetBrush("DetailsView.PulldownArrow.Up.Hovered") : FEditorStyle::GetBrush("DetailsView.PulldownArrow.Down.Hovered");
	}
	else
	{
		return bAdvancedVisible ? FEditorStyle::GetBrush("DetailsView.PulldownArrow.Up") : FEditorStyle::GetBrush("DetailsView.PulldownArrow.Down");
	}
}

float SMatineeAkEventKeyFrameAdder::GetAdvancedFeaturesHeight() const
{
	return bAdvancedVisible ? 200.0f : 0.0f;
}


#undef LOCTEXT_NAMESPACE
