// Copyright (c) 2006-2012 Audiokinetic Inc. / All Rights Reserved

/*------------------------------------------------------------------------------------
	WwiseWwuParser.h
------------------------------------------------------------------------------------*/
#pragma once

#include "WwisePicker/WwiseTreeItem.h"
#include "XmlFile.h"

typedef TTextFilter< const FString& > StringFilter;

class FWwiseWwuParser
{
public:
	static bool Populate();
	AUDIOKINETICTOOLS_API static bool ForcePopulate();
	static TSharedPtr<FWwiseTreeItem> GetTree(TSharedPtr<StringFilter> SearchBoxFilter, TSharedPtr<FWwiseTreeItem> CurrentTreeRootItem, EWwiseTreeItemType::Type ItemType);
	static TSharedPtr<FWwiseTreeItem> CreatePhysicalFolderItems(const FString& RelativePhysicalPath, TSharedPtr<FWwiseTreeItem> RootItem);
	static bool BuildSubTrees(const FString& WwusPath, EWwiseTreeItemType::Type ItemType);
	static TSharedPtr<FWwiseTreeItem> CreateWwuTree(const FString& WwuPath, EWwiseTreeItemType::Type ItemType, bool ForceRefresh = false);
	static bool IsStandAloneWwu(const FXmlFile& Wwu, EWwiseTreeItemType::Type ItemType);
	static bool ParseWwu(const FXmlFile& Wwu, TSharedPtr<FWwiseTreeItem>& TreeItem, const FString& FolderContainingWwu, EWwiseTreeItemType::Type ItemType);
	static bool RecurseChildren(const FXmlNode* NodeToParse, TSharedPtr<FWwiseTreeItem> TreeItem, const FString& FolderContainingWwu, EWwiseTreeItemType::Type ItemType);
	static void CopyTree(TSharedPtr<FWwiseTreeItem> SourceTreeItem, TSharedPtr<FWwiseTreeItem> DestTreeItem);
	static void FilterTree(TSharedPtr<FWwiseTreeItem> TreeItem, TSharedPtr<StringFilter> SearchBoxFilter);


private:
	static TMap<EWwiseTreeItemType::Type, TMap<FString, TSharedPtr<FWwiseTreeItem>>> WwuSubTrees;
	static TMap<EWwiseTreeItemType::Type, TMap<FString, FDateTime>> WwuLastPopulateTime;
	static TSharedPtr<FWwiseTreeItem> FullTreeRootItems[EWwiseTreeItemType::NUM_DRAGGABLE_WWISE_ITEMS];
	static FString ProjectRootFolder;
	static FString OldFilterText;

};