// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
#pragma once

#include "WwisePicker/WwiseTreeItem.h"

/**
* Implements the visual style of LogVisualizer.
*/
class FAudiokineticToolsStyle
{
public:
	static void Initialize();

	static void Shutdown();

	/** @return The Slate style set for Fortnite Editor */
	static const ISlateStyle& Get();

	static FName GetStyleSetName();

	static const FSlateBrush* GetBrush(EWwiseTreeItemType::Type ItemType);

private:

	static TSharedRef< class FSlateStyleSet > Create();

private:

	static TSharedPtr< class FSlateStyleSet > StyleInstance;
	static FString	WwiseContentDir;
};

