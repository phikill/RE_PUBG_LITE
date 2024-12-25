// Copyright (c) 2006-2016 Audiokinetic Inc. / All Rights Reserved

#include "AkAudioDevice.h"
#include "AkAudioClasses.h"

#include "IMovieScenePlayer.h"
#include "MovieSceneCommonHelpers.h"

#include "MovieSceneAkAudioRTPCSection.h"
#include "MovieSceneAkAudioRTPCTrack.h"

#include "MovieSceneAkAudioRTPCTemplate.h"

FMovieSceneEvalTemplatePtr UMovieSceneAkAudioRTPCTrack::CreateTemplateForSection(const UMovieSceneSection& InSection) const
{
	return InSection.GenerateTemplate();
}

UMovieSceneSection* UMovieSceneAkAudioRTPCTrack::CreateNewSection()
{
	return NewObject<UMovieSceneSection>(this, UMovieSceneAkAudioRTPCSection::StaticClass(), NAME_None, RF_Transactional);
}

#if WITH_EDITORONLY_DATA
FText UMovieSceneAkAudioRTPCTrack::GetDisplayName() const
{
	return NSLOCTEXT("MovieSceneAkAudioRTPCTrack", "TrackName", "AkAudioRTPC");
}
#endif

FName UMovieSceneAkAudioRTPCTrack::GetTrackName() const
{
	const auto Section = CastChecked<UMovieSceneAkAudioRTPCSection>(MovieSceneHelpers::FindNearestSectionAtTime(Sections, 0));
	return (Section != nullptr) ? FName(*Section->GetRTPCName()) : FName(NAME_None);
}
