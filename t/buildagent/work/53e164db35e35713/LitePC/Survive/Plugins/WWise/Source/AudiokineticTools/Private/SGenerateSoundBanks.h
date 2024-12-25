// Copyright (c) 2006-2012 Audiokinetic Inc. / All Rights Reserved

/*------------------------------------------------------------------------------------
	SGenerateSoundBanks.h
------------------------------------------------------------------------------------*/
#pragma once

/*------------------------------------------------------------------------------------
	SGenerateSoundBanks
------------------------------------------------------------------------------------*/
#include "AkAudioBank.h"
#include "Widgets/SCompoundWidget.h"
#include "Widgets/Views/SListView.h"
#include "Widgets/Views/STableRow.h"

class SGenerateSoundBanks : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS( SGenerateSoundBanks )
	{}
	SLATE_END_ARGS( )

	SGenerateSoundBanks(void);

	AUDIOKINETICTOOLS_API void Construct(const FArguments& InArgs, TArray<TWeakObjectPtr<UAkAudioBank>>* in_pSoundBanks);
	virtual FReply OnKeyDown( const FGeometry& MyGeometry, const FKeyEvent& InKeyboardEvent ) override;

	/** override the base method to allow for keyboard focus */
	virtual bool SupportsKeyboardFocus() const
	{
		return true;
	}

	bool ShouldDisplayWindow() { return PlatformNames.Num() != 0; }

private:
	void PopulateList();

private:
	FReply OnGenerateButtonClicked();
	TSharedRef<ITableRow> MakeBankListItemWidget(TSharedPtr<FString> Bank, const TSharedRef<STableViewBase>& OwnerTable);
	TSharedRef<ITableRow> MakePlatformListItemWidget(TSharedPtr<FString> Platform, const TSharedRef<STableViewBase>& OwnerTable);
	void GetWwisePlatforms();
	void AddPlatformIfSupported(const TSet<FString>& SupportedPlatforms, const FString& UnrealName, const TCHAR* WwiseName);
	bool FetchAttenuationInfo(const TMap<FString, TSet<UAkAudioEvent*> >& BankToEventSet);

private:
	TSharedPtr< SListView < TSharedPtr<FString> > > BankList;
	TSharedPtr< SListView < TSharedPtr<FString> > > PlatformList;

	TArray< TSharedPtr<FString> > Banks;
	TArray< TSharedPtr<FString> > PlatformNames;
};