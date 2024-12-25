// Copyright (c) 2006-2016 Audiokinetic Inc. / All Rights Reserved

#include "AkAudioDevice.h"
#include "AkAudioClasses.h"

#include "IMovieScenePlayer.h"
#include "MovieScene.h"
#include "MovieSceneAkAudioEventSection.h"
#include "MovieSceneAkAudioEventTrack.h"

#include "MovieSceneAkAudioEventTemplate.h"

FMovieSceneEvalTemplatePtr UMovieSceneAkAudioEventTrack::CreateTemplateForSection(const UMovieSceneSection& InSection) const
{
	return InSection.GenerateTemplate();
}

UMovieSceneSection* UMovieSceneAkAudioEventTrack::CreateNewSection()
{
	return NewObject<UMovieSceneSection>(this, UMovieSceneAkAudioEventSection::StaticClass(), NAME_None, RF_Transactional);
}

bool UMovieSceneAkAudioEventTrack::AddNewEvent(float Time, UAkAudioEvent* Event, const FString& EventName)
{
	if (Event == nullptr && EventName.IsEmpty())
		return false;

	auto NewSection = CastChecked<UMovieSceneAkAudioEventSection>(CreateNewSection());
	ensure(NewSection);

	NewSection->SetEvent(Event, EventName);

	const auto Duration = NewSection->GetAudioDuration();
	NewSection->InitialPlacement(GetAllSections(), Time, Time + Duration.GetUpperBoundValue(), SupportsMultipleRows());
	AddSection(*NewSection);

	return true;
}

#if WITH_EDITORONLY_DATA
FText UMovieSceneAkAudioEventTrack::GetDisplayName() const
{
	return NSLOCTEXT("MovieSceneAkAudioEventTrack", "TrackName", "AkAudioEvents");
}
#endif

FName UMovieSceneAkAudioEventTrack::GetTrackName() const
{
	static FName TrackName("AkAudioEvents");
	return TrackName;
}
