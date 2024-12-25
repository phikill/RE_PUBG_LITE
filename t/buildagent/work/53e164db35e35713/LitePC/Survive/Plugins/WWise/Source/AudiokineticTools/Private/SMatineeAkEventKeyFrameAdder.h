// Copyright (c) 2006-2012 Audiokinetic Inc. / All Rights Reserved

/*------------------------------------------------------------------------------------
	SMatineeAkEventKeyFrameAdder.h
------------------------------------------------------------------------------------*/
#pragma once

/*------------------------------------------------------------------------------------
	SMatineeAkEventKeyFrameAdder
------------------------------------------------------------------------------------*/
#include "AkAudioEvent.h"
#include "Delegate.h"
#include "Widgets/Input/SButton.h"

/** Delegate used when the user clicks OK */
DECLARE_DELEGATE_TwoParams(FOnAkEventSet, UAkAudioEvent *, const FString&);

class SMatineeAkEventKeyFrameAdder : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS( SMatineeAkEventKeyFrameAdder )
		: _SelectedAkEvent( NULL )
	{}
		/** Currently selected AkEvent */
		SLATE_ARGUMENT( UAkAudioEvent*, SelectedAkEvent )
		/** Delegate used when the user clicks OK */
		SLATE_EVENT(FOnAkEventSet, OnAkEventSet)
	SLATE_END_ARGS( )

	SMatineeAkEventKeyFrameAdder(void);

	void Construct(const FArguments& InArgs);


private:
	UAkAudioEvent* SelectedAkEvent;
	FString EventName;
	FOnAkEventSet OnAkEventSet;

	void OnEventChanged(const FAssetData& InAssetData);
	FReply OnOKClicked();
	void OnEventNameCommited(const FText& InText, ETextCommit::Type InCommitType);
	FString GetSelectedAkEventPath() const;

	EVisibility IsAdvancedVisible() const;
	FReply OnAdvancedClicked();
	bool bAdvancedVisible;
	TSharedPtr<SButton> AdvancedButton;
	const FSlateBrush* GetAdvancedButtonImage() const;
	float GetAdvancedFeaturesHeight() const;


};