// Copyright (c) 2006-2016 Audiokinetic Inc. / All Rights Reserved

#include "AudiokineticToolsPrivatePCH.h"

#include "AkAudioDevice.h"
#include "AkAudioClasses.h"

#include "AkMatineeImportTools.h"
#include "MatineeImportTools.h"

#include "MovieSceneCommonHelpers.h"
#include "ScopedTransaction.h"


#define LOCTEXT_NAMESPACE "AkAudio"


/** Copies keys from a matinee AkAudioRTPC track to a sequencer AkAudioRTPC track. */
ECopyInterpAkAudioResult FAkMatineeImportTools::CopyInterpAkAudioRTPCTrack(const UInterpTrackAkAudioRTPC* MatineeAkAudioRTPCTrack, UMovieSceneAkAudioRTPCTrack* AkAudioRTPCTrack)
{
	ECopyInterpAkAudioResult Result = ECopyInterpAkAudioResult::NoChange;
	const FScopedTransaction Transaction(LOCTEXT("PasteMatineeAkAudioRTPCTrack", "Paste Matinee AkAudioRtpc Track"));

	AkAudioRTPCTrack->Modify();

	// Get the name of the RTPC used on the Matinee track
	const FString& RTPCName = MatineeAkAudioRTPCTrack->Param;

	float KeyTime = MatineeAkAudioRTPCTrack->GetKeyframeTime(0);
	UMovieSceneSection* Section = MovieSceneHelpers::FindSectionAtTime(AkAudioRTPCTrack->GetAllSections(), KeyTime);

	if (Section == nullptr)
	{
		Section = AkAudioRTPCTrack->CreateNewSection();
		AkAudioRTPCTrack->AddSection(*Section);
		Section->SetIsInfinite(true);
		Result = ECopyInterpAkAudioResult::SectionAdded;
	}

	// if this cast fails, UMovieSceneAkAudioRTPCTrack must not be creating UMovieSceneAkAudioRTPCSection's - BIG FAIL
	UMovieSceneAkAudioRTPCSection* RtpcSection = Cast<UMovieSceneAkAudioRTPCSection>(Section);
	RtpcSection->SetRTPCName(RTPCName);

	if (Section->TryModify())
	{
		float SectionMin = Section->GetStartTime();
		float SectionMax = Section->GetEndTime();

		FRichCurve& FloatCurve = RtpcSection->GetFloatCurve();
		auto& Points = MatineeAkAudioRTPCTrack->FloatTrack.Points;

		if (ECopyInterpAkAudioResult::NoChange == Result && Points.Num() > 0)
			Result = ECopyInterpAkAudioResult::KeyModification;

		for (const auto& Point : Points)
		{
			auto KeyHandle = FloatCurve.FindKey(Point.InVal);

			if (!FloatCurve.IsKeyHandleValid(KeyHandle))
			{
				KeyHandle = FloatCurve.AddKey(Point.InVal, Point.OutVal, false);
			}

			auto& Key = FloatCurve.GetKey(KeyHandle);
			Key.ArriveTangent = Point.ArriveTangent;
			Key.LeaveTangent = Point.LeaveTangent;
			Key.InterpMode = FMatineeImportTools::MatineeInterpolationToRichCurveInterpolation(Point.InterpMode);
			Key.TangentMode = FMatineeImportTools::MatineeInterpolationToRichCurveTangent(Point.InterpMode);

			SectionMin = FMath::Min(SectionMin, Point.InVal);
			SectionMax = FMath::Max(SectionMax, Point.InVal);
		}

		FloatCurve.RemoveRedundantKeys(KINDA_SMALL_NUMBER);
		FloatCurve.AutoSetTangents();

		Section->SetStartTime(SectionMin);
		Section->SetEndTime(SectionMax);
	}

	return Result;
}


/** Copies keys from a matinee AkAudioEvent track to a sequencer AkAudioEvent track. */
ECopyInterpAkAudioResult FAkMatineeImportTools::CopyInterpAkAudioEventTrack(const UInterpTrackAkAudioEvent* MatineeAkAudioEventTrack, UMovieSceneAkAudioEventTrack* AkAudioEventTrack)
{
	ECopyInterpAkAudioResult Result = ECopyInterpAkAudioResult::NoChange;
	const FScopedTransaction Transaction(LOCTEXT("PasteMatineeAkAudioEventTrack", "Paste Matinee AkAudioEvent Track"));

	AkAudioEventTrack->Modify();

	auto& Events = MatineeAkAudioEventTrack->Events;
	for (const auto& Event : Events)
	{
		if (AkAudioEventTrack->AddNewEvent(Event.Time, Event.AkAudioEvent, Event.EventName))
		{
			Result = ECopyInterpAkAudioResult::SectionAdded;
		}
	}

	return Result;
}

#undef LOCTEXT_NAMESPACE

