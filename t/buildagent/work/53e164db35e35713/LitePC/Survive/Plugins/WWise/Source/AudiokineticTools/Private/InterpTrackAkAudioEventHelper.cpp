// Copyright (c) 2006-2012 Audiokinetic Inc. / All Rights Reserved

/*=============================================================================
	InterpTrackAkEventHelper.cpp: 
=============================================================================*/
#include "AudiokineticToolsPrivatePCH.h"
#include "MatineeModule.h"
#include "MatineeClasses.h"
#include "InterpTrackAkAudioEventHelper.h"
#include "AkAudioClasses.h"
#include "PropertyCustomizationHelpers.h"
#include "SMatineeAkEventKeyFrameAdder.h"
#include "EditorModeInterpolation.h"
#include "EditorModeManager.h"
#include "EditorModes.h"
#include "Engine/Selection.h"
#include "Editor.h"
#include "Framework/Application/SlateApplication.h"
#include "Framework/Application/MenuStack.h"
#include "IMatinee.h"

#define LOCTEXT_NAMESPACE "Audiokinetic"

static TWeakPtr< class IMenu > EntryMenu;

/*-----------------------------------------------------------------------------
	UInterpTrackAkAudioEventHelper
-----------------------------------------------------------------------------*/

UInterpTrackAkAudioEventHelper::UInterpTrackAkAudioEventHelper(const class FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// Property initialization
}

bool UInterpTrackAkAudioEventHelper::PreCreateKeyframe(UInterpTrack * Track, float KeyTime) const
{
	bool bResult = false;

	FEdModeInterpEdit* Mode = (FEdModeInterpEdit*)GLevelEditorModeTools().GetActiveMode(FBuiltinEditorModes::EM_InterpEdit);
	check(Mode != NULL);

	IMatineeBase* InterpEd = Mode->InterpEd;
	check(InterpEd != NULL);

	UAkAudioEvent* SelectedEvent = GEditor->GetSelectedObjects()->GetTop<UAkAudioEvent>();

	TSharedRef<SWidget> PropWidget = SNew(SMatineeAkEventKeyFrameAdder)
		.SelectedAkEvent(SelectedEvent)
		.OnAkEventSet(FOnAkEventSet::CreateUObject(this,&UInterpTrackAkAudioEventHelper::OnAkEventSet, InterpEd, Track));

	TSharedPtr< SWindow > Parent = FSlateApplication::Get().GetActiveTopLevelWindow();
	if (Parent.IsValid())
	{
		EntryMenu = FSlateApplication::Get().PushMenu(
			Parent.ToSharedRef(),
			FWidgetPath(),
			PropWidget,
			FSlateApplication::Get().GetCursorPos(),
			FPopupTransitionEffect(FPopupTransitionEffect::None)
			);
	}

	return bResult;
}

void UInterpTrackAkAudioEventHelper::OnAkEventSet(UAkAudioEvent * in_SelectedAkEvent, const FString& in_AkEventName, IMatineeBase *InterpEd, UInterpTrack * ActiveTrack)
{
	if (EntryMenu.IsValid())
	{
		EntryMenu.Pin()->Dismiss();
	}
	SelectedAkEvent = in_SelectedAkEvent;
	SelectedAkEventName = in_AkEventName;
	InterpEd->FinishAddKey(ActiveTrack, true);
}

void  UInterpTrackAkAudioEventHelper::PostCreateKeyframe( UInterpTrack *Track, int32 KeyIndex ) const
{
	UInterpTrackAkAudioEvent* AkEventTrack = CastChecked<UInterpTrackAkAudioEvent>(Track);

	// Assign the chosen AkEventCue to the new key.
	FAkAudioEventTrackKey& NewAkEventKey = AkEventTrack->Events[KeyIndex];
	NewAkEventKey.AkAudioEvent = SelectedAkEvent;
	NewAkEventKey.EventName = SelectedAkEventName;
}

#undef LOCTEXT_NAMESPACE
