// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
#include "AudiokineticToolsPrivatePCH.h"
#include "WwisePicker/WwiseTreeItem.h"
#include "AudiokineticToolsStyle.h"
#include "Styling/SlateStyle.h"
#include "Styling/SlateStyleRegistry.h"

#define IMAGE_BRUSH( RelativePath, ... ) FSlateImageBrush( WwiseContentDir / RelativePath + TEXT(".png"), __VA_ARGS__ )

TSharedPtr< FSlateStyleSet > FAudiokineticToolsStyle::StyleInstance = nullptr;
FString	FAudiokineticToolsStyle::WwiseContentDir;

void FAudiokineticToolsStyle::Initialize()
{
	if (!StyleInstance.IsValid())
	{
		StyleInstance = Create();
		FSlateStyleRegistry::RegisterSlateStyle(*StyleInstance);
	}
}

void FAudiokineticToolsStyle::Shutdown()
{
	FSlateStyleRegistry::UnRegisterSlateStyle(*StyleInstance);
	ensure(StyleInstance.IsUnique());
	StyleInstance.Reset();
}

FName FAudiokineticToolsStyle::GetStyleSetName()
{
	static FName StyleSetName(TEXT("AudiokineticToolsStyle"));
	return StyleSetName;
}

TSharedRef< FSlateStyleSet > FAudiokineticToolsStyle::Create()
{
	const FVector2D Icon16x16(16.0f, 16.0f);

	TSharedRef<FSlateStyleSet> StyleRef = MakeShareable(new FSlateStyleSet(FAudiokineticToolsStyle::GetStyleSetName()));

	WwiseContentDir = FPaths::EnginePluginsDir() / TEXT("Wwise/Content");
	if (!FPaths::DirectoryExists(WwiseContentDir))
	{
#if UE_4_18_OR_LATER
		const auto ProjectPluginsDir = FPaths::ProjectPluginsDir();
#else
		const auto ProjectPluginsDir = FPaths::GamePluginsDir();
#endif // UE_4_18_OR_LATER

		WwiseContentDir = ProjectPluginsDir / TEXT("Wwise/Content");
	}

	StyleRef->SetContentRoot(FPaths::EngineContentDir() / TEXT("Editor/Slate"));
	StyleRef->SetCoreContentRoot(FPaths::EngineContentDir() / TEXT("Slate"));

	FSlateStyleSet& Style = StyleRef.Get();
	{
		Style.Set("AudiokineticTools.WwisePickerTabIcon", new IMAGE_BRUSH("WwisePicker/wwise_logo_32", Icon16x16));
		Style.Set("AudiokineticTools.EventIcon", new IMAGE_BRUSH("WwisePicker/event_nor", Icon16x16));
		Style.Set("AudiokineticTools.AcousticTextureIcon", new IMAGE_BRUSH("WwisePicker/acotex_nor", Icon16x16));
		Style.Set("AudiokineticTools.AuxBusIcon", new IMAGE_BRUSH("WwisePicker/auxbus_nor", Icon16x16));
		Style.Set("AudiokineticTools.BusIcon", new IMAGE_BRUSH("WwisePicker/bus_nor", Icon16x16));
		Style.Set("AudiokineticTools.FolderIcon", new IMAGE_BRUSH("WwisePicker/folder_nor", Icon16x16));
		Style.Set("AudiokineticTools.PhysicalFolderIcon", new IMAGE_BRUSH("WwisePicker/physical_folder_nor", Icon16x16));
		Style.Set("AudiokineticTools.WorkUnitIcon", new IMAGE_BRUSH("WwisePicker/workunit_nor", Icon16x16));
		Style.Set("AudiokineticTools.ProjectIcon", new IMAGE_BRUSH("WwisePicker/wproj", Icon16x16));
		Style.Set("AudiokineticTools.RTPCIcon", new IMAGE_BRUSH("WwisePicker/gameparameter_nor", Icon16x16));
	}

	return StyleRef;
}

#undef IMAGE_BRUSH

const ISlateStyle& FAudiokineticToolsStyle::Get()
{
	return *StyleInstance;
}

const FSlateBrush* FAudiokineticToolsStyle::GetBrush(EWwiseTreeItemType::Type ItemType)
{
	if (StyleInstance.IsValid())
	{
		switch (ItemType)
		{
		case EWwiseTreeItemType::Event:
			return StyleInstance->GetBrush("AudiokineticTools.EventIcon");
		case EWwiseTreeItemType::AcousticTexture:
			return StyleInstance->GetBrush("AudiokineticTools.AcousticTextureIcon");
		case EWwiseTreeItemType::AuxBus:
			return StyleInstance->GetBrush("AudiokineticTools.AuxBusIcon");
		case EWwiseTreeItemType::Bus:
			return StyleInstance->GetBrush("AudiokineticTools.BusIcon");
		case EWwiseTreeItemType::Folder:
			return StyleInstance->GetBrush("AudiokineticTools.FolderIcon");
		case EWwiseTreeItemType::Project:
			return StyleInstance->GetBrush("AudiokineticTools.ProjectIcon");
		case EWwiseTreeItemType::PhysicalFolder:
			return StyleInstance->GetBrush("AudiokineticTools.PhysicalFolderIcon");
		case EWwiseTreeItemType::StandaloneWorkUnit:
		case EWwiseTreeItemType::NestedWorkUnit:
			return StyleInstance->GetBrush("AudiokineticTools.WorkUnitIcon");
		default:
			return NULL;
		}
	}
	
	return NULL;
}

