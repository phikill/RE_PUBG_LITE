// Copyright (c) 2006-2016 Audiokinetic Inc. / All Rights Reserved

#include "AkAudioDevice.h"
#include "AkAudioClasses.h"

#include "KeyParams.h"
#include "MovieScene.h"
#include "MovieSceneCommonHelpers.h"
#include "MovieSceneSection.h"
#include "MovieSceneAkAudioEventSection.h"
#include "MovieSceneAkAudioEventTemplate.h"


namespace AkAudioEventSectionHelper
{
	// durations are in seconds
	const float DefaultDurationForEventSpecifiedByName = 0.5f;
	const float MinimumDuration = 0.05f;
	const float MaximumDuration = 720000.f;

	FFloatRange GetDuration(UAkAudioEvent* Event)
	{
		if (Event == nullptr)
		{
			// TODO: attempt to determine the length of an AkEvent by its name.
			return FFloatRange(DefaultDurationForEventSpecifiedByName);
		}

		if (Event->IsInfinite)
		{
			return FFloatRange(MaximumDuration);
		}

		return FFloatRange(Event->MinimumDuration, TRangeBound<float>::Inclusive(FMath::Clamp(Event->MaximumDuration, MinimumDuration, MaximumDuration)));
	}
}


/** returns the minimum and maximum durations for the specified Event or EventName */
FFloatRange UMovieSceneAkAudioEventSection::GetAudioDuration()
{
	return AkAudioEventSectionHelper::GetDuration(Event);
}

FMovieSceneEvalTemplatePtr UMovieSceneAkAudioEventSection::GenerateTemplate() const
{
	return FMovieSceneAkAudioEventTemplate(this);
}
