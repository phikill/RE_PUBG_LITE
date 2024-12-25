// Copyright (c) 2006-2012 Audiokinetic Inc. / All Rights Reserved

/*------------------------------------------------------------------------------------
	WwiseEventDragDropOp.cpp
------------------------------------------------------------------------------------*/

#include "AudiokineticToolsPrivatePCH.h"
#include "WwisePicker/WwiseTreeItem.h"
#include "WwisePicker/SWwisePicker.h"
#include "WwisePicker/WwiseEventDragDropOp.h"
#include "ContentBrowserModule.h"
#include "AudiokineticToolsStyle.h"
#include "Factories/Factory.h"
#include "AkAcousticTexture.h"
#include "AkAudioEvent.h"
#include "AkAuxBus.h"
#include "AkAcousticTextureFactory.h"
#include "AkAudioEventFactory.h"
#include "AkAuxBusFactory.h"
#include "IAssetTools.h"
#include "AssetToolsModule.h"
#include "ModuleManager.h"

#define LOCTEXT_NAMESPACE "AkAudio"

TSharedRef<FWwiseEventDragDropOp> FWwiseEventDragDropOp::New(const TArray<TSharedPtr<FWwiseTreeItem>>& InAssets)
{
	FWwiseEventDragDropOp* RawPointer = new FWwiseEventDragDropOp();
	TSharedRef<FWwiseEventDragDropOp> Operation = MakeShareable(RawPointer);
	
	Operation->MouseCursor = EMouseCursor::GrabHandClosed;
	Operation->Assets = InAssets;
	Operation->SetCanDrop(false);

	EWwiseTreeItemType::Type ItemType = InAssets[0]->ItemType;
	int32 i = 1;
	for (; i < InAssets.Num(); i++)
	{
		if (InAssets[i]->ItemType != ItemType)
		{
			break;
		}
	}

	if (i == InAssets.Num())
	{
		Operation->Icon = FAudiokineticToolsStyle::GetBrush(ItemType);
	}

	Operation->Construct();
	
	FAssetViewDragAndDropExtender::FOnDropDelegate DropDelegate = FAssetViewDragAndDropExtender::FOnDropDelegate::CreateRaw(RawPointer, &FWwiseEventDragDropOp::OnAssetViewDrop);
	FAssetViewDragAndDropExtender::FOnDragOverDelegate DragOverDelegate = FAssetViewDragAndDropExtender::FOnDragOverDelegate::CreateRaw(RawPointer, &FWwiseEventDragDropOp::OnAssetViewDragOver);
	FAssetViewDragAndDropExtender::FOnDragLeaveDelegate DragLeaveDelegate = FAssetViewDragAndDropExtender::FOnDragLeaveDelegate::CreateRaw(RawPointer, &FWwiseEventDragDropOp::OnAssetViewDragLeave);
	Operation->pExtender = new FAssetViewDragAndDropExtender(DropDelegate, DragOverDelegate, DragLeaveDelegate);

	FContentBrowserModule& ContentBrowserModule = FModuleManager::GetModuleChecked<FContentBrowserModule>("ContentBrowser");
	TArray<FAssetViewDragAndDropExtender>& AssetViewDragAndDropExtenders = ContentBrowserModule.GetAssetViewDragAndDropExtenders();
	AssetViewDragAndDropExtenders.Add(*(Operation->pExtender));
	
	return Operation;
}

FWwiseEventDragDropOp::~FWwiseEventDragDropOp()
{
	FContentBrowserModule& ContentBrowserModule = FModuleManager::GetModuleChecked<FContentBrowserModule>("ContentBrowser");
	TArray<FAssetViewDragAndDropExtender>& AssetViewDragAndDropExtenders = ContentBrowserModule.GetAssetViewDragAndDropExtenders();
	for (int32 i = 0; i < AssetViewDragAndDropExtenders.Num(); i++)
	{
		if (AssetViewDragAndDropExtenders[i].OnDropDelegate.IsBoundToObject(this))
		{
			AssetViewDragAndDropExtenders.RemoveAt(i);
		}
	}

	delete pExtender;
}

bool FWwiseEventDragDropOp::OnAssetViewDrop(const FAssetViewDragAndDropExtender::FPayload& Payload)
{
	if (CanDrop)
	{

		for (int32 i = 0; i < Assets.Num(); i++)
		{
			RecurseCreateAssets(Assets[i], Payload.PackagePaths[0].ToString());
		}

		return true;
	}

	return false;
}

