// Copyright (c) 2006-2012 Audiokinetic Inc. / All Rights Reserved

/*------------------------------------------------------------------------------------
	WwiseWwuParser.cpp
------------------------------------------------------------------------------------*/

#include "AudiokineticToolsPrivatePCH.h"
#include "WwisePicker/WwiseTreeItem.h"
#include "WwisePicker/SWwisePicker.h"
#include "WwisePicker/WwiseWwuParser.h"
#include "AkAudioBankGenerationHelpers.h"
#include "Misc/ScopedSlowTask.h"
#include "HAL/FileManager.h"
#include "Layout/SSpacer.h"

#define LOCTEXT_NAMESPACE "AkAudio"

FString FWwiseWwuParser::ProjectRootFolder;
TMap<EWwiseTreeItemType::Type, TMap<FString, TSharedPtr<FWwiseTreeItem>>> FWwiseWwuParser::WwuSubTrees;
TMap<EWwiseTreeItemType::Type, TMap<FString, FDateTime>> FWwiseWwuParser::WwuLastPopulateTime;
TSharedPtr<FWwiseTreeItem> FWwiseWwuParser::FullTreeRootItems[EWwiseTreeItemType::NUM_DRAGGABLE_WWISE_ITEMS];
FString FWwiseWwuParser::OldFilterText;

bool FWwiseWwuParser::Populate()
{
	ProjectRootFolder = FPaths::GetPath(WwiseBnkGenHelper::GetLinkedProjectPath()) + TEXT("/");

	EWwiseTreeItemType::Type CurrentType = EWwiseTreeItemType::Event;
	bool bSuccess = true;
	while (CurrentType < EWwiseTreeItemType::NUM_DRAGGABLE_WWISE_ITEMS && bSuccess)
	{
		FullTreeRootItems[CurrentType] = MakeShareable(new FWwiseTreeItem(EWwiseTreeItemType::ItemNames[CurrentType], EWwiseTreeItemType::ItemNames[CurrentType], nullptr, EWwiseTreeItemType::PhysicalFolder));
		bSuccess = BuildSubTrees(EWwiseTreeItemType::FolderNames[CurrentType], CurrentType);
		CurrentType = (EWwiseTreeItemType::Type)(((int)CurrentType) + 1);
	}
	return bSuccess;
}

bool FWwiseWwuParser::ForcePopulate()
{
	WwuSubTrees.Empty();
	WwuLastPopulateTime.Empty();
	return Populate();
}

TSharedPtr<FWwiseTreeItem> FWwiseWwuParser::GetTree(TSharedPtr<StringFilter> SearchBoxFilter, TSharedPtr<FWwiseTreeItem> CurrentTreeRootItem, EWwiseTreeItemType::Type ItemType)
{
	FullTreeRootItems[ItemType]->Children.Empty();
	TMap<FString, TSharedPtr<FWwiseTreeItem>>& WwuSubTreesForType = WwuSubTrees.FindOrAdd(ItemType);
	for(TMap<FString, TSharedPtr<FWwiseTreeItem>>::TConstIterator iter = WwuSubTreesForType.CreateConstIterator(); iter; ++iter)
	{
		TSharedPtr<FWwiseTreeItem> CurrentTreeItem = iter->Value;

		if( CurrentTreeItem->ItemType != EWwiseTreeItemType::StandaloneWorkUnit )
		{
			continue;
		}

		FString WwuRelativePhysicalPath = iter->Key;
		WwuRelativePhysicalPath.RemoveFromStart(ProjectRootFolder);


		TSharedPtr<FWwiseTreeItem> Parent = CreatePhysicalFolderItems(WwuRelativePhysicalPath, FullTreeRootItems[ItemType]);
		Parent->Children.Add(CurrentTreeItem);
		CurrentTreeItem->Parent = Parent;
	}
	FullTreeRootItems[ItemType]->SortChildren();

	FString CurrentFilterText = SearchBoxFilter->GetRawFilterText().ToString();
	if( !CurrentFilterText.IsEmpty() && CurrentTreeRootItem.IsValid() )
	{
		TSharedPtr<FWwiseTreeItem> FilteredTreeRootItem = MakeShareable(new FWwiseTreeItem(EWwiseTreeItemType::ItemNames[ItemType], EWwiseTreeItemType::ItemNames[ItemType], nullptr, EWwiseTreeItemType::PhysicalFolder));

		if( !OldFilterText.IsEmpty() && CurrentFilterText.StartsWith(OldFilterText) )
		{
			CopyTree(CurrentTreeRootItem, FilteredTreeRootItem);
		}
		else
		{
			CopyTree(FullTreeRootItems[ItemType], FilteredTreeRootItem);
		}

		FilterTree(FilteredTreeRootItem, SearchBoxFilter);
		OldFilterText = CurrentFilterText;
		return FilteredTreeRootItem;
	}

	return FullTreeRootItems[ItemType];
}

