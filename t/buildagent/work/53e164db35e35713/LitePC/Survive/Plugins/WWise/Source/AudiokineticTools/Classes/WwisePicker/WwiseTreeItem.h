// Copyright (c) 2006-2012 Audiokinetic Inc. / All Rights Reserved

/*------------------------------------------------------------------------------------
	WwiseTreeItem.h
------------------------------------------------------------------------------------*/
#pragma once
#include "Engine/GameEngine.h"
/*------------------------------------------------------------------------------------
	WwiseTreeItem
------------------------------------------------------------------------------------*/

namespace EWwiseTreeItemType
{
	enum Type
	{
		Event,
		AuxBus,
		AcousticTexture,
		NUM_DRAGGABLE_WWISE_ITEMS,
		Bus,
		Project,
		StandaloneWorkUnit,
		NestedWorkUnit,
		PhysicalFolder,
		Folder,
	};

	const FString ItemNames[NUM_DRAGGABLE_WWISE_ITEMS] = { TEXT("Event"), TEXT("AuxBus"), TEXT("AcousticTexture") };
	const FString DisplayNames[NUM_DRAGGABLE_WWISE_ITEMS] = { TEXT("Events"), TEXT("Busses"), TEXT("VirtualAcoustics") };
	const FString FolderNames[NUM_DRAGGABLE_WWISE_ITEMS] = { TEXT("Events"), TEXT("Master-Mixer Hierarchy"), TEXT("Virtual Acoustics") };
	const FString PickerLabel[NUM_DRAGGABLE_WWISE_ITEMS] = { TEXT("Events"), TEXT("Auxiliary Busses"), TEXT("Textures") };

	inline Type FromString(const FString& ItemName)
	{
		if (ItemName == "Event")
		{
			return Type::Event;
		}
		else if (ItemName == "AuxBus")
		{
			return Type::AuxBus;
		}
		else if (ItemName == "Bus")
		{
			return Type::Bus;
		}
		else if (ItemName == "Project")
		{
			return Type::Project;
		}
		else if (ItemName == "WorkUnit")
		{
			return Type::StandaloneWorkUnit;
		}
		else if (ItemName == "PhysicalFolder")
		{
			return Type::PhysicalFolder;
		}
		else if (ItemName == "Folder")
		{
			return Type::Folder;
		}
		else
		{
			return Type::NUM_DRAGGABLE_WWISE_ITEMS; // return something invalid
		}
	}
};

struct FWwiseTreeItem : public TSharedFromThis<FWwiseTreeItem>
{
	/** Name to display */
	FString DisplayName;
	/** The path of the tree item including the name */
	FString FolderPath;
	/** Type of the item */
	EWwiseTreeItemType::Type ItemType;

	/** The children of this tree item */
	TArray< TSharedPtr<FWwiseTreeItem> > Children;

	/** The parent folder for this item */
	TWeakPtr<FWwiseTreeItem> Parent;

	/** The row in the tree view associated to this item */
	class ITableRow* TreeRow;

	/** Should this item be visible? */
	bool IsVisible;

	/** Constructor */
	FWwiseTreeItem(FString InDisplayName, FString InFolderPath, TSharedPtr<FWwiseTreeItem> InParent, EWwiseTreeItemType::Type InItemType)
		: DisplayName(MoveTemp(InDisplayName))
		, FolderPath(MoveTemp(InFolderPath))
		, ItemType(MoveTemp(InItemType))
		, Parent(MoveTemp(InParent))
		, IsVisible(true)
	{}

	/** Returns true if this item is a child of the specified item */
	bool IsChildOf(const FWwiseTreeItem& InParent)
	{
		auto CurrentParent = Parent.Pin();
		while (CurrentParent.IsValid())
		{
			if (CurrentParent.Get() == &InParent)
			{
				return true;
			}

			CurrentParent = CurrentParent->Parent.Pin();
		}

		return false;
	}

	/** Returns the child item by name or NULL if the child does not exist */
	TSharedPtr<FWwiseTreeItem> GetChild (const FString& InChildName)
	{
		for ( int32 ChildIdx = 0; ChildIdx < Children.Num(); ++ChildIdx )
		{
			if ( Children[ChildIdx]->DisplayName == InChildName )
			{
				return Children[ChildIdx];
			}
		}

		return TSharedPtr<FWwiseTreeItem>();
	}

	/** Finds the child who's path matches the one specified */
	TSharedPtr<FWwiseTreeItem> FindItemRecursive (const FString& InFullPath)
	{
		if ( InFullPath == FolderPath )
		{
			return SharedThis(this);
		}

		for ( int32 ChildIdx = 0; ChildIdx < Children.Num(); ++ChildIdx )
		{
			const TSharedPtr<FWwiseTreeItem>& Item = Children[ChildIdx]->FindItemRecursive(InFullPath);
			if ( Item.IsValid() )
			{
				return Item;
			}
		}

		return TSharedPtr<FWwiseTreeItem>(NULL);
	}

	struct FCompareWwiseTreeItem
	{
		FORCEINLINE bool operator()( TSharedPtr<FWwiseTreeItem> A, TSharedPtr<FWwiseTreeItem> B ) const
		{
			// Items are sorted like so:
			// 1- Physical folders, sorted alphabetically
			// 1- WorkUnits, sorted alphabetically
			// 2- Virtual folders, sorted alphabetically
			// 3- Normal items, sorted alphabetically
			if( A->ItemType == B->ItemType )
			{
				return A->DisplayName < B->DisplayName;
			}
			else if( A->ItemType == EWwiseTreeItemType::PhysicalFolder )
			{
				return true;
			}
			else if( B->ItemType == EWwiseTreeItemType::PhysicalFolder )
			{
				return false;
			}
			else if( A->ItemType == EWwiseTreeItemType::StandaloneWorkUnit || A->ItemType == EWwiseTreeItemType::NestedWorkUnit )
			{
				return true;
			}
			else if( B->ItemType == EWwiseTreeItemType::StandaloneWorkUnit || B->ItemType == EWwiseTreeItemType::NestedWorkUnit )
			{
				return false;
			}
			else if( A->ItemType == EWwiseTreeItemType::Folder )
			{
				return true;
			}
			else if( B->ItemType == EWwiseTreeItemType::Folder )
			{
				return false;
			}
			else
			{
				return true;
			}
		}
	};

	/** Sort the children by name */
	void SortChildren ()
	{
		Children.Sort( FCompareWwiseTreeItem() );
	}
};