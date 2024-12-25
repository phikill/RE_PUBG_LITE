// Copyright (c) 2006-2012 Audiokinetic Inc. / All Rights Reserved

/*=============================================================================
	AssetTypeActions_AkAudioEvent.h:
=============================================================================*/
#pragma once

#include "AssetTypeActions_Base.h"
#include "AkAudioEvent.h"

class FAssetTypeActions_AkAudioEvent : public FAssetTypeActions_Base
{
public:
	FAssetTypeActions_AkAudioEvent(EAssetTypeCategories::Type InAssetCategory) { MyAssetCategory = InAssetCategory; }

	// IAssetTypeActions Implementation
	virtual FText GetName() const override { return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_AkAudioEvent", "Audiokinetic Event"); }
	virtual FColor GetTypeColor() const override { return FColor(0, 128, 192); }
	virtual UClass* GetSupportedClass() const override { return UAkAudioEvent::StaticClass(); }
	virtual bool HasActions ( const TArray<UObject*>& InObjects ) const override { return true; }
	virtual void GetActions( const TArray<UObject*>& InObjects, FMenuBuilder& MenuBuilder ) override;
	virtual void OpenAssetEditor( const TArray<UObject*>& InObjects, TSharedPtr<class IToolkitHost> EditWithinLevelEditor = TSharedPtr<IToolkitHost>() );
	virtual void AssetsActivated( const TArray<UObject*>& InObjects, EAssetTypeActivationMethod::Type ActivationType );
	virtual bool CanFilter() override { return true; }
	virtual uint32 GetCategories() override { return MyAssetCategory; }
	virtual bool ShouldForceWorldCentric() { return true; }
	virtual void PerformAssetDiff(UObject* OldAsset, UObject* NewAsset, const struct FRevisionInfo& OldRevision, const struct FRevisionInfo& NewRevision) const {}
	virtual class UThumbnailInfo* GetThumbnailInfo(UObject* Asset) const override { return NULL; };

	// Critical section for accessing the m_PlayingAkEvents map
	static FCriticalSection		m_PlayingAkEventsCriticalSection;

private:
	/** Handler for when Play event is selected */
	void PlayEvent(TArray<TWeakObjectPtr<UAkAudioEvent>> Objects);
	
	/** Handler for when Stop event is selected */
	void StopEvent(TArray<TWeakObjectPtr<UAkAudioEvent>> Objects);

	/** Map containing the Event names and associated Playing IDs related to events currently being previewed */
	TMap<FString, AkPlayingID>	m_PlayingAkEvents;

	EAssetTypeCategories::Type MyAssetCategory;

};