void FWwiseWwuParser::CopyTree(TSharedPtr<FWwiseTreeItem> SourceTreeItem, TSharedPtr<FWwiseTreeItem> DestTreeItem)
{
	for(int32 i = 0; i < SourceTreeItem->Children.Num(); i++)
	{
		TSharedPtr<FWwiseTreeItem> CurrItem = SourceTreeItem->Children[i];
		TSharedPtr<FWwiseTreeItem> NewItem =  MakeShareable(new FWwiseTreeItem(CurrItem->DisplayName, CurrItem->FolderPath, CurrItem->Parent.Pin(), CurrItem->ItemType));
		DestTreeItem->Children.Add(NewItem);

		CopyTree(CurrItem, NewItem);
	}
}

void FWwiseWwuParser::FilterTree(TSharedPtr<FWwiseTreeItem> TreeItem, TSharedPtr<StringFilter> SearchBoxFilter)
{
	TArray<TSharedPtr<FWwiseTreeItem>> ItemsToRemove;
	for(int32 i = 0; i < TreeItem->Children.Num(); i++)
	{
		TSharedPtr<FWwiseTreeItem> CurrItem = TreeItem->Children[i];
		FilterTree(CurrItem, SearchBoxFilter);

		if( !SearchBoxFilter->PassesFilter(CurrItem->DisplayName) && CurrItem->Children.Num() == 0 )
		{
			ItemsToRemove.Add(CurrItem);
		}
	}

	for(int32 i = 0; i < ItemsToRemove.Num(); i++)
	{
		TreeItem->Children.Remove(ItemsToRemove[i]);
	}
}

TSharedPtr<FWwiseTreeItem> FWwiseWwuParser::CreatePhysicalFolderItems(const FString& RelativePhysicalPath, TSharedPtr<FWwiseTreeItem> RootItem)
{
	TArray<FString> SplitPath;
	RelativePhysicalPath.ParseIntoArray(SplitPath, TEXT("/"), true);
	TSharedPtr<FWwiseTreeItem> CurrentItem = RootItem;
	for(int32 i = 1; i < SplitPath.Num() - 1; i++) // Start at 1 because item 0 is "Events" (already created), and end at Num - 1 because last item is the work unit filename
	{
		TSharedPtr<FWwiseTreeItem> ChildItem = CurrentItem->GetChild(SplitPath[i]);
		if( !ChildItem.IsValid() )
		{
			FString ItemPath = FPaths::Combine(*CurrentItem->FolderPath, *SplitPath[i]);
			ChildItem = MakeShareable( new FWwiseTreeItem(SplitPath[i], ItemPath, CurrentItem, EWwiseTreeItemType::PhysicalFolder ) );
			CurrentItem->Children.Add(ChildItem);
		}

		CurrentItem->SortChildren();
		CurrentItem = ChildItem;
	}

	return CurrentItem;
}