void FWwiseEventDragDropOp::RecurseCreateAssets(TSharedPtr<FWwiseTreeItem>& Asset, const FString& PackagePath)
{
	FString Name;
	UFactory* Factory = nullptr;
	UClass* Class = nullptr;
	if (Asset->ItemType == EWwiseTreeItemType::Event)
	{
		Name = Asset->DisplayName;
		Factory = UAkAudioEventFactory::StaticClass()->GetDefaultObject<UFactory>();
		Class = UAkAudioEvent::StaticClass();
	}
	if (Asset->ItemType == EWwiseTreeItemType::AcousticTexture)
	{
		Name = Asset->DisplayName;
		Factory = UAkAcousticTextureFactory::StaticClass()->GetDefaultObject<UFactory>();
		Class = UAkAcousticTexture::StaticClass();
	}
	else if (Asset->ItemType == EWwiseTreeItemType::AuxBus)
	{
		Name = Asset->DisplayName;
		Factory = UAkAuxBusFactory::StaticClass()->GetDefaultObject<UFactory>();
		Class = UAkAuxBus::StaticClass();
		for (TSharedPtr<FWwiseTreeItem> Child : Asset->Children)
		{
			RecurseCreateAssets(Child, PackagePath + "/" + Name);
		}
	}
	else if (Asset->ItemType == EWwiseTreeItemType::Bus || Asset->ItemType == EWwiseTreeItemType::StandaloneWorkUnit ||
		Asset->ItemType == EWwiseTreeItemType::NestedWorkUnit || Asset->ItemType == EWwiseTreeItemType::Folder ||
		Asset->ItemType == EWwiseTreeItemType::PhysicalFolder)
	{
		for (TSharedPtr<FWwiseTreeItem> Child : Asset->Children)
		{
			RecurseCreateAssets(Child, PackagePath + "/" + Asset->DisplayName);
		}
	}
	

	if (Factory != nullptr)
	{
		FString Path = PackagePath;

		TCHAR CharString[] = { '\0', '\0' };
		for (const TCHAR* InvalidCharacters = INVALID_LONGPACKAGE_CHARACTERS; *InvalidCharacters; ++InvalidCharacters)
		{
			CharString[0] = *InvalidCharacters;
			Path.ReplaceInline(CharString, TEXT(""));
		}

		FAssetToolsModule& AssetToolsModule = FModuleManager::LoadModuleChecked< FAssetToolsModule >("AssetTools");
		AssetToolsModule.Get().CreateAsset(Name, Path, Class, Factory);
	}
}

bool FWwiseEventDragDropOp::OnAssetViewDragOver(const FAssetViewDragAndDropExtender::FPayload& Payload)
{
	SetCanDrop(true);
	return true;
}

bool FWwiseEventDragDropOp::OnAssetViewDragLeave(const FAssetViewDragAndDropExtender::FPayload& Payload)
{
	SetCanDrop(false);
	return true;
}

void FWwiseEventDragDropOp::SetCanDrop(bool InCanDrop)
{
	CanDrop = InCanDrop;
	SetTooltipText();
	if( InCanDrop )
	{
		MouseCursor = EMouseCursor::GrabHandClosed;
		SetToolTip(GetTooltipText(), NULL);
	}
	else
	{
		MouseCursor = EMouseCursor::SlashedCircle;
		SetToolTip(GetTooltipText(), FEditorStyle::GetBrush(TEXT("Graph.ConnectorFeedback.Error")));
	}
}

FCursorReply FWwiseEventDragDropOp::OnCursorQuery()
{
	return FCursorReply::Unhandled();
}

void FWwiseEventDragDropOp::SetTooltipText()
{
	if( CanDrop )
	{
		FString Text = Assets.Num() > 0 ? Assets[0]->DisplayName : TEXT("");

		if ( Assets.Num() > 1 )
		{
			Text += TEXT(" ");
			Text += FString::Printf(*LOCTEXT("AkAudioPickerDragDropTooltip", "and %d other(s)").ToString(), Assets.Num() - 1);
		}
		CurrentHoverText = FText::FromString(Text);
	}
	else
	{
		CurrentHoverText = LOCTEXT("OnDragAkEventsOverFolder_CannotDrop", "Wwise assets can only be dropped in the content browser");
	}
}

FText FWwiseEventDragDropOp::GetTooltipText() const
{
	return CurrentHoverText;
}


TSharedPtr<SWidget> FWwiseEventDragDropOp::GetDefaultDecorator() const
{
	return 
		SNew(SBorder)
		.BorderImage(FEditorStyle::GetBrush("ContentBrowser.AssetDragDropTooltipBackground"))
		.Content()
		[
			SNew(SHorizontalBox)

			// Left slot is folder icon
			+ SHorizontalBox::Slot()
			.AutoWidth()
			.VAlign(VAlign_Center)
			[
				SNew(SImage)
				.Image(Icon)
			]

			// Right slot is for tooltip
			+ SHorizontalBox::Slot()
			.AutoWidth()
			.VAlign(VAlign_Center)
			[
				SNew(SHorizontalBox)

				+ SHorizontalBox::Slot()
				.AutoWidth()
				.Padding(3.0f)
				.VAlign(VAlign_Center)
				[
					SNew(SImage) 
					.Image(this, &FWwiseEventDragDropOp::GetIcon)
				]

				+SHorizontalBox::Slot()
				.AutoWidth()
				.Padding(0,0,3,0)
				.VAlign(VAlign_Center)
				[
					SNew(STextBlock) 
					.Text(this, &FWwiseEventDragDropOp::GetTooltipText)
				]
			]
		];
}

#undef LOCTEXT_NAMESPACE
