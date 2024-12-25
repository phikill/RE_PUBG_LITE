// Copyright (c) 2006-2012 Audiokinetic Inc. / All Rights Reserved

/*=============================================================================
	AssetTypeActions_AkAudioBank.h:
=============================================================================*/
#pragma once

#include "AssetTypeActions_Base.h"
#include "AkAudioBank.h"

class FAssetTypeActions_AkAudioBank : public FAssetTypeActions_Base
{
public:
	FAssetTypeActions_AkAudioBank(EAssetTypeCategories::Type InAssetCategory) { MyAssetCategory = InAssetCategory; }

	// IAssetTypeActions Implementation
	virtual FText GetName() const override { return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_AkAudioBank", "Audiokinetic Bank"); }
	virtual FColor GetTypeColor() const override { return FColor(0, 192, 128); }
	virtual UClass* GetSupportedClass() const override { return UAkAudioBank::StaticClass(); }
	virtual bool HasActions ( const TArray<UObject*>& InObjects ) const override { return true; }
	virtual void GetActions( const TArray<UObject*>& InObjects, FMenuBuilder& MenuBuilder ) override;
	virtual void OpenAssetEditor( const TArray<UObject*>& InObjects, TSharedPtr<class IToolkitHost> EditWithinLevelEditor = TSharedPtr<IToolkitHost>() );
	virtual void AssetsActivated( const TArray<UObject*>& InObjects, EAssetTypeActivationMethod::Type ActivationType );
	virtual bool CanFilter() override { return true; }
	virtual uint32 GetCategories() override { return MyAssetCategory; }
	virtual bool ShouldForceWorldCentric() { return true; }
	virtual void PerformAssetDiff(UObject* OldAsset, UObject* NewAsset, const struct FRevisionInfo& OldRevision, const struct FRevisionInfo& NewRevision) const {}
	virtual class UThumbnailInfo* GetThumbnailInfo(UObject* Asset) const override { return NULL; };

private:
	/** Handler for when GenerateDefinitionFile is selected */
	void GenerateDefinitionFile(TArray<TWeakObjectPtr<UAkAudioBank>> Objects);
	
	/** Handler for when Load Bank is selected */
	void LoadBank(TArray<TWeakObjectPtr<UAkAudioBank>> Objects);
	
	/** Handler for when Unload Bank is selected */
	void UnloadBank(TArray<TWeakObjectPtr<UAkAudioBank>> Objects);
	
	/** Handler for when Clear Bank is selected */
	void ClearBank(TArray<TWeakObjectPtr<UAkAudioBank>> Objects);
	
	/** Handler for when Load Init Bank is selected */
	void LoadInitBank(TArray<TWeakObjectPtr<UAkAudioBank>> Objects);
	
	/** Handler for when Refresh All Banks is selected */
	void RefreshAllBanks(TArray<TWeakObjectPtr<UAkAudioBank>> Objects);

	EAssetTypeCategories::Type MyAssetCategory;
};