bool FWwiseWwuParser::BuildSubTrees(const FString& WwusPath, EWwiseTreeItemType::Type ItemType)
{
	TArray<FString> NewWwus;
	TArray<FString> KnownWwus;
	TArray<FString> WwusToProcess;
	TArray<FString> WwusToRemove;
	FString FullPath = FPaths::Combine(*ProjectRootFolder, *WwusPath);

	bool bSuccess = true;
	IFileManager::Get().FindFilesRecursive(NewWwus, *FullPath, TEXT("*.wwu"), true, false);

	TMap<FString, FDateTime>& LastPopTimeMap = WwuLastPopulateTime.FindOrAdd(ItemType);
	LastPopTimeMap.GetKeys(KnownWwus);

	// Get lists of files to parse, and files that have been deleted
	NewWwus.Sort();
	KnownWwus.Sort();
	int32 iKnown = 0;
	int32 iNew = 0;

    while (iNew < NewWwus.Num() && iKnown < KnownWwus.Num())
    {
		if( KnownWwus[iKnown] == NewWwus[iNew] )
		{
			// File was there and is still there.  Check the FileTimes.
			FDateTime LastPopTime = LastPopTimeMap[KnownWwus[iKnown]];
			FDateTime LastModifiedTime = IFileManager::Get().GetTimeStamp(*NewWwus[iNew]);
			if( LastPopTime < LastModifiedTime )
			{
				WwusToProcess.Add(KnownWwus[iKnown]);
			}
			iKnown++;
			iNew++;
		}
		else if( KnownWwus[iKnown] > NewWwus[iNew] )
		{
			// New Wwu detected. Add it to the ToProcess list
			WwusToProcess.Add(NewWwus[iNew]);
			iNew++;
		}
		else // if( KnownWwus[iKnown] < NewWwus[iNew] )
		{
			// A file was deleted. Can't process it now, it would change the array indices.                                
			WwusToRemove.Add(KnownWwus[iKnown]);
			iKnown++;
		}

    }

    //The remainder from the files found on disk are all new files.
    for (; iNew < NewWwus.Num(); iNew++)    
	{
		WwusToProcess.Add(NewWwus[iNew]);
	}

	TMap<FString, TSharedPtr<FWwiseTreeItem>>* WwuTreesForType = WwuSubTrees.Find(ItemType);

    //All the remainder is deleted.
    while (iKnown < KnownWwus.Num())
	{
		if (WwuTreesForType)
		{
			WwuTreesForType->Remove(KnownWwus[iKnown]);
		}
		LastPopTimeMap.Remove(KnownWwus[iKnown]);
		iKnown++;
	}

    //Delete those tagged.
    for (FString ToRemove : WwusToRemove)
	{
		if (WwuTreesForType)
		{
			WwuTreesForType->Remove(ToRemove);
		}
		LastPopTimeMap.Remove(ToRemove);
	}

	FScopedSlowTask SlowTask(WwusToProcess.Num(), LOCTEXT("AK_PopulatingPicker", "Populating Wwise Picker..."));
	SlowTask.MakeDialog();

	for(FString WwuToProcess : WwusToProcess)
	{
		FString Message = TEXT("Parsing WorkUnit: ") + FPaths::GetCleanFilename(WwuToProcess);
		SlowTask.EnterProgressFrame(1.0f, FText::FromString(Message));
		FDateTime LastModifiedTime = IFileManager::Get().GetTimeStamp(*WwuToProcess);
		CreateWwuTree(WwuToProcess, ItemType, true);
		FDateTime& Time = LastPopTimeMap.FindOrAdd(WwuToProcess);
		Time = LastModifiedTime;
	}

	return true;
}

TSharedPtr<FWwiseTreeItem> FWwiseWwuParser::CreateWwuTree(const FString& WwuPath, EWwiseTreeItemType::Type ItemType, bool ForceRefresh /* = false*/)
{
	TSharedPtr<FWwiseTreeItem> RootWwuItem;
	FString WwuName = FPaths::GetBaseFilename(WwuPath);
	FXmlFile Wwu(WwuPath);
	if(WwuSubTrees.Contains(ItemType) && WwuSubTrees[ItemType].Contains(WwuPath) )
	{
		if (!ForceRefresh)
		{
			return WwuSubTrees[ItemType][WwuPath];
		}

		RootWwuItem = WwuSubTrees[ItemType][WwuPath];
		RootWwuItem->Children.Empty();
	}
	else
	{
		EWwiseTreeItemType::Type WwuType = IsStandAloneWwu(Wwu, ItemType) ? EWwiseTreeItemType::StandaloneWorkUnit : EWwiseTreeItemType::NestedWorkUnit;

		FString RelativePath = WwuPath;
		RelativePath.RemoveFromStart(ProjectRootFolder);
		RelativePath.RemoveFromEnd(TEXT(".wwu"));
		RootWwuItem = MakeShareable(new FWwiseTreeItem(WwuName, RelativePath, nullptr, WwuType));
		WwuSubTrees.FindOrAdd(ItemType).Add(WwuPath, RootWwuItem);
	}

	FString ContainingFolder = FPaths::GetPath(WwuPath);

	ParseWwu(Wwu, RootWwuItem, ContainingFolder, ItemType);
	return RootWwuItem;
}

bool FWwiseWwuParser::IsStandAloneWwu(const FXmlFile& Wwu, EWwiseTreeItemType::Type ItemType)
{
	if( Wwu.IsValid() )
	{
		const FXmlNode* RootNode = Wwu.GetRootNode();
		if( RootNode )
		{
			const FXmlNode* EventsNode = RootNode->FindChildNode(EWwiseTreeItemType::DisplayNames[ItemType]);
			if( EventsNode )
			{
				const FXmlNode* WorkUnitNode = EventsNode->FindChildNode(TEXT("WorkUnit"));
				if( WorkUnitNode )
				{
					FString WorkUnitPersistMode = WorkUnitNode->GetAttribute(TEXT("PersistMode"));
					if( WorkUnitPersistMode == TEXT("Standalone") )
					{
						return true;
					}
				}
			}
		}
	}

	return false;
}

