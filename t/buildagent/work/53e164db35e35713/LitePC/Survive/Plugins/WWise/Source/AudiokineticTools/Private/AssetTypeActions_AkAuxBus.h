// Copyright (c) 2006-2012 Audiokinetic Inc. / All Rights Reserved

/*=============================================================================
	AssetTypeActions_AkAuxBus.h:
=============================================================================*/
#pragma once

#include "AssetTypeActions_Base.h"
#include "AkAuxBus.h"

class FAssetTypeActions_AkAuxBus : public FAssetTypeActions_Base
{
public:
	FAssetTypeActions_AkAuxBus(EAssetTypeCategories::Type InAssetCategory) { MyAssetCategory = InAssetCategory; }

	// IAssetTypeActions Implementation
	virtual FText GetName() const override { return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_AkAuxBus", "Audiokinetic Auxiliary Bus"); }
	virtual FColor GetTypeColor() const override { return FColor(192, 128, 0); }
	virtual UClass* GetSupportedClass() const override { return UAkAuxBus::StaticClass(); }
	virtual bool HasActions ( const TArray<UObject*>& InObjects ) const override { return false; }
	virtual void OpenAssetEditor( const TArray<UObject*>& InObjects, TSharedPtr<class IToolkitHost> EditWithinLevelEditor = TSharedPtr<IToolkitHost>() );
	virtual bool CanFilter() override { return true; }
	virtual uint32 GetCategories() override { return MyAssetCategory; }
	virtual bool ShouldForceWorldCentric() { return true; }
	virtual void PerformAssetDiff(UObject* OldAsset, UObject* NewAsset, const struct FRevisionInfo& OldRevision, const struct FRevisionInfo& NewRevision) const {}
	virtual class UThumbnailInfo* GetThumbnailInfo(UObject* Asset) const override { return NULL; };

private:
	EAssetTypeCategories::Type MyAssetCategory;
};