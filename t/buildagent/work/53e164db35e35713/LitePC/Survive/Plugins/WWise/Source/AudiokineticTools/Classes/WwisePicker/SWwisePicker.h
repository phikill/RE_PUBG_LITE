// Copyright (c) 2006-2012 Audiokinetic Inc. / All Rights Reserved

/*------------------------------------------------------------------------------------
	SWwisePicker.h
------------------------------------------------------------------------------------*/
#pragma once

/*------------------------------------------------------------------------------------
	SWwisePicker
------------------------------------------------------------------------------------*/
#include "WwiseTreeItem.h"
#include "TextFilter.h"
#include "Views/ITypedTableView.h"
#include "Views/STreeView.h"
#include "WwiseWwuParser.h"

class SWwisePicker : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS( SWwisePicker )
		: _FocusSearchBoxWhenOpened(false)
		, _ShowTreeTitle(true)
		, _ShowSearchBar(true)
		, _ShowSeparator(true)
		, _AllowContextMenu(true)
		, _SelectionMode( ESelectionMode::Multi )
		{}

		/** Content displayed to the left of the search bar */
		SLATE_NAMED_SLOT( FArguments, SearchContent )

		/** If true, the search box will be focus the frame after construction */
		SLATE_ARGUMENT( bool, FocusSearchBoxWhenOpened )

		/** If true, The tree title will be displayed */
		SLATE_ARGUMENT( bool, ShowTreeTitle )

		/** If true, The tree search bar will be displayed */
		SLATE_ARGUMENT( bool, ShowSearchBar )

		/** If true, The tree search bar separator be displayed */
		SLATE_ARGUMENT( bool, ShowSeparator )

		/** If false, the context menu will be suppressed */
		SLATE_ARGUMENT( bool, AllowContextMenu )

		/** The selection mode for the tree view */
		SLATE_ARGUMENT( ESelectionMode::Type, SelectionMode )
	SLATE_END_ARGS( )

	AUDIOKINETICTOOLS_API void Construct(const FArguments& InArgs);
	SWwisePicker(void);
	~SWwisePicker();

	AUDIOKINETICTOOLS_API static const FName WwisePickerTabName;

	AUDIOKINETICTOOLS_API void ForceRefresh();
    
    virtual void Tick( const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime ) override;


private:
	/** The tree view widget */
	TSharedPtr< STreeView< TSharedPtr<FWwiseTreeItem>> > TreeViewPtr;

	/** Filter for the search box */
	TSharedPtr<StringFilter> SearchBoxFilter;

	/** Root items (only events for now). */
	TArray< TSharedPtr<FWwiseTreeItem> > RootItems;

	/** Bool to prevent the selection changed callback from running */
	bool AllowTreeViewDelegates;

	/** Remember the selected items. Useful when filtering to preserve selection status. */
	TSet< FString > LastSelectedPaths;

	/** Remember the expanded items. Useful when filtering to preserve expansion status. */
	TSet< FString > LastExpandedPaths;

	/** Ran when the Populate button is clicked. Parses the Wwise project (using the WwiseWwuParser) and populates the window. */
	FReply OnPopulateClicked();

	/** Populates the picker window only (does not parse the Wwise project) */
	void ConstructTree();

	/** Change the watched folder for the wwu parser */
	void UpdateDirectoryWatcher();

	/** Generate a row in the tree view */
	TSharedRef<ITableRow> GenerateRow( TSharedPtr<FWwiseTreeItem> TreeItem, const TSharedRef<STableViewBase>& OwnerTable );

	/** Get the children of a specific tree element */
	void GetChildrenForTree( TSharedPtr< FWwiseTreeItem > TreeItem, TArray< TSharedPtr<FWwiseTreeItem> >& OutChildren );

	/** Handle Drag & Drop */
	FReply OnDragDetected(const FGeometry& Geometry, const FPointerEvent& MouseEvent);

	void ExpandFirstLevel();
	void ExpandParents(TSharedPtr<FWwiseTreeItem> Item);

	FText GetProjectName() const;

	/** Used by the search filter */
	void PopulateSearchStrings( const FString& FolderName, OUT TArray< FString >& OutSearchStrings ) const;
	void OnSearchBoxChanged( const FText& InSearchText );
	FText GetHighlightText() const;
	void FilterUpdated();
	void SetItemVisibility(TSharedPtr<FWwiseTreeItem> Item, bool IsVisible);
	void ApplyFilter(TSharedPtr<FWwiseTreeItem> ItemToFilter);
	void RestoreTreeExpansion(const TArray< TSharedPtr<FWwiseTreeItem> >& Items);

	/** Handler for tree view selection changes */
	void TreeSelectionChanged( TSharedPtr< FWwiseTreeItem > TreeItem, ESelectInfo::Type SelectInfo );

	/** Handler for tree view expansion changes */
	void TreeExpansionChanged( TSharedPtr< FWwiseTreeItem > TreeItem, bool bIsExpanded );

	void OnProjectDirectoryChanged(const TArray<struct FFileChangeData>& ChangedFiles);
	FDelegateHandle ProjectDirectoryModifiedDelegateHandle;
	FString ProjectFolder;
	FString ProjectName;
};