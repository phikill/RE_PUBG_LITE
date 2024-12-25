// Copyright (c) 2006-2016 Audiokinetic Inc. / All Rights Reserved

#pragma once

#include "MovieSceneSection.h"
#include "AkInclude.h"
#include "AkAudioEvent.h"
#include "MovieSceneAkAudioEventSection.generated.h"


class FAkAudioDevice;


/**
* A single floating point section
*/
UCLASS(MinimalAPI)
class UMovieSceneAkAudioEventSection : public UMovieSceneSection
{
	GENERATED_BODY()

public:
	FString GetEventName() const { return (Event == nullptr) ? EventName : Event->GetName(); }
	bool GetStopAtSectionEnd() const { return StopAtSectionEnd; }

	void SetEvent(UAkAudioEvent* AudioEvent, const FString& Name) { Event = AudioEvent; EventName = Name; }
	bool IsValid() const { return Event != nullptr || !EventName.IsEmpty(); }

	/** returns the minimum and maximum durations for the specified Event or EventName */
	AKAUDIO_API FFloatRange GetAudioDuration();

	AKAUDIO_API virtual FMovieSceneEvalTemplatePtr GenerateTemplate() const override;

private:
	/** The AkAudioEvent represented by this section */
	UPROPERTY(EditAnywhere, Category = "AkAudioEvent")
	UAkAudioEvent* Event = nullptr;

	/** The name of the AkAudioEvent represented by this section */
	UPROPERTY(EditAnywhere, AdvancedDisplay, Category = "AkAudioEvent")
	bool StopAtSectionEnd = true;

	/** The name of the AkAudioEvent represented by this section */
	UPROPERTY(EditAnywhere, AdvancedDisplay, Category = "AkAudioEvent")
	FString EventName;
};