bool FWwiseWwuParser::ParseWwu(const FXmlFile& Wwu, TSharedPtr<FWwiseTreeItem>& TreeItem, const FString& FolderContainingWwu, EWwiseTreeItemType::Type ItemType)
{
	if( !Wwu.IsValid() )
	{
		return false;
	}

	const FXmlNode* RootNode = Wwu.GetRootNode();
	if( !RootNode )
	{
		return false;
	}

	const FXmlNode* ItemNode = RootNode->FindChildNode(EWwiseTreeItemType::DisplayNames[ItemType]);
	if( !ItemNode)
	{
		return false;
	}

	const FXmlNode* WorkUnitNode = ItemNode->FindChildNode(TEXT("WorkUnit"));
	if( !WorkUnitNode || (WorkUnitNode->GetAttribute(TEXT("Name")) != FPaths::GetBaseFilename(TreeItem->DisplayName)) )
	{
		return false;
	}

	const FXmlNode* CurrentNode = WorkUnitNode->FindChildNode(TEXT("ChildrenList"));
	if( !CurrentNode )
	{
		return false;
	}

	CurrentNode = CurrentNode->GetFirstChildNode();
	if( !CurrentNode )
	{
		return false;
	}

	return RecurseChildren(CurrentNode, TreeItem, FolderContainingWwu, ItemType);
}

bool FWwiseWwuParser::RecurseChildren(const FXmlNode* NodeToParse, TSharedPtr<FWwiseTreeItem> TreeItem, const FString& FolderContainingWwu, EWwiseTreeItemType::Type ItemType)
{
	const FXmlNode* CurrentNode = NodeToParse;
	while(CurrentNode)
	{
		FString CurrentTag = CurrentNode->GetTag();
		FString CurrentName = CurrentNode->GetAttribute(TEXT("Name"));
		FString CurrentPath = FPaths::Combine(*TreeItem->FolderPath, *CurrentName);
		if( CurrentTag == TEXT("Event") )
		{
			TreeItem->Children.Add(MakeShareable(new FWwiseTreeItem(CurrentName, CurrentPath, TreeItem, ItemType)));
		}
		else if (CurrentTag == TEXT("AcousticTexture"))
		{
			if (ItemType == EWwiseTreeItemType::Type::AcousticTexture)
			{
				TreeItem->Children.Add(MakeShareable(new FWwiseTreeItem(CurrentName, CurrentPath, TreeItem, ItemType)));
			}
		}
		else if (CurrentTag == TEXT("AuxBus"))
		{
			TSharedPtr<FWwiseTreeItem> NewItem = MakeShareable(new FWwiseTreeItem(CurrentName, CurrentPath, TreeItem, ItemType));
			TreeItem->Children.Add(NewItem);
			const FXmlNode* ChildrenNode = CurrentNode->FindChildNode(TEXT("ChildrenList"));
			if (ChildrenNode)
			{
				FString NewPath = FPaths::Combine(*CurrentPath, *CurrentName);
				const FXmlNode* CurrentAuxBusNode = ChildrenNode->GetFirstChildNode();
				if (CurrentAuxBusNode)
				{
					RecurseChildren(CurrentAuxBusNode, NewItem, FolderContainingWwu, ItemType);
				}
			}

		}
		else if (CurrentTag == TEXT("WorkUnit"))
		{
			FString CurrentWwuPhysicalPath = FPaths::Combine(*FolderContainingWwu, *CurrentName) + ".wwu";
			TSharedPtr<FWwiseTreeItem> NestedWorkUnit = CreateWwuTree(CurrentWwuPhysicalPath, ItemType);

			if (NestedWorkUnit.IsValid())
			{
				TreeItem->Children.Add(NestedWorkUnit);
			}
		}
		else if( CurrentTag == TEXT("Folder") || CurrentTag == TEXT("Bus"))
		{
			EWwiseTreeItemType::Type currentItemType = EWwiseTreeItemType::Folder;
			if (CurrentTag == TEXT("Bus"))
			{
				currentItemType = EWwiseTreeItemType::Bus;
			}
			TSharedPtr<FWwiseTreeItem> FolderItem  = MakeShareable(new FWwiseTreeItem(CurrentName, CurrentPath, TreeItem, currentItemType));
			TreeItem->Children.Add(FolderItem);
			const FXmlNode* ChildNode = CurrentNode->FindChildNode(TEXT("ChildrenList"));
			if( ChildNode )
			{
				RecurseChildren(ChildNode->GetFirstChildNode(), FolderItem, FolderContainingWwu, ItemType);
			}
		}

		CurrentNode = CurrentNode->GetNextNode();
	}

	TreeItem->SortChildren();

	return true;
}

#undef LOCTEXT_NAMESPACE
